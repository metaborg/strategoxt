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
ATerm term_j_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_k_29;
ATerm term_r_28;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_k_28;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_c_27;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_r_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_k_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_t_23;
ATerm term_q_23;
ATerm term_l_23;
ATerm term_h_23;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_i_22;
ATerm term_g_22;
ATerm term_e_22;
ATerm term_f_21;
ATerm term_a_21;
ATerm term_x_20;
ATerm term_u_20;
ATerm term_r_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_z_19;
ATerm term_y_17;
ATerm term_v_17;
ATerm term_s_17;
ATerm term_n_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_e_17;
ATerm term_z_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_d_10;
void init_constant_terms (void)
{
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("obtaining: ", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("No pp entry found for: ", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: cannot rewrite to box: ", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym__2, term_v_17, term_e_17);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym__2, term_e_22, term_g_22);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym__2, term_p_24, term_j_11);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_11);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(sym__2, term_w_24, term_d_10);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(sym__2, term_e_25, term_f_25);
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(sym__2, term_p_27, term_d_10);
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(sym__2, term_t_27, term_d_10);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(sym__2, term_j_26, term_d_10);
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(sym__2, term_g_30, term_d_10);
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm flat_list_0_0 (ATerm);
ATerm Instantiate_1_0 (ATerm l_0 (ATerm), ATerm);
ATerm bottomup_1_0 (ATerm a_85 (ATerm), ATerm);
ATerm p_6 (ATerm f_29, ATerm g_29, ATerm e_29, ATerm);
ATerm c_6 (ATerm o_4, ATerm p_4, ATerm r_4, ATerm);
ATerm instantiate_sep_list_1_0 (ATerm e_107 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm d_96 (ATerm), ATerm e_96 (ATerm), ATerm f_96 (ATerm), ATerm);
ATerm v_0 (ATerm);
ATerm collect_p__1_0 (ATerm i_113 (ATerm), ATerm);
ATerm q_6 (ATerm r_45, ATerm s_45, ATerm);
ATerm r_6 (ATerm v_81 (ATerm), ATerm h_27, ATerm i_27, ATerm);
ATerm a_1 (ATerm);
ATerm b_1 (ATerm);
ATerm c_1 (ATerm);
ATerm d_1 (ATerm);
ATerm s_6 (ATerm w_28, ATerm y_28, ATerm v_28, ATerm);
ATerm symbol2abox6_0_0 (ATerm);
ATerm symbol2abox5_0_0 (ATerm);
ATerm u_6 (ATerm c_28, ATerm d_28, ATerm f_28, ATerm e_28, ATerm);
ATerm v_6 (ATerm x_27, ATerm y_27, ATerm b_28, ATerm a_28, ATerm z_27, ATerm);
ATerm x_6 (ATerm z_44, ATerm a_45, ATerm);
ATerm y_6 (ATerm p_38, ATerm n_38, ATerm o_38, ATerm);
ATerm repeat_1_0 (ATerm g_99 (ATerm), ATerm);
ATerm u_1 (ATerm);
ATerm index_0_0 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm b_7 (ATerm o_27, ATerm n_27, ATerm s_27, ATerm);
ATerm genzip_4_0 (ATerm m_91 (ATerm), ATerm n_91 (ATerm), ATerm o_91 (ATerm), ATerm p_91 (ATerm), ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm nzip_1_0 (ATerm y_91 (ATerm), ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm pp_table_get_0_0 (ATerm);
ATerm j_2 (ATerm);
ATerm trm2abox_appl_0_0 (ATerm);
ATerm trm2abox_list_0_0 (ATerm);
ATerm trm2abox_0_0 (ATerm);
ATerm f_7 (ATerm i_59, ATerm j_59, ATerm);
ATerm g_7 (ATerm e_105 (ATerm), ATerm d_583, ATerm q_59, ATerm);
ATerm h_7 (ATerm i_100 (ATerm), ATerm k_52, ATerm i_52, ATerm);
ATerm b_19 (ATerm r_18, ATerm);
ATerm c_19 (ATerm t_18, ATerm u_18, ATerm v_18, ATerm);
ATerm t_2 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm u_2 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm v_2 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm i_7 (ATerm w_46, ATerm x_46, ATerm);
ATerm read_from_0_0 (ATerm);
ATerm xtc_io_transform_1_0 (ATerm t_84 (ATerm), ATerm);
ATerm j_7 (ATerm q_30, ATerm r_30, ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm k_7 (ATerm v_32, ATerm w_32, ATerm);
ATerm end_scope_1_0 (ATerm f_100 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm g_88 (ATerm), ATerm h_88 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm e_100 (ATerm), ATerm);
ATerm x_2 (ATerm);
ATerm b_3 (ATerm);
ATerm d_3 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm u_83 (ATerm), ATerm);
ATerm g_3 (ATerm);
ATerm xtc_io_1_0 (ATerm v_83 (ATerm), ATerm);
ATerm h_3 (ATerm);
ATerm path_to_string_0_0 (ATerm);
ATerm i_3 (ATerm);
ATerm mk_key_0_0 (ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm l_7 (ATerm c_61, ATerm d_61, ATerm);
ATerm unescape_chars_0_0 (ATerm);
ATerm at_last_1_0 (ATerm k_90 (ATerm), ATerm);
ATerm last_0_0 (ATerm);
ATerm l_3 (ATerm);
ATerm unquote_chars_1_0 (ATerm r_98 (ATerm), ATerm);
ATerm o_3 (ATerm);
ATerm MakePPTerm_0_0 (ATerm);
ATerm topdown_1_0 (ATerm z_84 (ATerm), ATerm);
ATerm d_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm t_7 (ATerm b_61, ATerm);
ATerm oncetd_1_0 (ATerm d_86 (ATerm), ATerm);
ATerm get_options_0_0 (ATerm);
ATerm h_4 (ATerm);
ATerm type_failure_0_0 (ATerm);
ATerm d_37 (ATerm u_36, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm w_7 (ATerm o_59, ATerm);
ATerm x_7 (ATerm e_47, ATerm f_47, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm k_39 (ATerm v_37, ATerm);
ATerm n_39 (ATerm z_37, ATerm a_38, ATerm b_38, ATerm);
ATerm o_39 (ATerm r_38, ATerm s_38, ATerm t_38, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm l_4 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm q_4 (ATerm);
ATerm read_pp_tables_0_0 (ATerm);
ATerm get_config_p_0_0 (ATerm);
ATerm s_4 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm ast2abox_0_0 (ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm at_end_1_0 (ATerm z_89 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm g_42 (ATerm v_41, ATerm);
ATerm conc_0_0 (ATerm);
ATerm y_7 (ATerm e_30, ATerm d_30, ATerm);
ATerm z_4 (ATerm);
ATerm c_5 (ATerm);
ATerm f_5 (ATerm);
ATerm pp_options_0_0 (ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm k_5 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm l_5 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm s_5 (ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm z_5 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm g_8 (ATerm y_29, ATerm z_29, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm b_6 (ATerm);
ATerm e_6 (ATerm);
ATerm h_6 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm e_8 (ATerm q_32, ATerm r_32, ATerm p_32, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm i_6 (ATerm);
ATerm k_6 (ATerm);
ATerm m_6 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm z_7 (ATerm t_44, ATerm u_44, ATerm);
ATerm foldr_2_0 (ATerm b_96 (ATerm), ATerm c_96 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm n_6 (ATerm);
ATerm t_6 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm e_82 (ATerm), ATerm);
ATerm w_6 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm z_6 (ATerm);
ATerm need_help_1_0 (ATerm j_101 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm d_7 (ATerm);
ATerm m_7 (ATerm);
ATerm n_7 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm t_89 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm c_8 (ATerm x_51, ATerm y_51, ATerm);
ATerm debug_1_0 (ATerm c_105 (ATerm), ATerm);
ATerm map_1_0 (ATerm j_89 (ATerm), ATerm);
ATerm u_7 (ATerm);
ATerm a_8 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm d_8 (ATerm h_34, ATerm i_34, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm f_8 (ATerm);
ATerm u_8 (ATerm);
ATerm v_8 (ATerm);
ATerm y_8 (ATerm);
ATerm z_8 (ATerm);
ATerm a_9 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm o_72 (ATerm), ATerm p_72 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm h_103 (ATerm), ATerm);
ATerm e_9 (ATerm);
ATerm f_9 (ATerm);
ATerm g_9 (ATerm);
ATerm i_9 (ATerm);
ATerm parse_options_1_0 (ATerm g_103 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm l_101 (ATerm), ATerm m_101 (ATerm), ATerm n_101 (ATerm), ATerm o_101 (ATerm), ATerm);
ATerm m_9 (ATerm);
ATerm o_9 (ATerm);
ATerm q_9 (ATerm);
ATerm r_9 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm n_2 = NULL,o_2 = NULL,p_2 = NULL;
  n_2 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_2;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_2 = ATgetFirst((ATermList) t);
          p_2 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm r_2 = t;
        int v_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_0 = NULL,t_0 = NULL,n_0 = NULL;
            t = SSLgetAnnotations(n_2);
            o_0 = t;
            t = o_2;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = p_2;
            t = flat_list_0_0(t);
            t_0 = t;
            t = (ATerm) ATinsert(CheckATermList(t_0), o_2);
            n_0 = t;
            t = SSLsetAnnotations(n_0, o_0);
            ;
            LocalPopChoice(v_9);
          }
        else
          {
            t = r_2;
            {
              ATerm x_9 = t;
              int y_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_1 = NULL,q_1 = NULL,t_1 = NULL,a_2 = NULL,p_0 = NULL;
                  t = SSLgetAnnotations(n_2);
                  t_1 = t;
                  t = o_2;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = o_2;
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          ATerm z_9 = ATgetFirst((ATermList) t);
                          ATerm a_10 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = o_2;
                    }
                  t = (ATerm) ATinsert(CheckATermList(p_2), o_2);
                  p_0 = t;
                  t = SSLsetAnnotations(p_0, t_1);
                  a_2 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      q_1 = ATgetFirst((ATermList) t);
                      {
                        ATerm b_10 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = a_2;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm c_10 = ATgetFirst((ATermList) t);
                      o_1 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, q_1, o_1);
                  t = conc_0_0(t);
                  t = flat_list_0_0(t);
                  ;
                  LocalPopChoice(y_9);
                }
              else
                {
                  t = x_9;
                  {
                    ATerm a_3 = NULL,f_3 = NULL,s_0 = NULL;
                    t = SSLgetAnnotations(n_2);
                    a_3 = t;
                    t = p_2;
                    t = flat_list_0_0(t);
                    f_3 = t;
                    t = (ATerm) ATinsert(CheckATermList(f_3), o_2);
                    s_0 = t;
                    t = SSLsetAnnotations(s_0, a_3);
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm Instantiate_1_0 (ATerm l_0 (ATerm), ATerm t)
{
  ATerm z_2 = NULL,c_3 = NULL;
  if(match_cons(t, sym_Arg2_2))
    {
      c_3 = ATgetArgument(t, 0);
      z_2 = ATgetArgument(t, 1);
      {
        ATerm u_3 = NULL,v_3 = NULL;
        t = term_d_10;
        t = l_0(t);
        v_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_3, v_3);
        t = index_0_0(t);
        u_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_2, u_3);
        t = index_0_0(t);
      }
    }
  else
    {
      ATerm x_3 = NULL;
      if(match_cons(t, sym_Arg_1))
        {
          c_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = term_d_10;
      t = l_0(t);
      x_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_3, x_3);
      t = index_0_0(t);
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm a_85 (ATerm), ATerm t)
{
  ATerm b_0 (ATerm t)
  {
    t = bottomup_1_0(a_85, t);
    return(t);
  }
  t = SRTS_all(b_0, t);
  t = a_85(t);
  return(t);
}
ATerm p_6 (ATerm f_29, ATerm g_29, ATerm e_29, ATerm t)
{
  ATerm z_3 = NULL,a_4 = NULL;
  ATerm m_0 (ATerm t)
  {
    ATerm e_10 = t;
    int f_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_10 = t;
        int h_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_0 (ATerm t)
            {
              t = not_null(z_3);
              return(t);
            }
            t = Instantiate_1_0(q_0, t);
            ;
            LocalPopChoice(h_10);
          }
        else
          {
            t = g_10;
            t = flat_list_0_0(t);
          }
        ;
        LocalPopChoice(f_10);
      }
    else
      {
        t = e_10;
      }
    return(t);
  }
  t = SSL_explode_term(not_null(e_29));
  if(match_cons(t, sym__2))
    {
      ATerm i_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_10) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      if(((a_4 != NULL) && (a_4 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        a_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(a_4);
  {
    ATerm f_0 (ATerm t)
    {
      ATerm c_4 = NULL,e_4 = NULL;
      if(match_cons(t, sym__2))
        {
          c_4 = ATgetArgument(t, 0);
          e_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, c_4, not_null(f_29), e_4);
      t = b_7(c_4, not_null(f_29), e_4, t);
      return(t);
    }
    t = nzip_1_0(f_0, t);
    if(((z_3 != NULL) && (z_3 != t)))
      _fail(t);
    else
      z_3 = t;
    t = not_null(g_29);
    t = bottomup_1_0(m_0, t);
  }
  return(t);
}
ATerm c_6 (ATerm o_4, ATerm p_4, ATerm r_4, ATerm t)
{
  ATerm w_4 = NULL,y_0 = NULL;
  t = SSLgetAnnotations(r_4);
  w_4 = t;
  t = p_4;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_4), o_4);
  y_0 = t;
  t = SSLsetAnnotations(y_0, w_4);
  return(t);
}
ATerm instantiate_sep_list_1_0 (ATerm e_107 (ATerm), ATerm t)
{
  ATerm a_6 (ATerm t)
  {
    ATerm d_6 (ATerm a_5, ATerm b_5, ATerm d_5, ATerm e_5, ATerm t)
    {
      ATerm i_5 = NULL,j_5 = NULL,m_5 = NULL,z_0 = NULL;
      t = not_null(e_5);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm j_10 = ATgetFirst((ATermList) t);
          ATerm o_10 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(not_null(e_5));
      if(((i_5 != NULL) && (i_5 != t)))
        _fail(t);
      else
        i_5 = t;
      t = term_d_10;
      t = e_107(t);
      {
        ATerm r_0 (ATerm t)
        {
          ATerm p_10 = t;
          int v_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_10 = t;
              int x_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_0 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_5)), not_null(a_5));
                    return(t);
                  }
                  t = Instantiate_1_0(u_0, t);
                  ;
                  LocalPopChoice(x_10);
                }
              else
                {
                  t = w_10;
                  t = flat_list_0_0(t);
                }
              ;
              LocalPopChoice(v_10);
            }
          else
            {
              t = p_10;
            }
          return(t);
        }
        t = bottomup_1_0(r_0, t);
        if(((m_5 != NULL) && (m_5 != t)))
          _fail(t);
        else
          m_5 = t;
        t = not_null(d_5);
        t = a_6(t);
        if(((j_5 != NULL) && (j_5 != t)))
          _fail(t);
        else
          j_5 = t;
        t = (ATerm) ATinsert(CheckATermList(not_null(j_5)), not_null(m_5));
        if(((z_0 != NULL) && (z_0 != t)))
          _fail(t);
        else
          z_0 = t;
        t = SSLsetAnnotations(not_null(z_0), not_null(i_5));
      }
      return(t);
    }
    ATerm r_5 = NULL,t_5 = NULL,u_5 = NULL,v_5 = NULL,w_5 = NULL;
    r_5 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = r_5;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_5 = ATgetFirst((ATermList) t);
            u_5 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = u_5;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_5 = ATgetFirst((ATermList) t);
            w_5 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm y_10 = t;
              int z_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_6(t_5, u_5, r_5, t);
                  ;
                  LocalPopChoice(z_10);
                }
              else
                {
                  t = y_10;
                  t = d_6(t_5, v_5, w_5, r_5, t);
                }
            }
          }
        else
          {
            t = c_6(t_5, u_5, r_5, t);
          }
      }
    return(t);
  }
  t = a_6(t);
  return(t);
}
ATerm foldr_3_0 (ATerm d_96 (ATerm), ATerm e_96 (ATerm), ATerm f_96 (ATerm), ATerm t)
{
  ATerm j_6 = NULL,l_6 = NULL,o_6 = NULL;
  j_6 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_6;
      t = d_96(t);
    }
  else
    {
      ATerm a_7 = NULL,e_7 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_6 = ATgetFirst((ATermList) t);
          o_6 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_6;
      t = f_96(t);
      a_7 = t;
      t = o_6;
      t = foldr_3_0(d_96, e_96, f_96, t);
      e_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_7, e_7);
      t = e_96(t);
    }
  return(t);
}
ATerm v_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_p__1_0 (ATerm i_113 (ATerm), ATerm t)
{
  ATerm p_7 (ATerm t)
  {
    ATerm a_11 = t;
    int b_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_7 = NULL;
        t = i_113(t);
        o_7 = t;
        t = (ATerm) ATinsert(ATempty, o_7);
        ;
        LocalPopChoice(b_11);
      }
    else
      {
        t = a_11;
        {
          ATerm m_3 = NULL,n_3 = NULL;
          n_3 = t;
          t = SSL_explode_term(n_3);
          if(match_cons(t, sym__2))
            {
              ATerm c_11 = ATgetArgument(t, 0);
              m_3 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = m_3;
          t = foldr_3_0(v_0, conc_0_0, p_7, t);
        }
      }
    return(t);
  }
  t = p_7(t);
  return(t);
}
ATerm q_6 (ATerm r_45, ATerm s_45, ATerm t)
{
  t = SSL_mod(r_45, s_45);
  return(t);
}
ATerm r_6 (ATerm v_81 (ATerm), ATerm h_27, ATerm i_27, ATerm t)
{
  ATerm q_7 = NULL;
  ATerm d_11 = t;
  int g_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_7 = NULL,s_7 = NULL,b_8 = NULL;
      t = term_h_11;
      b_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_27, term_h_11);
      t = q_6(h_27, b_8, t);
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
        _fail(t);
      t = term_d_10;
      t = v_81(t);
      r_7 = t;
      t = term_h_11;
      s_7 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_11, r_7, i_27);
      t = b_7(s_7, r_7, i_27, t);
      q_7 = t;
      ;
      LocalPopChoice(g_11);
    }
  else
    {
      t = d_11;
      {
        ATerm h_8 = NULL,i_8 = NULL;
        t = term_d_10;
        t = v_81(t);
        h_8 = t;
        t = term_i_11;
        i_8 = t;
        t = (ATerm) ATmakeAppl(sym__3, term_i_11, h_8, i_27);
        t = b_7(i_8, h_8, i_27, t);
        q_7 = t;
      }
    }
  t = q_7;
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm q_8 = NULL,r_8 = NULL,s_8 = NULL,e_1 = NULL;
  s_8 = t;
  if(match_cons(t, sym_S_1))
    {
      r_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_8);
  q_8 = t;
  t = (ATerm) ATmakeAppl(sym_S_1, r_8);
  e_1 = t;
  t = SSLsetAnnotations(e_1, q_8);
  return(t);
}
ATerm b_1 (ATerm t)
{
  t = term_j_11;
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm w_8 = NULL,x_8 = NULL;
  if(match_cons(t, sym__2))
    {
      w_8 = ATgetArgument(t, 0);
      x_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_7(w_8, x_8, t);
  return(t);
}
ATerm d_1 (ATerm t)
{
  t = term_i_11;
  return(t);
}
ATerm s_6 (ATerm w_28, ATerm y_28, ATerm v_28, ATerm t)
{
  ATerm m_8 = NULL;
  ATerm f_1 (ATerm t)
  {
    t = not_null(y_28);
    return(t);
  }
  t = not_null(v_28);
  {
    ATerm w_0 (ATerm t)
    {
      ATerm n_8 = NULL,p_8 = NULL;
      ATerm x_0 (ATerm t)
      {
        t = not_null(w_28);
        return(t);
      }
      if(match_cons(t, sym__2))
        {
          if(((n_8 != NULL) && (n_8 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            n_8 = ATgetArgument(t, 0);
          if(((p_8 != NULL) && (p_8 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            p_8 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = r_6(x_0, not_null(n_8), not_null(p_8), t);
      return(t);
    }
    t = nzip_1_0(w_0, t);
    if(((m_8 != NULL) && (m_8 != t)))
      _fail(t);
    else
      m_8 = t;
    {
      ATerm m_11 = t;
      int n_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_9 (ATerm t)
          {
            ATerm c_9 = NULL,d_9 = NULL;
            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
              {
                t = (ATerm) ATempty;
              }
            else
              {
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    c_9 = ATgetFirst((ATermList) t);
                    d_9 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = d_9;
                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                  {
                    ATerm p_11 = t;
                    int s_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATinsert(ATempty, c_9);
                        ;
                        LocalPopChoice(s_11);
                      }
                    else
                      {
                        t = p_11;
                        {
                          ATerm h_9 = NULL;
                          t = d_9;
                          t = l_9(t);
                          h_9 = t;
                          t = (ATerm) ATinsert(ATinsert(CheckATermList(h_9), c_9), c_9);
                        }
                      }
                  }
                else
                  {
                    ATerm k_9 = NULL;
                    t = d_9;
                    t = l_9(t);
                    k_9 = t;
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(k_9), c_9), c_9);
                  }
              }
            return(t);
          }
          t = not_null(y_28);
          t = collect_p__1_0(a_1, t);
          t = foldr_3_0(b_1, c_1, d_1, t);
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 1)))
            _fail(t);
          t = not_null(m_8);
          t = l_9(t);
          ;
          LocalPopChoice(n_11);
        }
      else
        {
          t = m_11;
          t = not_null(m_8);
        }
      t = instantiate_sep_list_1_0(f_1, t);
    }
  }
  return(t);
}
ATerm symbol2abox6_0_0 (ATerm t)
{
  ATerm p_9 = NULL,s_9 = NULL,t_9 = NULL,w_9 = NULL;
  if(match_cons(t, sym__4))
    {
      p_9 = ATgetArgument(t, 0);
      s_9 = ATgetArgument(t, 1);
      t_9 = ATgetArgument(t, 2);
      w_9 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = p_9;
  if(match_string(t, "iter-star-sep"))
    {
      t = (ATerm) ATmakeAppl(sym__3, s_9, t_9, w_9);
      t = s_6(s_9, t_9, w_9, t);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("iter-sep", 0, ATtrue)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, s_9, t_9, w_9);
      t = s_6(s_9, t_9, w_9, t);
    }
  return(t);
}
ATerm symbol2abox5_0_0 (ATerm t)
{
  ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,q_10 = NULL,r_10 = NULL;
  ATerm j_1 (ATerm t)
  {
    ATerm t_11 = t;
    int v_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_11 = t;
        int x_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_1 (ATerm t)
            {
              t = (ATerm) ATinsert(ATempty, not_null(k_10));
              return(t);
            }
            t = Instantiate_1_0(k_1, t);
            ;
            LocalPopChoice(x_11);
          }
        else
          {
            t = w_11;
            t = flat_list_0_0(t);
          }
        ;
        LocalPopChoice(v_11);
      }
    else
      {
        t = t_11;
      }
    return(t);
  }
  if(((l_10 != NULL) && (l_10 != t)))
    _fail(t);
  else
    l_10 = t;
  if(match_cons(t, sym__4))
    {
      if(((m_10 != NULL) && (m_10 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_10 = ATgetArgument(t, 0);
      if(((n_10 != NULL) && (n_10 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_10 = ATgetArgument(t, 1);
      if(((q_10 != NULL) && (q_10 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        q_10 = ATgetArgument(t, 2);
      if(((r_10 != NULL) && (r_10 != ATgetArgument(t, 3))))
        _fail(ATgetArgument(t, 3));
      else
        r_10 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = not_null(m_10);
  if(match_string(t, "iter"))
    {
      t = not_null(l_10);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("iter-star", 0, ATtrue)))
        _fail(t);
      t = not_null(l_10);
    }
  t = not_null(r_10);
  {
    ATerm g_1 (ATerm t)
    {
      ATerm t_10 = NULL,u_10 = NULL;
      t_10 = t;
      t = term_i_11;
      u_10 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_11, not_null(n_10), t_10);
      t = b_7(u_10, not_null(n_10), t_10, t);
      return(t);
    }
    t = map_1_0(g_1, t);
    if(((k_10 != NULL) && (k_10 != t)))
      _fail(t);
    else
      k_10 = t;
    t = not_null(q_10);
    t = bottomup_1_0(j_1, t);
  }
  return(t);
}
ATerm u_6 (ATerm c_28, ATerm d_28, ATerm f_28, ATerm e_28, ATerm t)
{
  ATerm e_11 = NULL,f_11 = NULL;
  ATerm l_1 (ATerm t)
  {
    ATerm z_11 = t;
    int b_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_12 = t;
        int g_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_1 (ATerm t)
            {
              t = (ATerm) ATinsert(ATempty, not_null(e_11));
              return(t);
            }
            t = Instantiate_1_0(m_1, t);
            ;
            LocalPopChoice(g_12);
          }
        else
          {
            t = f_12;
            t = flat_list_0_0(t);
          }
        ;
        LocalPopChoice(b_12);
      }
    else
      {
        t = z_11;
      }
    return(t);
  }
  t = term_i_11;
  if(((f_11 != NULL) && (f_11 != t)))
    _fail(t);
  else
    f_11 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_i_11, not_null(d_28), not_null(e_28));
  t = b_7(not_null(f_11), not_null(d_28), not_null(e_28), t);
  if(((e_11 != NULL) && (e_11 != t)))
    _fail(t);
  else
    e_11 = t;
  t = not_null(f_28);
  t = bottomup_1_0(l_1, t);
  return(t);
}
ATerm v_6 (ATerm x_27, ATerm y_27, ATerm b_28, ATerm a_28, ATerm z_27, ATerm t)
{
  ATerm k_11 = NULL,l_11 = NULL;
  ATerm n_1 (ATerm t)
  {
    ATerm h_12 = t;
    int j_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_12 = t;
        int q_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_1 (ATerm t)
            {
              t = (ATerm) ATinsert(ATempty, not_null(l_11));
              return(t);
            }
            t = Instantiate_1_0(r_1, t);
            ;
            LocalPopChoice(q_12);
          }
        else
          {
            t = l_12;
            t = flat_list_0_0(t);
          }
        ;
        LocalPopChoice(j_12);
      }
    else
      {
        t = h_12;
      }
    return(t);
  }
  t = (ATerm) ATmakeAppl(sym__3, not_null(a_28), not_null(y_27), not_null(z_27));
  t = b_7(not_null(a_28), not_null(y_27), not_null(z_27), t);
  if(((l_11 != NULL) && (l_11 != t)))
    _fail(t);
  else
    l_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(a_28), not_null(b_28));
  t = index_0_0(t);
  if(((k_11 != NULL) && (k_11 != t)))
    _fail(t);
  else
    k_11 = t;
  t = (ATerm) ATinsert(ATempty, not_null(k_11));
  t = bottomup_1_0(n_1, t);
  return(t);
}
ATerm x_6 (ATerm z_44, ATerm a_45, ATerm t)
{
  ATerm w_12 = t;
  int x_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(z_44, a_45);
      ;
      LocalPopChoice(x_12);
    }
  else
    {
      t = w_12;
      t = SSL_subtr(z_44, a_45);
    }
  return(t);
}
ATerm y_6 (ATerm p_38, ATerm n_38, ATerm o_38, ATerm t)
{
  ATerm o_11 = NULL,q_11 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_38, term_h_11);
  t = geq_0_0(t);
  t = term_i_11;
  q_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_38, term_i_11);
  t = x_6(p_38, q_11, t);
  o_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_11, o_38);
  return(t);
}
ATerm repeat_1_0 (ATerm g_99 (ATerm), ATerm t)
{
  ATerm y_11 (ATerm t)
  {
    ATerm a_13 = t;
    int e_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_99(t);
        t = y_11(t);
        ;
        LocalPopChoice(e_13);
      }
    else
      {
        t = a_13;
      }
    return(t);
  }
  t = y_11(t);
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm c_12 = NULL,d_12 = NULL,e_12 = NULL;
  if(match_cons(t, sym__2))
    {
      c_12 = ATgetArgument(t, 0);
      {
        ATerm f_13 = ATgetArgument(t, 1);
        if(((ATgetType(f_13) == AT_LIST) && !(ATisEmpty(f_13))))
          {
            d_12 = ATgetFirst((ATermList) f_13);
            e_12 = (ATerm) ATgetNext((ATermList) f_13);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = y_6(c_12, d_12, e_12, t);
  return(t);
}
ATerm index_0_0 (ATerm t)
{
  ATerm a_12 = NULL;
  t = repeat_1_0(u_1, t);
  if(match_cons(t, sym__2))
    {
      ATerm g_13 = ATgetArgument(t, 0);
      if(((ATgetType(g_13) != AT_INT) || (ATgetInt((ATermInt) g_13) != 1)))
        _fail(t);
      {
        ATerm h_13 = ATgetArgument(t, 1);
        if(((ATgetType(h_13) == AT_LIST) && !(ATisEmpty(h_13))))
          {
            a_12 = ATgetFirst((ATermList) h_13);
            {
              ATerm i_13 = (ATerm) ATgetNext((ATermList) h_13);
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
ATerm y_1 (ATerm t)
{
  ATerm p_13 = t;
  int q_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_13 = t;
      int s_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Instantiate_1_0(z_1, t);
          ;
          LocalPopChoice(s_13);
        }
      else
        {
          t = r_13;
          t = flat_list_0_0(t);
        }
      ;
      LocalPopChoice(q_13);
    }
  else
    {
      t = p_13;
    }
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm b_7 (ATerm o_27, ATerm n_27, ATerm s_27, ATerm t)
{
  ATerm n_12 = NULL,o_12 = NULL,p_12 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, not_null(n_27), (ATerm) ATinsert(ATempty, not_null(o_27)));
  t = conc_0_0(t);
  if(((o_12 != NULL) && (o_12 != t)))
    _fail(t);
  else
    o_12 = t;
  {
    ATerm u_13 = t;
    int v_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_12 = NULL,s_12 = NULL;
        t = pp_table_get_0_0(t);
        if(match_cons(t, sym__2))
          {
            if(((n_12 != NULL) && (n_12 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              n_12 = ATgetArgument(t, 0);
            if(((p_12 != NULL) && (p_12 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              p_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = not_null(n_12);
        if(match_cons(t, sym_Path_2))
          {
            ATerm w_13 = ATgetArgument(t, 0);
            if(((r_12 != NULL) && (r_12 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              r_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = not_null(r_12);
        {
          ATerm x_1 (ATerm t)
          {
            ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL,y_12 = NULL,b_13 = NULL,d_13 = NULL,j_13 = NULL,k_13 = NULL,i_1 = NULL,h_1 = NULL;
            k_13 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                u_12 = ATgetFirst((ATermList) t);
                v_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(k_13);
            t_12 = t;
            t = u_12;
            if(match_cons(t, sym_selector_2))
              {
                b_13 = ATgetArgument(t, 0);
                d_13 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(u_12);
            y_12 = t;
            t = d_13;
            if(((s_12 != NULL) && (s_12 != t)))
              _fail(t);
            else
              s_12 = t;
            t = (ATerm) ATmakeAppl(sym_selector_2, b_13, d_13);
            h_1 = t;
            t = SSLsetAnnotations(h_1, y_12);
            j_13 = t;
            t = v_12;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(v_12), j_13);
            i_1 = t;
            t = SSLsetAnnotations(i_1, t_12);
            return(t);
          }
          t = at_last_1_0(x_1, t);
          t = (ATerm) ATmakeAppl(sym__4, not_null(s_12), not_null(o_12), not_null(p_12), not_null(s_27));
          {
            ATerm x_13 = t;
            int y_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL;
                if(match_cons(t, sym__4))
                  {
                    ATerm b_14 = ATgetArgument(t, 0);
                    ATerm d_14 = ATgetArgument(t, 1);
                    ATerm e_14 = ATgetArgument(t, 2);
                    ATerm f_14 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = not_null(s_27);
                if(match_cons(t, sym_alt_2))
                  {
                    o_13 = ATgetArgument(t, 0);
                    l_13 = ATgetArgument(t, 1);
                    t = l_13;
                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                      {
                        ATerm c_14 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, o_13, not_null(p_12));
                        t = index_0_0(t);
                        c_14 = t;
                        t = (ATerm) ATinsert(ATempty, c_14);
                        t = bottomup_1_0(y_1, t);
                      }
                    else
                      {
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            m_13 = ATgetFirst((ATermList) t);
                            n_13 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = n_13;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym__4, not_null(s_12), not_null(o_12), not_null(p_12), not_null(s_27));
                        t = v_6(not_null(s_12), not_null(o_12), not_null(p_12), o_13, m_13, t);
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Some_1))
                      {
                        o_13 = ATgetArgument(t, 0);
                        t = (ATerm) ATmakeAppl(sym__4, not_null(s_12), not_null(o_12), not_null(p_12), not_null(s_27));
                        t = u_6(not_null(s_12), not_null(o_12), not_null(p_12), o_13, t);
                      }
                    else
                      {
                        if(!(match_cons(t, sym_None_0)))
                          _fail(t);
                        t = (ATerm) ATempty;
                      }
                  }
                ;
                LocalPopChoice(y_13);
              }
            else
              {
                t = x_13;
                {
                  ATerm g_14 = t;
                  int h_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = symbol2abox5_0_0(t);
                      ;
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
                            ;
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
                            t = (ATerm) ATmakeAppl(sym__4, not_null(s_12), not_null(o_12), not_null(p_12), not_null(s_27));
                            t = p_6(not_null(o_12), not_null(p_12), not_null(s_27), t);
                          }
                      }
                    }
                }
              }
          }
        }
        ;
        LocalPopChoice(v_13);
      }
    else
      {
        t = u_13;
        t = not_null(s_27);
        t = trm2abox_0_0(t);
      }
  }
  return(t);
}
ATerm genzip_4_0 (ATerm m_91 (ATerm), ATerm n_91 (ATerm), ATerm o_91 (ATerm), ATerm p_91 (ATerm), ATerm t)
{
  ATerm s_15 (ATerm t)
  {
    ATerm o_14 = t;
    int q_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_91(t);
        ;
        LocalPopChoice(q_14);
      }
    else
      {
        t = o_14;
        {
          ATerm c_15 = NULL,d_15 = NULL,f_15 = NULL,k_15 = NULL,p_15 = NULL,r_15 = NULL,p_1 = NULL;
          t = n_91(t);
          r_15 = t;
          if(match_cons(t, sym__2))
            {
              d_15 = ATgetArgument(t, 0);
              f_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(r_15);
          c_15 = t;
          t = d_15;
          t = p_91(t);
          k_15 = t;
          t = f_15;
          t = s_15(t);
          p_15 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_15, p_15);
          p_1 = t;
          t = SSLsetAnnotations(p_1, c_15);
          t = o_91(t);
        }
      }
    return(t);
  }
  t = s_15(t);
  return(t);
}
ATerm b_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_14 = ATgetArgument(t, 0);
      ATerm s_14 = ATgetArgument(t, 1);
      if(((ATgetType(s_14) != AT_LIST) || !(ATisEmpty(s_14))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL;
  if(match_cons(t, sym__2))
    {
      v_15 = ATgetArgument(t, 0);
      {
        ATerm t_14 = ATgetArgument(t, 1);
        if(((ATgetType(t_14) == AT_LIST) && !(ATisEmpty(t_14))))
          {
            w_15 = ATgetFirst((ATermList) t_14);
            x_15 = (ATerm) ATgetNext((ATermList) t_14);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_i_11;
  z_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_15, term_i_11);
  t = z_7(v_15, z_15, t);
  y_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_15, w_15), (ATerm) ATmakeAppl(sym__2, y_15, x_15));
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm a_16 = NULL,b_16 = NULL;
  if(match_cons(t, sym__2))
    {
      a_16 = ATgetArgument(t, 0);
      b_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_16), a_16);
  return(t);
}
ATerm nzip_1_0 (ATerm y_91 (ATerm), ATerm t)
{
  ATerm t_15 = NULL;
  t_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_11, t_15);
  t = genzip_4_0(b_2, c_2, d_2, y_91, t);
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = debug_1_0(f_2, t);
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = term_u_14;
  return(t);
}
ATerm pp_table_get_0_0 (ATerm t)
{
  ATerm f_16 = NULL,g_16 = NULL,i_16 = NULL,n_16 = NULL;
  f_16 = t;
  t = term_v_14;
  n_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_14, f_16);
  t = d_8(n_16, f_16, t);
  if(match_cons(t, sym__2))
    {
      i_16 = ATgetArgument(t, 0);
      g_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_16;
  t = path_to_string_0_0(t);
  t = if_verbose1_1_0(e_2, t);
  t = (ATerm) ATmakeAppl(sym__2, i_16, g_16);
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = term_w_14;
  return(t);
}
ATerm trm2abox_appl_0_0 (ATerm t)
{
  ATerm q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL,x_16 = NULL;
  ATerm q_2 (ATerm t)
  {
    ATerm x_14 = t;
    int y_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_14 = t;
        int a_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_2 (ATerm t)
            {
              t = not_null(t_16);
              return(t);
            }
            t = Instantiate_1_0(s_2, t);
            ;
            LocalPopChoice(a_15);
          }
        else
          {
            t = z_14;
            t = flat_list_0_0(t);
          }
        ;
        LocalPopChoice(y_14);
      }
    else
      {
        t = x_14;
      }
    return(t);
  }
  if(((x_16 != NULL) && (x_16 != t)))
    _fail(t);
  else
    x_16 = t;
  t = SSL_explode_term(not_null(x_16));
  if(match_cons(t, sym__2))
    {
      if(((r_16 != NULL) && (r_16 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_16 = ATgetArgument(t, 0);
      if(((q_16 != NULL) && (q_16 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        q_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, not_null(r_16));
  {
    ATerm b_15 = t;
    int g_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = pp_table_get_0_0(t);
        ;
        LocalPopChoice(g_15);
      }
    else
      {
        t = b_15;
        t = debug_1_0(j_2, t);
        _fail(t);
      }
    if(match_cons(t, sym__2))
      {
        ATerm i_15 = ATgetArgument(t, 0);
        if(((s_16 != NULL) && (s_16 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          s_16 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = not_null(q_16);
    {
      ATerm m_2 (ATerm t)
      {
        ATerm y_16 = NULL,a_17 = NULL,b_17 = NULL;
        if(match_cons(t, sym__2))
          {
            y_16 = ATgetArgument(t, 0);
            a_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATempty, not_null(r_16));
        b_17 = t;
        t = (ATerm) ATmakeAppl(sym__3, y_16, (ATerm)ATinsert(ATempty, not_null(r_16)), a_17);
        t = b_7(y_16, b_17, a_17, t);
        return(t);
      }
      t = nzip_1_0(m_2, t);
      if(((t_16 != NULL) && (t_16 != t)))
        _fail(t);
      else
        t_16 = t;
      t = not_null(s_16);
      t = bottomup_1_0(q_2, t);
    }
  }
  return(t);
}
ATerm trm2abox_list_0_0 (ATerm t)
{
  ATerm i_17 = NULL;
  i_17 = t;
  t = SSL_explode_term(i_17);
  if(match_cons(t, sym__2))
    {
      ATerm j_15 = ATgetArgument(t, 0);
      ATerm l_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_17;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_17;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm n_15 = ATgetFirst((ATermList) t);
          ATerm u_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_17;
    }
  t = map_1_0(trm2abox_0_0, t);
  return(t);
}
ATerm trm2abox_0_0 (ATerm t)
{
  ATerm d_16 = t;
  int e_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_3 = NULL,s_3 = NULL;
      s_3 = t;
      t = SSL_is_string(s_3);
      r_3 = t;
      t = (ATerm) ATmakeAppl(sym_S_1, r_3);
      ;
      LocalPopChoice(e_16);
    }
  else
    {
      t = d_16;
      {
        ATerm h_16 = t;
        int j_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_3 = NULL,y_3 = NULL,b_4 = NULL;
            b_4 = t;
            t = SSL_is_int(b_4);
            y_3 = t;
            t = SSL_int_to_string(y_3);
            t_3 = t;
            t = (ATerm) ATmakeAppl(sym_S_1, t_3);
            ;
            LocalPopChoice(j_16);
          }
        else
          {
            t = h_16;
            {
              ATerm l_16 = t;
              int m_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = trm2abox_list_0_0(t);
                  ;
                  LocalPopChoice(m_16);
                }
              else
                {
                  t = l_16;
                  {
                    ATerm p_16 = t;
                    int u_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = trm2abox_appl_0_0(t);
                        ;
                        LocalPopChoice(u_16);
                      }
                    else
                      {
                        t = p_16;
                        {
                          ATerm z_17 = NULL,i_4 = NULL,j_4 = NULL,k_4 = NULL;
                          z_17 = t;
                          t = term_v_16;
                          j_4 = t;
                          t = (ATerm) ATinsert(ATinsert(ATempty, z_17), term_w_16);
                          k_4 = t;
                          t = SSL_printnl(j_4, k_4);
                          t = term_i_11;
                          i_4 = t;
                          t = SSL_exit(i_4);
                          t = (ATerm) ATinsert(ATinsert(ATempty, z_17), term_w_16);
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
ATerm f_7 (ATerm i_59, ATerm j_59, ATerm t)
{
  ATerm b_18 = NULL;
  t = SSL_write_term_to_stream_baf(i_59, j_59);
  b_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_18);
  return(t);
}
ATerm g_7 (ATerm e_105 (ATerm), ATerm d_583, ATerm q_59, ATerm t)
{
  ATerm c_18 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, d_583, term_z_16);
  t = open_stream_0_0(t);
  c_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_18, q_59);
  t = e_105(t);
  t = fclose_0_0(t);
  t = q_59;
  return(t);
}
ATerm h_7 (ATerm i_100 (ATerm), ATerm k_52, ATerm i_52, ATerm t)
{
  ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL,j_18 = NULL,k_18 = NULL,l_18 = NULL;
  j_18 = t;
  t = i_100(t);
  e_18 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_18, k_52, i_52);
  t = e_8(e_18, k_52, i_52, t);
  {
    ATerm c_17 = t;
    int d_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_18 = NULL;
        t = term_e_17;
        n_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_18, term_e_17);
        t = d_8(e_18, n_18, t);
        ;
        LocalPopChoice(d_17);
      }
    else
      {
        t = c_17;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_18 = ATgetFirst((ATermList) t);
        g_18 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_e_17;
    k_18 = t;
    t = (ATerm) ATinsert(CheckATermList(g_18), (ATerm) ATinsert(CheckATermList(f_18), k_52));
    l_18 = t;
    t = SSL_table_put(e_18, k_18, l_18);
    t = j_18;
  }
  return(t);
}
ATerm b_19 (ATerm r_18, ATerm t)
{
  t = r_18;
  {
    ATerm f_17 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_17 = ATgetArgument(t, 0);
            ATerm h_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_17;
      }
    t = term_j_17;
    t = debug_1_0(t_2, t);
    t = (ATerm) ATmakeAppl(sym__2, r_18, term_z_16);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm c_19 (ATerm t_18, ATerm u_18, ATerm v_18, ATerm t)
{
  t = SSL_open_file(t_18, u_18);
  return(t);
}
ATerm t_2 (ATerm t)
{
  t = term_k_17;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm y_18 = NULL,z_18 = NULL,a_19 = NULL;
  y_18 = t;
  if(match_cons(t, sym__2))
    {
      z_18 = ATgetArgument(t, 0);
      a_19 = ATgetArgument(t, 1);
      {
        ATerm l_17 = t;
        int m_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_19(y_18, t);
            ;
            LocalPopChoice(m_17);
          }
        else
          {
            t = l_17;
            t = c_19(z_18, a_19, y_18, t);
          }
      }
    }
  else
    {
      t = b_19(y_18, t);
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
  ATerm e_19 = NULL,h_19 = NULL,j_19 = NULL;
  t = term_d_10;
  t = new_0_0(t);
  e_19 = t;
  t = term_n_17;
  h_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_19, term_n_17);
  t = c_8(e_19, h_19, t);
  j_19 = t;
  {
    ATerm p_17 = t;
    int q_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_19 = NULL;
        t = (ATerm) ATinsert(ATempty, term_s_17);
        l_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_19, (ATerm) ATinsert(ATempty, term_s_17));
        t = i_7(j_19, l_19, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(q_17);
      }
    else
      {
        t = p_17;
        t = j_19;
      }
  }
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = term_v_17;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm o_19 = NULL,r_19 = NULL;
  t = new_file_0_0(t);
  o_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_19, term_z_16);
  t = open_file_0_0(t);
  t = term_d_10;
  r_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_19, term_d_10);
  t = h_7(u_2, o_19, r_19, t);
  t = o_19;
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm a_20 = NULL,b_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_17 = ATgetArgument(t, 0);
      if(match_cons(x_17, sym_Stream_1))
        {
          a_20 = ATgetArgument(x_17, 0);
        }
      else
        _fail(t);
      b_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_7(a_20, b_20, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm v_19 = NULL,w_19 = NULL;
  v_19 = t;
  t = xtc_new_file_0_0(t);
  w_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_19, v_19);
  t = g_7(v_2, w_19, v_19, t);
  t = SSL_close_file(w_19);
  t = (ATerm) ATmakeAppl(sym_FILE_1, w_19);
  return(t);
}
ATerm i_7 (ATerm w_46, ATerm x_46, ATerm t)
{
  t = SSL_access(w_46, x_46);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm f_20 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_y_17;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm h_20 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          f_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_s_17);
      h_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_20, (ATerm) ATinsert(ATempty, term_s_17));
      t = i_7(f_20, h_20, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm t_84 (ATerm), ATerm t)
{
  t = read_from_0_0(t);
  t = t_84(t);
  t = write_to_0_0(t);
  return(t);
}
ATerm j_7 (ATerm q_30, ATerm r_30, ATerm t)
{
  t = SSL_copy(q_30, r_30);
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm c_21 = NULL,d_21 = NULL;
  c_21 = t;
  if(match_cons(t, sym_FILE_1))
    {
      d_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm a_18 = t;
    int h_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_4 = NULL;
        t = c_21;
        t = k_0(t);
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
        t = (ATerm) ATmakeAppl(sym__2, d_21, t_4);
        t = j_7(d_21, t_4, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, d_21);
        ;
        LocalPopChoice(h_18);
      }
    else
      {
        t = a_18;
        {
          ATerm i_18 = t;
          int m_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_6 = NULL;
              t = c_21;
              t = k_0(t);
              f_6 = t;
              {
                ATerm o_18 = t;
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
                            if((d_21 != t))
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
                    t = o_18;
                  }
                t = (ATerm) ATmakeAppl(sym__2, d_21, f_6);
                t = j_7(d_21, f_6, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, d_21);
              }
              ;
              LocalPopChoice(m_18);
            }
          else
            {
              t = i_18;
              t = c_21;
              t = k_0(t);
              if((d_21 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, d_21);
            }
        }
      }
  }
  return(t);
}
ATerm k_7 (ATerm v_32, ATerm w_32, ATerm t)
{
  ATerm j_21 = NULL,k_21 = NULL;
  k_21 = t;
  {
    ATerm p_18 = t;
    int q_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, v_32, w_32);
        t = d_8(v_32, w_32, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm s_18 = ATgetFirst((ATermList) t);
            j_21 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(q_18);
        t = SSL_table_put(v_32, w_32, j_21);
        t = (ATerm) ATmakeAppl(sym__3, v_32, w_32, j_21);
      }
    else
      {
        t = p_18;
        t = SSL_table_remove(v_32, w_32);
        t = (ATerm) ATmakeAppl(sym__2, v_32, w_32);
      }
    t = k_21;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm f_100 (ATerm), ATerm t)
{
  ATerm l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL,r_21 = NULL;
  if(((o_21 != NULL) && (o_21 != t)))
    _fail(t);
  else
    o_21 = t;
  t = f_100(t);
  if(((n_21 != NULL) && (n_21 != t)))
    _fail(t);
  else
    n_21 = t;
  {
    ATerm w_18 = t;
    int x_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_21 = NULL;
        t = term_e_17;
        s_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_21), term_e_17);
        t = d_8(not_null(n_21), s_21, t);
        ;
        LocalPopChoice(x_18);
      }
    else
      {
        t = w_18;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((m_21 != NULL) && (m_21 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          m_21 = ATgetFirst((ATermList) t);
        if(((l_21 != NULL) && (l_21 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          l_21 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_e_17;
    if(((r_21 != NULL) && (r_21 != t)))
      _fail(t);
    else
      r_21 = t;
    t = SSL_table_put(not_null(n_21), not_null(r_21), not_null(l_21));
    t = not_null(m_21);
    {
      ATerm w_2 (ATerm t)
      {
        ATerm t_21 = NULL;
        t_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_21), t_21);
        t = k_7(not_null(n_21), t_21, t);
        return(t);
      }
      t = map_1_0(w_2, t);
      t = not_null(o_21);
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm g_88 (ATerm), ATerm h_88 (ATerm), ATerm t)
{
  ATerm f_19 = t;
  int g_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_88(t);
      t = h_88(t);
      ;
      LocalPopChoice(g_19);
    }
  else
    {
      t = f_19;
      t = h_88(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm e_100 (ATerm), ATerm t)
{
  ATerm a_22 = NULL,b_22 = NULL,c_22 = NULL,d_22 = NULL,f_22 = NULL;
  b_22 = t;
  t = e_100(t);
  a_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_22, term_e_17);
  {
    ATerm k_19 = t;
    int m_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_22 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm n_19 = ATgetArgument(t, 0);
            ATerm p_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_e_17;
        l_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_22, term_e_17);
        t = d_8(a_22, l_22, t);
        ;
        LocalPopChoice(m_19);
      }
    else
      {
        t = k_19;
        t = (ATerm) ATempty;
      }
    c_22 = t;
    t = term_e_17;
    d_22 = t;
    t = (ATerm) ATinsert(CheckATermList(c_22), (ATerm) ATempty);
    f_22 = t;
    t = SSL_table_put(a_22, d_22, f_22);
    t = b_22;
  }
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = term_v_17;
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm e_23 = NULL;
  e_23 = t;
  {
    ATerm q_19 = t;
    int s_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(e_23);
        ;
        LocalPopChoice(s_19);
      }
    else
      {
        t = q_19;
        t = e_23;
      }
  }
  return(t);
}
ATerm d_3 (ATerm t)
{
  t = term_v_17;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm u_83 (ATerm), ATerm t)
{
  ATerm s_22 = NULL;
  ATerm y_2 (ATerm t)
  {
    ATerm u_22 = NULL;
    u_22 = t;
    {
      ATerm t_19 = t;
      int y_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_22 = NULL,w_22 = NULL;
          t = term_v_17;
          v_22 = t;
          t = term_e_17;
          w_22 = t;
          t = term_z_19;
          t = d_8(v_22, w_22, t);
          ;
          LocalPopChoice(y_19);
        }
      else
        {
          t = t_19;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((s_22 != NULL) && (s_22 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            s_22 = ATgetFirst((ATermList) t);
          {
            ATerm e_20 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = not_null(s_22);
      t = map_1_0(b_3, t);
      t = u_22;
      t = end_scope_1_0(d_3, t);
    }
    return(t);
  }
  t = begin_scope_1_0(x_2, t);
  t = restore_always_2_0(u_83, y_2, t);
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm g_20 = t;
  int i_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_20;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(i_20);
    }
  else
    {
      t = g_20;
      t = term_k_20;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm v_83 (ATerm), ATerm t)
{
  ATerm e_3 (ATerm t)
  {
    ATerm l_20 = t;
    int m_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_23 = NULL;
        t = term_n_20;
        t = get_config_0_0(t);
        i_23 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, i_23);
        ;
        LocalPopChoice(m_20);
      }
    else
      {
        t = l_20;
        t = term_y_17;
      }
    t = v_83(t);
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
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_8), term_p_20), t_8), term_o_20);
  return(t);
}
ATerm path_to_string_0_0 (ATerm t)
{
  ATerm y_23 = NULL,z_23 = NULL,a_24 = NULL;
  y_23 = t;
  if(match_cons(t, sym_Path1_1))
    {
      z_23 = ATgetArgument(t, 0);
      t = z_23;
    }
  else
    {
      ATerm j_8 = NULL,k_8 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          z_23 = ATgetArgument(t, 0);
          a_24 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = a_24;
      t = map_1_0(h_3, t);
      t = concat_0_0(t);
      j_8 = t;
      t = (ATerm) ATinsert(CheckATermList(j_8), z_23);
      k_8 = t;
      t = SSL_concat_strings(k_8);
    }
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm q_25 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      q_25 = ATgetArgument(t, 0);
      {
        ATerm q_20 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = q_25;
  return(t);
}
ATerm mk_key_0_0 (ATerm t)
{
  ATerm r_24 = NULL,u_24 = NULL;
  if(match_cons(t, sym_Path1_1))
    {
      r_24 = ATgetArgument(t, 0);
      t = (ATerm) ATinsert(ATempty, r_24);
    }
  else
    {
      ATerm p_25 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          r_24 = ATgetArgument(t, 0);
          u_24 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = u_24;
      t = map_1_0(i_3, t);
      p_25 = t;
      t = (ATerm) ATinsert(CheckATermList(p_25), r_24);
    }
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = debug_1_0(k_3, t);
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = term_r_20;
  return(t);
}
ATerm l_7 (ATerm c_61, ATerm d_61, ATerm t)
{
  ATerm s_25 = NULL,t_25 = NULL,v_25 = NULL,w_25 = NULL;
  t = c_61;
  t = mk_key_0_0(t);
  t_25 = t;
  t = term_v_14;
  v_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_61, d_61);
  w_25 = t;
  t = SSL_table_put(v_25, t_25, w_25);
  t = c_61;
  t = path_to_string_0_0(t);
  s_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_25, d_61);
  t = if_verbose1_1_0(j_3, t);
  return(t);
}
ATerm unescape_chars_0_0 (ATerm t)
{
  ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL,w_26 = NULL;
  w_26 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_26 = ATgetFirst((ATermList) t);
      s_26 = (ATerm) ATgetNext((ATermList) t);
      t = s_26;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_26 = ATgetFirst((ATermList) t);
          u_26 = (ATerm) ATgetNext((ATermList) t);
          t = t_26;
          if(match_int(t, 34))
            {
              t = r_26;
              if(match_int(t, 92))
                {
                  ATerm s_20 = t;
                  int t_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATinsert(CheckATermList(u_26), term_u_20);
                      ;
                      LocalPopChoice(t_20);
                    }
                  else
                    {
                      t = s_20;
                      t = w_26;
                    }
                }
              else
                {
                  t = w_26;
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = r_26;
                  if(match_int(t, 92))
                    {
                      ATerm v_20 = t;
                      int w_20 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATinsert(CheckATermList(u_26), term_x_20);
                          ;
                          LocalPopChoice(w_20);
                        }
                      else
                        {
                          t = v_20;
                          t = w_26;
                        }
                    }
                  else
                    {
                      t = w_26;
                    }
                }
              else
                {
                  if(match_int(t, 110))
                    {
                      t = r_26;
                      if(match_int(t, 92))
                        {
                          ATerm y_20 = t;
                          int z_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATinsert(CheckATermList(u_26), term_a_21);
                              ;
                              LocalPopChoice(z_20);
                            }
                          else
                            {
                              t = y_20;
                              t = w_26;
                            }
                        }
                      else
                        {
                          t = w_26;
                        }
                    }
                  else
                    {
                      if(match_int(t, 116))
                        {
                          t = r_26;
                          if(match_int(t, 92))
                            {
                              ATerm b_21 = t;
                              int e_21 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATinsert(CheckATermList(u_26), term_f_21);
                                  ;
                                  LocalPopChoice(e_21);
                                }
                              else
                                {
                                  t = b_21;
                                  t = w_26;
                                }
                            }
                          else
                            {
                              t = w_26;
                            }
                        }
                      else
                        {
                          t = w_26;
                        }
                    }
                }
            }
        }
      else
        {
          t = w_26;
        }
    }
  else
    {
      t = w_26;
    }
  x_29 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_29 = ATgetFirst((ATermList) t);
      w_29 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm n_9 = NULL,u_9 = NULL,s_1 = NULL;
        t = SSLgetAnnotations(x_29);
        n_9 = t;
        t = w_29;
        t = unescape_chars_0_0(t);
        u_9 = t;
        t = (ATerm) ATinsert(CheckATermList(u_9), v_29);
        s_1 = t;
        t = SSLsetAnnotations(s_1, n_9);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = x_29;
    }
  return(t);
}
ATerm at_last_1_0 (ATerm k_90 (ATerm), ATerm t)
{
  ATerm k_31 (ATerm t)
  {
    ATerm h_31 = NULL,i_31 = NULL,j_31 = NULL;
    h_31 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_31 = ATgetFirst((ATermList) t);
        j_31 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm g_21 = t;
      int h_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_10 = NULL,v_1 = NULL;
          t = SSLgetAnnotations(h_31);
          s_10 = t;
          t = j_31;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(j_31), i_31);
          v_1 = t;
          t = SSLsetAnnotations(v_1, s_10);
          t = k_90(t);
          ;
          LocalPopChoice(h_21);
        }
      else
        {
          t = g_21;
          {
            ATerm r_11 = NULL,u_11 = NULL,w_1 = NULL;
            t = SSLgetAnnotations(h_31);
            r_11 = t;
            t = j_31;
            t = k_31(t);
            u_11 = t;
            t = (ATerm) ATinsert(CheckATermList(u_11), i_31);
            w_1 = t;
            t = SSLsetAnnotations(w_1, r_11);
          }
        }
    }
    return(t);
  }
  t = k_31(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm y_31 = NULL,a_32 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_31 = ATgetFirst((ATermList) t);
      a_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = a_32;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_31;
    }
  else
    {
      t = a_32;
      t = last_0_0(t);
    }
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm l_32 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm p_21 = ATgetFirst((ATermList) t);
      l_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = l_32;
  return(t);
}
ATerm unquote_chars_1_0 (ATerm r_98 (ATerm), ATerm t)
{
  ATerm i_32 = NULL,j_32 = NULL,k_32 = NULL;
  i_32 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_32 = ATgetFirst((ATermList) t);
      {
        ATerm q_21 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = k_32;
  t = r_98(t);
  t = i_32;
  t = last_0_0(t);
  t = r_98(t);
  t = i_32;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm u_21 = ATgetFirst((ATermList) t);
      j_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = j_32;
  t = at_last_1_0(l_3, t);
  return(t);
}
ATerm o_3 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm MakePPTerm_0_0 (ATerm t)
{
  ATerm o_34 = NULL,p_34 = NULL,q_34 = NULL;
  o_34 = t;
  if(match_cons(t, sym_Arg_1))
    {
      p_34 = ATgetArgument(t, 0);
      {
        ATerm z_12 = NULL,c_13 = NULL,g_2 = NULL;
        t = SSLgetAnnotations(o_34);
        z_12 = t;
        t = SSL_string_to_int(p_34);
        c_13 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, c_13);
        g_2 = t;
        t = SSLsetAnnotations(g_2, z_12);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg2_2))
        {
          p_34 = ATgetArgument(t, 0);
          q_34 = ATgetArgument(t, 1);
          {
            ATerm t_13 = NULL,z_13 = NULL,a_14 = NULL,h_2 = NULL;
            t = SSLgetAnnotations(o_34);
            t_13 = t;
            t = SSL_string_to_int(p_34);
            z_13 = t;
            t = SSL_string_to_int(q_34);
            a_14 = t;
            t = (ATerm) ATmakeAppl(sym_Arg2_2, z_13, a_14);
            h_2 = t;
            t = SSLsetAnnotations(h_2, t_13);
          }
        }
      else
        {
          if(match_cons(t, sym_SOpt_2))
            {
              p_34 = ATgetArgument(t, 0);
              q_34 = ATgetArgument(t, 1);
              {
                ATerm p_14 = NULL,i_2 = NULL;
                t = SSLgetAnnotations(o_34);
                p_14 = t;
                t = (ATerm) ATmakeAppl(sym_SOpt_2, p_34, q_34);
                i_2 = t;
                t = SSLsetAnnotations(i_2, p_14);
              }
            }
          else
            {
              if(match_cons(t, sym_S_1))
                {
                  p_34 = ATgetArgument(t, 0);
                  {
                    ATerm e_15 = NULL,h_15 = NULL,k_2 = NULL,q_15 = NULL,c_16 = NULL,m_15 = NULL;
                    t = SSLgetAnnotations(o_34);
                    e_15 = t;
                    t = SSL_explode_string(p_34);
                    t = unquote_chars_1_0(o_3, t);
                    m_15 = t;
                    t = SSL_implode_string(m_15);
                    c_16 = t;
                    t = SSL_explode_string(c_16);
                    t = unescape_chars_0_0(t);
                    q_15 = t;
                    t = SSL_implode_string(q_15);
                    h_15 = t;
                    t = (ATerm) ATmakeAppl(sym_S_1, h_15);
                    k_2 = t;
                    t = SSLsetAnnotations(k_2, e_15);
                  }
                }
              else
                {
                  ATerm k_16 = NULL,o_16 = NULL,l_2 = NULL;
                  if(match_cons(t, sym_selector_2))
                    {
                      p_34 = ATgetArgument(t, 0);
                      q_34 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(o_34);
                  k_16 = t;
                  t = SSL_string_to_int(p_34);
                  o_16 = t;
                  t = (ATerm) ATmakeAppl(sym_selector_2, o_16, q_34);
                  l_2 = t;
                  t = SSLsetAnnotations(l_2, k_16);
                }
            }
        }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm z_84 (ATerm), ATerm t)
{
  ATerm w_3 (ATerm t)
  {
    t = topdown_1_0(z_84, t);
    return(t);
  }
  t = z_84(t);
  t = SRTS_all(w_3, t);
  return(t);
}
ATerm d_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm d_35 = NULL,e_35 = NULL;
  t = topdown_1_0(g_4, t);
  if(match_cons(t, sym_PP_Entry_2))
    {
      d_35 = ATgetArgument(t, 0);
      e_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_7(d_35, e_35, t);
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm v_21 = t;
  int w_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MakePPTerm_0_0(t);
      ;
      LocalPopChoice(w_21);
    }
  else
    {
      t = v_21;
    }
  return(t);
}
ATerm t_7 (ATerm b_61, ATerm t)
{
  t = b_61;
  t = reverse_acc_2_0(_id, d_4, t);
  t = map_1_0(f_4, t);
  return(t);
}
ATerm oncetd_1_0 (ATerm d_86 (ATerm), ATerm t)
{
  ATerm h_35 (ATerm t)
  {
    ATerm x_21 = t;
    int y_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_86(t);
        ;
        LocalPopChoice(y_21);
      }
    else
      {
        t = x_21;
        t = SRTS_one(h_35, t);
      }
    return(t);
  }
  t = h_35(t);
  return(t);
}
ATerm get_options_0_0 (ATerm t)
{
  ATerm i_35 = NULL,m_35 = NULL;
  t = term_e_22;
  i_35 = t;
  t = term_g_22;
  m_35 = t;
  t = term_i_22;
  t = d_8(i_35, m_35, t);
  return(t);
}
ATerm h_4 (ATerm t)
{
  if(!(match_cons(t, sym_Strict_0)))
    _fail(t);
  return(t);
}
ATerm type_failure_0_0 (ATerm t)
{
  ATerm j_22 = t;
  int k_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_35 = NULL,o_35 = NULL,t_35 = NULL;
      t = term_m_22;
      t = get_options_0_0(t);
      t = oncetd_1_0(h_4, t);
      t = term_v_16;
      o_35 = t;
      t = (ATerm) ATinsert(ATempty, term_n_22);
      t_35 = t;
      t = SSL_printnl(o_35, t_35);
      t = term_i_11;
      n_35 = t;
      t = SSL_exit(n_35);
      t = (ATerm) ATinsert(ATempty, term_n_22);
      ;
      LocalPopChoice(k_22);
    }
  else
    {
      t = j_22;
      {
        ATerm w_35 = NULL,x_35 = NULL;
        t = term_v_16;
        w_35 = t;
        t = (ATerm) ATinsert(ATempty, term_o_22);
        x_35 = t;
        t = SSL_printnl(w_35, x_35);
        t = (ATerm) ATinsert(ATempty, term_o_22);
      }
    }
  return(t);
}
ATerm d_37 (ATerm u_36, ATerm t)
{
  t = SSL_fclose(u_36);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm x_36 = NULL,y_36 = NULL;
  y_36 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_36 = ATgetArgument(t, 0);
      {
        ATerm p_22 = t;
        int q_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(x_36);
            ;
            LocalPopChoice(q_22);
          }
        else
          {
            t = p_22;
            t = d_37(y_36, t);
          }
      }
    }
  else
    {
      t = d_37(y_36, t);
    }
  return(t);
}
ATerm w_7 (ATerm o_59, ATerm t)
{
  t = SSL_read_term_from_stream(o_59);
  return(t);
}
ATerm x_7 (ATerm e_47, ATerm f_47, ATerm t)
{
  ATerm f_37 = NULL;
  t = SSL_fopen(e_47, f_47);
  f_37 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_37);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm j_37 = NULL;
  t = SSL_stdin_stream();
  j_37 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_37);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm k_37 = NULL;
  t = SSL_stdout_stream();
  k_37 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_37);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm l_37 = NULL;
  t = SSL_stderr_stream();
  l_37 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_37);
  return(t);
}
ATerm k_39 (ATerm v_37, ATerm t)
{
  ATerm w_37 = NULL;
  t = SSL_explode_term(v_37);
  if(match_cons(t, sym__2))
    {
      ATerm r_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm t_22 = ATgetArgument(t, 1);
        if(((ATgetType(t_22) == AT_LIST) && !(ATisEmpty(t_22))))
          {
            w_37 = ATgetFirst((ATermList) t_22);
            {
              ATerm y_22 = (ATerm) ATgetNext((ATermList) t_22);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = w_37;
  if(match_cons(t, sym_stderr_0))
    {
      t = w_37;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = w_37;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = w_37;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm n_39 (ATerm z_37, ATerm a_38, ATerm b_38, ATerm t)
{
  ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL,l_38 = NULL,p_3 = NULL;
  t = SSLgetAnnotations(b_38);
  g_38 = t;
  t = z_37;
  if(match_cons(t, sym_Path_1))
    {
      l_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_38, a_38);
  p_3 = t;
  t = SSLsetAnnotations(p_3, g_38);
  if(match_cons(t, sym__2))
    {
      e_38 = ATgetArgument(t, 0);
      f_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_7(e_38, f_38, t);
  return(t);
}
ATerm o_39 (ATerm r_38, ATerm s_38, ATerm t_38, ATerm t)
{
  ATerm y_38 = NULL,z_38 = NULL,a_39 = NULL,f_39 = NULL,q_3 = NULL;
  t = SSLgetAnnotations(t_38);
  a_39 = t;
  t = SSL_is_string(r_38);
  f_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_39, s_38);
  q_3 = t;
  t = SSLsetAnnotations(q_3, a_39);
  if(match_cons(t, sym__2))
    {
      y_38 = ATgetArgument(t, 0);
      z_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_7(y_38, z_38, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm h_39 = NULL,i_39 = NULL,j_39 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_22 = ATgetArgument(t, 0);
      ATerm a_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  h_39 = t;
  if(match_cons(t, sym__2))
    {
      i_39 = ATgetArgument(t, 0);
      j_39 = ATgetArgument(t, 1);
      {
        ATerm c_23 = t;
        int d_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_39(h_39, t);
            ;
            LocalPopChoice(d_23);
          }
        else
          {
            t = c_23;
            {
              ATerm f_23 = t;
              int g_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_39(i_39, j_39, h_39, t);
                  ;
                  LocalPopChoice(g_23);
                }
              else
                {
                  t = f_23;
                  t = o_39(i_39, j_39, h_39, t);
                }
            }
          }
      }
    }
  else
    {
      t = k_39(h_39, t);
    }
  return(t);
}
ATerm l_4 (ATerm t)
{
  t = term_h_23;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm p_39 = NULL,q_39 = NULL,r_39 = NULL;
  ATerm j_23 = t;
  int k_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_39 = NULL;
      s_39 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_39, term_l_23);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(k_23);
    }
  else
    {
      t = j_23;
      t = debug_1_0(l_4, t);
      _fail(t);
    }
  q_39 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_7(r_39, t);
  p_39 = t;
  t = q_39;
  t = fclose_0_0(t);
  t = p_39;
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm w_39 = NULL,z_39 = NULL,t_17 = NULL,d_18 = NULL;
  t = if_verbose1_1_0(n_4, t);
  t = ReadFromFile_0_0(t);
  z_39 = t;
  t = SSL_explode_term(z_39);
  if(match_cons(t, sym__2))
    {
      d_18 = ATgetArgument(t, 0);
      {
        ATerm m_23 = ATgetArgument(t, 1);
        if(((ATgetType(m_23) == AT_LIST) && !(ATisEmpty(m_23))))
          {
            t_17 = ATgetFirst((ATermList) m_23);
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
  t = d_18;
  {
    ATerm o_23 = t;
    int p_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("\"pp-tables-0\"", 0, ATtrue)))
          _fail(t);
        ;
        LocalPopChoice(p_23);
      }
    else
      {
        t = o_23;
        t = type_failure_0_0(t);
      }
    t = t_17;
    if(match_cons(t, sym_PP_Table_1))
      {
        w_39 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = t_7(w_39, t);
  }
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = debug_1_0(q_4, t);
  return(t);
}
ATerm q_4 (ATerm t)
{
  t = term_q_23;
  return(t);
}
ATerm read_pp_tables_0_0 (ATerm t)
{
  ATerm u_39 = NULL,v_39 = NULL;
  u_39 = t;
  t = term_v_14;
  v_39 = t;
  t = SSL_table_create(v_39);
  t = u_39;
  t = map_1_0(m_4, t);
  return(t);
}
ATerm get_config_p_0_0 (ATerm t)
{
  ATerm r_23 = t;
  int s_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_23;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(s_23);
    }
  else
    {
      t = r_23;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm s_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm u_4 (ATerm t)
{
  t = xtc_io_transform_1_0(v_4, t);
  return(t);
}
ATerm v_4 (ATerm t)
{
  t = trm2abox_0_0(t);
  {
    ATerm u_23 = t;
    int v_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_40 = NULL;
        g_40 = t;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = g_40;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm w_23 = ATgetFirst((ATermList) t);
                ATerm x_23 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = g_40;
          }
        LocalPopChoice(v_23);
        {
          ATerm j_40 = NULL;
          j_40 = t;
          t = (ATerm) ATmakeAppl(sym_HV_2, (ATerm)ATempty, j_40);
        }
      }
    else
      {
        t = u_23;
      }
  }
  return(t);
}
ATerm ast2abox_0_0 (ATerm t)
{
  ATerm e_40 = NULL;
  e_40 = t;
  t = get_config_p_0_0(t);
  t = reverse_acc_2_0(_id, s_4, t);
  t = read_pp_tables_0_0(t);
  t = e_40;
  t = xtc_io_1_0(u_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm l_40 = NULL,m_40 = NULL,n_40 = NULL,q_40 = NULL,r_40 = NULL;
  l_40 = t;
  t = term_d_10;
  t = whoami_0_0(t);
  m_40 = t;
  t = term_v_16;
  q_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_24), m_40), term_b_24);
  r_40 = t;
  t = SSL_printnl(q_40, r_40);
  t = term_i_11;
  n_40 = t;
  t = SSL_exit(n_40);
  t = l_40;
  return(t);
}
ATerm at_end_1_0 (ATerm z_89 (ATerm), ATerm t)
{
  ATerm p_41 (ATerm t)
  {
    ATerm k_41 = NULL,l_41 = NULL,m_41 = NULL;
    m_41 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_41 = ATgetFirst((ATermList) t);
        l_41 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm d_19 = NULL,i_19 = NULL,v_7 = NULL;
          t = SSLgetAnnotations(m_41);
          d_19 = t;
          t = l_41;
          t = p_41(t);
          i_19 = t;
          t = (ATerm) ATinsert(CheckATermList(i_19), k_41);
          v_7 = t;
          t = SSLsetAnnotations(v_7, d_19);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = m_41;
        t = z_89(t);
      }
    return(t);
  }
  t = p_41(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm t_40 = NULL,u_40 = NULL,v_40 = NULL;
  t_40 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_40;
    }
  else
    {
      ATerm x_4 (ATerm t)
      {
        t = not_null(v_40);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((u_40 != NULL) && (u_40 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            u_40 = ATgetFirst((ATermList) t);
          if(((v_40 != NULL) && (v_40 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            v_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(u_40);
      t = at_end_1_0(x_4, t);
    }
  return(t);
}
ATerm g_42 (ATerm v_41, ATerm t)
{
  ATerm w_41 = NULL;
  t = SSL_explode_term(v_41);
  if(match_cons(t, sym__2))
    {
      ATerm d_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_24) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      w_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_41;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm z_41 = NULL,a_42 = NULL,c_42 = NULL;
  if(((c_42 != NULL) && (c_42 != t)))
    _fail(t);
  else
    c_42 = t;
  if(match_cons(t, sym__2))
    {
      z_41 = ATgetArgument(t, 0);
      a_42 = ATgetArgument(t, 1);
      {
        ATerm e_24 = t;
        int g_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_4 (ATerm t)
            {
              t = not_null(a_42);
              return(t);
            }
            t = not_null(z_41);
            t = at_end_1_0(y_4, t);
            ;
            LocalPopChoice(g_24);
          }
        else
          {
            t = e_24;
            t = g_42(not_null(c_42), t);
          }
      }
    }
  else
    {
      t = g_42(not_null(c_42), t);
    }
  return(t);
}
ATerm y_7 (ATerm e_30, ATerm d_30, ATerm t)
{
  ATerm i_42 = NULL,j_42 = NULL,k_42 = NULL;
  t = e_30;
  {
    ATerm h_24 = t;
    int i_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(i_24);
      }
    else
      {
        t = h_24;
        t = (ATerm) ATempty;
      }
    j_42 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_30, j_42);
    t = conc_0_0(t);
    i_42 = t;
    t = term_k_24;
    k_42 = t;
    t = SSL_table_put(k_42, e_30, i_42);
    t = (ATerm) ATmakeAppl(sym__3, term_k_24, e_30, i_42);
  }
  return(t);
}
ATerm z_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm v_42 = NULL,w_42 = NULL,x_42 = NULL;
  v_42 = t;
  t = term_t_23;
  w_42 = t;
  t = (ATerm) ATinsert(ATempty, v_42);
  x_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_23, (ATerm) ATinsert(ATempty, v_42));
  t = y_7(w_42, x_42, t);
  t = v_42;
  return(t);
}
ATerm f_5 (ATerm t)
{
  t = term_m_24;
  return(t);
}
ATerm pp_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_4, c_5, f_5, t);
  return(t);
}
ATerm g_5 (ATerm t)
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
ATerm h_5 (ATerm t)
{
  ATerm b_43 = NULL,c_43 = NULL,d_43 = NULL;
  b_43 = t;
  t = SSL_string_to_int(b_43);
  c_43 = t;
  t = term_n_24;
  d_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_24, c_43);
  t = g_8(d_43, c_43, t);
  t = b_43;
  return(t);
}
ATerm k_5 (ATerm t)
{
  t = term_o_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_5, h_5, k_5, t);
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm g_43 = NULL;
  g_43 = t;
  if(match_string(t, "-S"))
    {
      t = g_43;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = g_43;
    }
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm j_43 = NULL,k_43 = NULL;
  t = term_p_24;
  j_43 = t;
  t = term_j_11;
  k_43 = t;
  t = term_q_24;
  t = g_8(j_43, k_43, t);
  t = term_s_24;
  return(t);
}
ATerm o_5 (ATerm t)
{
  t = term_t_24;
  return(t);
}
ATerm p_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm l_43 = NULL,m_43 = NULL,n_43 = NULL;
  l_43 = t;
  t = SSL_string_to_int(l_43);
  m_43 = t;
  t = term_p_24;
  n_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_24, m_43);
  t = g_8(n_43, m_43, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, l_43);
  return(t);
}
ATerm s_5 (ATerm t)
{
  t = term_v_24;
  return(t);
}
ATerm x_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_5 (ATerm t)
{
  ATerm o_43 = NULL,p_43 = NULL;
  t = term_w_24;
  o_43 = t;
  t = term_d_10;
  p_43 = t;
  t = term_x_24;
  t = g_8(o_43, p_43, t);
  t = term_y_24;
  return(t);
}
ATerm z_5 (ATerm t)
{
  t = term_z_24;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm a_25 = t;
  int b_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_5, n_5, o_5, t);
      ;
      LocalPopChoice(b_25);
    }
  else
    {
      t = a_25;
      {
        ATerm c_25 = t;
        int d_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(p_5, q_5, s_5, t);
            ;
            LocalPopChoice(d_25);
          }
        else
          {
            t = c_25;
            t = Option_3_0(x_5, y_5, z_5, t);
          }
      }
    }
  return(t);
}
ATerm g_8 (ATerm y_29, ATerm z_29, ATerm t)
{
  ATerm r_43 = NULL;
  t = term_k_24;
  r_43 = t;
  t = SSL_table_put(r_43, y_29, z_29);
  t = (ATerm) ATmakeAppl(sym__3, term_k_24, y_29, z_29);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm u_43 = NULL,v_43 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_43 = NULL,x_43 = NULL,y_43 = NULL;
      t = term_d_10;
      t = d_0(t);
      w_43 = t;
      t = term_e_25;
      x_43 = t;
      t = term_f_25;
      y_43 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_25, term_f_25, w_43);
      t = e_8(x_43, y_43, w_43, t);
      _fail(t);
    }
  else
    {
      ATerm b_44 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_43 = ATgetFirst((ATermList) t);
          v_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_43;
      t = a_0(t);
      t = term_d_10;
      t = c_0(t);
      b_44 = t;
      t = (ATerm) ATinsert(CheckATermList(v_43), b_44);
    }
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm h_44 = NULL;
  h_44 = t;
  if(match_string(t, "-o"))
    {
      t = h_44;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = h_44;
    }
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm i_44 = NULL,j_44 = NULL;
  i_44 = t;
  t = term_j_20;
  j_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_20, i_44);
  t = g_8(j_44, i_44, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, i_44);
  return(t);
}
ATerm h_6 (ATerm t)
{
  t = term_g_25;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_6, e_6, h_6, t);
  return(t);
}
ATerm e_8 (ATerm q_32, ATerm r_32, ATerm p_32, ATerm t)
{
  ATerm n_44 = NULL,o_44 = NULL,q_44 = NULL;
  n_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_32, r_32);
  {
    ATerm h_25 = t;
    int i_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_25 = ATgetArgument(t, 0);
            ATerm l_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, q_32, r_32);
        t = d_8(q_32, r_32, t);
        ;
        LocalPopChoice(i_25);
      }
    else
      {
        t = h_25;
        t = (ATerm) ATempty;
      }
    o_44 = t;
    t = (ATerm) ATinsert(CheckATermList(o_44), p_32);
    q_44 = t;
    t = SSL_table_put(q_32, r_32, q_44);
    t = n_44;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm h_45 = NULL,k_45 = NULL,l_45 = NULL,m_45 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_45 = NULL,t_45 = NULL,u_45 = NULL;
      t = term_d_10;
      t = j_0(t);
      q_45 = t;
      t = term_e_25;
      t_45 = t;
      t = term_f_25;
      u_45 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_25, term_f_25, q_45);
      t = e_8(t_45, u_45, q_45, t);
      _fail(t);
    }
  else
    {
      ATerm c_46 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_45 = ATgetFirst((ATermList) t);
          k_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_45;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_45 = ATgetFirst((ATermList) t);
          m_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_45;
      t = h_0(t);
      t = l_45;
      t = i_0(t);
      c_46 = t;
      t = (ATerm) ATinsert(CheckATermList(m_45), c_46);
    }
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm e_46 = NULL;
  e_46 = t;
  if(match_string(t, "-i"))
    {
      t = e_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = e_46;
    }
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm f_46 = NULL,g_46 = NULL;
  f_46 = t;
  t = term_n_20;
  g_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_20, f_46);
  t = g_8(g_46, f_46, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, f_46);
  return(t);
}
ATerm m_6 (ATerm t)
{
  t = term_m_25;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_6, k_6, m_6, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm h_46 = NULL,i_46 = NULL,m_46 = NULL,p_46 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_10;
  t = whoami_0_0(t);
  h_46 = t;
  t = term_v_16;
  m_46 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_n_25), h_46);
  p_46 = t;
  t = SSL_printnl(m_46, p_46);
  t = term_i_11;
  i_46 = t;
  t = SSL_exit(i_46);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_r_25;
  t = get_config_0_0(t);
  return(t);
}
ATerm z_7 (ATerm t_44, ATerm u_44, ATerm t)
{
  ATerm u_25 = t;
  int x_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(t_44, u_44);
      ;
      LocalPopChoice(x_25);
    }
  else
    {
      t = u_25;
      t = SSL_addr(t_44, u_44);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm b_96 (ATerm), ATerm c_96 (ATerm), ATerm t)
{
  ATerm r_46 = NULL,s_46 = NULL,t_46 = NULL;
  r_46 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_46;
      t = b_96(t);
    }
  else
    {
      ATerm y_46 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_46 = ATgetFirst((ATermList) t);
          t_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_46;
      t = foldr_2_0(b_96, c_96, t);
      y_46 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_46, y_46);
      t = c_96(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm n_6 (ATerm t)
{
  t = term_j_11;
  return(t);
}
ATerm t_6 (ATerm t)
{
  ATerm c_20 = NULL,d_20 = NULL;
  if(match_cons(t, sym__2))
    {
      c_20 = ATgetArgument(t, 0);
      d_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_7(c_20, d_20, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm b_47 = NULL,u_19 = NULL,x_19 = NULL;
  t = times_0_0(t);
  x_19 = t;
  t = SSL_explode_term(x_19);
  if(match_cons(t, sym__2))
    {
      ATerm y_25 = ATgetArgument(t, 0);
      u_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_19;
  t = foldr_2_0(n_6, t_6, t);
  b_47 = t;
  t = SSL_TicksToSeconds(b_47);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm q_47 = NULL,r_47 = NULL,s_47 = NULL;
  q_47 = t;
  if(match_cons(t, sym__2))
    {
      r_47 = ATgetArgument(t, 0);
      s_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_25 = t;
    int a_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_47;
        if((r_47 != t))
          {
            _fail(t);
          }
        t = q_47;
        ;
        LocalPopChoice(a_26);
      }
    else
      {
        t = z_25;
        t = (ATerm) ATmakeAppl(sym__2, r_47, s_47);
        {
          ATerm b_26 = t;
          int c_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(r_47, s_47);
              ;
              LocalPopChoice(c_26);
            }
          else
            {
              t = b_26;
              t = SSL_gtr(r_47, s_47);
            }
          t = (ATerm) ATmakeAppl(sym__2, r_47, s_47);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm e_82 (ATerm), ATerm t)
{
  ATerm w_47 = NULL;
  w_47 = t;
  {
    ATerm d_26 = t;
    int e_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_47 = NULL;
        t = term_p_24;
        t = get_config_0_0(t);
        y_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_47, term_i_11);
        t = geq_0_0(t);
        t = w_47;
        t = e_82(t);
        ;
        LocalPopChoice(e_26);
      }
    else
      {
        t = d_26;
        t = w_47;
      }
  }
  return(t);
}
ATerm w_6 (ATerm t)
{
  ATerm a_48 = NULL,b_48 = NULL,d_48 = NULL,e_48 = NULL;
  t = run_time_0_0(t);
  a_48 = t;
  t = term_d_10;
  t = whoami_0_0(t);
  b_48 = t;
  t = term_v_16;
  d_48 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_26), a_48), term_f_26), b_48);
  e_48 = t;
  t = SSL_printnl(d_48, e_48);
  t = (ATerm) ATmakeAppl(sym__2, term_v_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_26), a_48), term_f_26), b_48));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(w_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm f_48 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_11;
  f_48 = t;
  t = SSL_exit(f_48);
  return(t);
}
ATerm z_6 (ATerm t)
{
  ATerm n_48 = NULL,o_48 = NULL;
  o_48 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = o_48;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          n_48 = ATgetArgument(t, 0);
          {
            ATerm i_21 = NULL,i_12 = NULL;
            t = SSLgetAnnotations(o_48);
            i_21 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, n_48);
            i_12 = t;
            t = SSLsetAnnotations(i_12, i_21);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = o_48;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm j_101 (ATerm), ATerm t)
{
  ATerm h_26 = t;
  int i_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_26;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(i_26);
    }
  else
    {
      t = h_26;
      t = fetch_1_0(z_6, t);
    }
  t = j_101(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm r_48 = NULL,s_48 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_48 = ATgetFirst((ATermList) t);
      s_48 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_48 = NULL,x_48 = NULL;
        ATerm c_7 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(w_48)), not_null(x_48));
          return(t);
        }
        t = not_null(s_48);
        t = g_0(t);
        if(((w_48 != NULL) && (w_48 != t)))
          _fail(t);
        else
          w_48 = t;
        t = not_null(r_48);
        t = e_0(t);
        if(((x_48 != NULL) && (x_48 != t)))
          _fail(t);
        else
          x_48 = t;
        t = not_null(s_48);
        t = reverse_acc_2_0(e_0, c_7, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_d_10;
      t = g_0(t);
    }
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm b_49 = NULL,c_49 = NULL,d_49 = NULL,k_12 = NULL;
  d_49 = t;
  if(match_cons(t, sym_Program_1))
    {
      c_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_49);
  b_49 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, c_49);
  k_12 = t;
  t = SSLsetAnnotations(k_12, b_49);
  return(t);
}
ATerm m_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm f_49 = NULL;
  f_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_49), term_k_26);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm z_48 = NULL,a_49 = NULL;
  ATerm l_26 = t;
  int m_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_25;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(m_26);
    }
  else
    {
      t = l_26;
      t = fetch_1_0(d_7, t);
    }
  t = term_n_26;
  t = echo_0_0(t);
  t = term_e_25;
  z_48 = t;
  t = term_f_25;
  a_49 = t;
  t = term_o_26;
  t = d_8(z_48, a_49, t);
  t = reverse_acc_2_0(_id, m_7, t);
  t = map_1_0(n_7, t);
  return(t);
}
ATerm fetch_1_0 (ATerm t_89 (ATerm), ATerm t)
{
  ATerm c_50 (ATerm t)
  {
    ATerm z_49 = NULL,a_50 = NULL,b_50 = NULL;
    z_49 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_50 = ATgetFirst((ATermList) t);
        b_50 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm p_26 = t;
      int q_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_21 = NULL,h_22 = NULL,m_12 = NULL;
          t = SSLgetAnnotations(z_49);
          z_21 = t;
          t = a_50;
          t = t_89(t);
          h_22 = t;
          t = (ATerm) ATinsert(CheckATermList(b_50), h_22);
          m_12 = t;
          t = SSLsetAnnotations(m_12, z_21);
          ;
          LocalPopChoice(q_26);
        }
      else
        {
          t = p_26;
          {
            ATerm x_22 = NULL,b_23 = NULL,o_15 = NULL;
            t = SSLgetAnnotations(z_49);
            x_22 = t;
            t = b_50;
            t = c_50(t);
            b_23 = t;
            t = (ATerm) ATinsert(CheckATermList(b_23), a_50);
            o_15 = t;
            t = SSLsetAnnotations(o_15, x_22);
          }
        }
    }
    return(t);
  }
  t = c_50(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm g_50 = NULL,h_50 = NULL,i_50 = NULL;
  g_50 = t;
  {
    ATerm v_26 = t;
    int x_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = g_50;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm y_26 = ATgetFirst((ATermList) t);
                ATerm z_26 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = g_50;
          }
        ;
        LocalPopChoice(x_26);
      }
    else
      {
        t = v_26;
        t = (ATerm) ATinsert(ATempty, g_50);
      }
    h_50 = t;
    t = term_k_20;
    i_50 = t;
    t = SSL_printnl(i_50, h_50);
    t = g_50;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_r_25;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm c_8 (ATerm x_51, ATerm y_51, ATerm t)
{
  t = SSL_strcat(x_51, y_51);
  return(t);
}
ATerm debug_1_0 (ATerm c_105 (ATerm), ATerm t)
{
  ATerm m_50 = NULL,n_50 = NULL,o_50 = NULL,p_50 = NULL;
  m_50 = t;
  t = c_105(t);
  n_50 = t;
  t = term_v_16;
  o_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_50), n_50);
  p_50 = t;
  t = SSL_printnl(o_50, p_50);
  t = m_50;
  return(t);
}
ATerm map_1_0 (ATerm j_89 (ATerm), ATerm t)
{
  ATerm e_51 (ATerm t)
  {
    ATerm b_51 = NULL,c_51 = NULL,d_51 = NULL;
    b_51 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_51;
      }
    else
      {
        ATerm f_24 = NULL,j_24 = NULL,l_24 = NULL,o_17 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_51 = ATgetFirst((ATermList) t);
            d_51 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_51);
        f_24 = t;
        t = c_51;
        t = j_89(t);
        j_24 = t;
        t = d_51;
        t = e_51(t);
        l_24 = t;
        t = (ATerm) ATinsert(CheckATermList(l_24), j_24);
        o_17 = t;
        t = SSLsetAnnotations(o_17, f_24);
      }
    return(t);
  }
  t = e_51(t);
  return(t);
}
ATerm u_7 (ATerm t)
{
  ATerm a_27 = t;
  int b_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(b_27);
    }
  else
    {
      t = a_27;
    }
  return(t);
}
ATerm a_8 (ATerm t)
{
  t = term_c_27;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm d_27 = t;
  int e_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_51 = NULL;
      m_51 = t;
      t = SSL_is_string(m_51);
      ;
      LocalPopChoice(e_27);
    }
  else
    {
      t = d_27;
      {
        ATerm f_27 = t;
        int g_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(u_7, t);
            ;
            LocalPopChoice(g_27);
          }
        else
          {
            t = f_27;
            {
              ATerm s_51 = NULL,t_51 = NULL,u_51 = NULL;
              s_51 = t;
              if(match_cons(t, sym_Path_1))
                {
                  t_51 = ATgetArgument(t, 0);
                  t = t_51;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      t_51 = ATgetArgument(t, 0);
                      t = t_51;
                      {
                        ATerm j_27 = t;
                        int k_27 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(k_27);
                          }
                        else
                          {
                            t = j_27;
                            t = debug_1_0(a_8, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm a_52 = NULL,b_52 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          t_51 = ATgetArgument(t, 0);
                          u_51 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = t_51;
                      t = eval_config_0_0(t);
                      a_52 = t;
                      t = u_51;
                      t = eval_config_0_0(t);
                      b_52 = t;
                      t = (ATerm) ATmakeAppl(sym__2, a_52, b_52);
                      t = c_8(a_52, b_52, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm d_8 (ATerm h_34, ATerm i_34, ATerm t)
{
  t = SSL_table_get(h_34, i_34);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm p_52 = NULL,q_52 = NULL;
  p_52 = t;
  t = term_k_24;
  q_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_24, p_52);
  t = d_8(q_52, p_52, t);
  {
    ATerm l_27 = t;
    int m_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_52 = NULL,s_52 = NULL;
        t = eval_config_0_0(t);
        r_52 = t;
        t = term_k_24;
        s_52 = t;
        t = SSL_table_put(s_52, p_52, r_52);
        t = r_52;
        ;
        LocalPopChoice(m_27);
      }
    else
      {
        t = l_27;
      }
  }
  return(t);
}
ATerm f_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_8 (ATerm t)
{
  ATerm v_52 = NULL,w_52 = NULL;
  t = term_p_27;
  v_52 = t;
  t = term_d_10;
  w_52 = t;
  t = term_q_27;
  t = g_8(v_52, w_52, t);
  return(t);
}
ATerm v_8 (ATerm t)
{
  t = term_r_27;
  return(t);
}
ATerm y_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_8 (ATerm t)
{
  ATerm x_52 = NULL,y_52 = NULL,e_53 = NULL,f_53 = NULL;
  t = term_p_27;
  e_53 = t;
  t = term_d_10;
  f_53 = t;
  t = term_q_27;
  t = g_8(e_53, f_53, t);
  t = term_t_27;
  x_52 = t;
  t = term_d_10;
  y_52 = t;
  t = term_u_27;
  t = g_8(x_52, y_52, t);
  t = term_v_27;
  return(t);
}
ATerm a_9 (ATerm t)
{
  t = term_w_27;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm g_28 = t;
  int h_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_8, u_8, v_8, t);
      ;
      LocalPopChoice(h_28);
    }
  else
    {
      t = g_28;
      t = Option_3_0(y_8, z_8, a_9, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm o_72 (ATerm), ATerm p_72 (ATerm), ATerm t)
{
  ATerm g_53 = NULL,h_53 = NULL,i_53 = NULL,j_53 = NULL,k_53 = NULL,l_53 = NULL,r_17 = NULL;
  l_53 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_53 = ATgetFirst((ATermList) t);
      i_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_53);
  g_53 = t;
  t = h_53;
  t = o_72(t);
  j_53 = t;
  t = i_53;
  t = p_72(t);
  k_53 = t;
  t = (ATerm) ATinsert(CheckATermList(k_53), j_53);
  r_17 = t;
  t = SSLsetAnnotations(r_17, g_53);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm h_103 (ATerm), ATerm t)
{
  ATerm r_53 = NULL,s_53 = NULL,t_53 = NULL,u_53 = NULL,w_53 = NULL,x_53 = NULL,u_17 = NULL;
  if(((r_53 != NULL) && (r_53 != t)))
    _fail(t);
  else
    r_53 = t;
  {
    ATerm i_28 = t;
    int j_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_k_28;
        t = h_103(t);
        ;
        LocalPopChoice(j_28);
      }
    else
      {
        t = i_28;
      }
    t = not_null(r_53);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((t_53 != NULL) && (t_53 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          t_53 = ATgetFirst((ATermList) t);
        if(((u_53 != NULL) && (u_53 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          u_53 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(r_53));
    if(((s_53 != NULL) && (s_53 != t)))
      _fail(t);
    else
      s_53 = t;
    t = term_r_25;
    if(((x_53 != NULL) && (x_53 != t)))
      _fail(t);
    else
      x_53 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_r_25, not_null(t_53));
    t = g_8(not_null(x_53), not_null(t_53), t);
    t = not_null(u_53);
    {
      ATerm h_54 (ATerm t)
      {
        ATerm l_28 = t;
        int m_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_28 = t;
            int o_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_54 = NULL;
                a_54 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = a_54;
                ;
                LocalPopChoice(o_28);
              }
            else
              {
                t = n_28;
                t = h_103(t);
                t = Cons_2_0(_id, h_54, t);
              }
            ;
            LocalPopChoice(m_28);
          }
        else
          {
            t = l_28;
            {
              ATerm d_54 = NULL,e_54 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  d_54 = ATgetFirst((ATermList) t);
                  e_54 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(e_54), (ATerm) ATmakeAppl(sym_Undefined_1, d_54));
            }
          }
        return(t);
      }
      t = h_54(t);
      if(((w_53 != NULL) && (w_53 != t)))
        _fail(t);
      else
        w_53 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(w_53)), (ATerm) ATmakeAppl(sym_Program_1, not_null(t_53)));
      if(((u_17 != NULL) && (u_17 != t)))
        _fail(t);
      else
        u_17 = t;
      t = SSLsetAnnotations(not_null(u_17), not_null(s_53));
    }
  }
  return(t);
}
ATerm e_9 (ATerm t)
{
  ATerm t_54 = NULL;
  t_54 = t;
  if(match_string(t, "--help"))
    {
      t = t_54;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = t_54;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = t_54;
        }
    }
  return(t);
}
ATerm f_9 (ATerm t)
{
  ATerm u_54 = NULL,v_54 = NULL;
  t = term_j_26;
  u_54 = t;
  t = term_d_10;
  v_54 = t;
  t = term_p_28;
  t = g_8(u_54, v_54, t);
  t = term_q_28;
  return(t);
}
ATerm g_9 (ATerm t)
{
  t = term_r_28;
  return(t);
}
ATerm i_9 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm g_103 (ATerm), ATerm t)
{
  ATerm m_54 = NULL,n_54 = NULL,o_54 = NULL,p_54 = NULL,q_54 = NULL,r_54 = NULL,s_54 = NULL;
  if(((o_54 != NULL) && (o_54 != t)))
    _fail(t);
  else
    o_54 = t;
  t = term_e_25;
  if(((q_54 != NULL) && (q_54 != t)))
    _fail(t);
  else
    q_54 = t;
  t = term_f_25;
  if(((r_54 != NULL) && (r_54 != t)))
    _fail(t);
  else
    r_54 = t;
  t = (ATerm) ATempty;
  if(((s_54 != NULL) && (s_54 != t)))
    _fail(t);
  else
    s_54 = t;
  t = SSL_table_put(not_null(q_54), not_null(r_54), not_null(s_54));
  t = not_null(o_54);
  {
    ATerm b_9 (ATerm t)
    {
      ATerm s_28 = t;
      int t_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_103(t);
          ;
          LocalPopChoice(t_28);
        }
      else
        {
          t = s_28;
          {
            ATerm u_28 = t;
            int x_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(e_9, f_9, g_9, t);
                ;
                LocalPopChoice(x_28);
              }
            else
              {
                t = u_28;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(b_9, t);
    {
      ATerm z_28 = t;
      int a_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_55 = NULL;
          c_55 = t;
          {
            ATerm b_29 = t;
            int c_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_25 = NULL;
                t = c_55;
                {
                  ATerm d_29 = t;
                  int h_29 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_j_26;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(h_29);
                    }
                  else
                    {
                      t = d_29;
                      t = fetch_1_0(i_9, t);
                    }
                  t = c_55;
                  t = default_system_usage_0_0(t);
                  t = term_j_11;
                  k_25 = t;
                  t = SSL_exit(k_25);
                }
                ;
                LocalPopChoice(c_29);
              }
            else
              {
                t = b_29;
                {
                  ATerm o_25 = NULL;
                  t = term_p_27;
                  t = get_config_0_0(t);
                  t = c_55;
                  t = default_system_about_0_0(t);
                  t = term_j_11;
                  o_25 = t;
                  t = SSL_exit(o_25);
                }
              }
          }
          ;
          LocalPopChoice(a_29);
        }
      else
        {
          t = z_28;
          {
            ATerm i_29 = t;
            int j_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_55 = NULL,e_55 = NULL,f_55 = NULL;
                ATerm j_9 (ATerm t)
                {
                  ATerm g_55 = NULL,h_55 = NULL,i_55 = NULL,w_17 = NULL;
                  i_55 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      h_55 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(i_55);
                  g_55 = t;
                  t = h_55;
                  if(((m_54 != NULL) && (m_54 != t)))
                    _fail(t);
                  else
                    m_54 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, h_55);
                  w_17 = t;
                  t = SSLsetAnnotations(w_17, g_55);
                  return(t);
                }
                t = fetch_1_0(j_9, t);
                t = term_v_16;
                if(((e_55 != NULL) && (e_55 != t)))
                  _fail(t);
                else
                  e_55 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_54)), term_k_29);
                if(((f_55 != NULL) && (f_55 != t)))
                  _fail(t);
                else
                  f_55 = t;
                t = SSL_printnl(not_null(e_55), not_null(f_55));
                t = (ATerm) ATmakeAppl(sym__2, term_v_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_54)), term_k_29));
                t = default_system_usage_0_0(t);
                t = term_i_11;
                if(((d_55 != NULL) && (d_55 != t)))
                  _fail(t);
                else
                  d_55 = t;
                t = SSL_exit(not_null(d_55));
                ;
                LocalPopChoice(j_29);
              }
            else
              {
                t = i_29;
              }
          }
        }
      if(((n_54 != NULL) && (n_54 != t)))
        _fail(t);
      else
        n_54 = t;
      t = term_e_25;
      if(((p_54 != NULL) && (p_54 != t)))
        _fail(t);
      else
        p_54 = t;
      t = SSL_table_destroy(not_null(p_54));
      t = not_null(n_54);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm l_101 (ATerm), ATerm m_101 (ATerm), ATerm n_101 (ATerm), ATerm o_101 (ATerm), ATerm t)
{
  ATerm n_55 = NULL,o_55 = NULL,p_55 = NULL,q_55 = NULL;
  t = parse_options_1_0(l_101, t);
  n_55 = t;
  t = term_e_22;
  q_55 = t;
  t = SSL_table_create(q_55);
  t = term_e_22;
  o_55 = t;
  t = term_g_22;
  p_55 = t;
  t = SSL_table_put(o_55, p_55, n_55);
  t = n_55;
  t = n_101(t);
  {
    ATerm l_29 = t;
    int m_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(m_101, t);
        ;
        LocalPopChoice(m_29);
      }
    else
      {
        t = l_29;
        {
          ATerm n_29 = t;
          int o_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_101(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(o_29);
            }
          else
            {
              t = n_29;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm m_9 (ATerm t)
{
  ATerm p_29 = t;
  int q_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
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
            t = output_option_0_0(t);
            ;
            LocalPopChoice(s_29);
          }
        else
          {
            t = r_29;
            {
              ATerm t_29 = t;
              int u_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(o_9, q_9, r_9, t);
                  ;
                  LocalPopChoice(u_29);
                }
              else
                {
                  t = t_29;
                  {
                    ATerm a_30 = t;
                    int b_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(b_30);
                      }
                    else
                      {
                        t = a_30;
                        {
                          ATerm c_30 = t;
                          int f_30 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = keep_option_0_0(t);
                              ;
                              LocalPopChoice(f_30);
                            }
                          else
                            {
                              t = c_30;
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
ATerm o_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_9 (ATerm t)
{
  ATerm s_55 = NULL,t_55 = NULL;
  t = term_g_30;
  s_55 = t;
  t = term_d_10;
  t_55 = t;
  t = term_h_30;
  t = g_8(s_55, t_55, t);
  t = term_i_30;
  return(t);
}
ATerm r_9 (ATerm t)
{
  t = term_j_30;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(m_9, default_usage_0_0, _id, ast2abox_0_0, t);
  return(t);
}
