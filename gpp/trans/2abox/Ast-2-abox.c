#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constant_terms ();
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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_FILE_1;
Symbol sym_TempFiles_0;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Undefined_0;
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
void init_constructors (void)
{
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_r_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_w_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_b_29;
ATerm term_w_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_z_27;
ATerm term_p_27;
ATerm term_n_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_q_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_c_26;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_m_25;
ATerm term_k_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_c_24;
ATerm term_y_23;
ATerm term_t_23;
ATerm term_q_23;
ATerm term_b_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_g_22;
ATerm term_c_22;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_v_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_g_20;
ATerm term_w_18;
ATerm term_s_18;
ATerm term_o_18;
ATerm term_i_18;
ATerm term_e_18;
ATerm term_c_18;
ATerm term_x_17;
ATerm term_j_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_t_15;
ATerm term_r_15;
ATerm term_o_15;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_i_11;
ATerm term_e_10;
void init_constant_terms (void)
{
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("obtaining: ", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("No pp entry found for: ", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: cannot rewrite to box: ", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym__2, term_s_18, term_x_17);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym__2, term_s_22, term_t_22);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(sym__2, term_k_25, term_m_11);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_11);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(sym__2, term_u_25, term_e_10);
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(sym__2, term_i_26, term_j_26);
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(sym__2, term_k_28, term_e_10);
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(sym__2, term_n_28, term_e_10);
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(sym__2, term_i_27, term_e_10);
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(sym__2, term_o_30, term_e_10);
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm flat_list_0_0 (ATerm);
ATerm Instantiate_1_0 (ATerm p_0 (ATerm), ATerm);
ATerm bottomup_1_0 (ATerm w_71 (ATerm), ATerm);
ATerm p_6 (ATerm z_15, ATerm a_16, ATerm y_15, ATerm);
ATerm a_6 (ATerm n_4, ATerm o_4, ATerm p_4, ATerm);
ATerm instantiate_sep_list_1_0 (ATerm g_94 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm z_82 (ATerm), ATerm a_83 (ATerm), ATerm b_83 (ATerm), ATerm);
ATerm u_0 (ATerm);
ATerm collect_p__1_0 (ATerm k_100 (ATerm), ATerm);
ATerm q_6 (ATerm l_32, ATerm m_32, ATerm);
ATerm r_6 (ATerm r_68 (ATerm), ATerm b_14, ATerm c_14, ATerm);
ATerm y_0 (ATerm);
ATerm a_1 (ATerm);
ATerm c_1 (ATerm);
ATerm d_1 (ATerm);
ATerm s_6 (ATerm q_15, ATerm s_15, ATerm p_15, ATerm);
ATerm symbol2abox6_0_0 (ATerm);
ATerm symbol2abox5_0_0 (ATerm);
ATerm u_6 (ATerm w_14, ATerm x_14, ATerm z_14, ATerm y_14, ATerm);
ATerm v_6 (ATerm r_14, ATerm s_14, ATerm v_14, ATerm u_14, ATerm t_14, ATerm);
ATerm x_6 (ATerm t_31, ATerm u_31, ATerm);
ATerm y_6 (ATerm j_25, ATerm h_25, ATerm i_25, ATerm);
ATerm repeat_1_0 (ATerm i_86 (ATerm), ATerm);
ATerm u_1 (ATerm);
ATerm index_0_0 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm b_7 (ATerm i_14, ATerm h_14, ATerm m_14, ATerm);
ATerm genzip_4_0 (ATerm i_78 (ATerm), ATerm j_78 (ATerm), ATerm k_78 (ATerm), ATerm l_78 (ATerm), ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm nzip_1_0 (ATerm u_78 (ATerm), ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm pp_table_get_0_0 (ATerm);
ATerm j_2 (ATerm);
ATerm trm2abox_appl_0_0 (ATerm);
ATerm trm2abox_list_0_0 (ATerm);
ATerm trm2abox_0_0 (ATerm);
ATerm f_7 (ATerm e_46, ATerm f_46, ATerm);
ATerm g_7 (ATerm g_92 (ATerm), ATerm t_556, ATerm m_46, ATerm);
ATerm h_7 (ATerm k_87 (ATerm), ATerm g_39, ATerm e_39, ATerm);
ATerm a_22 (ATerm o_21, ATerm);
ATerm b_22 (ATerm q_21, ATerm r_21, ATerm t_21, ATerm);
ATerm t_2 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm u_2 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm v_2 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm i_7 (ATerm q_33, ATerm r_33, ATerm);
ATerm read_from_0_0 (ATerm);
ATerm xtc_io_transform_1_0 (ATerm p_71 (ATerm), ATerm);
ATerm j_7 (ATerm k_17, ATerm l_17, ATerm);
ATerm copy_to_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm k_7 (ATerm p_19, ATerm q_19, ATerm);
ATerm end_scope_1_0 (ATerm h_87 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm c_75 (ATerm), ATerm d_75 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm g_87 (ATerm), ATerm);
ATerm x_2 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm q_70 (ATerm), ATerm);
ATerm g_3 (ATerm);
ATerm xtc_io_1_0 (ATerm r_70 (ATerm), ATerm);
ATerm h_3 (ATerm);
ATerm path_to_string_0_0 (ATerm);
ATerm i_3 (ATerm);
ATerm mk_key_0_0 (ATerm);
ATerm j_3 (ATerm);
ATerm l_3 (ATerm);
ATerm l_7 (ATerm y_47, ATerm z_47, ATerm);
ATerm unescape_chars_1_0 (ATerm c_86 (ATerm), ATerm);
ATerm at_last_1_0 (ATerm g_77 (ATerm), ATerm);
ATerm last_0_0 (ATerm);
ATerm o_3 (ATerm);
ATerm unquote_chars_2_0 (ATerm s_85 (ATerm), ATerm t_85 (ATerm), ATerm);
ATerm p_3 (ATerm);
ATerm v_3 (ATerm);
ATerm d_4 (ATerm);
ATerm MakePPTerm_0_0 (ATerm);
ATerm topdown_1_0 (ATerm v_71 (ATerm), ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm k_4 (ATerm);
ATerm t_7 (ATerm x_47, ATerm);
ATerm oncetd_1_0 (ATerm z_72 (ATerm), ATerm);
ATerm get_options_0_0 (ATerm);
ATerm l_4 (ATerm);
ATerm type_failure_0_0 (ATerm);
ATerm p_36 (ATerm j_36, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm w_7 (ATerm k_46, ATerm);
ATerm x_7 (ATerm y_33, ATerm z_33, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm i_38 (ATerm a_37, ATerm);
ATerm k_38 (ATerm e_37, ATerm f_37, ATerm g_37, ATerm);
ATerm m_38 (ATerm r_37, ATerm s_37, ATerm t_37, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm m_4 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm read_pp_tables_0_0 (ATerm);
ATerm get_config_p_0_0 (ATerm);
ATerm u_4 (ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm ast2abox_0_0 (ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm at_end_1_0 (ATerm v_76 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm k_42 (ATerm x_41, ATerm);
ATerm conc_0_0 (ATerm);
ATerm y_7 (ATerm y_16, ATerm x_16, ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm g_5 (ATerm);
ATerm pp_options_0_0 (ATerm);
ATerm j_5 (ATerm);
ATerm k_5 (ATerm);
ATerm m_5 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm s_5 (ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm b_6 (ATerm);
ATerm d_6 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm g_8 (ATerm s_16, ATerm t_16, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm k_6 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm e_8 (ATerm k_19, ATerm l_19, ATerm j_19, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm z_7 (ATerm n_31, ATerm o_31, ATerm);
ATerm foldr_2_0 (ATerm x_82 (ATerm), ATerm y_82 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm t_6 (ATerm);
ATerm z_6 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm a_69 (ATerm), ATerm);
ATerm c_7 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm d_7 (ATerm);
ATerm need_help_1_0 (ATerm l_88 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm a_8 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm p_76 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm c_8 (ATerm t_38, ATerm u_38, ATerm);
ATerm debug_1_0 (ATerm e_92 (ATerm), ATerm);
ATerm map_1_0 (ATerm f_76 (ATerm), ATerm);
ATerm f_8 (ATerm);
ATerm u_8 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm d_8 (ATerm b_21, ATerm c_21, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm v_8 (ATerm);
ATerm x_8 (ATerm);
ATerm z_8 (ATerm);
ATerm a_9 (ATerm);
ATerm b_9 (ATerm);
ATerm d_9 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm k_59 (ATerm), ATerm l_59 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm j_90 (ATerm), ATerm);
ATerm f_9 (ATerm);
ATerm h_9 (ATerm);
ATerm i_9 (ATerm);
ATerm l_9 (ATerm);
ATerm parse_options_1_0 (ATerm i_90 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm n_88 (ATerm), ATerm o_88 (ATerm), ATerm p_88 (ATerm), ATerm q_88 (ATerm), ATerm);
ATerm q_9 (ATerm);
ATerm r_9 (ATerm);
ATerm v_9 (ATerm);
ATerm w_9 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm m_2 = NULL,n_2 = NULL,o_2 = NULL;
  m_2 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_2;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_2 = ATgetFirst((ATermList) t);
          o_2 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm p_2 = t;
        int x_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_0 = NULL,r_0 = NULL,o_0 = NULL;
            t = SSLgetAnnotations(m_2);
            e_0 = t;
            t = n_2;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = o_2;
            t = flat_list_0_0(t);
            r_0 = t;
            t = (ATerm) ATinsert(CheckATermList(r_0), n_2);
            o_0 = t;
            t = SSLsetAnnotations(o_0, e_0);
            ;
            LocalPopChoice(x_9);
          }
        else
          {
            t = p_2;
            {
              ATerm y_9 = t;
              int z_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_1 = NULL,q_1 = NULL,t_1 = NULL,a_2 = NULL,s_0 = NULL;
                  t = SSLgetAnnotations(m_2);
                  t_1 = t;
                  t = n_2;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = n_2;
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
                      t = n_2;
                    }
                  t = (ATerm) ATinsert(CheckATermList(o_2), n_2);
                  s_0 = t;
                  t = SSLsetAnnotations(s_0, t_1);
                  a_2 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      q_1 = ATgetFirst((ATermList) t);
                      {
                        ATerm c_10 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = a_2;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm d_10 = ATgetFirst((ATermList) t);
                      o_1 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, q_1, o_1);
                  t = conc_0_0(t);
                  t = flat_list_0_0(t);
                  ;
                  LocalPopChoice(z_9);
                }
              else
                {
                  t = y_9;
                  {
                    ATerm a_3 = NULL,f_3 = NULL,v_0 = NULL;
                    t = SSLgetAnnotations(m_2);
                    a_3 = t;
                    t = o_2;
                    t = flat_list_0_0(t);
                    f_3 = t;
                    t = (ATerm) ATinsert(CheckATermList(f_3), n_2);
                    v_0 = t;
                    t = SSLsetAnnotations(v_0, a_3);
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
  ATerm y_2 = NULL,b_3 = NULL;
  if(match_cons(t, sym_Arg2_2))
    {
      b_3 = ATgetArgument(t, 0);
      y_2 = ATgetArgument(t, 1);
      {
        ATerm k_3 = NULL,u_3 = NULL;
        t = term_e_10;
        t = p_0(t);
        u_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_3, u_3);
        t = index_0_0(t);
        k_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_2, k_3);
        t = index_0_0(t);
      }
    }
  else
    {
      ATerm w_3 = NULL;
      if(match_cons(t, sym_Arg_1))
        {
          b_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = term_e_10;
      t = p_0(t);
      w_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_3, w_3);
      t = index_0_0(t);
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm w_71 (ATerm), ATerm t)
{
  ATerm a_0 (ATerm t)
  {
    t = bottomup_1_0(w_71, t);
    return(t);
  }
  t = SRTS_all(a_0, t);
  t = w_71(t);
  return(t);
}
ATerm p_6 (ATerm z_15, ATerm a_16, ATerm y_15, ATerm t)
{
  ATerm y_3 = NULL,z_3 = NULL;
  ATerm c_0 (ATerm t)
  {
    ATerm f_10 = t;
    int g_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_10 = t;
        int i_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_0 (ATerm t)
            {
              t = not_null(y_3);
              return(t);
            }
            t = Instantiate_1_0(f_0, t);
            ;
            LocalPopChoice(i_10);
          }
        else
          {
            t = h_10;
            t = flat_list_0_0(t);
          }
        ;
        LocalPopChoice(g_10);
      }
    else
      {
        t = f_10;
      }
    return(t);
  }
  t = SSL_explode_term(y_15);
  if(match_cons(t, sym__2))
    {
      ATerm o_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_10) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      z_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_3;
  {
    ATerm b_0 (ATerm t)
    {
      ATerm a_4 = NULL,c_4 = NULL;
      if(match_cons(t, sym__2))
        {
          a_4 = ATgetArgument(t, 0);
          c_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, a_4, z_15, c_4);
      t = b_7(a_4, z_15, c_4, t);
      return(t);
    }
    t = nzip_1_0(b_0, t);
    if(((y_3 != NULL) && (y_3 != t)))
      _fail(t);
    else
      y_3 = t;
    t = a_16;
    t = bottomup_1_0(c_0, t);
  }
  return(t);
}
ATerm a_6 (ATerm n_4, ATerm o_4, ATerm p_4, ATerm t)
{
  ATerm v_4 = NULL,z_0 = NULL;
  t = SSLgetAnnotations(p_4);
  v_4 = t;
  t = o_4;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_4), n_4);
  z_0 = t;
  t = SSLsetAnnotations(z_0, v_4);
  return(t);
}
ATerm instantiate_sep_list_1_0 (ATerm g_94 (ATerm), ATerm t)
{
  ATerm z_5 (ATerm t)
  {
    ATerm c_6 (ATerm z_4, ATerm a_5, ATerm b_5, ATerm d_5, ATerm t)
    {
      ATerm h_5 = NULL,i_5 = NULL,l_5 = NULL,b_1 = NULL;
      t = d_5;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm p_10 = ATgetFirst((ATermList) t);
          ATerm u_10 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(d_5);
      h_5 = t;
      t = term_e_10;
      t = g_94(t);
      {
        ATerm q_0 (ATerm t)
        {
          ATerm v_10 = t;
          int w_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_10 = t;
              int y_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_0 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, a_5), z_4);
                    return(t);
                  }
                  t = Instantiate_1_0(t_0, t);
                  ;
                  LocalPopChoice(y_10);
                }
              else
                {
                  t = x_10;
                  t = flat_list_0_0(t);
                }
              ;
              LocalPopChoice(w_10);
            }
          else
            {
              t = v_10;
            }
          return(t);
        }
        t = bottomup_1_0(q_0, t);
        l_5 = t;
        t = b_5;
        t = z_5(t);
        i_5 = t;
        t = (ATerm) ATinsert(CheckATermList(i_5), l_5);
        b_1 = t;
        t = SSLsetAnnotations(b_1, h_5);
      }
      return(t);
    }
    ATerm q_5 = NULL,r_5 = NULL,t_5 = NULL,u_5 = NULL,v_5 = NULL;
    q_5 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_5;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_5 = ATgetFirst((ATermList) t);
            t_5 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = t_5;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_5 = ATgetFirst((ATermList) t);
            v_5 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm z_10 = t;
              int a_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = a_6(r_5, t_5, q_5, t);
                  ;
                  LocalPopChoice(a_11);
                }
              else
                {
                  t = z_10;
                  t = c_6(r_5, u_5, v_5, q_5, t);
                }
            }
          }
        else
          {
            t = a_6(r_5, t_5, q_5, t);
          }
      }
    return(t);
  }
  t = z_5(t);
  return(t);
}
ATerm foldr_3_0 (ATerm z_82 (ATerm), ATerm a_83 (ATerm), ATerm b_83 (ATerm), ATerm t)
{
  ATerm e_6 = NULL,j_6 = NULL,l_6 = NULL;
  e_6 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_6;
      t = z_82(t);
    }
  else
    {
      ATerm w_6 = NULL,a_7 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_6 = ATgetFirst((ATermList) t);
          l_6 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_6;
      t = b_83(t);
      w_6 = t;
      t = l_6;
      t = foldr_3_0(z_82, a_83, b_83, t);
      a_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_6, a_7);
      t = a_83(t);
    }
  return(t);
}
ATerm u_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_p__1_0 (ATerm k_100 (ATerm), ATerm t)
{
  ATerm o_7 (ATerm t)
  {
    ATerm b_11 = t;
    int c_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_7 = NULL;
        t = k_100(t);
        n_7 = t;
        t = (ATerm) ATinsert(ATempty, n_7);
        ;
        LocalPopChoice(c_11);
      }
    else
      {
        t = b_11;
        {
          ATerm m_3 = NULL,n_3 = NULL;
          n_3 = t;
          t = SSL_explode_term(n_3);
          if(match_cons(t, sym__2))
            {
              ATerm f_11 = ATgetArgument(t, 0);
              m_3 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = m_3;
          t = foldr_3_0(u_0, conc_0_0, o_7, t);
        }
      }
    return(t);
  }
  t = o_7(t);
  return(t);
}
ATerm q_6 (ATerm l_32, ATerm m_32, ATerm t)
{
  t = SSL_mod(l_32, m_32);
  return(t);
}
ATerm r_6 (ATerm r_68 (ATerm), ATerm b_14, ATerm c_14, ATerm t)
{
  ATerm p_7 = NULL;
  ATerm g_11 = t;
  int h_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_7 = NULL,r_7 = NULL,s_7 = NULL;
      t = term_i_11;
      s_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_14, term_i_11);
      t = q_6(b_14, s_7, t);
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
        _fail(t);
      t = term_e_10;
      t = r_68(t);
      q_7 = t;
      t = term_i_11;
      r_7 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_11, q_7, c_14);
      t = b_7(r_7, q_7, c_14, t);
      p_7 = t;
      ;
      LocalPopChoice(h_11);
    }
  else
    {
      t = g_11;
      {
        ATerm b_8 = NULL,h_8 = NULL;
        t = term_e_10;
        t = r_68(t);
        b_8 = t;
        t = term_l_11;
        h_8 = t;
        t = (ATerm) ATmakeAppl(sym__3, term_l_11, b_8, c_14);
        t = b_7(h_8, b_8, c_14, t);
        p_7 = t;
      }
    }
  t = p_7;
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm p_8 = NULL,q_8 = NULL,r_8 = NULL,f_1 = NULL;
  r_8 = t;
  if(match_cons(t, sym_S_1))
    {
      q_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_8);
  p_8 = t;
  t = (ATerm) ATmakeAppl(sym_S_1, q_8);
  f_1 = t;
  t = SSLsetAnnotations(f_1, p_8);
  return(t);
}
ATerm a_1 (ATerm t)
{
  t = term_m_11;
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm s_8 = NULL,w_8 = NULL;
  if(match_cons(t, sym__2))
    {
      s_8 = ATgetArgument(t, 0);
      w_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_7(s_8, w_8, t);
  return(t);
}
ATerm d_1 (ATerm t)
{
  t = term_l_11;
  return(t);
}
ATerm s_6 (ATerm q_15, ATerm s_15, ATerm p_15, ATerm t)
{
  ATerm k_8 = NULL;
  ATerm e_1 (ATerm t)
  {
    t = s_15;
    return(t);
  }
  t = p_15;
  {
    ATerm w_0 (ATerm t)
    {
      ATerm m_8 = NULL,n_8 = NULL;
      ATerm x_0 (ATerm t)
      {
        t = q_15;
        return(t);
      }
      if(match_cons(t, sym__2))
        {
          m_8 = ATgetArgument(t, 0);
          n_8 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = r_6(x_0, m_8, n_8, t);
      return(t);
    }
    t = nzip_1_0(w_0, t);
    k_8 = t;
    {
      ATerm o_11 = t;
      int r_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_9 (ATerm t)
          {
            ATerm y_8 = NULL,c_9 = NULL;
            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
              {
                t = (ATerm) ATempty;
              }
            else
              {
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    y_8 = ATgetFirst((ATermList) t);
                    c_9 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = c_9;
                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                  {
                    ATerm s_11 = t;
                    int t_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATinsert(ATempty, y_8);
                        ;
                        LocalPopChoice(t_11);
                      }
                    else
                      {
                        t = s_11;
                        {
                          ATerm g_9 = NULL;
                          t = c_9;
                          t = k_9(t);
                          g_9 = t;
                          t = (ATerm) ATinsert(ATinsert(CheckATermList(g_9), y_8), y_8);
                        }
                      }
                  }
                else
                  {
                    ATerm j_9 = NULL;
                    t = c_9;
                    t = k_9(t);
                    j_9 = t;
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(j_9), y_8), y_8);
                  }
              }
            return(t);
          }
          t = s_15;
          t = collect_p__1_0(y_0, t);
          t = foldr_3_0(a_1, c_1, d_1, t);
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 1)))
            _fail(t);
          t = k_8;
          t = k_9(t);
          ;
          LocalPopChoice(r_11);
        }
      else
        {
          t = o_11;
          t = k_8;
        }
      t = instantiate_sep_list_1_0(e_1, t);
    }
  }
  return(t);
}
ATerm symbol2abox6_0_0 (ATerm t)
{
  ATerm o_9 = NULL,p_9 = NULL,s_9 = NULL,t_9 = NULL;
  if(match_cons(t, sym__4))
    {
      o_9 = ATgetArgument(t, 0);
      p_9 = ATgetArgument(t, 1);
      s_9 = ATgetArgument(t, 2);
      t_9 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = o_9;
  if(match_string(t, "iter-star-sep"))
    {
      t = (ATerm) ATmakeAppl(sym__3, p_9, s_9, t_9);
      t = s_6(p_9, s_9, t_9, t);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("iter-sep", 0, ATtrue)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, p_9, s_9, t_9);
      t = s_6(p_9, s_9, t_9, t);
    }
  return(t);
}
ATerm symbol2abox5_0_0 (ATerm t)
{
  ATerm j_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,q_10 = NULL;
  ATerm j_1 (ATerm t)
  {
    ATerm v_11 = t;
    int w_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_11 = t;
        int a_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_1 (ATerm t)
            {
              t = (ATerm) ATinsert(ATempty, not_null(j_10));
              return(t);
            }
            t = Instantiate_1_0(k_1, t);
            ;
            LocalPopChoice(a_12);
          }
        else
          {
            t = z_11;
            t = flat_list_0_0(t);
          }
        ;
        LocalPopChoice(w_11);
      }
    else
      {
        t = v_11;
      }
    return(t);
  }
  k_10 = t;
  if(match_cons(t, sym__4))
    {
      l_10 = ATgetArgument(t, 0);
      m_10 = ATgetArgument(t, 1);
      n_10 = ATgetArgument(t, 2);
      q_10 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = l_10;
  if(match_string(t, "iter"))
    {
      t = k_10;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("iter-star", 0, ATtrue)))
        _fail(t);
      t = k_10;
    }
  t = q_10;
  {
    ATerm g_1 (ATerm t)
    {
      ATerm r_10 = NULL,t_10 = NULL;
      r_10 = t;
      t = term_l_11;
      t_10 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_11, m_10, r_10);
      t = b_7(t_10, m_10, r_10, t);
      return(t);
    }
    t = map_1_0(g_1, t);
    if(((j_10 != NULL) && (j_10 != t)))
      _fail(t);
    else
      j_10 = t;
    t = n_10;
    t = bottomup_1_0(j_1, t);
  }
  return(t);
}
ATerm u_6 (ATerm w_14, ATerm x_14, ATerm z_14, ATerm y_14, ATerm t)
{
  ATerm d_11 = NULL,e_11 = NULL;
  ATerm l_1 (ATerm t)
  {
    ATerm e_12 = t;
    int f_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_12 = t;
        int j_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_1 (ATerm t)
            {
              t = (ATerm) ATinsert(ATempty, not_null(d_11));
              return(t);
            }
            t = Instantiate_1_0(m_1, t);
            ;
            LocalPopChoice(j_12);
          }
        else
          {
            t = h_12;
            t = flat_list_0_0(t);
          }
        ;
        LocalPopChoice(f_12);
      }
    else
      {
        t = e_12;
      }
    return(t);
  }
  t = term_l_11;
  e_11 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_l_11, x_14, y_14);
  t = b_7(e_11, x_14, y_14, t);
  if(((d_11 != NULL) && (d_11 != t)))
    _fail(t);
  else
    d_11 = t;
  t = z_14;
  t = bottomup_1_0(l_1, t);
  return(t);
}
ATerm v_6 (ATerm r_14, ATerm s_14, ATerm v_14, ATerm u_14, ATerm t_14, ATerm t)
{
  ATerm j_11 = NULL,k_11 = NULL;
  ATerm n_1 (ATerm t)
  {
    ATerm l_12 = t;
    int p_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_12 = t;
        int a_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_1 (ATerm t)
            {
              t = (ATerm) ATinsert(ATempty, not_null(k_11));
              return(t);
            }
            t = Instantiate_1_0(r_1, t);
            ;
            LocalPopChoice(a_13);
          }
        else
          {
            t = z_12;
            t = flat_list_0_0(t);
          }
        ;
        LocalPopChoice(p_12);
      }
    else
      {
        t = l_12;
      }
    return(t);
  }
  t = (ATerm) ATmakeAppl(sym__3, u_14, s_14, t_14);
  t = b_7(u_14, s_14, t_14, t);
  if(((k_11 != NULL) && (k_11 != t)))
    _fail(t);
  else
    k_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_14, v_14);
  t = index_0_0(t);
  j_11 = t;
  t = (ATerm) ATinsert(ATempty, j_11);
  t = bottomup_1_0(n_1, t);
  return(t);
}
ATerm x_6 (ATerm t_31, ATerm u_31, ATerm t)
{
  ATerm e_13 = t;
  int g_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(t_31, u_31);
      ;
      LocalPopChoice(g_13);
    }
  else
    {
      t = e_13;
      t = SSL_subtr(t_31, u_31);
    }
  return(t);
}
ATerm y_6 (ATerm j_25, ATerm h_25, ATerm i_25, ATerm t)
{
  ATerm n_11 = NULL,p_11 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, j_25, term_i_11);
  t = geq_0_0(t);
  t = term_l_11;
  p_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_25, term_l_11);
  t = x_6(j_25, p_11, t);
  n_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_11, i_25);
  return(t);
}
ATerm repeat_1_0 (ATerm i_86 (ATerm), ATerm t)
{
  ATerm x_11 (ATerm t)
  {
    ATerm i_13 = t;
    int o_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_86(t);
        t = x_11(t);
        ;
        LocalPopChoice(o_13);
      }
    else
      {
        t = i_13;
      }
    return(t);
  }
  t = x_11(t);
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm b_12 = NULL,c_12 = NULL,d_12 = NULL;
  if(match_cons(t, sym__2))
    {
      b_12 = ATgetArgument(t, 0);
      {
        ATerm p_13 = ATgetArgument(t, 1);
        if(((ATgetType(p_13) == AT_LIST) && !(ATisEmpty(p_13))))
          {
            c_12 = ATgetFirst((ATermList) p_13);
            d_12 = (ATerm) ATgetNext((ATermList) p_13);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = y_6(b_12, c_12, d_12, t);
  return(t);
}
ATerm index_0_0 (ATerm t)
{
  ATerm y_11 = NULL;
  t = repeat_1_0(u_1, t);
  if(match_cons(t, sym__2))
    {
      ATerm q_13 = ATgetArgument(t, 0);
      if(((ATgetType(q_13) != AT_INT) || (ATgetInt((ATermInt) q_13) != 1)))
        _fail(t);
      {
        ATerm r_13 = ATgetArgument(t, 1);
        if(((ATgetType(r_13) == AT_LIST) && !(ATisEmpty(r_13))))
          {
            y_11 = ATgetFirst((ATermList) r_13);
            {
              ATerm s_13 = (ATerm) ATgetNext((ATermList) r_13);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = y_11;
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm u_13 = t;
  int v_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_13 = t;
      int z_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Instantiate_1_0(z_1, t);
          ;
          LocalPopChoice(z_13);
        }
      else
        {
          t = w_13;
          t = flat_list_0_0(t);
        }
      ;
      LocalPopChoice(v_13);
    }
  else
    {
      t = u_13;
    }
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm b_7 (ATerm i_14, ATerm h_14, ATerm m_14, ATerm t)
{
  ATerm m_12 = NULL,n_12 = NULL,o_12 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_14, (ATerm) ATinsert(ATempty, i_14));
  t = conc_0_0(t);
  n_12 = t;
  {
    ATerm a_14 = t;
    int d_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_12 = NULL,r_12 = NULL;
        t = pp_table_get_0_0(t);
        if(match_cons(t, sym__2))
          {
            m_12 = ATgetArgument(t, 0);
            o_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_12;
        if(match_cons(t, sym_Path_2))
          {
            ATerm e_14 = ATgetArgument(t, 0);
            q_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_12;
        {
          ATerm x_1 (ATerm t)
          {
            ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,y_12 = NULL,b_13 = NULL,d_13 = NULL,j_13 = NULL,i_1 = NULL,h_1 = NULL;
            j_13 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                t_12 = ATgetFirst((ATermList) t);
                u_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(j_13);
            s_12 = t;
            t = t_12;
            if(match_cons(t, sym_selector_2))
              {
                y_12 = ATgetArgument(t, 0);
                b_13 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(t_12);
            v_12 = t;
            t = b_13;
            if(((r_12 != NULL) && (r_12 != t)))
              _fail(t);
            else
              r_12 = t;
            t = (ATerm) ATmakeAppl(sym_selector_2, y_12, b_13);
            h_1 = t;
            t = SSLsetAnnotations(h_1, v_12);
            d_13 = t;
            t = u_12;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(u_12), d_13);
            i_1 = t;
            t = SSLsetAnnotations(i_1, s_12);
            return(t);
          }
          t = at_last_1_0(x_1, t);
          t = (ATerm) ATmakeAppl(sym__4, not_null(r_12), n_12, o_12, m_14);
          {
            ATerm f_14 = t;
            int g_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL;
                if(match_cons(t, sym__4))
                  {
                    ATerm j_14 = ATgetArgument(t, 0);
                    ATerm l_14 = ATgetArgument(t, 1);
                    ATerm n_14 = ATgetArgument(t, 2);
                    ATerm o_14 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = m_14;
                if(match_cons(t, sym_alt_2))
                  {
                    n_13 = ATgetArgument(t, 0);
                    k_13 = ATgetArgument(t, 1);
                    t = k_13;
                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                      {
                        ATerm y_13 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, n_13, o_12);
                        t = index_0_0(t);
                        y_13 = t;
                        t = (ATerm) ATinsert(ATempty, y_13);
                        t = bottomup_1_0(y_1, t);
                      }
                    else
                      {
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            l_13 = ATgetFirst((ATermList) t);
                            m_13 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = m_13;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym__4, not_null(r_12), n_12, o_12, m_14);
                        t = v_6(not_null(r_12), n_12, o_12, n_13, l_13, t);
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Some_1))
                      {
                        n_13 = ATgetArgument(t, 0);
                        t = (ATerm) ATmakeAppl(sym__4, not_null(r_12), n_12, o_12, m_14);
                        t = u_6(not_null(r_12), n_12, o_12, n_13, t);
                      }
                    else
                      {
                        if(!(match_cons(t, sym_None_0)))
                          _fail(t);
                        t = (ATerm) ATempty;
                      }
                  }
                ;
                LocalPopChoice(g_14);
              }
            else
              {
                t = f_14;
                {
                  ATerm p_14 = t;
                  int q_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = symbol2abox5_0_0(t);
                      ;
                      LocalPopChoice(q_14);
                    }
                  else
                    {
                      t = p_14;
                      {
                        ATerm a_15 = t;
                        int b_15 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = symbol2abox6_0_0(t);
                            ;
                            LocalPopChoice(b_15);
                          }
                        else
                          {
                            t = a_15;
                            if(match_cons(t, sym__4))
                              {
                                ATerm e_15 = ATgetArgument(t, 0);
                                ATerm f_15 = ATgetArgument(t, 1);
                                ATerm g_15 = ATgetArgument(t, 2);
                                ATerm h_15 = ATgetArgument(t, 3);
                              }
                            else
                              _fail(t);
                            t = not_null(r_12);
                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("seq", 0, ATtrue)))
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym__4, not_null(r_12), n_12, o_12, m_14);
                            t = p_6(n_12, o_12, m_14, t);
                          }
                      }
                    }
                }
              }
          }
        }
        ;
        LocalPopChoice(d_14);
      }
    else
      {
        t = a_14;
        t = m_14;
        t = trm2abox_0_0(t);
      }
  }
  return(t);
}
ATerm genzip_4_0 (ATerm i_78 (ATerm), ATerm j_78 (ATerm), ATerm k_78 (ATerm), ATerm l_78 (ATerm), ATerm t)
{
  ATerm h_17 (ATerm t)
  {
    ATerm i_15 = t;
    int j_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_78(t);
        ;
        LocalPopChoice(j_15);
      }
    else
      {
        t = i_15;
        {
          ATerm b_16 = NULL,c_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL,r_16 = NULL,p_1 = NULL;
          t = j_78(t);
          r_16 = t;
          if(match_cons(t, sym__2))
            {
              c_16 = ATgetArgument(t, 0);
              f_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(r_16);
          b_16 = t;
          t = c_16;
          t = l_78(t);
          g_16 = t;
          t = f_16;
          t = h_17(t);
          h_16 = t;
          t = (ATerm) ATmakeAppl(sym__2, g_16, h_16);
          p_1 = t;
          t = SSLsetAnnotations(p_1, b_16);
          t = k_78(t);
        }
      }
    return(t);
  }
  t = h_17(t);
  return(t);
}
ATerm b_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_15 = ATgetArgument(t, 0);
      ATerm l_15 = ATgetArgument(t, 1);
      if(((ATgetType(l_15) != AT_LIST) || !(ATisEmpty(l_15))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm m_17 = NULL,q_17 = NULL,r_17 = NULL,t_17 = NULL,y_17 = NULL;
  if(match_cons(t, sym__2))
    {
      m_17 = ATgetArgument(t, 0);
      {
        ATerm m_15 = ATgetArgument(t, 1);
        if(((ATgetType(m_15) == AT_LIST) && !(ATisEmpty(m_15))))
          {
            q_17 = ATgetFirst((ATermList) m_15);
            r_17 = (ATerm) ATgetNext((ATermList) m_15);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_l_11;
  y_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_17, term_l_11);
  t = z_7(m_17, y_17, t);
  t_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_17, q_17), (ATerm) ATmakeAppl(sym__2, t_17, r_17));
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm d_18 = NULL,l_18 = NULL;
  if(match_cons(t, sym__2))
    {
      d_18 = ATgetArgument(t, 0);
      l_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_18), d_18);
  return(t);
}
ATerm nzip_1_0 (ATerm u_78 (ATerm), ATerm t)
{
  ATerm i_17 = NULL;
  i_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_11, i_17);
  t = genzip_4_0(b_2, c_2, d_2, u_78, t);
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = debug_1_0(f_2, t);
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = term_o_15;
  return(t);
}
ATerm pp_table_get_0_0 (ATerm t)
{
  ATerm m_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL;
  m_18 = t;
  t = term_r_15;
  r_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_15, m_18);
  t = d_8(r_18, m_18, t);
  if(match_cons(t, sym__2))
    {
      q_18 = ATgetArgument(t, 0);
      p_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_18;
  t = path_to_string_0_0(t);
  t = if_verbose1_1_0(e_2, t);
  t = (ATerm) ATmakeAppl(sym__2, q_18, p_18);
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = term_t_15;
  return(t);
}
ATerm trm2abox_appl_0_0 (ATerm t)
{
  ATerm u_18 = NULL,v_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL;
  ATerm r_2 (ATerm t)
  {
    ATerm u_15 = t;
    int v_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_15 = t;
        int x_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_2 (ATerm t)
            {
              t = not_null(y_18);
              return(t);
            }
            t = Instantiate_1_0(s_2, t);
            ;
            LocalPopChoice(x_15);
          }
        else
          {
            t = w_15;
            t = flat_list_0_0(t);
          }
        ;
        LocalPopChoice(v_15);
      }
    else
      {
        t = u_15;
      }
    return(t);
  }
  z_18 = t;
  t = SSL_explode_term(z_18);
  if(match_cons(t, sym__2))
    {
      v_18 = ATgetArgument(t, 0);
      u_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_18);
  {
    ATerm d_16 = t;
    int e_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = pp_table_get_0_0(t);
        ;
        LocalPopChoice(e_16);
      }
    else
      {
        t = d_16;
        t = debug_1_0(j_2, t);
        _fail(t);
      }
    if(match_cons(t, sym__2))
      {
        ATerm i_16 = ATgetArgument(t, 0);
        x_18 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = u_18;
    {
      ATerm q_2 (ATerm t)
      {
        ATerm a_19 = NULL,b_19 = NULL,c_19 = NULL;
        if(match_cons(t, sym__2))
          {
            a_19 = ATgetArgument(t, 0);
            b_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATempty, v_18);
        c_19 = t;
        t = (ATerm) ATmakeAppl(sym__3, a_19, (ATerm)ATinsert(ATempty, v_18), b_19);
        t = b_7(a_19, c_19, b_19, t);
        return(t);
      }
      t = nzip_1_0(q_2, t);
      if(((y_18 != NULL) && (y_18 != t)))
        _fail(t);
      else
        y_18 = t;
      t = x_18;
      t = bottomup_1_0(r_2, t);
    }
  }
  return(t);
}
ATerm trm2abox_list_0_0 (ATerm t)
{
  ATerm u_19 = NULL;
  u_19 = t;
  t = SSL_explode_term(u_19);
  if(match_cons(t, sym__2))
    {
      ATerm k_16 = ATgetArgument(t, 0);
      ATerm m_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_19;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_19;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm n_16 = ATgetFirst((ATermList) t);
          ATerm p_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_19;
    }
  t = map_1_0(trm2abox_0_0, t);
  return(t);
}
ATerm trm2abox_0_0 (ATerm t)
{
  ATerm q_16 = t;
  int u_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_3 = NULL,s_3 = NULL;
      s_3 = t;
      t = SSL_is_string(s_3);
      r_3 = t;
      t = (ATerm) ATmakeAppl(sym_S_1, r_3);
      ;
      LocalPopChoice(u_16);
    }
  else
    {
      t = q_16;
      {
        ATerm v_16 = t;
        int w_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_3 = NULL,x_3 = NULL,b_4 = NULL;
            b_4 = t;
            t = SSL_is_int(b_4);
            x_3 = t;
            t = SSL_int_to_string(x_3);
            t_3 = t;
            t = (ATerm) ATmakeAppl(sym_S_1, t_3);
            ;
            LocalPopChoice(w_16);
          }
        else
          {
            t = v_16;
            {
              ATerm z_16 = t;
              int a_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = trm2abox_list_0_0(t);
                  ;
                  LocalPopChoice(a_17);
                }
              else
                {
                  t = z_16;
                  {
                    ATerm b_17 = t;
                    int c_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = trm2abox_appl_0_0(t);
                        ;
                        LocalPopChoice(c_17);
                      }
                    else
                      {
                        t = b_17;
                        {
                          ATerm s_20 = NULL,h_4 = NULL,i_4 = NULL,j_4 = NULL;
                          s_20 = t;
                          t = term_e_17;
                          i_4 = t;
                          t = (ATerm) ATinsert(ATinsert(ATempty, s_20), term_f_17);
                          j_4 = t;
                          t = SSL_printnl(i_4, j_4);
                          t = term_l_11;
                          h_4 = t;
                          t = SSL_exit(h_4);
                          t = (ATerm) ATinsert(ATinsert(ATempty, s_20), term_f_17);
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
ATerm f_7 (ATerm e_46, ATerm f_46, ATerm t)
{
  ATerm u_20 = NULL;
  t = SSL_write_term_to_stream_baf(e_46, f_46);
  u_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_20);
  return(t);
}
ATerm g_7 (ATerm g_92 (ATerm), ATerm t_556, ATerm m_46, ATerm t)
{
  ATerm x_20 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_556, term_j_17);
  t = open_stream_0_0(t);
  x_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_20, m_46);
  t = g_92(t);
  t = fclose_0_0(t);
  t = m_46;
  return(t);
}
ATerm h_7 (ATerm k_87 (ATerm), ATerm g_39, ATerm e_39, ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL,d_21 = NULL,e_21 = NULL,f_21 = NULL,g_21 = NULL;
  e_21 = t;
  t = k_87(t);
  z_20 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_20, g_39, e_39);
  t = e_8(z_20, g_39, e_39, t);
  {
    ATerm o_17 = t;
    int p_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_21 = NULL;
        t = term_x_17;
        i_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_20, term_x_17);
        t = d_8(z_20, i_21, t);
        ;
        LocalPopChoice(p_17);
      }
    else
      {
        t = o_17;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_21 = ATgetFirst((ATermList) t);
        d_21 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_x_17;
    f_21 = t;
    t = (ATerm) ATinsert(CheckATermList(d_21), (ATerm) ATinsert(CheckATermList(a_21), g_39));
    g_21 = t;
    t = SSL_table_put(z_20, f_21, g_21);
    t = e_21;
  }
  return(t);
}
ATerm a_22 (ATerm o_21, ATerm t)
{
  t = o_21;
  {
    ATerm z_17 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_18 = ATgetArgument(t, 0);
            ATerm b_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_17;
      }
    t = term_c_18;
    t = debug_1_0(t_2, t);
    t = (ATerm) ATmakeAppl(sym__2, o_21, term_j_17);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm b_22 (ATerm q_21, ATerm r_21, ATerm t_21, ATerm t)
{
  t = SSL_open_file(q_21, r_21);
  return(t);
}
ATerm t_2 (ATerm t)
{
  t = term_e_18;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL;
  x_21 = t;
  if(match_cons(t, sym__2))
    {
      y_21 = ATgetArgument(t, 0);
      z_21 = ATgetArgument(t, 1);
      {
        ATerm f_18 = t;
        int h_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_22(x_21, t);
            ;
            LocalPopChoice(h_18);
          }
        else
          {
            t = f_18;
            t = b_22(y_21, z_21, x_21, t);
          }
      }
    }
  else
    {
      t = a_22(x_21, t);
    }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0_0 (ATerm t)
{
  ATerm d_22 = NULL,e_22 = NULL,f_22 = NULL;
  t = term_e_10;
  t = new_0_0(t);
  d_22 = t;
  t = term_i_18;
  e_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_22, term_i_18);
  t = c_8(d_22, e_22, t);
  f_22 = t;
  {
    ATerm k_18 = t;
    int n_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_22 = NULL;
        t = (ATerm) ATinsert(ATempty, term_o_18);
        h_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_22, (ATerm) ATinsert(ATempty, term_o_18));
        t = i_7(f_22, h_22, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(n_18);
      }
    else
      {
        t = k_18;
        t = f_22;
      }
  }
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = term_s_18;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm k_22 = NULL,l_22 = NULL;
  t = new_file_0_0(t);
  k_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_22, term_j_17);
  t = open_file_0_0(t);
  t = term_e_10;
  l_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_22, term_e_10);
  t = h_7(u_2, k_22, l_22, t);
  t = k_22;
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm q_22 = NULL,r_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_18 = ATgetArgument(t, 0);
      if(match_cons(t_18, sym_Stream_1))
        {
          q_22 = ATgetArgument(t_18, 0);
        }
      else
        _fail(t);
      r_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_7(q_22, r_22, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm m_22 = NULL,p_22 = NULL;
  m_22 = t;
  t = xtc_new_file_0_0(t);
  p_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_22, m_22);
  t = g_7(v_2, p_22, m_22, t);
  t = SSL_close_file(p_22);
  t = (ATerm) ATmakeAppl(sym_FILE_1, p_22);
  return(t);
}
ATerm i_7 (ATerm q_33, ATerm r_33, ATerm t)
{
  t = SSL_access(q_33, r_33);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm a_23 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_w_18;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm c_23 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          a_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_o_18);
      c_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_23, (ATerm) ATinsert(ATempty, term_o_18));
      t = i_7(a_23, c_23, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm p_71 (ATerm), ATerm t)
{
  t = read_from_0_0(t);
  t = p_71(t);
  t = write_to_0_0(t);
  return(t);
}
ATerm j_7 (ATerm k_17, ATerm l_17, ATerm t)
{
  t = SSL_copy(k_17, l_17);
  return(t);
}
ATerm copy_to_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm e_24 = NULL,m_24 = NULL;
  e_24 = t;
  if(match_cons(t, sym_FILE_1))
    {
      m_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm d_19 = t;
    int e_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_4 = NULL;
        t = e_24;
        t = n_0(t);
        t_4 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = t_4;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = t_4;
          }
        t = (ATerm) ATmakeAppl(sym__2, m_24, t_4);
        t = j_7(m_24, t_4, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, m_24);
        ;
        LocalPopChoice(e_19);
      }
    else
      {
        t = d_19;
        {
          ATerm f_19 = t;
          int g_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_6 = NULL;
              t = e_24;
              t = n_0(t);
              f_6 = t;
              {
                ATerm h_19 = t;
                if((PushChoice() == 0))
                  {
                    ATerm g_6 = NULL;
                    g_6 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = g_6;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = g_6;
                          }
                        else
                          {
                            t = g_6;
                            if((m_24 != t))
                              {
                                _fail(t);
                              }
                            t = g_6;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = h_19;
                  }
                t = (ATerm) ATmakeAppl(sym__2, m_24, f_6);
                t = j_7(m_24, f_6, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, m_24);
              }
              ;
              LocalPopChoice(g_19);
            }
          else
            {
              t = f_19;
              t = e_24;
              t = n_0(t);
              if((m_24 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_24);
            }
        }
      }
  }
  return(t);
}
ATerm k_7 (ATerm p_19, ATerm q_19, ATerm t)
{
  ATerm t_24 = NULL,v_24 = NULL;
  v_24 = t;
  {
    ATerm i_19 = t;
    int m_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, p_19, q_19);
        t = d_8(p_19, q_19, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm r_19 = ATgetFirst((ATermList) t);
            t_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(m_19);
        t = SSL_table_put(p_19, q_19, t_24);
        t = (ATerm) ATmakeAppl(sym__3, p_19, q_19, t_24);
      }
    else
      {
        t = i_19;
        t = SSL_table_remove(p_19, q_19);
        t = (ATerm) ATmakeAppl(sym__2, p_19, q_19);
      }
    t = v_24;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm h_87 (ATerm), ATerm t)
{
  ATerm w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL,d_25 = NULL;
  z_24 = t;
  t = h_87(t);
  y_24 = t;
  {
    ATerm s_19 = t;
    int t_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_25 = NULL;
        t = term_x_17;
        e_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_24, term_x_17);
        t = d_8(y_24, e_25, t);
        ;
        LocalPopChoice(t_19);
      }
    else
      {
        t = s_19;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_24 = ATgetFirst((ATermList) t);
        w_24 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_x_17;
    d_25 = t;
    t = SSL_table_put(y_24, d_25, w_24);
    t = x_24;
    {
      ATerm w_2 (ATerm t)
      {
        ATerm g_25 = NULL;
        g_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_24, g_25);
        t = k_7(y_24, g_25, t);
        return(t);
      }
      t = map_1_0(w_2, t);
      t = z_24;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm c_75 (ATerm), ATerm d_75 (ATerm), ATerm t)
{
  ATerm v_19 = t;
  int w_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = c_75(t);
      t = d_75(t);
      ;
      LocalPopChoice(w_19);
    }
  else
    {
      t = v_19;
      t = d_75(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm g_87 (ATerm), ATerm t)
{
  ATerm l_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL;
  n_25 = t;
  t = g_87(t);
  l_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_25, term_x_17);
  {
    ATerm x_19 = t;
    int y_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_25 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm z_19 = ATgetArgument(t, 0);
            ATerm a_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_x_17;
        v_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_25, term_x_17);
        t = d_8(l_25, v_25, t);
        ;
        LocalPopChoice(y_19);
      }
    else
      {
        t = x_19;
        t = (ATerm) ATempty;
      }
    o_25 = t;
    t = term_x_17;
    p_25 = t;
    t = (ATerm) ATinsert(CheckATermList(o_25), (ATerm) ATempty);
    q_25 = t;
    t = SSL_table_put(l_25, p_25, q_25);
    t = n_25;
  }
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = term_s_18;
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm g_26 = NULL;
  g_26 = t;
  {
    ATerm b_20 = t;
    int c_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(g_26);
        ;
        LocalPopChoice(c_20);
      }
    else
      {
        t = b_20;
        t = g_26;
      }
  }
  return(t);
}
ATerm d_3 (ATerm t)
{
  t = term_s_18;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm q_70 (ATerm), ATerm t)
{
  ATerm y_25 = NULL;
  ATerm z_2 (ATerm t)
  {
    ATerm z_25 = NULL;
    z_25 = t;
    {
      ATerm e_20 = t;
      int f_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_26 = NULL,b_26 = NULL;
          t = term_s_18;
          a_26 = t;
          t = term_x_17;
          b_26 = t;
          t = term_g_20;
          t = d_8(a_26, b_26, t);
          ;
          LocalPopChoice(f_20);
        }
      else
        {
          t = e_20;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((y_25 != NULL) && (y_25 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            y_25 = ATgetFirst((ATermList) t);
          {
            ATerm h_20 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = y_25;
      t = map_1_0(c_3, t);
      t = z_25;
      t = end_scope_1_0(d_3, t);
    }
    return(t);
  }
  t = begin_scope_1_0(x_2, t);
  t = restore_always_2_0(q_70, z_2, t);
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm i_20 = t;
  int k_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_20;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(k_20);
    }
  else
    {
      t = i_20;
      t = term_m_20;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm r_70 (ATerm), ATerm t)
{
  ATerm e_3 (ATerm t)
  {
    ATerm n_20 = t;
    int o_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_26 = NULL;
        t = term_p_20;
        t = get_config_0_0(t);
        p_26 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, p_26);
        ;
        LocalPopChoice(o_20);
      }
    else
      {
        t = n_20;
        t = term_w_18;
      }
    t = r_70(t);
    t = copy_to_1_0(g_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(e_3, t);
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm l_8 = NULL,o_8 = NULL,t_8 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      l_8 = ATgetArgument(t, 0);
      o_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_int_to_string(l_8);
  t_8 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_8), term_r_20), t_8), term_q_20);
  return(t);
}
ATerm path_to_string_0_0 (ATerm t)
{
  ATerm m_27 = NULL,o_27 = NULL,r_27 = NULL;
  m_27 = t;
  if(match_cons(t, sym_Path1_1))
    {
      o_27 = ATgetArgument(t, 0);
      t = o_27;
    }
  else
    {
      ATerm i_8 = NULL,j_8 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          o_27 = ATgetArgument(t, 0);
          r_27 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = r_27;
      t = map_1_0(h_3, t);
      t = concat_0_0(t);
      i_8 = t;
      t = (ATerm) ATinsert(CheckATermList(i_8), o_27);
      j_8 = t;
      t = SSL_concat_strings(j_8);
    }
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm r_28 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      r_28 = ATgetArgument(t, 0);
      {
        ATerm t_20 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = r_28;
  return(t);
}
ATerm mk_key_0_0 (ATerm t)
{
  ATerm e_28 = NULL,f_28 = NULL;
  if(match_cons(t, sym_Path1_1))
    {
      e_28 = ATgetArgument(t, 0);
      t = (ATerm) ATinsert(ATempty, e_28);
    }
  else
    {
      ATerm q_28 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          e_28 = ATgetArgument(t, 0);
          f_28 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = f_28;
      t = map_1_0(i_3, t);
      q_28 = t;
      t = (ATerm) ATinsert(CheckATermList(q_28), e_28);
    }
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = debug_1_0(l_3, t);
  return(t);
}
ATerm l_3 (ATerm t)
{
  t = term_v_20;
  return(t);
}
ATerm l_7 (ATerm y_47, ATerm z_47, ATerm t)
{
  ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL;
  t = y_47;
  t = mk_key_0_0(t);
  t_28 = t;
  t = term_r_15;
  u_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_47, z_47);
  v_28 = t;
  t = SSL_table_put(u_28, t_28, v_28);
  t = y_47;
  t = path_to_string_0_0(t);
  s_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_28, z_47);
  t = if_verbose1_1_0(j_3, t);
  return(t);
}
ATerm unescape_chars_1_0 (ATerm c_86 (ATerm), ATerm t)
{
  ATerm b_30 (ATerm t)
  {
    ATerm v_29 = NULL,y_29 = NULL,a_30 = NULL;
    ATerm h_21 = t;
    int j_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_86(t);
        ;
        LocalPopChoice(j_21);
      }
    else
      {
        t = h_21;
      }
    a_30 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_29 = ATgetFirst((ATermList) t);
        y_29 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm m_9 = NULL,u_9 = NULL,s_1 = NULL;
          t = SSLgetAnnotations(a_30);
          m_9 = t;
          t = y_29;
          t = b_30(t);
          u_9 = t;
          t = (ATerm) ATinsert(CheckATermList(u_9), v_29);
          s_1 = t;
          t = SSLsetAnnotations(s_1, m_9);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = a_30;
      }
    return(t);
  }
  t = b_30(t);
  return(t);
}
ATerm at_last_1_0 (ATerm g_77 (ATerm), ATerm t)
{
  ATerm d_31 (ATerm t)
  {
    ATerm a_31 = NULL,b_31 = NULL,c_31 = NULL;
    a_31 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_31 = ATgetFirst((ATermList) t);
        c_31 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm m_21 = t;
      int n_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_10 = NULL,v_1 = NULL;
          t = SSLgetAnnotations(a_31);
          s_10 = t;
          t = c_31;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(c_31), b_31);
          v_1 = t;
          t = SSLsetAnnotations(v_1, s_10);
          t = g_77(t);
          ;
          LocalPopChoice(n_21);
        }
      else
        {
          t = m_21;
          {
            ATerm q_11 = NULL,u_11 = NULL,w_1 = NULL;
            t = SSLgetAnnotations(a_31);
            q_11 = t;
            t = c_31;
            t = d_31(t);
            u_11 = t;
            t = (ATerm) ATinsert(CheckATermList(u_11), b_31);
            w_1 = t;
            t = SSLsetAnnotations(w_1, q_11);
          }
        }
    }
    return(t);
  }
  t = d_31(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm j_31 = NULL,k_31 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_31 = ATgetFirst((ATermList) t);
      k_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = k_31;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_31;
    }
  else
    {
      t = k_31;
      t = last_0_0(t);
    }
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm w_31 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm p_21 = ATgetFirst((ATermList) t);
      w_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_31;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm s_85 (ATerm), ATerm t_85 (ATerm), ATerm t)
{
  ATerm r_31 = NULL,s_31 = NULL,v_31 = NULL;
  r_31 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_31 = ATgetFirst((ATermList) t);
      {
        ATerm s_21 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = v_31;
  t = s_85(t);
  t = r_31;
  t = last_0_0(t);
  t = t_85(t);
  t = r_31;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm u_21 = ATgetFirst((ATermList) t);
      s_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_31;
  t = at_last_1_0(o_3, t);
  return(t);
}
ATerm p_3 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm v_3 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm s_17 = NULL,u_17 = NULL,v_17 = NULL,w_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_17 = ATgetFirst((ATermList) t);
      u_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_17;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 92)))
    _fail(t);
  t = u_17;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_17 = ATgetFirst((ATermList) t);
      w_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_17;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(CheckATermList(w_17), term_v_21);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(CheckATermList(w_17), term_w_21);
        }
      else
        {
          if(match_int(t, 110))
            {
              t = (ATerm) ATinsert(CheckATermList(w_17), term_c_22);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 116)))
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(w_17), term_g_22);
            }
        }
    }
  return(t);
}
ATerm MakePPTerm_0_0 (ATerm t)
{
  ATerm x_34 = NULL,y_34 = NULL,z_34 = NULL;
  x_34 = t;
  if(match_cons(t, sym_Arg_1))
    {
      y_34 = ATgetArgument(t, 0);
      {
        ATerm t_13 = NULL,x_13 = NULL,g_2 = NULL;
        t = SSLgetAnnotations(x_34);
        t_13 = t;
        t = SSL_string_to_int(y_34);
        x_13 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, x_13);
        g_2 = t;
        t = SSLsetAnnotations(g_2, t_13);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg2_2))
        {
          y_34 = ATgetArgument(t, 0);
          z_34 = ATgetArgument(t, 1);
          {
            ATerm k_14 = NULL,c_15 = NULL,d_15 = NULL,h_2 = NULL;
            t = SSLgetAnnotations(x_34);
            k_14 = t;
            t = SSL_string_to_int(y_34);
            c_15 = t;
            t = SSL_string_to_int(z_34);
            d_15 = t;
            t = (ATerm) ATmakeAppl(sym_Arg2_2, c_15, d_15);
            h_2 = t;
            t = SSLsetAnnotations(h_2, k_14);
          }
        }
      else
        {
          if(match_cons(t, sym_SOpt_2))
            {
              y_34 = ATgetArgument(t, 0);
              z_34 = ATgetArgument(t, 1);
              {
                ATerm n_15 = NULL,i_2 = NULL;
                t = SSLgetAnnotations(x_34);
                n_15 = t;
                t = (ATerm) ATmakeAppl(sym_SOpt_2, y_34, z_34);
                i_2 = t;
                t = SSLsetAnnotations(i_2, n_15);
              }
            }
          else
            {
              if(match_cons(t, sym_S_1))
                {
                  y_34 = ATgetArgument(t, 0);
                  {
                    ATerm j_16 = NULL,l_16 = NULL,k_2 = NULL,g_17 = NULL,n_17 = NULL,d_17 = NULL;
                    t = SSLgetAnnotations(x_34);
                    j_16 = t;
                    t = SSL_explode_string(y_34);
                    t = unquote_chars_2_0(p_3, v_3, t);
                    d_17 = t;
                    t = SSL_implode_string(d_17);
                    n_17 = t;
                    t = SSL_explode_string(n_17);
                    t = unescape_chars_1_0(d_4, t);
                    g_17 = t;
                    t = SSL_implode_string(g_17);
                    l_16 = t;
                    t = (ATerm) ATmakeAppl(sym_S_1, l_16);
                    k_2 = t;
                    t = SSLsetAnnotations(k_2, j_16);
                  }
                }
              else
                {
                  ATerm g_18 = NULL,j_18 = NULL,l_2 = NULL;
                  if(match_cons(t, sym_selector_2))
                    {
                      y_34 = ATgetArgument(t, 0);
                      z_34 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(x_34);
                  g_18 = t;
                  t = SSL_string_to_int(y_34);
                  j_18 = t;
                  t = (ATerm) ATmakeAppl(sym_selector_2, j_18, z_34);
                  l_2 = t;
                  t = SSLsetAnnotations(l_2, g_18);
                }
            }
        }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm v_71 (ATerm), ATerm t)
{
  ATerm e_4 (ATerm t)
  {
    t = topdown_1_0(v_71, t);
    return(t);
  }
  t = v_71(t);
  t = SRTS_all(e_4, t);
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm k_35 = NULL,l_35 = NULL;
  t = topdown_1_0(k_4, t);
  if(match_cons(t, sym_PP_Entry_2))
    {
      k_35 = ATgetArgument(t, 0);
      l_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_7(k_35, l_35, t);
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm i_22 = t;
  int j_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MakePPTerm_0_0(t);
      ;
      LocalPopChoice(j_22);
    }
  else
    {
      t = i_22;
    }
  return(t);
}
ATerm t_7 (ATerm x_47, ATerm t)
{
  t = x_47;
  t = reverse_acc_2_0(_id, f_4, t);
  t = map_1_0(g_4, t);
  return(t);
}
ATerm oncetd_1_0 (ATerm z_72 (ATerm), ATerm t)
{
  ATerm o_35 (ATerm t)
  {
    ATerm n_22 = t;
    int o_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_72(t);
        ;
        LocalPopChoice(o_22);
      }
    else
      {
        t = n_22;
        t = SRTS_one(o_35, t);
      }
    return(t);
  }
  t = o_35(t);
  return(t);
}
ATerm get_options_0_0 (ATerm t)
{
  ATerm p_35 = NULL,q_35 = NULL;
  t = term_s_22;
  p_35 = t;
  t = term_t_22;
  q_35 = t;
  t = term_u_22;
  t = d_8(p_35, q_35, t);
  return(t);
}
ATerm l_4 (ATerm t)
{
  if(!(match_cons(t, sym_Strict_0)))
    _fail(t);
  return(t);
}
ATerm type_failure_0_0 (ATerm t)
{
  ATerm v_22 = t;
  int x_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_35 = NULL,s_35 = NULL,t_35 = NULL;
      t = term_y_22;
      t = get_options_0_0(t);
      t = oncetd_1_0(l_4, t);
      t = term_e_17;
      s_35 = t;
      t = (ATerm) ATinsert(ATempty, term_z_22);
      t_35 = t;
      t = SSL_printnl(s_35, t_35);
      t = term_l_11;
      r_35 = t;
      t = SSL_exit(r_35);
      t = (ATerm) ATinsert(ATempty, term_z_22);
      ;
      LocalPopChoice(x_22);
    }
  else
    {
      t = v_22;
      {
        ATerm v_35 = NULL,w_35 = NULL;
        t = term_e_17;
        v_35 = t;
        t = (ATerm) ATinsert(ATempty, term_b_23);
        w_35 = t;
        t = SSL_printnl(v_35, w_35);
        t = (ATerm) ATinsert(ATempty, term_b_23);
      }
    }
  return(t);
}
ATerm p_36 (ATerm j_36, ATerm t)
{
  t = SSL_fclose(j_36);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm m_36 = NULL,n_36 = NULL;
  n_36 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_36 = ATgetArgument(t, 0);
      {
        ATerm d_23 = t;
        int e_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(m_36);
            ;
            LocalPopChoice(e_23);
          }
        else
          {
            t = d_23;
            t = p_36(n_36, t);
          }
      }
    }
  else
    {
      t = p_36(n_36, t);
    }
  return(t);
}
ATerm w_7 (ATerm k_46, ATerm t)
{
  t = SSL_read_term_from_stream(k_46);
  return(t);
}
ATerm x_7 (ATerm y_33, ATerm z_33, ATerm t)
{
  ATerm q_36 = NULL;
  t = SSL_fopen(y_33, z_33);
  q_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_36);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm r_36 = NULL;
  t = SSL_stdin_stream();
  r_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_36);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm s_36 = NULL;
  t = SSL_stdout_stream();
  s_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_36);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm t_36 = NULL;
  t = SSL_stderr_stream();
  t_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_36);
  return(t);
}
ATerm i_38 (ATerm a_37, ATerm t)
{
  ATerm b_37 = NULL;
  t = SSL_explode_term(a_37);
  if(match_cons(t, sym__2))
    {
      ATerm f_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm g_23 = ATgetArgument(t, 1);
        if(((ATgetType(g_23) == AT_LIST) && !(ATisEmpty(g_23))))
          {
            b_37 = ATgetFirst((ATermList) g_23);
            {
              ATerm h_23 = (ATerm) ATgetNext((ATermList) g_23);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = b_37;
  if(match_cons(t, sym_stderr_0))
    {
      t = b_37;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = b_37;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = b_37;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm k_38 (ATerm e_37, ATerm f_37, ATerm g_37, ATerm t)
{
  ATerm h_37 = NULL,i_37 = NULL,j_37 = NULL,o_37 = NULL,q_3 = NULL;
  t = SSLgetAnnotations(g_37);
  j_37 = t;
  t = e_37;
  if(match_cons(t, sym_Path_1))
    {
      o_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_37, f_37);
  q_3 = t;
  t = SSLsetAnnotations(q_3, j_37);
  if(match_cons(t, sym__2))
    {
      h_37 = ATgetArgument(t, 0);
      i_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_7(h_37, i_37, t);
  return(t);
}
ATerm m_38 (ATerm r_37, ATerm s_37, ATerm t_37, ATerm t)
{
  ATerm u_37 = NULL,x_37 = NULL,y_37 = NULL,b_38 = NULL,e_7 = NULL;
  t = SSLgetAnnotations(t_37);
  y_37 = t;
  t = SSL_is_string(r_37);
  b_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_38, s_37);
  e_7 = t;
  t = SSLsetAnnotations(e_7, y_37);
  if(match_cons(t, sym__2))
    {
      u_37 = ATgetArgument(t, 0);
      x_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_7(u_37, x_37, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm f_38 = NULL,g_38 = NULL,h_38 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_23 = ATgetArgument(t, 0);
      ATerm j_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  f_38 = t;
  if(match_cons(t, sym__2))
    {
      g_38 = ATgetArgument(t, 0);
      h_38 = ATgetArgument(t, 1);
      {
        ATerm l_23 = t;
        int m_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_38(f_38, t);
            ;
            LocalPopChoice(m_23);
          }
        else
          {
            t = l_23;
            {
              ATerm o_23 = t;
              int p_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_38(g_38, h_38, f_38, t);
                  ;
                  LocalPopChoice(p_23);
                }
              else
                {
                  t = o_23;
                  t = m_38(g_38, h_38, f_38, t);
                }
            }
          }
      }
    }
  else
    {
      t = i_38(f_38, t);
    }
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = term_q_23;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm o_38 = NULL,p_38 = NULL,q_38 = NULL;
  ATerm r_23 = t;
  int s_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_38 = NULL;
      r_38 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_38, term_t_23);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(s_23);
    }
  else
    {
      t = r_23;
      t = debug_1_0(m_4, t);
      _fail(t);
    }
  p_38 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_7(q_38, t);
  o_38 = t;
  t = p_38;
  t = fclose_0_0(t);
  t = o_38;
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm x_38 = NULL,y_38 = NULL,n_19 = NULL,o_19 = NULL;
  t = if_verbose1_1_0(r_4, t);
  t = ReadFromFile_0_0(t);
  y_38 = t;
  t = SSL_explode_term(y_38);
  if(match_cons(t, sym__2))
    {
      o_19 = ATgetArgument(t, 0);
      {
        ATerm u_23 = ATgetArgument(t, 1);
        if(((ATgetType(u_23) == AT_LIST) && !(ATisEmpty(u_23))))
          {
            n_19 = ATgetFirst((ATermList) u_23);
            {
              ATerm v_23 = (ATerm) ATgetNext((ATermList) u_23);
              if(((ATgetType(v_23) != AT_LIST) || !(ATisEmpty(v_23))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = o_19;
  {
    ATerm w_23 = t;
    int x_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("\"pp-tables-0\"", 0, ATtrue)))
          _fail(t);
        ;
        LocalPopChoice(x_23);
      }
    else
      {
        t = w_23;
        t = type_failure_0_0(t);
      }
    t = n_19;
    if(match_cons(t, sym_PP_Table_1))
      {
        x_38 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = t_7(x_38, t);
  }
  return(t);
}
ATerm r_4 (ATerm t)
{
  t = debug_1_0(s_4, t);
  return(t);
}
ATerm s_4 (ATerm t)
{
  t = term_y_23;
  return(t);
}
ATerm read_pp_tables_0_0 (ATerm t)
{
  ATerm v_38 = NULL,w_38 = NULL;
  v_38 = t;
  t = term_r_15;
  w_38 = t;
  t = SSL_table_create(w_38);
  t = v_38;
  t = map_1_0(q_4, t);
  return(t);
}
ATerm get_config_p_0_0 (ATerm t)
{
  ATerm a_24 = t;
  int b_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_24;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(b_24);
    }
  else
    {
      t = a_24;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm u_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = xtc_io_transform_1_0(x_4, t);
  return(t);
}
ATerm x_4 (ATerm t)
{
  t = trm2abox_0_0(t);
  {
    ATerm d_24 = t;
    int f_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_39 = NULL;
        t_39 = t;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = t_39;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm g_24 = ATgetFirst((ATermList) t);
                ATerm i_24 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = t_39;
          }
        LocalPopChoice(f_24);
        {
          ATerm b_40 = NULL;
          b_40 = t;
          t = (ATerm) ATmakeAppl(sym_HV_2, (ATerm)ATempty, b_40);
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
  ATerm r_39 = NULL;
  r_39 = t;
  t = get_config_p_0_0(t);
  t = reverse_acc_2_0(_id, u_4, t);
  t = read_pp_tables_0_0(t);
  t = r_39;
  t = xtc_io_1_0(w_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm e_40 = NULL,f_40 = NULL,h_40 = NULL,i_40 = NULL,j_40 = NULL;
  e_40 = t;
  t = term_e_10;
  t = whoami_0_0(t);
  f_40 = t;
  t = term_e_17;
  i_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_24), f_40), term_j_24);
  j_40 = t;
  t = SSL_printnl(i_40, j_40);
  t = term_l_11;
  h_40 = t;
  t = SSL_exit(h_40);
  t = e_40;
  return(t);
}
ATerm at_end_1_0 (ATerm v_76 (ATerm), ATerm t)
{
  ATerm t_41 (ATerm t)
  {
    ATerm q_41 = NULL,r_41 = NULL,s_41 = NULL;
    s_41 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_41 = ATgetFirst((ATermList) t);
        r_41 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm d_20 = NULL,j_20 = NULL,g_12 = NULL;
          t = SSLgetAnnotations(s_41);
          d_20 = t;
          t = r_41;
          t = t_41(t);
          j_20 = t;
          t = (ATerm) ATinsert(CheckATermList(j_20), q_41);
          g_12 = t;
          t = SSLsetAnnotations(g_12, d_20);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_41;
        t = v_76(t);
      }
    return(t);
  }
  t = t_41(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm m_40 = NULL,n_40 = NULL,p_40 = NULL;
  m_40 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_40;
    }
  else
    {
      ATerm y_4 (ATerm t)
      {
        t = not_null(p_40);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_40 = ATgetFirst((ATermList) t);
          if(((p_40 != NULL) && (p_40 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            p_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_40;
      t = at_end_1_0(y_4, t);
    }
  return(t);
}
ATerm k_42 (ATerm x_41, ATerm t)
{
  ATerm a_42 = NULL;
  t = SSL_explode_term(x_41);
  if(match_cons(t, sym__2))
    {
      ATerm l_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_24) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      a_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_42;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm c_42 = NULL,e_42 = NULL,f_42 = NULL;
  f_42 = t;
  if(match_cons(t, sym__2))
    {
      c_42 = ATgetArgument(t, 0);
      e_42 = ATgetArgument(t, 1);
      {
        ATerm n_24 = t;
        int o_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_5 (ATerm t)
            {
              t = e_42;
              return(t);
            }
            t = c_42;
            t = at_end_1_0(c_5, t);
            ;
            LocalPopChoice(o_24);
          }
        else
          {
            t = n_24;
            t = k_42(f_42, t);
          }
      }
    }
  else
    {
      t = k_42(f_42, t);
    }
  return(t);
}
ATerm y_7 (ATerm y_16, ATerm x_16, ATerm t)
{
  ATerm p_42 = NULL,q_42 = NULL,r_42 = NULL;
  t = y_16;
  {
    ATerm p_24 = t;
    int q_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(q_24);
      }
    else
      {
        t = p_24;
        t = (ATerm) ATempty;
      }
    q_42 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_16, q_42);
    t = conc_0_0(t);
    p_42 = t;
    t = term_r_24;
    r_42 = t;
    t = SSL_table_put(r_42, y_16, p_42);
    t = (ATerm) ATmakeAppl(sym__3, term_r_24, y_16, p_42);
  }
  return(t);
}
ATerm e_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm s_42 = NULL,t_42 = NULL,w_42 = NULL;
  s_42 = t;
  t = term_c_24;
  t_42 = t;
  t = (ATerm) ATinsert(ATempty, s_42);
  w_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_24, (ATerm) ATinsert(ATempty, s_42));
  t = y_7(t_42, w_42, t);
  t = s_42;
  return(t);
}
ATerm g_5 (ATerm t)
{
  t = term_s_24;
  return(t);
}
ATerm pp_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_5, f_5, g_5, t);
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm y_42 = NULL;
  y_42 = t;
  if(match_string(t, "-k"))
    {
      t = y_42;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = y_42;
    }
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm z_42 = NULL,a_43 = NULL,b_43 = NULL;
  z_42 = t;
  t = SSL_string_to_int(z_42);
  a_43 = t;
  t = term_a_25;
  b_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_25, a_43);
  t = g_8(b_43, a_43, t);
  t = z_42;
  return(t);
}
ATerm m_5 (ATerm t)
{
  t = term_b_25;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_5, k_5, m_5, t);
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm f_43 = NULL;
  f_43 = t;
  if(match_string(t, "-S"))
    {
      t = f_43;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = f_43;
    }
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm g_43 = NULL,j_43 = NULL;
  t = term_k_25;
  g_43 = t;
  t = term_m_11;
  j_43 = t;
  t = term_m_25;
  t = g_8(g_43, j_43, t);
  t = term_r_25;
  return(t);
}
ATerm p_5 (ATerm t)
{
  t = term_s_25;
  return(t);
}
ATerm s_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm k_43 = NULL,l_43 = NULL,n_43 = NULL;
  k_43 = t;
  t = SSL_string_to_int(k_43);
  l_43 = t;
  t = term_k_25;
  n_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_25, l_43);
  t = g_8(n_43, l_43, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, k_43);
  return(t);
}
ATerm x_5 (ATerm t)
{
  t = term_t_25;
  return(t);
}
ATerm y_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm o_43 = NULL,p_43 = NULL;
  t = term_u_25;
  o_43 = t;
  t = term_e_10;
  p_43 = t;
  t = term_w_25;
  t = g_8(o_43, p_43, t);
  t = term_x_25;
  return(t);
}
ATerm d_6 (ATerm t)
{
  t = term_c_26;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm d_26 = t;
  int e_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_5, o_5, p_5, t);
      ;
      LocalPopChoice(e_26);
    }
  else
    {
      t = d_26;
      {
        ATerm f_26 = t;
        int h_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(s_5, w_5, x_5, t);
            ;
            LocalPopChoice(h_26);
          }
        else
          {
            t = f_26;
            t = Option_3_0(y_5, b_6, d_6, t);
          }
      }
    }
  return(t);
}
ATerm g_8 (ATerm s_16, ATerm t_16, ATerm t)
{
  ATerm q_43 = NULL;
  t = term_r_24;
  q_43 = t;
  t = SSL_table_put(q_43, s_16, t_16);
  t = (ATerm) ATmakeAppl(sym__3, term_r_24, s_16, t_16);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm t_43 = NULL,u_43 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_43 = NULL,w_43 = NULL,x_43 = NULL;
      t = term_e_10;
      t = h_0(t);
      v_43 = t;
      t = term_i_26;
      w_43 = t;
      t = term_j_26;
      x_43 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_26, term_j_26, v_43);
      t = e_8(w_43, x_43, v_43, t);
      _fail(t);
    }
  else
    {
      ATerm c_44 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_43 = ATgetFirst((ATermList) t);
          u_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_43;
      t = d_0(t);
      t = term_e_10;
      t = g_0(t);
      c_44 = t;
      t = (ATerm) ATinsert(CheckATermList(u_43), c_44);
    }
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm e_44 = NULL;
  e_44 = t;
  if(match_string(t, "-o"))
    {
      t = e_44;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = e_44;
    }
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm f_44 = NULL,g_44 = NULL;
  f_44 = t;
  t = term_l_20;
  g_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_20, f_44);
  t = g_8(g_44, f_44, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, f_44);
  return(t);
}
ATerm k_6 (ATerm t)
{
  t = term_k_26;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_6, i_6, k_6, t);
  return(t);
}
ATerm e_8 (ATerm k_19, ATerm l_19, ATerm j_19, ATerm t)
{
  ATerm i_44 = NULL,j_44 = NULL,k_44 = NULL;
  i_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_19, l_19);
  {
    ATerm l_26 = t;
    int m_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_26 = ATgetArgument(t, 0);
            ATerm o_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_19, l_19);
        t = d_8(k_19, l_19, t);
        ;
        LocalPopChoice(m_26);
      }
    else
      {
        t = l_26;
        t = (ATerm) ATempty;
      }
    j_44 = t;
    t = (ATerm) ATinsert(CheckATermList(j_44), j_19);
    k_44 = t;
    t = SSL_table_put(k_19, l_19, k_44);
    t = i_44;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm s_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_44 = NULL,x_44 = NULL,a_45 = NULL;
      t = term_e_10;
      t = m_0(t);
      w_44 = t;
      t = term_i_26;
      x_44 = t;
      t = term_j_26;
      a_45 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_26, term_j_26, w_44);
      t = e_8(x_44, a_45, w_44, t);
      _fail(t);
    }
  else
    {
      ATerm e_45 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_44 = ATgetFirst((ATermList) t);
          t_44 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_44;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_44 = ATgetFirst((ATermList) t);
          v_44 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_44;
      t = k_0(t);
      t = u_44;
      t = l_0(t);
      e_45 = t;
      t = (ATerm) ATinsert(CheckATermList(v_44), e_45);
    }
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm h_45 = NULL;
  h_45 = t;
  if(match_string(t, "-i"))
    {
      t = h_45;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = h_45;
    }
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm i_45 = NULL,j_45 = NULL;
  i_45 = t;
  t = term_p_20;
  j_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_20, i_45);
  t = g_8(j_45, i_45, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, i_45);
  return(t);
}
ATerm o_6 (ATerm t)
{
  t = term_q_26;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_6, n_6, o_6, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm l_45 = NULL,m_45 = NULL,o_45 = NULL,p_45 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_10;
  t = whoami_0_0(t);
  l_45 = t;
  t = term_e_17;
  o_45 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_s_26), l_45);
  p_45 = t;
  t = SSL_printnl(o_45, p_45);
  t = term_l_11;
  m_45 = t;
  t = SSL_exit(m_45);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_t_26;
  t = get_config_0_0(t);
  return(t);
}
ATerm z_7 (ATerm n_31, ATerm o_31, ATerm t)
{
  ATerm u_26 = t;
  int v_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(n_31, o_31);
      ;
      LocalPopChoice(v_26);
    }
  else
    {
      t = u_26;
      t = SSL_addr(n_31, o_31);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm x_82 (ATerm), ATerm y_82 (ATerm), ATerm t)
{
  ATerm s_45 = NULL,t_45 = NULL,a_46 = NULL;
  s_45 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_45;
      t = x_82(t);
    }
  else
    {
      ATerm d_46 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_45 = ATgetFirst((ATermList) t);
          a_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_46;
      t = foldr_2_0(x_82, y_82, t);
      d_46 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_45, d_46);
      t = y_82(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm t_6 (ATerm t)
{
  t = term_m_11;
  return(t);
}
ATerm z_6 (ATerm t)
{
  ATerm k_21 = NULL,l_21 = NULL;
  if(match_cons(t, sym__2))
    {
      k_21 = ATgetArgument(t, 0);
      l_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_7(k_21, l_21, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm j_46 = NULL,w_20 = NULL,y_20 = NULL;
  t = times_0_0(t);
  y_20 = t;
  t = SSL_explode_term(y_20);
  if(match_cons(t, sym__2))
    {
      ATerm w_26 = ATgetArgument(t, 0);
      w_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_20;
  t = foldr_2_0(t_6, z_6, t);
  j_46 = t;
  t = SSL_TicksToSeconds(j_46);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm a_47 = NULL,b_47 = NULL,d_47 = NULL;
  a_47 = t;
  if(match_cons(t, sym__2))
    {
      b_47 = ATgetArgument(t, 0);
      d_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_26 = t;
    int y_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_47;
        if((b_47 != t))
          {
            _fail(t);
          }
        t = a_47;
        ;
        LocalPopChoice(y_26);
      }
    else
      {
        t = x_26;
        t = (ATerm) ATmakeAppl(sym__2, b_47, d_47);
        {
          ATerm z_26 = t;
          int b_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(b_47, d_47);
              ;
              LocalPopChoice(b_27);
            }
          else
            {
              t = z_26;
              t = SSL_gtr(b_47, d_47);
            }
          t = (ATerm) ATmakeAppl(sym__2, b_47, d_47);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm a_69 (ATerm), ATerm t)
{
  ATerm h_47 = NULL;
  h_47 = t;
  {
    ATerm c_27 = t;
    int d_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_47 = NULL;
        t = term_k_25;
        t = get_config_0_0(t);
        j_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_47, term_l_11);
        t = geq_0_0(t);
        t = h_47;
        t = a_69(t);
        ;
        LocalPopChoice(d_27);
      }
    else
      {
        t = c_27;
        t = h_47;
      }
  }
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm l_47 = NULL,m_47 = NULL,q_47 = NULL,t_47 = NULL;
  t = run_time_0_0(t);
  l_47 = t;
  t = term_e_10;
  t = whoami_0_0(t);
  m_47 = t;
  t = term_e_17;
  q_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_27), l_47), term_e_27), m_47);
  t_47 = t;
  t = SSL_printnl(q_47, t_47);
  t = (ATerm) ATmakeAppl(sym__2, term_e_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_27), l_47), term_e_27), m_47));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(c_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm u_47 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_11;
  u_47 = t;
  t = SSL_exit(u_47);
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm b_49 = NULL,d_49 = NULL;
  d_49 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = d_49;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          b_49 = ATgetArgument(t, 0);
          {
            ATerm w_22 = NULL,i_12 = NULL;
            t = SSLgetAnnotations(d_49);
            w_22 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, b_49);
            i_12 = t;
            t = SSLsetAnnotations(i_12, w_22);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = d_49;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm l_88 (ATerm), ATerm t)
{
  ATerm g_27 = t;
  int h_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_27;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(h_27);
    }
  else
    {
      t = g_27;
      t = fetch_1_0(d_7, t);
    }
  t = l_88(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm j_49 = NULL,k_49 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_49 = ATgetFirst((ATermList) t);
      k_49 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_49 = NULL,t_49 = NULL;
        ATerm m_7 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(r_49)), not_null(t_49));
          return(t);
        }
        t = k_49;
        t = j_0(t);
        if(((r_49 != NULL) && (r_49 != t)))
          _fail(t);
        else
          r_49 = t;
        t = j_49;
        t = i_0(t);
        if(((t_49 != NULL) && (t_49 != t)))
          _fail(t);
        else
          t_49 = t;
        t = k_49;
        t = reverse_acc_2_0(i_0, m_7, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_e_10;
      t = j_0(t);
    }
  return(t);
}
ATerm u_7 (ATerm t)
{
  ATerm c_50 = NULL,d_50 = NULL,h_50 = NULL,k_12 = NULL;
  h_50 = t;
  if(match_cons(t, sym_Program_1))
    {
      d_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_50);
  c_50 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, d_50);
  k_12 = t;
  t = SSLsetAnnotations(k_12, c_50);
  return(t);
}
ATerm v_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm a_8 (ATerm t)
{
  ATerm m_50 = NULL;
  m_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_50), term_j_27);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm y_49 = NULL,b_50 = NULL;
  ATerm k_27 = t;
  int l_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_26;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(l_27);
    }
  else
    {
      t = k_27;
      t = fetch_1_0(u_7, t);
    }
  t = term_n_27;
  t = echo_0_0(t);
  t = term_i_26;
  y_49 = t;
  t = term_j_26;
  b_50 = t;
  t = term_p_27;
  t = d_8(y_49, b_50, t);
  t = reverse_acc_2_0(_id, v_7, t);
  t = map_1_0(a_8, t);
  return(t);
}
ATerm fetch_1_0 (ATerm p_76 (ATerm), ATerm t)
{
  ATerm l_51 (ATerm t)
  {
    ATerm i_51 = NULL,j_51 = NULL,k_51 = NULL;
    i_51 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_51 = ATgetFirst((ATermList) t);
        k_51 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm q_27 = t;
      int s_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_23 = NULL,n_23 = NULL,w_12 = NULL;
          t = SSLgetAnnotations(i_51);
          k_23 = t;
          t = j_51;
          t = p_76(t);
          n_23 = t;
          t = (ATerm) ATinsert(CheckATermList(k_51), n_23);
          w_12 = t;
          t = SSLsetAnnotations(w_12, k_23);
          ;
          LocalPopChoice(s_27);
        }
      else
        {
          t = q_27;
          {
            ATerm z_23 = NULL,h_24 = NULL,x_12 = NULL;
            t = SSLgetAnnotations(i_51);
            z_23 = t;
            t = k_51;
            t = l_51(t);
            h_24 = t;
            t = (ATerm) ATinsert(CheckATermList(h_24), j_51);
            x_12 = t;
            t = SSLsetAnnotations(x_12, z_23);
          }
        }
    }
    return(t);
  }
  t = l_51(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm p_51 = NULL,q_51 = NULL,r_51 = NULL;
  p_51 = t;
  {
    ATerm t_27 = t;
    int u_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = p_51;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm v_27 = ATgetFirst((ATermList) t);
                ATerm w_27 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = p_51;
          }
        ;
        LocalPopChoice(u_27);
      }
    else
      {
        t = t_27;
        t = (ATerm) ATinsert(ATempty, p_51);
      }
    q_51 = t;
    t = term_m_20;
    r_51 = t;
    t = SSL_printnl(r_51, q_51);
    t = p_51;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_t_26;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm c_8 (ATerm t_38, ATerm u_38, ATerm t)
{
  t = SSL_strcat(t_38, u_38);
  return(t);
}
ATerm debug_1_0 (ATerm e_92 (ATerm), ATerm t)
{
  ATerm v_51 = NULL,w_51 = NULL,x_51 = NULL,y_51 = NULL;
  v_51 = t;
  t = e_92(t);
  w_51 = t;
  t = term_e_17;
  x_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_51), w_51);
  y_51 = t;
  t = SSL_printnl(x_51, y_51);
  t = v_51;
  return(t);
}
ATerm map_1_0 (ATerm f_76 (ATerm), ATerm t)
{
  ATerm n_52 (ATerm t)
  {
    ATerm k_52 = NULL,l_52 = NULL,m_52 = NULL;
    k_52 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_52;
      }
    else
      {
        ATerm u_24 = NULL,c_25 = NULL,f_25 = NULL,c_13 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_52 = ATgetFirst((ATermList) t);
            m_52 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_52);
        u_24 = t;
        t = l_52;
        t = f_76(t);
        c_25 = t;
        t = m_52;
        t = n_52(t);
        f_25 = t;
        t = (ATerm) ATinsert(CheckATermList(f_25), c_25);
        c_13 = t;
        t = SSLsetAnnotations(c_13, u_24);
      }
    return(t);
  }
  t = n_52(t);
  return(t);
}
ATerm f_8 (ATerm t)
{
  ATerm x_27 = t;
  int y_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(y_27);
    }
  else
    {
      t = x_27;
    }
  return(t);
}
ATerm u_8 (ATerm t)
{
  t = term_z_27;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm a_28 = t;
  int b_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_52 = NULL;
      v_52 = t;
      t = SSL_is_string(v_52);
      ;
      LocalPopChoice(b_28);
    }
  else
    {
      t = a_28;
      {
        ATerm c_28 = t;
        int d_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(f_8, t);
            ;
            LocalPopChoice(d_28);
          }
        else
          {
            t = c_28;
            {
              ATerm b_53 = NULL,c_53 = NULL,d_53 = NULL;
              b_53 = t;
              if(match_cons(t, sym_Path_1))
                {
                  c_53 = ATgetArgument(t, 0);
                  t = c_53;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      c_53 = ATgetArgument(t, 0);
                      t = c_53;
                      {
                        ATerm g_28 = t;
                        int h_28 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(h_28);
                          }
                        else
                          {
                            t = g_28;
                            t = debug_1_0(u_8, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm h_53 = NULL,i_53 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          c_53 = ATgetArgument(t, 0);
                          d_53 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = c_53;
                      t = eval_config_0_0(t);
                      h_53 = t;
                      t = d_53;
                      t = eval_config_0_0(t);
                      i_53 = t;
                      t = (ATerm) ATmakeAppl(sym__2, h_53, i_53);
                      t = c_8(h_53, i_53, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm d_8 (ATerm b_21, ATerm c_21, ATerm t)
{
  t = SSL_table_get(b_21, c_21);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm m_53 = NULL,n_53 = NULL;
  m_53 = t;
  t = term_r_24;
  n_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_24, m_53);
  t = d_8(n_53, m_53, t);
  {
    ATerm i_28 = t;
    int j_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_53 = NULL,p_53 = NULL;
        t = eval_config_0_0(t);
        o_53 = t;
        t = term_r_24;
        p_53 = t;
        t = SSL_table_put(p_53, m_53, o_53);
        t = o_53;
        ;
        LocalPopChoice(j_28);
      }
    else
      {
        t = i_28;
      }
  }
  return(t);
}
ATerm v_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_8 (ATerm t)
{
  ATerm s_53 = NULL,t_53 = NULL;
  t = term_k_28;
  s_53 = t;
  t = term_e_10;
  t_53 = t;
  t = term_l_28;
  t = g_8(s_53, t_53, t);
  return(t);
}
ATerm z_8 (ATerm t)
{
  t = term_m_28;
  return(t);
}
ATerm a_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_9 (ATerm t)
{
  ATerm u_53 = NULL,v_53 = NULL,w_53 = NULL,x_53 = NULL;
  t = term_k_28;
  w_53 = t;
  t = term_e_10;
  x_53 = t;
  t = term_l_28;
  t = g_8(w_53, x_53, t);
  t = term_n_28;
  u_53 = t;
  t = term_e_10;
  v_53 = t;
  t = term_o_28;
  t = g_8(u_53, v_53, t);
  t = term_p_28;
  return(t);
}
ATerm d_9 (ATerm t)
{
  t = term_w_28;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm x_28 = t;
  int y_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_8, x_8, z_8, t);
      ;
      LocalPopChoice(y_28);
    }
  else
    {
      t = x_28;
      t = Option_3_0(a_9, b_9, d_9, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm k_59 (ATerm), ATerm l_59 (ATerm), ATerm t)
{
  ATerm y_53 = NULL,z_53 = NULL,a_54 = NULL,b_54 = NULL,c_54 = NULL,d_54 = NULL,f_13 = NULL;
  d_54 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_53 = ATgetFirst((ATermList) t);
      a_54 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_54);
  y_53 = t;
  t = z_53;
  t = k_59(t);
  b_54 = t;
  t = a_54;
  t = l_59(t);
  c_54 = t;
  t = (ATerm) ATinsert(CheckATermList(c_54), b_54);
  f_13 = t;
  t = SSLsetAnnotations(f_13, y_53);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm j_90 (ATerm), ATerm t)
{
  ATerm i_54 = NULL,j_54 = NULL,k_54 = NULL,l_54 = NULL,n_54 = NULL,o_54 = NULL,h_13 = NULL;
  i_54 = t;
  {
    ATerm z_28 = t;
    int a_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_29;
        t = j_90(t);
        ;
        LocalPopChoice(a_29);
      }
    else
      {
        t = z_28;
      }
    t = i_54;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_54 = ATgetFirst((ATermList) t);
        l_54 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(i_54);
    j_54 = t;
    t = term_t_26;
    o_54 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_t_26, k_54);
    t = g_8(o_54, k_54, t);
    t = l_54;
    {
      ATerm y_54 (ATerm t)
      {
        ATerm c_29 = t;
        int d_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_29 = t;
            int f_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_54 = NULL;
                r_54 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = r_54;
                ;
                LocalPopChoice(f_29);
              }
            else
              {
                t = e_29;
                t = j_90(t);
                t = Cons_2_0(_id, y_54, t);
              }
            ;
            LocalPopChoice(d_29);
          }
        else
          {
            t = c_29;
            {
              ATerm u_54 = NULL,v_54 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  u_54 = ATgetFirst((ATermList) t);
                  v_54 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(v_54), (ATerm) ATmakeAppl(sym_Undefined_1, u_54));
            }
          }
        return(t);
      }
      t = y_54(t);
      n_54 = t;
      t = (ATerm) ATinsert(CheckATermList(n_54), (ATerm) ATmakeAppl(sym_Program_1, k_54));
      h_13 = t;
      t = SSLsetAnnotations(h_13, j_54);
    }
  }
  return(t);
}
ATerm f_9 (ATerm t)
{
  ATerm k_55 = NULL;
  k_55 = t;
  if(match_string(t, "--help"))
    {
      t = k_55;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = k_55;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = k_55;
        }
    }
  return(t);
}
ATerm h_9 (ATerm t)
{
  ATerm l_55 = NULL,m_55 = NULL;
  t = term_i_27;
  l_55 = t;
  t = term_e_10;
  m_55 = t;
  t = term_g_29;
  t = g_8(l_55, m_55, t);
  t = term_h_29;
  return(t);
}
ATerm i_9 (ATerm t)
{
  t = term_i_29;
  return(t);
}
ATerm l_9 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm i_90 (ATerm), ATerm t)
{
  ATerm d_55 = NULL,e_55 = NULL,f_55 = NULL,g_55 = NULL,h_55 = NULL,i_55 = NULL,j_55 = NULL;
  f_55 = t;
  t = term_i_26;
  h_55 = t;
  t = term_j_26;
  i_55 = t;
  t = (ATerm) ATempty;
  j_55 = t;
  t = SSL_table_put(h_55, i_55, j_55);
  t = f_55;
  {
    ATerm e_9 (ATerm t)
    {
      ATerm j_29 = t;
      int k_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_90(t);
          ;
          LocalPopChoice(k_29);
        }
      else
        {
          t = j_29;
          {
            ATerm l_29 = t;
            int m_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(f_9, h_9, i_9, t);
                ;
                LocalPopChoice(m_29);
              }
            else
              {
                t = l_29;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(e_9, t);
    {
      ATerm n_29 = t;
      int o_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_55 = NULL;
          t_55 = t;
          {
            ATerm p_29 = t;
            int q_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_26 = NULL;
                t = t_55;
                {
                  ATerm r_29 = t;
                  int s_29 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_i_27;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(s_29);
                    }
                  else
                    {
                      t = r_29;
                      t = fetch_1_0(l_9, t);
                    }
                  t = t_55;
                  t = default_system_usage_0_0(t);
                  t = term_m_11;
                  r_26 = t;
                  t = SSL_exit(r_26);
                }
                ;
                LocalPopChoice(q_29);
              }
            else
              {
                t = p_29;
                {
                  ATerm a_27 = NULL;
                  t = term_k_28;
                  t = get_config_0_0(t);
                  t = t_55;
                  t = default_system_about_0_0(t);
                  t = term_m_11;
                  a_27 = t;
                  t = SSL_exit(a_27);
                }
              }
          }
          ;
          LocalPopChoice(o_29);
        }
      else
        {
          t = n_29;
          {
            ATerm t_29 = t;
            int u_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_55 = NULL,v_55 = NULL,w_55 = NULL;
                ATerm n_9 (ATerm t)
                {
                  ATerm x_55 = NULL,y_55 = NULL,z_55 = NULL,o_16 = NULL;
                  z_55 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      y_55 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(z_55);
                  x_55 = t;
                  t = y_55;
                  if(((d_55 != NULL) && (d_55 != t)))
                    _fail(t);
                  else
                    d_55 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, y_55);
                  o_16 = t;
                  t = SSLsetAnnotations(o_16, x_55);
                  return(t);
                }
                t = fetch_1_0(n_9, t);
                t = term_e_17;
                v_55 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_55)), term_w_29);
                w_55 = t;
                t = SSL_printnl(v_55, w_55);
                t = (ATerm) ATmakeAppl(sym__2, term_e_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_55)), term_w_29));
                t = default_system_usage_0_0(t);
                t = term_l_11;
                u_55 = t;
                t = SSL_exit(u_55);
                ;
                LocalPopChoice(u_29);
              }
            else
              {
                t = t_29;
              }
          }
        }
      e_55 = t;
      t = term_i_26;
      g_55 = t;
      t = SSL_table_destroy(g_55);
      t = e_55;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm n_88 (ATerm), ATerm o_88 (ATerm), ATerm p_88 (ATerm), ATerm q_88 (ATerm), ATerm t)
{
  ATerm e_56 = NULL,f_56 = NULL,g_56 = NULL,h_56 = NULL;
  t = parse_options_1_0(n_88, t);
  e_56 = t;
  t = term_s_22;
  h_56 = t;
  t = SSL_table_create(h_56);
  t = term_s_22;
  f_56 = t;
  t = term_t_22;
  g_56 = t;
  t = SSL_table_put(f_56, g_56, e_56);
  t = e_56;
  t = p_88(t);
  {
    ATerm x_29 = t;
    int z_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(o_88, t);
        ;
        LocalPopChoice(z_29);
      }
    else
      {
        t = x_29;
        {
          ATerm c_30 = t;
          int d_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_88(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(d_30);
            }
          else
            {
              t = c_30;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm q_9 (ATerm t)
{
  ATerm e_30 = t;
  int f_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(f_30);
    }
  else
    {
      t = e_30;
      {
        ATerm g_30 = t;
        int h_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(h_30);
          }
        else
          {
            t = g_30;
            {
              ATerm i_30 = t;
              int j_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(r_9, v_9, w_9, t);
                  ;
                  LocalPopChoice(j_30);
                }
              else
                {
                  t = i_30;
                  {
                    ATerm k_30 = t;
                    int l_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(l_30);
                      }
                    else
                      {
                        t = k_30;
                        {
                          ATerm m_30 = t;
                          int n_30 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = keep_option_0_0(t);
                              ;
                              LocalPopChoice(n_30);
                            }
                          else
                            {
                              t = m_30;
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
ATerm r_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_9 (ATerm t)
{
  ATerm j_56 = NULL,k_56 = NULL;
  t = term_o_30;
  j_56 = t;
  t = term_e_10;
  k_56 = t;
  t = term_p_30;
  t = g_8(j_56, k_56, t);
  t = term_q_30;
  return(t);
}
ATerm w_9 (ATerm t)
{
  t = term_r_30;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(q_9, default_usage_0_0, _id, ast2abox_0_0, t);
  return(t);
}
