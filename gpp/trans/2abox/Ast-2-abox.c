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
ATerm term_l_36;
ATerm term_k_36;
ATerm term_j_36;
ATerm term_i_36;
ATerm term_l_35;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_g_34;
ATerm term_w_33;
ATerm term_o_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_t_32;
ATerm term_f_32;
ATerm term_d_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_n_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_h_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_z_28;
ATerm term_x_28;
ATerm term_u_28;
ATerm term_j_28;
ATerm term_v_27;
ATerm term_j_27;
ATerm term_z_26;
ATerm term_f_26;
ATerm term_b_26;
ATerm term_o_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_x_24;
ATerm term_f_23;
ATerm term_c_23;
ATerm term_z_22;
ATerm term_x_22;
ATerm term_t_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_b_22;
ATerm term_t_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_k_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_c_19;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_t_18;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_t_13;
ATerm term_p_13;
ATerm term_n_13;
ATerm term_i_12;
void init_constant_terms (void)
{
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("obtaining: ", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("No pp entry found for: ", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: cannot rewrite to box: ", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym__2, term_p_19, term_c_19);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(sym__2, term_x_24, term_a_25);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(sym__2, term_c_29, term_t_13);
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_13);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(sym__2, term_n_29, term_i_12);
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(sym__2, term_a_30, term_b_30);
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(sym__2, term_e_33, term_i_12);
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(sym__2, term_k_33, term_i_12);
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(sym__2, term_y_31, term_i_12);
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(sym__2, term_i_36, term_i_12);
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm flat_list_0_0 (ATerm);
ATerm Instantiate_1_0 (ATerm l_0 (ATerm), ATerm);
ATerm bottomup_1_0 (ATerm a_85 (ATerm), ATerm);
ATerm p_6 (ATerm f_29, ATerm g_29, ATerm e_29, ATerm);
ATerm p_2 (ATerm);
ATerm instantiate_sep_list_1_0 (ATerm e_107 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm d_96 (ATerm), ATerm e_96 (ATerm), ATerm f_96 (ATerm), ATerm);
ATerm v_2 (ATerm);
ATerm collect_p__1_0 (ATerm i_113 (ATerm), ATerm);
ATerm q_6 (ATerm r_45, ATerm s_45, ATerm);
ATerm r_6 (ATerm v_81 (ATerm), ATerm h_27, ATerm i_27, ATerm);
ATerm a_3 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm s_6 (ATerm w_28, ATerm y_28, ATerm v_28, ATerm);
ATerm symbol2abox6_0_0 (ATerm);
ATerm symbol2abox5_0_0 (ATerm);
ATerm u_6 (ATerm c_28, ATerm d_28, ATerm f_28, ATerm e_28, ATerm);
ATerm v_6 (ATerm x_27, ATerm y_27, ATerm b_28, ATerm a_28, ATerm z_27, ATerm);
ATerm x_6 (ATerm z_44, ATerm a_45, ATerm);
ATerm y_6 (ATerm p_38, ATerm n_38, ATerm o_38, ATerm);
ATerm repeat_1_0 (ATerm g_99 (ATerm), ATerm);
ATerm e_4 (ATerm);
ATerm index_0_0 (ATerm);
ATerm j_4 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm b_7 (ATerm o_27, ATerm n_27, ATerm s_27, ATerm);
ATerm genzip_4_0 (ATerm m_91 (ATerm), ATerm n_91 (ATerm), ATerm o_91 (ATerm), ATerm p_91 (ATerm), ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm nzip_1_0 (ATerm y_91 (ATerm), ATerm);
ATerm v_4 (ATerm);
ATerm x_4 (ATerm);
ATerm pp_table_get_0_0 (ATerm);
ATerm y_4 (ATerm);
ATerm trm2abox_appl_0_0 (ATerm);
ATerm trm2abox_list_0_0 (ATerm);
ATerm trm2abox_0_0 (ATerm);
ATerm f_7 (ATerm i_59, ATerm j_59, ATerm);
ATerm g_7 (ATerm e_105 (ATerm), ATerm d_583, ATerm q_59, ATerm);
ATerm h_7 (ATerm i_100 (ATerm), ATerm k_52, ATerm i_52, ATerm);
ATerm y_13 (ATerm o_13, ATerm);
ATerm z_13 (ATerm q_13, ATerm r_13, ATerm s_13, ATerm);
ATerm e_5 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm g_5 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm h_5 (ATerm);
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
ATerm n_5 (ATerm);
ATerm r_5 (ATerm);
ATerm s_5 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm u_83 (ATerm), ATerm);
ATerm u_5 (ATerm);
ATerm xtc_io_1_0 (ATerm v_83 (ATerm), ATerm);
ATerm v_5 (ATerm);
ATerm path_to_string_0_0 (ATerm);
ATerm w_5 (ATerm);
ATerm mk_key_0_0 (ATerm);
ATerm z_5 (ATerm);
ATerm a_6 (ATerm);
ATerm l_7 (ATerm c_61, ATerm d_61, ATerm);
ATerm selector_2_0 (ATerm o_78 (ATerm), ATerm p_78 (ATerm), ATerm);
ATerm unescape_chars_0_0 (ATerm);
ATerm d_6 (ATerm);
ATerm at_last_1_0 (ATerm k_90 (ATerm), ATerm);
ATerm last_0_0 (ATerm);
ATerm e_6 (ATerm);
ATerm unquote_chars_1_0 (ATerm r_98 (ATerm), ATerm);
ATerm S_1_0 (ATerm t_78 (ATerm), ATerm);
ATerm SOpt_2_0 (ATerm f_80 (ATerm), ATerm g_80 (ATerm), ATerm);
ATerm Arg2_2_0 (ATerm r_78 (ATerm), ATerm s_78 (ATerm), ATerm);
ATerm Arg_1_0 (ATerm q_78 (ATerm), ATerm);
ATerm f_6 (ATerm);
ATerm g_6 (ATerm);
ATerm h_6 (ATerm);
ATerm j_6 (ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm MakePPTerm_0_0 (ATerm);
ATerm topdown_1_0 (ATerm z_84 (ATerm), ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm w_6 (ATerm);
ATerm t_7 (ATerm b_61, ATerm);
ATerm oncetd_1_0 (ATerm d_86 (ATerm), ATerm);
ATerm get_options_0_0 (ATerm);
ATerm z_6 (ATerm);
ATerm type_failure_0_0 (ATerm);
ATerm a_23 (ATerm s_22, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm w_7 (ATerm o_59, ATerm);
ATerm x_7 (ATerm e_47, ATerm f_47, ATerm);
ATerm _2_0 (ATerm z_67 (ATerm), ATerm a_68 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm a_7 (ATerm);
ATerm c_7 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm d_7 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm e_7 (ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm read_pp_tables_0_0 (ATerm);
ATerm get_config_p_0_0 (ATerm);
ATerm p_7 (ATerm);
ATerm q_7 (ATerm);
ATerm r_7 (ATerm);
ATerm ast2abox_0_0 (ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm at_end_1_0 (ATerm z_89 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm n_26 (ATerm d_26, ATerm);
ATerm conc_0_0 (ATerm);
ATerm y_7 (ATerm e_30, ATerm d_30, ATerm);
ATerm a_8 (ATerm);
ATerm f_8 (ATerm);
ATerm k_8 (ATerm);
ATerm pp_options_0_0 (ATerm);
ATerm n_8 (ATerm);
ATerm o_8 (ATerm);
ATerm p_8 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm q_8 (ATerm);
ATerm r_8 (ATerm);
ATerm t_8 (ATerm);
ATerm u_8 (ATerm);
ATerm y_8 (ATerm);
ATerm z_8 (ATerm);
ATerm e_9 (ATerm);
ATerm i_9 (ATerm);
ATerm j_9 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm g_8 (ATerm y_29, ATerm z_29, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm k_9 (ATerm);
ATerm l_9 (ATerm);
ATerm m_9 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm e_8 (ATerm q_32, ATerm r_32, ATerm p_32, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm n_9 (ATerm);
ATerm o_9 (ATerm);
ATerm s_9 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm z_7 (ATerm t_44, ATerm u_44, ATerm);
ATerm foldr_2_0 (ATerm b_96 (ATerm), ATerm c_96 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm t_9 (ATerm);
ATerm u_9 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm e_82 (ATerm), ATerm);
ATerm v_9 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm x_9 (ATerm);
ATerm need_help_1_0 (ATerm j_101 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm n_77 (ATerm), ATerm);
ATerm d_10 (ATerm);
ATerm f_10 (ATerm);
ATerm g_10 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm o_77 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm t_89 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm c_8 (ATerm x_51, ATerm y_51, ATerm);
ATerm debug_1_0 (ATerm c_105 (ATerm), ATerm);
ATerm map_1_0 (ATerm j_89 (ATerm), ATerm);
ATerm h_10 (ATerm);
ATerm i_10 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm d_8 (ATerm h_34, ATerm i_34, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm j_10 (ATerm);
ATerm k_10 (ATerm);
ATerm l_10 (ATerm);
ATerm m_10 (ATerm);
ATerm n_10 (ATerm);
ATerm o_10 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm o_72 (ATerm), ATerm p_72 (ATerm), ATerm);
ATerm p_10 (ATerm);
ATerm parse_options_p__1_0 (ATerm h_103 (ATerm), ATerm);
ATerm t_10 (ATerm);
ATerm u_10 (ATerm);
ATerm v_10 (ATerm);
ATerm w_10 (ATerm);
ATerm parse_options_1_0 (ATerm g_103 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm l_101 (ATerm), ATerm m_101 (ATerm), ATerm n_101 (ATerm), ATerm o_101 (ATerm), ATerm);
ATerm z_10 (ATerm);
ATerm a_11 (ATerm);
ATerm d_11 (ATerm);
ATerm f_11 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm b_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm p_0 = NULL;
  p_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_0;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm v_0 = ATgetFirst((ATermList) t);
          ATerm g_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_0;
    }
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm h_11 = t;
  int i_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(i_11);
    }
  else
    {
      t = h_11;
      {
        ATerm j_11 = t;
        int k_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(b_2, flat_list_0_0, t);
            ;
            LocalPopChoice(k_11);
          }
        else
          {
            t = j_11;
            {
              ATerm m_11 = t;
              int e_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_0 = NULL,n_0 = NULL,o_0 = NULL;
                  t = Cons_2_0(c_2, _id, t);
                  m_0 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      n_0 = ATgetFirst((ATermList) t);
                      {
                        ATerm g_12 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = m_0;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm h_12 = ATgetFirst((ATermList) t);
                      o_0 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, n_0, o_0);
                  t = conc_0_0(t);
                  t = flat_list_0_0(t);
                  ;
                  LocalPopChoice(e_12);
                }
              else
                {
                  t = m_11;
                  t = Cons_2_0(_id, flat_list_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Instantiate_1_0 (ATerm l_0 (ATerm), ATerm t)
{
  ATerm x_0 = NULL,z_0 = NULL;
  if(match_cons(t, sym_Arg2_2))
    {
      z_0 = ATgetArgument(t, 0);
      x_0 = ATgetArgument(t, 1);
      {
        ATerm g_1 = NULL,h_1 = NULL;
        t = term_i_12;
        t = l_0(t);
        g_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_0, g_1);
        t = index_0_0(t);
        h_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_0, h_1);
        t = index_0_0(t);
      }
    }
  else
    {
      ATerm j_1 = NULL;
      if(match_cons(t, sym_Arg_1))
        {
          z_0 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = term_i_12;
      t = l_0(t);
      j_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_0, j_1);
      t = index_0_0(t);
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm a_85 (ATerm), ATerm t)
{
  ATerm d_2 (ATerm t)
  {
    t = bottomup_1_0(a_85, t);
    return(t);
  }
  t = SRTS_all(d_2, t);
  t = a_85(t);
  return(t);
}
ATerm p_6 (ATerm f_29, ATerm g_29, ATerm e_29, ATerm t)
{
  ATerm n_1 = NULL,p_1 = NULL;
  t = SSL_explode_term(e_29);
  if(match_cons(t, sym__2))
    {
      ATerm j_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      p_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_1;
  {
    ATerm e_2 (ATerm t)
    {
      ATerm s_1 = NULL,u_1 = NULL;
      if(match_cons(t, sym__2))
        {
          s_1 = ATgetArgument(t, 0);
          u_1 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, s_1, f_29, u_1);
      t = b_7(s_1, f_29, u_1, t);
      return(t);
    }
    t = nzip_1_0(e_2, t);
    n_1 = t;
    t = g_29;
    {
      ATerm g_2 (ATerm t)
      {
        ATerm k_12 = t;
        int l_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_12 = t;
            int n_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_2 (ATerm t)
                {
                  t = n_1;
                  return(t);
                }
                t = Instantiate_1_0(m_2, t);
                ;
                LocalPopChoice(n_12);
              }
            else
              {
                t = m_12;
                t = flat_list_0_0(t);
              }
            ;
            LocalPopChoice(l_12);
          }
        else
          {
            t = k_12;
          }
        return(t);
      }
      t = bottomup_1_0(g_2, t);
    }
  }
  return(t);
}
ATerm p_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm instantiate_sep_list_1_0 (ATerm e_107 (ATerm), ATerm t)
{
  ATerm n_2 (ATerm t)
  {
    ATerm o_12 = t;
    int p_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(p_12);
      }
    else
      {
        t = o_12;
        {
          ATerm q_12 = t;
          int r_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2_0(_id, p_2, t);
              ;
              LocalPopChoice(r_12);
            }
          else
            {
              t = q_12;
              {
                ATerm h_2 = NULL,i_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL;
                ATerm q_2 (ATerm t)
                {
                  ATerm s_2 (ATerm t)
                  {
                    ATerm s_12 = t;
                    int t_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm u_12 = t;
                        int v_12 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm t_2 (ATerm t)
                            {
                              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_2)), not_null(i_2));
                              return(t);
                            }
                            t = Instantiate_1_0(t_2, t);
                            ;
                            LocalPopChoice(v_12);
                          }
                        else
                          {
                            t = u_12;
                            t = flat_list_0_0(t);
                          }
                        ;
                        LocalPopChoice(t_12);
                      }
                    else
                      {
                        t = s_12;
                      }
                    return(t);
                  }
                  t = term_i_12;
                  t = e_107(t);
                  t = bottomup_1_0(s_2, t);
                  return(t);
                }
                ATerm r_2 (ATerm t)
                {
                  t = not_null(l_2);
                  t = n_2(t);
                  return(t);
                }
                if(((h_2 != NULL) && (h_2 != t)))
                  _fail(t);
                else
                  h_2 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    if(((i_2 != NULL) && (i_2 != ATgetFirst((ATermList) t))))
                      _fail(ATgetFirst((ATermList) t));
                    else
                      i_2 = ATgetFirst((ATermList) t);
                    if(((j_2 != NULL) && (j_2 != (ATerm) ATgetNext((ATermList) t))))
                      _fail((ATerm) ATgetNext((ATermList) t));
                    else
                      j_2 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = not_null(j_2);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    if(((k_2 != NULL) && (k_2 != ATgetFirst((ATermList) t))))
                      _fail(ATgetFirst((ATermList) t));
                    else
                      k_2 = ATgetFirst((ATermList) t);
                    if(((l_2 != NULL) && (l_2 != (ATerm) ATgetNext((ATermList) t))))
                      _fail((ATerm) ATgetNext((ATermList) t));
                    else
                      l_2 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = not_null(h_2);
                t = Cons_2_0(q_2, r_2, t);
              }
            }
        }
      }
    return(t);
  }
  t = n_2(t);
  return(t);
}
ATerm foldr_3_0 (ATerm d_96 (ATerm), ATerm e_96 (ATerm), ATerm f_96 (ATerm), ATerm t)
{
  ATerm w_12 = t;
  int x_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = d_96(t);
      ;
      LocalPopChoice(x_12);
    }
  else
    {
      t = w_12;
      {
        ATerm u_2 = NULL,w_2 = NULL,z_2 = NULL,b_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_2 = ATgetFirst((ATermList) t);
            w_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = u_2;
        t = f_96(t);
        z_2 = t;
        t = w_2;
        t = foldr_3_0(d_96, e_96, f_96, t);
        b_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_2, b_3);
        t = e_96(t);
      }
    }
  return(t);
}
ATerm v_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_p__1_0 (ATerm i_113 (ATerm), ATerm t)
{
  ATerm v_3 (ATerm t)
  {
    ATerm y_12 = t;
    int z_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_3 = NULL;
        t = i_113(t);
        u_3 = t;
        t = (ATerm) ATinsert(ATempty, u_3);
        ;
        LocalPopChoice(z_12);
      }
    else
      {
        t = y_12;
        {
          ATerm b_0 = NULL,f_0 = NULL;
          b_0 = t;
          t = SSL_explode_term(b_0);
          if(match_cons(t, sym__2))
            {
              ATerm b_13 = ATgetArgument(t, 0);
              f_0 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_0;
          t = foldr_3_0(v_2, conc_0_0, v_3, t);
        }
      }
    return(t);
  }
  t = v_3(t);
  return(t);
}
ATerm q_6 (ATerm r_45, ATerm s_45, ATerm t)
{
  t = SSL_mod(r_45, s_45);
  return(t);
}
ATerm r_6 (ATerm v_81 (ATerm), ATerm h_27, ATerm i_27, ATerm t)
{
  ATerm w_3 = NULL;
  ATerm l_13 = t;
  int m_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_3 = NULL,y_3 = NULL,z_3 = NULL;
      t = term_n_13;
      y_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_27, term_n_13);
      t = q_6(h_27, y_3, t);
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
        _fail(t);
      t = term_i_12;
      t = v_81(t);
      x_3 = t;
      t = term_n_13;
      z_3 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_13, x_3, i_27);
      t = b_7(z_3, x_3, i_27, t);
      w_3 = t;
      ;
      LocalPopChoice(m_13);
    }
  else
    {
      t = l_13;
      {
        ATerm b_4 = NULL,d_4 = NULL;
        t = term_i_12;
        t = v_81(t);
        b_4 = t;
        t = term_p_13;
        d_4 = t;
        t = (ATerm) ATmakeAppl(sym__3, term_p_13, b_4, i_27);
        t = b_7(d_4, b_4, i_27, t);
        w_3 = t;
      }
    }
  t = w_3;
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = S_1_0(_id, t);
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = term_t_13;
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm l_4 = NULL,n_4 = NULL;
  if(match_cons(t, sym__2))
    {
      l_4 = ATgetArgument(t, 0);
      n_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_7(l_4, n_4, t);
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = term_p_13;
  return(t);
}
ATerm s_6 (ATerm w_28, ATerm y_28, ATerm v_28, ATerm t)
{
  ATerm h_4 = NULL;
  t = v_28;
  {
    ATerm x_2 (ATerm t)
    {
      ATerm i_4 = NULL,k_4 = NULL;
      ATerm y_2 (ATerm t)
      {
        t = w_28;
        return(t);
      }
      if(match_cons(t, sym__2))
        {
          if(((i_4 != NULL) && (i_4 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            i_4 = ATgetArgument(t, 0);
          if(((k_4 != NULL) && (k_4 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            k_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = r_6(y_2, not_null(i_4), not_null(k_4), t);
      return(t);
    }
    t = nzip_1_0(x_2, t);
    h_4 = t;
    {
      ATerm u_13 = t;
      int d_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_28;
          t = collect_p__1_0(a_3, t);
          t = foldr_3_0(c_3, d_3, e_3, t);
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 1)))
            _fail(t);
          t = h_4;
          {
            ATerm f_5 (ATerm t)
            {
              ATerm q_4 = NULL,r_4 = NULL;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = (ATerm) ATempty;
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      q_4 = ATgetFirst((ATermList) t);
                      r_4 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = r_4;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      ATerm f_14 = t;
                      int m_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATinsert(ATempty, q_4);
                          ;
                          LocalPopChoice(m_14);
                        }
                      else
                        {
                          t = f_14;
                          {
                            ATerm w_4 = NULL;
                            t = r_4;
                            t = f_5(t);
                            w_4 = t;
                            t = (ATerm) ATinsert(ATinsert(CheckATermList(w_4), q_4), q_4);
                          }
                        }
                    }
                  else
                    {
                      ATerm d_5 = NULL;
                      t = r_4;
                      t = f_5(t);
                      d_5 = t;
                      t = (ATerm) ATinsert(ATinsert(CheckATermList(d_5), q_4), q_4);
                    }
                }
              return(t);
            }
            t = f_5(t);
          }
          ;
          LocalPopChoice(d_14);
        }
      else
        {
          t = u_13;
          t = h_4;
        }
      {
        ATerm f_3 (ATerm t)
        {
          t = y_28;
          return(t);
        }
        t = instantiate_sep_list_1_0(f_3, t);
      }
    }
  }
  return(t);
}
ATerm symbol2abox6_0_0 (ATerm t)
{
  ATerm j_5 = NULL,l_5 = NULL,o_5 = NULL,p_5 = NULL;
  if(match_cons(t, sym__4))
    {
      j_5 = ATgetArgument(t, 0);
      l_5 = ATgetArgument(t, 1);
      o_5 = ATgetArgument(t, 2);
      p_5 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = j_5;
  if(match_string(t, "iter-star-sep"))
    {
      t = (ATerm) ATmakeAppl(sym__3, l_5, o_5, p_5);
      t = s_6(l_5, o_5, p_5, t);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("iter-sep", 0, ATtrue)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, l_5, o_5, p_5);
      t = s_6(l_5, o_5, p_5, t);
    }
  return(t);
}
ATerm symbol2abox5_0_0 (ATerm t)
{
  ATerm i_6 = NULL,t_6 = NULL,m_7 = NULL,b_8 = NULL,i_8 = NULL,j_8 = NULL;
  t_6 = t;
  if(match_cons(t, sym__4))
    {
      m_7 = ATgetArgument(t, 0);
      b_8 = ATgetArgument(t, 1);
      i_8 = ATgetArgument(t, 2);
      j_8 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = m_7;
  if(match_string(t, "iter"))
    {
      t = t_6;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("iter-star", 0, ATtrue)))
        _fail(t);
      t = t_6;
    }
  t = j_8;
  {
    ATerm g_3 (ATerm t)
    {
      ATerm l_8 = NULL,m_8 = NULL;
      l_8 = t;
      t = term_p_13;
      m_8 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_13, b_8, l_8);
      t = b_7(m_8, b_8, l_8, t);
      return(t);
    }
    t = map_1_0(g_3, t);
    i_6 = t;
    t = i_8;
    {
      ATerm h_3 (ATerm t)
      {
        ATerm n_14 = t;
        int p_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_14 = t;
            int s_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_3 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATempty, i_6);
                  return(t);
                }
                t = Instantiate_1_0(j_3, t);
                ;
                LocalPopChoice(s_14);
              }
            else
              {
                t = r_14;
                t = flat_list_0_0(t);
              }
            ;
            LocalPopChoice(p_14);
          }
        else
          {
            t = n_14;
          }
        return(t);
      }
      t = bottomup_1_0(h_3, t);
    }
  }
  return(t);
}
ATerm u_6 (ATerm c_28, ATerm d_28, ATerm f_28, ATerm e_28, ATerm t)
{
  ATerm s_8 = NULL,v_8 = NULL;
  t = term_p_13;
  v_8 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_p_13, d_28, e_28);
  t = b_7(v_8, d_28, e_28, t);
  s_8 = t;
  t = f_28;
  {
    ATerm o_3 (ATerm t)
    {
      ATerm t_14 = t;
      int u_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_14 = t;
          int w_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_3 (ATerm t)
              {
                t = (ATerm) ATinsert(ATempty, s_8);
                return(t);
              }
              t = Instantiate_1_0(p_3, t);
              ;
              LocalPopChoice(w_14);
            }
          else
            {
              t = v_14;
              t = flat_list_0_0(t);
            }
          ;
          LocalPopChoice(u_14);
        }
      else
        {
          t = t_14;
        }
      return(t);
    }
    t = bottomup_1_0(o_3, t);
  }
  return(t);
}
ATerm v_6 (ATerm x_27, ATerm y_27, ATerm b_28, ATerm a_28, ATerm z_27, ATerm t)
{
  ATerm w_8 = NULL,x_8 = NULL;
  t = (ATerm) ATmakeAppl(sym__3, a_28, y_27, z_27);
  t = b_7(a_28, y_27, z_27, t);
  w_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_28, b_28);
  t = index_0_0(t);
  x_8 = t;
  t = (ATerm) ATinsert(ATempty, x_8);
  {
    ATerm q_3 (ATerm t)
    {
      ATerm x_14 = t;
      int y_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_14 = t;
          int a_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_3 (ATerm t)
              {
                t = (ATerm) ATinsert(ATempty, w_8);
                return(t);
              }
              t = Instantiate_1_0(t_3, t);
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
    t = bottomup_1_0(q_3, t);
  }
  return(t);
}
ATerm x_6 (ATerm z_44, ATerm a_45, ATerm t)
{
  ATerm b_15 = t;
  int c_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(z_44, a_45);
      ;
      LocalPopChoice(c_15);
    }
  else
    {
      t = b_15;
      t = SSL_subtr(z_44, a_45);
    }
  return(t);
}
ATerm y_6 (ATerm p_38, ATerm n_38, ATerm o_38, ATerm t)
{
  ATerm a_9 = NULL,b_9 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_38, term_n_13);
  t = geq_0_0(t);
  t = term_p_13;
  b_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_38, term_p_13);
  t = x_6(p_38, b_9, t);
  a_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_9, o_38);
  return(t);
}
ATerm repeat_1_0 (ATerm g_99 (ATerm), ATerm t)
{
  ATerm c_9 (ATerm t)
  {
    ATerm f_15 = t;
    int g_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_99(t);
        t = c_9(t);
        ;
        LocalPopChoice(g_15);
      }
    else
      {
        t = f_15;
      }
    return(t);
  }
  t = c_9(t);
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm f_9 = NULL,g_9 = NULL,h_9 = NULL;
  if(match_cons(t, sym__2))
    {
      f_9 = ATgetArgument(t, 0);
      {
        ATerm h_15 = ATgetArgument(t, 1);
        if(((ATgetType(h_15) == AT_LIST) && !(ATisEmpty(h_15))))
          {
            g_9 = ATgetFirst((ATermList) h_15);
            h_9 = (ATerm) ATgetNext((ATermList) h_15);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = y_6(f_9, g_9, h_9, t);
  return(t);
}
ATerm index_0_0 (ATerm t)
{
  ATerm d_9 = NULL;
  t = repeat_1_0(e_4, t);
  if(match_cons(t, sym__2))
    {
      ATerm r_15 = ATgetArgument(t, 0);
      if(((ATgetType(r_15) != AT_INT) || (ATgetInt((ATermInt) r_15) != 1)))
        _fail(t);
      {
        ATerm x_15 = ATgetArgument(t, 1);
        if(((ATgetType(x_15) == AT_LIST) && !(ATisEmpty(x_15))))
          {
            d_9 = ATgetFirst((ATermList) x_15);
            {
              ATerm y_15 = (ATerm) ATgetNext((ATermList) x_15);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = d_9;
  return(t);
}
ATerm j_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm z_15 = t;
  int a_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_16 = t;
      int d_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Instantiate_1_0(p_4, t);
          ;
          LocalPopChoice(d_16);
        }
      else
        {
          t = b_16;
          t = flat_list_0_0(t);
        }
      ;
      LocalPopChoice(a_16);
    }
  else
    {
      t = z_15;
    }
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm b_7 (ATerm o_27, ATerm n_27, ATerm s_27, ATerm t)
{
  ATerm p_9 = NULL,q_9 = NULL,r_9 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, n_27, (ATerm) ATinsert(ATempty, o_27));
  t = conc_0_0(t);
  p_9 = t;
  {
    ATerm f_16 = t;
    int j_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_9 = NULL,y_9 = NULL;
        t = pp_table_get_0_0(t);
        if(match_cons(t, sym__2))
          {
            q_9 = ATgetArgument(t, 0);
            r_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_9;
        if(match_cons(t, sym_Path_2))
          {
            ATerm k_16 = ATgetArgument(t, 0);
            w_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = w_9;
        {
          ATerm f_4 (ATerm t)
          {
            ATerm g_4 (ATerm t)
            {
              ATerm m_4 (ATerm t)
              {
                if(((y_9 != NULL) && (y_9 != t)))
                  _fail(t);
                else
                  y_9 = t;
                return(t);
              }
              t = selector_2_0(_id, m_4, t);
              return(t);
            }
            t = Cons_2_0(g_4, j_4, t);
            return(t);
          }
          t = at_last_1_0(f_4, t);
          t = (ATerm) ATmakeAppl(sym__4, not_null(y_9), p_9, r_9, s_27);
          {
            ATerm l_16 = t;
            int n_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_9 = NULL,a_10 = NULL,b_10 = NULL,e_10 = NULL;
                if(match_cons(t, sym__4))
                  {
                    ATerm p_16 = ATgetArgument(t, 0);
                    ATerm q_16 = ATgetArgument(t, 1);
                    ATerm r_16 = ATgetArgument(t, 2);
                    ATerm s_16 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = s_27;
                if(match_cons(t, sym_alt_2))
                  {
                    e_10 = ATgetArgument(t, 0);
                    z_9 = ATgetArgument(t, 1);
                    t = z_9;
                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                      {
                        ATerm r_10 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, e_10, r_9);
                        t = index_0_0(t);
                        r_10 = t;
                        t = (ATerm) ATinsert(ATempty, r_10);
                        t = bottomup_1_0(o_4, t);
                      }
                    else
                      {
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            a_10 = ATgetFirst((ATermList) t);
                            b_10 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = b_10;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym__4, not_null(y_9), p_9, r_9, s_27);
                        t = v_6(not_null(y_9), p_9, r_9, e_10, a_10, t);
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Some_1))
                      {
                        e_10 = ATgetArgument(t, 0);
                        t = (ATerm) ATmakeAppl(sym__4, not_null(y_9), p_9, r_9, s_27);
                        t = u_6(not_null(y_9), p_9, r_9, e_10, t);
                      }
                    else
                      {
                        if(!(match_cons(t, sym_None_0)))
                          _fail(t);
                        t = (ATerm) ATempty;
                      }
                  }
                ;
                LocalPopChoice(n_16);
              }
            else
              {
                t = l_16;
                {
                  ATerm t_16 = t;
                  int u_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = symbol2abox5_0_0(t);
                      ;
                      LocalPopChoice(u_16);
                    }
                  else
                    {
                      t = t_16;
                      {
                        ATerm v_16 = t;
                        int w_16 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = symbol2abox6_0_0(t);
                            ;
                            LocalPopChoice(w_16);
                          }
                        else
                          {
                            t = v_16;
                            if(match_cons(t, sym__4))
                              {
                                ATerm x_16 = ATgetArgument(t, 0);
                                ATerm y_16 = ATgetArgument(t, 1);
                                ATerm z_16 = ATgetArgument(t, 2);
                                ATerm a_17 = ATgetArgument(t, 3);
                              }
                            else
                              _fail(t);
                            t = not_null(y_9);
                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("seq", 0, ATtrue)))
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym__4, not_null(y_9), p_9, r_9, s_27);
                            t = p_6(p_9, r_9, s_27, t);
                          }
                      }
                    }
                }
              }
          }
        }
        ;
        LocalPopChoice(j_16);
      }
    else
      {
        t = f_16;
        t = s_27;
        t = trm2abox_0_0(t);
      }
  }
  return(t);
}
ATerm genzip_4_0 (ATerm m_91 (ATerm), ATerm n_91 (ATerm), ATerm o_91 (ATerm), ATerm p_91 (ATerm), ATerm t)
{
  ATerm b_11 (ATerm t)
  {
    ATerm b_17 = t;
    int c_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_91(t);
        ;
        LocalPopChoice(c_17);
      }
    else
      {
        t = b_17;
        t = n_91(t);
        t = _2_0(p_91, b_11, t);
        t = o_91(t);
      }
    return(t);
  }
  t = b_11(t);
  return(t);
}
ATerm s_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm g_17 = ATgetArgument(t, 0);
      ATerm h_17 = ATgetArgument(t, 1);
      if(((ATgetType(h_17) != AT_LIST) || !(ATisEmpty(h_17))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm e_11 = NULL,l_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL;
  if(match_cons(t, sym__2))
    {
      e_11 = ATgetArgument(t, 0);
      {
        ATerm i_17 = ATgetArgument(t, 1);
        if(((ATgetType(i_17) == AT_LIST) && !(ATisEmpty(i_17))))
          {
            l_11 = ATgetFirst((ATermList) i_17);
            n_11 = (ATerm) ATgetNext((ATermList) i_17);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_p_13;
  p_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_11, term_p_13);
  t = z_7(e_11, p_11, t);
  o_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_11, l_11), (ATerm) ATmakeAppl(sym__2, o_11, n_11));
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm q_11 = NULL,r_11 = NULL;
  if(match_cons(t, sym__2))
    {
      q_11 = ATgetArgument(t, 0);
      r_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_11), q_11);
  return(t);
}
ATerm nzip_1_0 (ATerm y_91 (ATerm), ATerm t)
{
  ATerm c_11 = NULL;
  c_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_13, c_11);
  t = genzip_4_0(s_4, t_4, u_4, y_91, t);
  return(t);
}
ATerm v_4 (ATerm t)
{
  t = debug_1_0(x_4, t);
  return(t);
}
ATerm x_4 (ATerm t)
{
  t = term_j_17;
  return(t);
}
ATerm pp_table_get_0_0 (ATerm t)
{
  ATerm s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL;
  s_11 = t;
  t = term_k_17;
  v_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_17, s_11);
  t = d_8(v_11, s_11, t);
  if(match_cons(t, sym__2))
    {
      t_11 = ATgetArgument(t, 0);
      u_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_11;
  t = path_to_string_0_0(t);
  t = if_verbose1_1_0(v_4, t);
  t = (ATerm) ATmakeAppl(sym__2, t_11, u_11);
  return(t);
}
ATerm y_4 (ATerm t)
{
  t = term_l_17;
  return(t);
}
ATerm trm2abox_appl_0_0 (ATerm t)
{
  ATerm w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL;
  w_11 = t;
  t = SSL_explode_term(w_11);
  if(match_cons(t, sym__2))
    {
      x_11 = ATgetArgument(t, 0);
      y_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, x_11);
  {
    ATerm m_17 = t;
    int n_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = pp_table_get_0_0(t);
        ;
        LocalPopChoice(n_17);
      }
    else
      {
        t = m_17;
        t = debug_1_0(y_4, t);
        _fail(t);
      }
    if(match_cons(t, sym__2))
      {
        ATerm o_17 = ATgetArgument(t, 0);
        z_11 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = y_11;
    {
      ATerm z_4 (ATerm t)
      {
        ATerm b_12 = NULL,c_12 = NULL,d_12 = NULL;
        if(match_cons(t, sym__2))
          {
            b_12 = ATgetArgument(t, 0);
            c_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATempty, x_11);
        d_12 = t;
        t = (ATerm) ATmakeAppl(sym__3, b_12, (ATerm)ATinsert(ATempty, x_11), c_12);
        t = b_7(b_12, d_12, c_12, t);
        return(t);
      }
      t = nzip_1_0(z_4, t);
      a_12 = t;
      t = z_11;
      {
        ATerm a_5 (ATerm t)
        {
          ATerm p_17 = t;
          int s_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_17 = t;
              int u_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_5 (ATerm t)
                  {
                    t = a_12;
                    return(t);
                  }
                  t = Instantiate_1_0(c_5, t);
                  ;
                  LocalPopChoice(u_17);
                }
              else
                {
                  t = t_17;
                  t = flat_list_0_0(t);
                }
              ;
              LocalPopChoice(s_17);
            }
          else
            {
              t = p_17;
            }
          return(t);
        }
        t = bottomup_1_0(a_5, t);
      }
    }
  }
  return(t);
}
ATerm trm2abox_list_0_0 (ATerm t)
{
  ATerm f_12 = NULL;
  f_12 = t;
  t = SSL_explode_term(f_12);
  if(match_cons(t, sym__2))
    {
      ATerm v_17 = ATgetArgument(t, 0);
      ATerm w_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_12;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_12;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm x_17 = ATgetFirst((ATermList) t);
          ATerm y_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_12;
    }
  t = map_1_0(trm2abox_0_0, t);
  return(t);
}
ATerm trm2abox_0_0 (ATerm t)
{
  ATerm l_18 = t;
  int m_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_0 = NULL,a_1 = NULL;
      a_1 = t;
      t = SSL_is_string(a_1);
      w_0 = t;
      t = (ATerm) ATmakeAppl(sym_S_1, w_0);
      ;
      LocalPopChoice(m_18);
    }
  else
    {
      t = l_18;
      {
        ATerm n_18 = t;
        int o_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_1 = NULL,c_1 = NULL,f_1 = NULL;
            f_1 = t;
            t = SSL_is_int(f_1);
            b_1 = t;
            t = SSL_int_to_string(b_1);
            c_1 = t;
            t = (ATerm) ATmakeAppl(sym_S_1, c_1);
            ;
            LocalPopChoice(o_18);
          }
        else
          {
            t = n_18;
            {
              ATerm p_18 = t;
              int q_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = trm2abox_list_0_0(t);
                  ;
                  LocalPopChoice(q_18);
                }
              else
                {
                  t = p_18;
                  {
                    ATerm r_18 = t;
                    int s_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = trm2abox_appl_0_0(t);
                        ;
                        LocalPopChoice(s_18);
                      }
                    else
                      {
                        t = r_18;
                        {
                          ATerm a_13 = NULL,m_1 = NULL,o_1 = NULL,q_1 = NULL;
                          a_13 = t;
                          t = term_t_18;
                          m_1 = t;
                          t = (ATerm) ATinsert(ATinsert(ATempty, a_13), term_w_18);
                          o_1 = t;
                          t = SSL_printnl(m_1, o_1);
                          t = term_p_13;
                          q_1 = t;
                          t = SSL_exit(q_1);
                          t = (ATerm) ATinsert(ATinsert(ATempty, a_13), term_w_18);
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
  ATerm c_13 = NULL;
  t = SSL_write_term_to_stream_baf(i_59, j_59);
  c_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_13);
  return(t);
}
ATerm g_7 (ATerm e_105 (ATerm), ATerm d_583, ATerm q_59, ATerm t)
{
  ATerm d_13 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, d_583, term_x_18);
  t = open_stream_0_0(t);
  d_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_13, q_59);
  t = e_105(t);
  t = fclose_0_0(t);
  t = q_59;
  return(t);
}
ATerm h_7 (ATerm i_100 (ATerm), ATerm k_52, ATerm i_52, ATerm t)
{
  ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL;
  e_13 = t;
  t = i_100(t);
  f_13 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_13, k_52, i_52);
  t = e_8(f_13, k_52, i_52, t);
  {
    ATerm y_18 = t;
    int b_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_13 = NULL;
        t = term_c_19;
        k_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_13, term_c_19);
        t = d_8(f_13, k_13, t);
        ;
        LocalPopChoice(b_19);
      }
    else
      {
        t = y_18;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_13 = ATgetFirst((ATermList) t);
        h_13 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_c_19;
    i_13 = t;
    t = (ATerm) ATinsert(CheckATermList(h_13), (ATerm) ATinsert(CheckATermList(g_13), k_52));
    j_13 = t;
    t = SSL_table_put(f_13, i_13, j_13);
    t = e_13;
  }
  return(t);
}
ATerm y_13 (ATerm o_13, ATerm t)
{
  t = o_13;
  {
    ATerm d_19 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_19 = ATgetArgument(t, 0);
            ATerm f_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_19;
      }
    t = term_g_19;
    t = debug_1_0(e_5, t);
    t = (ATerm) ATmakeAppl(sym__2, o_13, term_x_18);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm z_13 (ATerm q_13, ATerm r_13, ATerm s_13, ATerm t)
{
  t = SSL_open_file(q_13, r_13);
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = term_h_19;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm v_13 = NULL,w_13 = NULL,x_13 = NULL;
  v_13 = t;
  if(match_cons(t, sym__2))
    {
      w_13 = ATgetArgument(t, 0);
      x_13 = ATgetArgument(t, 1);
      {
        ATerm i_19 = t;
        int j_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_13(v_13, t);
            ;
            LocalPopChoice(j_19);
          }
        else
          {
            t = i_19;
            t = z_13(w_13, x_13, v_13, t);
          }
      }
    }
  else
    {
      t = y_13(v_13, t);
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
  ATerm a_14 = NULL,b_14 = NULL;
  t = term_i_12;
  t = new_0_0(t);
  a_14 = t;
  t = term_k_19;
  b_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_14, term_k_19);
  t = c_8(a_14, b_14, t);
  {
    ATerm l_19 = t;
    int n_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_14 = NULL,e_14 = NULL;
        c_14 = t;
        t = (ATerm) ATinsert(ATempty, term_o_19);
        e_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_14, (ATerm) ATinsert(ATempty, term_o_19));
        t = i_7(c_14, e_14, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(n_19);
      }
    else
      {
        t = l_19;
      }
  }
  return(t);
}
ATerm g_5 (ATerm t)
{
  t = term_p_19;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm g_14 = NULL,h_14 = NULL;
  t = new_file_0_0(t);
  g_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_14, term_x_18);
  t = open_file_0_0(t);
  t = term_i_12;
  h_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_14, term_i_12);
  t = h_7(g_5, g_14, h_14, t);
  t = g_14;
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm k_14 = NULL,l_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_19 = ATgetArgument(t, 0);
      if(match_cons(q_19, sym_Stream_1))
        {
          k_14 = ATgetArgument(q_19, 0);
        }
      else
        _fail(t);
      l_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_7(k_14, l_14, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm i_14 = NULL,j_14 = NULL;
  i_14 = t;
  t = xtc_new_file_0_0(t);
  j_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_14, i_14);
  t = g_7(h_5, j_14, i_14, t);
  t = SSL_close_file(j_14);
  t = (ATerm) ATmakeAppl(sym_FILE_1, j_14);
  return(t);
}
ATerm i_7 (ATerm w_46, ATerm x_46, ATerm t)
{
  t = SSL_access(w_46, x_46);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm o_14 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_t_19;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm q_14 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          o_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_o_19);
      q_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_14, (ATerm) ATinsert(ATempty, term_o_19));
      t = i_7(o_14, q_14, t);
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
  ATerm d_15 = NULL,e_15 = NULL;
  d_15 = t;
  if(match_cons(t, sym_FILE_1))
    {
      e_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm u_19 = t;
    int v_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_1 = NULL;
        t = d_15;
        t = k_0(t);
        y_1 = t;
        {
          ATerm w_19 = t;
          int x_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(x_19);
            }
          else
            {
              t = w_19;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym__2, e_15, y_1);
          t = j_7(e_15, y_1, t);
          t = (ATerm) ATmakeAppl(sym_FILE_1, e_15);
        }
        ;
        LocalPopChoice(v_19);
      }
    else
      {
        t = u_19;
        {
          ATerm f_20 = t;
          int h_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_2 = NULL;
              t = d_15;
              t = k_0(t);
              f_2 = t;
              {
                ATerm i_20 = t;
                if((PushChoice() == 0))
                  {
                    ATerm j_20 = t;
                    int o_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(o_20);
                      }
                    else
                      {
                        t = j_20;
                        {
                          ATerm p_20 = t;
                          int s_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(s_20);
                            }
                          else
                            {
                              t = p_20;
                              {
                                ATerm o_2 = NULL;
                                o_2 = t;
                                if((e_15 != t))
                                  {
                                    _fail(t);
                                  }
                                t = o_2;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = i_20;
                  }
                t = (ATerm) ATmakeAppl(sym__2, e_15, f_2);
                t = j_7(e_15, f_2, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, e_15);
              }
              ;
              LocalPopChoice(h_20);
            }
          else
            {
              t = f_20;
              t = d_15;
              t = k_0(t);
              if((e_15 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, e_15);
            }
        }
      }
  }
  return(t);
}
ATerm k_7 (ATerm v_32, ATerm w_32, ATerm t)
{
  ATerm i_15 = NULL,j_15 = NULL;
  i_15 = t;
  {
    ATerm t_20 = t;
    int u_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, v_32, w_32);
        t = d_8(v_32, w_32, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm b_21 = ATgetFirst((ATermList) t);
            j_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(u_20);
        t = SSL_table_put(v_32, w_32, j_15);
        t = (ATerm) ATmakeAppl(sym__3, v_32, w_32, j_15);
      }
    else
      {
        t = t_20;
        t = SSL_table_remove(v_32, w_32);
        t = (ATerm) ATmakeAppl(sym__2, v_32, w_32);
      }
    t = i_15;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm f_100 (ATerm), ATerm t)
{
  ATerm k_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL;
  k_15 = t;
  t = f_100(t);
  l_15 = t;
  {
    ATerm c_21 = t;
    int d_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_15 = NULL;
        t = term_c_19;
        p_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_15, term_c_19);
        t = d_8(l_15, p_15, t);
        ;
        LocalPopChoice(d_21);
      }
    else
      {
        t = c_21;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_15 = ATgetFirst((ATermList) t);
        m_15 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_c_19;
    o_15 = t;
    t = SSL_table_put(l_15, o_15, m_15);
    t = n_15;
    {
      ATerm i_5 (ATerm t)
      {
        ATerm q_15 = NULL;
        q_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_15, q_15);
        t = k_7(l_15, q_15, t);
        return(t);
      }
      t = map_1_0(i_5, t);
      t = k_15;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm g_88 (ATerm), ATerm h_88 (ATerm), ATerm t)
{
  ATerm g_21 = t;
  int h_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_88(t);
      t = h_88(t);
      ;
      LocalPopChoice(h_21);
    }
  else
    {
      t = g_21;
      t = h_88(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm e_100 (ATerm), ATerm t)
{
  ATerm s_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL;
  s_15 = t;
  t = e_100(t);
  t_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_15, term_c_19);
  {
    ATerm k_21 = t;
    int l_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_16 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm m_21 = ATgetArgument(t, 0);
            ATerm n_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_c_19;
        c_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_15, term_c_19);
        t = d_8(t_15, c_16, t);
        ;
        LocalPopChoice(l_21);
      }
    else
      {
        t = k_21;
        t = (ATerm) ATempty;
      }
    u_15 = t;
    t = term_c_19;
    v_15 = t;
    t = (ATerm) ATinsert(CheckATermList(u_15), (ATerm) ATempty);
    w_15 = t;
    t = SSL_table_put(t_15, v_15, w_15);
    t = s_15;
  }
  return(t);
}
ATerm n_5 (ATerm t)
{
  t = term_p_19;
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm q_21 = t;
  int s_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_16 = NULL;
      m_16 = t;
      t = SSL_remove(m_16);
      ;
      LocalPopChoice(s_21);
    }
  else
    {
      t = q_21;
    }
  return(t);
}
ATerm s_5 (ATerm t)
{
  t = term_p_19;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm u_83 (ATerm), ATerm t)
{
  ATerm e_16 = NULL;
  t = begin_scope_1_0(n_5, t);
  {
    ATerm q_5 (ATerm t)
    {
      ATerm g_16 = NULL;
      g_16 = t;
      {
        ATerm x_21 = t;
        int y_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_16 = NULL,i_16 = NULL;
            t = term_p_19;
            h_16 = t;
            t = term_c_19;
            i_16 = t;
            t = term_b_22;
            t = d_8(h_16, i_16, t);
            ;
            LocalPopChoice(y_21);
          }
        else
          {
            t = x_21;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((e_16 != NULL) && (e_16 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              e_16 = ATgetFirst((ATermList) t);
            {
              ATerm f_22 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(e_16);
        t = map_1_0(r_5, t);
        t = g_16;
        t = end_scope_1_0(s_5, t);
      }
      return(t);
    }
    t = restore_always_2_0(u_83, q_5, t);
  }
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm i_22 = t;
  int j_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_22;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(j_22);
    }
  else
    {
      t = i_22;
      t = term_l_22;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm v_83 (ATerm), ATerm t)
{
  ATerm t_5 (ATerm t)
  {
    ATerm m_22 = t;
    int n_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_16 = NULL;
        t = term_o_22;
        t = get_config_0_0(t);
        o_16 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, o_16);
        ;
        LocalPopChoice(n_22);
      }
    else
      {
        t = m_22;
        t = term_t_19;
      }
    t = v_83(t);
    t = copy_to_1_0(u_5, t);
    return(t);
  }
  t = xtc_temp_files_1_0(t_5, t);
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm l_3 = NULL,m_3 = NULL,n_3 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      l_3 = ATgetArgument(t, 0);
      m_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_int_to_string(l_3);
  n_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, m_3), term_q_22), n_3), term_p_22);
  return(t);
}
ATerm path_to_string_0_0 (ATerm t)
{
  ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL;
  d_17 = t;
  if(match_cons(t, sym_Path1_1))
    {
      e_17 = ATgetArgument(t, 0);
      t = e_17;
    }
  else
    {
      ATerm i_3 = NULL,k_3 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          e_17 = ATgetArgument(t, 0);
          f_17 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = f_17;
      t = map_1_0(v_5, t);
      t = concat_0_0(t);
      i_3 = t;
      t = (ATerm) ATinsert(CheckATermList(i_3), e_17);
      k_3 = t;
      t = SSL_concat_strings(k_3);
    }
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm a_18 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      a_18 = ATgetArgument(t, 0);
      {
        ATerm r_22 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = a_18;
  return(t);
}
ATerm mk_key_0_0 (ATerm t)
{
  ATerm q_17 = NULL,r_17 = NULL;
  if(match_cons(t, sym_Path1_1))
    {
      q_17 = ATgetArgument(t, 0);
      t = (ATerm) ATinsert(ATempty, q_17);
    }
  else
    {
      ATerm z_17 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          q_17 = ATgetArgument(t, 0);
          r_17 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = r_17;
      t = map_1_0(w_5, t);
      z_17 = t;
      t = (ATerm) ATinsert(CheckATermList(z_17), q_17);
    }
  return(t);
}
ATerm z_5 (ATerm t)
{
  t = debug_1_0(a_6, t);
  return(t);
}
ATerm a_6 (ATerm t)
{
  t = term_t_22;
  return(t);
}
ATerm l_7 (ATerm c_61, ATerm d_61, ATerm t)
{
  ATerm b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL;
  t = c_61;
  t = mk_key_0_0(t);
  b_18 = t;
  t = term_k_17;
  d_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_61, d_61);
  e_18 = t;
  t = SSL_table_put(d_18, b_18, e_18);
  t = c_61;
  t = path_to_string_0_0(t);
  c_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_18, d_61);
  t = if_verbose1_1_0(z_5, t);
  return(t);
}
ATerm selector_2_0 (ATerm o_78 (ATerm), ATerm p_78 (ATerm), ATerm t)
{
  ATerm f_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL,q_0 = NULL,r_0 = NULL;
  k_18 = t;
  if(match_cons(t, sym_selector_2))
    {
      g_18 = ATgetArgument(t, 0);
      h_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_18);
  f_18 = t;
  t = g_18;
  t = o_78(t);
  i_18 = t;
  t = h_18;
  t = p_78(t);
  j_18 = t;
  r_0 = t;
  t = (ATerm) ATmakeAppl(sym_selector_2, i_18, j_18);
  q_0 = t;
  t = SSLsetAnnotations(q_0, f_18);
  return(t);
}
ATerm unescape_chars_0_0 (ATerm t)
{
  ATerm u_22 = t;
  int v_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_18 = NULL,v_18 = NULL,z_18 = NULL,a_19 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_18 = ATgetFirst((ATermList) t);
          v_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_18;
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 92)))
        _fail(t);
      t = v_18;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_18 = ATgetFirst((ATermList) t);
          a_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_18;
      if(match_int(t, 34))
        {
          t = (ATerm) ATinsert(CheckATermList(a_19), term_x_22);
        }
      else
        {
          if(match_int(t, 92))
            {
              t = (ATerm) ATinsert(CheckATermList(a_19), term_z_22);
            }
          else
            {
              if(match_int(t, 110))
                {
                  t = (ATerm) ATinsert(CheckATermList(a_19), term_c_23);
                }
              else
                {
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 116)))
                    _fail(t);
                  t = (ATerm) ATinsert(CheckATermList(a_19), term_f_23);
                }
            }
        }
      ;
      LocalPopChoice(v_22);
    }
  else
    {
      t = u_22;
    }
  {
    ATerm g_23 = t;
    int h_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, unescape_chars_0_0, t);
        ;
        LocalPopChoice(h_23);
      }
    else
      {
        t = g_23;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
      }
  }
  return(t);
}
ATerm d_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm at_last_1_0 (ATerm k_90 (ATerm), ATerm t)
{
  ATerm m_19 (ATerm t)
  {
    ATerm i_23 = t;
    int k_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, d_6, t);
        t = k_90(t);
        ;
        LocalPopChoice(k_23);
      }
    else
      {
        t = i_23;
        t = Cons_2_0(_id, m_19, t);
      }
    return(t);
  }
  t = m_19(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm r_19 = NULL,s_19 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_19 = ATgetFirst((ATermList) t);
      s_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_19;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm m_23 = t;
      int o_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_19;
          ;
          LocalPopChoice(o_23);
        }
      else
        {
          t = m_23;
          t = s_19;
          t = last_0_0(t);
        }
    }
  else
    {
      t = s_19;
      t = last_0_0(t);
    }
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm b_20 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm q_23 = ATgetFirst((ATermList) t);
      b_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = b_20;
  return(t);
}
ATerm unquote_chars_1_0 (ATerm r_98 (ATerm), ATerm t)
{
  ATerm y_19 = NULL,z_19 = NULL,a_20 = NULL;
  y_19 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_19 = ATgetFirst((ATermList) t);
      {
        ATerm r_23 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = z_19;
  t = r_98(t);
  t = y_19;
  t = last_0_0(t);
  t = r_98(t);
  t = y_19;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm s_23 = ATgetFirst((ATermList) t);
      a_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = a_20;
  t = at_last_1_0(e_6, t);
  return(t);
}
ATerm S_1_0 (ATerm t_78 (ATerm), ATerm t)
{
  ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL,g_20 = NULL,s_0 = NULL,t_0 = NULL;
  g_20 = t;
  if(match_cons(t, sym_S_1))
    {
      d_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_20);
  c_20 = t;
  t = d_20;
  t = t_78(t);
  e_20 = t;
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym_S_1, e_20);
  s_0 = t;
  t = SSLsetAnnotations(s_0, c_20);
  return(t);
}
ATerm SOpt_2_0 (ATerm f_80 (ATerm), ATerm g_80 (ATerm), ATerm t)
{
  ATerm k_20 = NULL,l_20 = NULL,m_20 = NULL,n_20 = NULL,q_20 = NULL,r_20 = NULL,u_0 = NULL,y_0 = NULL;
  r_20 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      l_20 = ATgetArgument(t, 0);
      m_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_20);
  k_20 = t;
  t = l_20;
  t = f_80(t);
  n_20 = t;
  t = m_20;
  t = g_80(t);
  q_20 = t;
  y_0 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, n_20, q_20);
  u_0 = t;
  t = SSLsetAnnotations(u_0, k_20);
  return(t);
}
ATerm Arg2_2_0 (ATerm r_78 (ATerm), ATerm s_78 (ATerm), ATerm t)
{
  ATerm v_20 = NULL,w_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL,d_1 = NULL,e_1 = NULL;
  a_21 = t;
  if(match_cons(t, sym_Arg2_2))
    {
      w_20 = ATgetArgument(t, 0);
      x_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_21);
  v_20 = t;
  t = w_20;
  t = r_78(t);
  y_20 = t;
  t = x_20;
  t = s_78(t);
  z_20 = t;
  e_1 = t;
  t = (ATerm) ATmakeAppl(sym_Arg2_2, y_20, z_20);
  d_1 = t;
  t = SSLsetAnnotations(d_1, v_20);
  return(t);
}
ATerm Arg_1_0 (ATerm q_78 (ATerm), ATerm t)
{
  ATerm e_21 = NULL,f_21 = NULL,i_21 = NULL,j_21 = NULL,i_1 = NULL,k_1 = NULL;
  j_21 = t;
  if(match_cons(t, sym_Arg_1))
    {
      f_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_21);
  e_21 = t;
  t = f_21;
  t = q_78(t);
  i_21 = t;
  k_1 = t;
  t = (ATerm) ATmakeAppl(sym_Arg_1, i_21);
  i_1 = t;
  t = SSLsetAnnotations(i_1, e_21);
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm o_21 = NULL;
  o_21 = t;
  t = SSL_string_to_int(o_21);
  return(t);
}
ATerm g_6 (ATerm t)
{
  ATerm p_21 = NULL;
  p_21 = t;
  t = SSL_string_to_int(p_21);
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm r_21 = NULL;
  r_21 = t;
  t = SSL_string_to_int(r_21);
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm a_4 = NULL,c_4 = NULL,r_3 = NULL,s_3 = NULL;
  r_3 = t;
  t = SSL_explode_string(r_3);
  t = unquote_chars_1_0(k_6, t);
  s_3 = t;
  t = SSL_implode_string(s_3);
  a_4 = t;
  t = SSL_explode_string(a_4);
  t = unescape_chars_0_0(t);
  c_4 = t;
  t = SSL_implode_string(c_4);
  return(t);
}
ATerm k_6 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm t_21 = NULL;
  t_21 = t;
  t = SSL_string_to_int(t_21);
  return(t);
}
ATerm MakePPTerm_0_0 (ATerm t)
{
  ATerm w_23 = t;
  int x_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Arg_1_0(f_6, t);
      ;
      LocalPopChoice(x_23);
    }
  else
    {
      t = w_23;
      {
        ATerm y_23 = t;
        int z_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Arg2_2_0(g_6, h_6, t);
            ;
            LocalPopChoice(z_23);
          }
        else
          {
            t = y_23;
            {
              ATerm a_24 = t;
              int b_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SOpt_2_0(_id, _id, t);
                  ;
                  LocalPopChoice(b_24);
                }
              else
                {
                  t = a_24;
                  {
                    ATerm j_24 = t;
                    int n_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = S_1_0(j_6, t);
                        ;
                        LocalPopChoice(n_24);
                      }
                    else
                      {
                        t = j_24;
                        t = selector_2_0(l_6, _id, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm z_84 (ATerm), ATerm t)
{
  t = z_84(t);
  {
    ATerm m_6 (ATerm t)
    {
      t = topdown_1_0(z_84, t);
      return(t);
    }
    t = SRTS_all(m_6, t);
  }
  return(t);
}
ATerm n_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm u_21 = NULL,v_21 = NULL;
  t = topdown_1_0(w_6, t);
  if(match_cons(t, sym_PP_Entry_2))
    {
      u_21 = ATgetArgument(t, 0);
      v_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_7(u_21, v_21, t);
  return(t);
}
ATerm w_6 (ATerm t)
{
  ATerm p_24 = t;
  int q_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MakePPTerm_0_0(t);
      ;
      LocalPopChoice(q_24);
    }
  else
    {
      t = p_24;
    }
  return(t);
}
ATerm t_7 (ATerm b_61, ATerm t)
{
  t = b_61;
  t = reverse_acc_2_0(_id, n_6, t);
  t = map_1_0(o_6, t);
  return(t);
}
ATerm oncetd_1_0 (ATerm d_86 (ATerm), ATerm t)
{
  ATerm w_21 (ATerm t)
  {
    ATerm t_24 = t;
    int w_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_86(t);
        ;
        LocalPopChoice(w_24);
      }
    else
      {
        t = t_24;
        t = SRTS_one(w_21, t);
      }
    return(t);
  }
  t = w_21(t);
  return(t);
}
ATerm get_options_0_0 (ATerm t)
{
  ATerm z_21 = NULL,a_22 = NULL;
  t = term_x_24;
  z_21 = t;
  t = term_a_25;
  a_22 = t;
  t = term_b_25;
  t = d_8(z_21, a_22, t);
  return(t);
}
ATerm z_6 (ATerm t)
{
  if(!(match_cons(t, sym_Strict_0)))
    _fail(t);
  return(t);
}
ATerm type_failure_0_0 (ATerm t)
{
  ATerm g_25 = t;
  int j_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL;
      t = term_k_25;
      t = get_options_0_0(t);
      t = oncetd_1_0(z_6, t);
      t = term_t_18;
      c_22 = t;
      t = (ATerm) ATinsert(ATempty, term_l_25);
      d_22 = t;
      t = SSL_printnl(c_22, d_22);
      t = term_p_13;
      e_22 = t;
      t = SSL_exit(e_22);
      t = (ATerm) ATinsert(ATempty, term_l_25);
      ;
      LocalPopChoice(j_25);
    }
  else
    {
      t = g_25;
      {
        ATerm g_22 = NULL,h_22 = NULL;
        t = term_t_18;
        g_22 = t;
        t = (ATerm) ATinsert(ATempty, term_o_25);
        h_22 = t;
        t = SSL_printnl(g_22, h_22);
        t = (ATerm) ATinsert(ATempty, term_o_25);
      }
    }
  return(t);
}
ATerm a_23 (ATerm s_22, ATerm t)
{
  t = SSL_fclose(s_22);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm w_22 = NULL,y_22 = NULL;
  y_22 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_22 = ATgetArgument(t, 0);
      {
        ATerm p_25 = t;
        int q_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(w_22);
            ;
            LocalPopChoice(q_25);
          }
        else
          {
            t = p_25;
            t = a_23(y_22, t);
          }
      }
    }
  else
    {
      t = a_23(y_22, t);
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
  ATerm b_23 = NULL;
  t = SSL_fopen(e_47, f_47);
  b_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_23);
  return(t);
}
ATerm _2_0 (ATerm z_67 (ATerm), ATerm a_68 (ATerm), ATerm t)
{
  ATerm d_23 = NULL,e_23 = NULL,j_23 = NULL,l_23 = NULL,n_23 = NULL,p_23 = NULL,l_1 = NULL,r_1 = NULL;
  p_23 = t;
  if(match_cons(t, sym__2))
    {
      e_23 = ATgetArgument(t, 0);
      j_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_23);
  d_23 = t;
  t = e_23;
  t = z_67(t);
  l_23 = t;
  t = j_23;
  t = a_68(t);
  n_23 = t;
  r_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_23, n_23);
  l_1 = t;
  t = SSLsetAnnotations(l_1, d_23);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm t_23 = NULL;
  t = SSL_stdin_stream();
  t_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_23);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm u_23 = NULL;
  t = SSL_stdout_stream();
  u_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_23);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm v_23 = NULL;
  t = SSL_stderr_stream();
  v_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_23);
  return(t);
}
ATerm a_7 (ATerm t)
{
  ATerm f_24 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      f_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_24;
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm i_24 = NULL;
  i_24 = t;
  t = SSL_is_string(i_24);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_25 = ATgetArgument(t, 0);
      ATerm s_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_25 = t;
    int v_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_24 = NULL,b_5 = NULL;
        c_24 = t;
        t = SSL_explode_term(c_24);
        if(match_cons(t, sym__2))
          {
            ATerm w_25 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) w_25) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm x_25 = ATgetArgument(t, 1);
              if(((ATgetType(x_25) == AT_LIST) && !(ATisEmpty(x_25))))
                {
                  b_5 = ATgetFirst((ATermList) x_25);
                  {
                    ATerm y_25 = (ATerm) ATgetNext((ATermList) x_25);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = b_5;
        if(match_cons(t, sym_stderr_0))
          {
            t = b_5;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = b_5;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = b_5;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(v_25);
      }
    else
      {
        t = u_25;
        {
          ATerm z_25 = t;
          int a_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_24 = NULL,e_24 = NULL;
              t = _2_0(a_7, _id, t);
              if(match_cons(t, sym__2))
                {
                  d_24 = ATgetArgument(t, 0);
                  e_24 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = x_7(d_24, e_24, t);
              ;
              LocalPopChoice(a_26);
            }
          else
            {
              t = z_25;
              {
                ATerm g_24 = NULL,h_24 = NULL;
                t = _2_0(c_7, _id, t);
                if(match_cons(t, sym__2))
                  {
                    g_24 = ATgetArgument(t, 0);
                    h_24 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = x_7(g_24, h_24, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm d_7 (ATerm t)
{
  t = term_b_26;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm k_24 = NULL,l_24 = NULL,m_24 = NULL;
  ATerm c_26 = t;
  int e_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_24 = NULL;
      o_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_24, term_f_26);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(e_26);
    }
  else
    {
      t = c_26;
      t = debug_1_0(d_7, t);
      _fail(t);
    }
  k_24 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_7(m_24, t);
  l_24 = t;
  t = k_24;
  t = fclose_0_0(t);
  t = l_24;
  return(t);
}
ATerm e_7 (ATerm t)
{
  ATerm u_24 = NULL,v_24 = NULL,k_5 = NULL,m_5 = NULL;
  t = if_verbose1_1_0(n_7, t);
  t = ReadFromFile_0_0(t);
  v_24 = t;
  t = SSL_explode_term(v_24);
  if(match_cons(t, sym__2))
    {
      k_5 = ATgetArgument(t, 0);
      {
        ATerm g_26 = ATgetArgument(t, 1);
        if(((ATgetType(g_26) == AT_LIST) && !(ATisEmpty(g_26))))
          {
            m_5 = ATgetFirst((ATermList) g_26);
            {
              ATerm l_26 = (ATerm) ATgetNext((ATermList) g_26);
              if(((ATgetType(l_26) != AT_LIST) || !(ATisEmpty(l_26))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = k_5;
  {
    ATerm m_26 = t;
    int u_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("\"pp-tables-0\"", 0, ATtrue)))
          _fail(t);
        ;
        LocalPopChoice(u_26);
      }
    else
      {
        t = m_26;
        t = type_failure_0_0(t);
      }
    t = m_5;
    if(match_cons(t, sym_PP_Table_1))
      {
        u_24 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = t_7(u_24, t);
  }
  return(t);
}
ATerm n_7 (ATerm t)
{
  t = debug_1_0(o_7, t);
  return(t);
}
ATerm o_7 (ATerm t)
{
  t = term_z_26;
  return(t);
}
ATerm read_pp_tables_0_0 (ATerm t)
{
  ATerm r_24 = NULL,s_24 = NULL;
  r_24 = t;
  t = term_k_17;
  s_24 = t;
  t = SSL_table_create(s_24);
  t = r_24;
  t = map_1_0(e_7, t);
  return(t);
}
ATerm get_config_p_0_0 (ATerm t)
{
  ATerm e_27 = t;
  int f_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_27;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(f_27);
    }
  else
    {
      t = e_27;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm p_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm q_7 (ATerm t)
{
  t = xtc_io_transform_1_0(r_7, t);
  return(t);
}
ATerm r_7 (ATerm t)
{
  t = trm2abox_0_0(t);
  {
    ATerm p_27 = t;
    int q_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_24 = NULL;
        z_24 = t;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = z_24;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm r_27 = ATgetFirst((ATermList) t);
                ATerm u_27 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_24;
          }
        LocalPopChoice(q_27);
        {
          ATerm c_25 = NULL;
          c_25 = t;
          t = (ATerm) ATmakeAppl(sym_HV_2, (ATerm)ATempty, c_25);
        }
      }
    else
      {
        t = p_27;
      }
  }
  return(t);
}
ATerm ast2abox_0_0 (ATerm t)
{
  ATerm y_24 = NULL;
  y_24 = t;
  t = get_config_p_0_0(t);
  t = reverse_acc_2_0(_id, p_7, t);
  t = read_pp_tables_0_0(t);
  t = y_24;
  t = xtc_io_1_0(q_7, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm d_25 = NULL,e_25 = NULL,f_25 = NULL,h_25 = NULL,i_25 = NULL;
  d_25 = t;
  t = term_i_12;
  t = whoami_0_0(t);
  e_25 = t;
  t = term_t_18;
  f_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_28), e_25), term_v_27);
  h_25 = t;
  t = SSL_printnl(f_25, h_25);
  t = term_p_13;
  i_25 = t;
  t = SSL_exit(i_25);
  t = d_25;
  return(t);
}
ATerm at_end_1_0 (ATerm z_89 (ATerm), ATerm t)
{
  ATerm t_25 (ATerm t)
  {
    ATerm k_28 = t;
    int l_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, t_25, t);
        ;
        LocalPopChoice(l_28);
      }
    else
      {
        t = k_28;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_89(t);
      }
    return(t);
  }
  t = t_25(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm n_28 = t;
  int o_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(o_28);
    }
  else
    {
      t = n_28;
      {
        ATerm m_25 = NULL,n_25 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_25 = ATgetFirst((ATermList) t);
            n_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = m_25;
        {
          ATerm u_7 (ATerm t)
          {
            t = n_25;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(u_7, t);
        }
      }
    }
  return(t);
}
ATerm n_26 (ATerm d_26, ATerm t)
{
  ATerm h_26 = NULL;
  t = SSL_explode_term(d_26);
  if(match_cons(t, sym__2))
    {
      ATerm p_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      h_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_26;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm i_26 = NULL,j_26 = NULL,k_26 = NULL;
  k_26 = t;
  if(match_cons(t, sym__2))
    {
      i_26 = ATgetArgument(t, 0);
      j_26 = ATgetArgument(t, 1);
      {
        ATerm q_28 = t;
        int r_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_7 (ATerm t)
            {
              t = j_26;
              return(t);
            }
            t = i_26;
            t = at_end_1_0(v_7, t);
            ;
            LocalPopChoice(r_28);
          }
        else
          {
            t = q_28;
            t = n_26(k_26, t);
          }
      }
    }
  else
    {
      t = n_26(k_26, t);
    }
  return(t);
}
ATerm y_7 (ATerm e_30, ATerm d_30, ATerm t)
{
  ATerm o_26 = NULL,p_26 = NULL,q_26 = NULL;
  t = e_30;
  {
    ATerm s_28 = t;
    int t_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(t_28);
      }
    else
      {
        t = s_28;
        t = (ATerm) ATempty;
      }
    o_26 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_30, o_26);
    t = conc_0_0(t);
    p_26 = t;
    t = term_u_28;
    q_26 = t;
    t = SSL_table_put(q_26, e_30, p_26);
    t = (ATerm) ATmakeAppl(sym__3, term_u_28, e_30, p_26);
  }
  return(t);
}
ATerm a_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_8 (ATerm t)
{
  ATerm r_26 = NULL,s_26 = NULL,t_26 = NULL;
  r_26 = t;
  t = term_j_27;
  s_26 = t;
  t = (ATerm) ATinsert(ATempty, r_26);
  t_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_27, (ATerm) ATinsert(ATempty, r_26));
  t = y_7(s_26, t_26, t);
  t = r_26;
  return(t);
}
ATerm k_8 (ATerm t)
{
  t = term_x_28;
  return(t);
}
ATerm pp_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_8, f_8, k_8, t);
  return(t);
}
ATerm n_8 (ATerm t)
{
  ATerm v_26 = NULL;
  v_26 = t;
  if(match_string(t, "-k"))
    {
      t = v_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = v_26;
    }
  return(t);
}
ATerm o_8 (ATerm t)
{
  ATerm w_26 = NULL,x_26 = NULL,y_26 = NULL;
  w_26 = t;
  t = SSL_string_to_int(w_26);
  x_26 = t;
  t = term_z_28;
  y_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_28, x_26);
  t = g_8(y_26, x_26, t);
  t = w_26;
  return(t);
}
ATerm p_8 (ATerm t)
{
  t = term_b_29;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_8, o_8, p_8, t);
  return(t);
}
ATerm q_8 (ATerm t)
{
  ATerm a_27 = NULL;
  a_27 = t;
  if(match_string(t, "-S"))
    {
      t = a_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = a_27;
    }
  return(t);
}
ATerm r_8 (ATerm t)
{
  ATerm b_27 = NULL,c_27 = NULL;
  t = term_c_29;
  b_27 = t;
  t = term_t_13;
  c_27 = t;
  t = term_d_29;
  t = g_8(b_27, c_27, t);
  t = term_h_29;
  return(t);
}
ATerm t_8 (ATerm t)
{
  t = term_j_29;
  return(t);
}
ATerm u_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_8 (ATerm t)
{
  ATerm d_27 = NULL,g_27 = NULL,k_27 = NULL;
  d_27 = t;
  t = SSL_string_to_int(d_27);
  g_27 = t;
  t = term_c_29;
  k_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_29, g_27);
  t = g_8(k_27, g_27, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, d_27);
  return(t);
}
ATerm z_8 (ATerm t)
{
  t = term_k_29;
  return(t);
}
ATerm e_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_9 (ATerm t)
{
  ATerm l_27 = NULL,m_27 = NULL;
  t = term_n_29;
  l_27 = t;
  t = term_i_12;
  m_27 = t;
  t = term_o_29;
  t = g_8(l_27, m_27, t);
  t = term_p_29;
  return(t);
}
ATerm j_9 (ATerm t)
{
  t = term_q_29;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm r_29 = t;
  int s_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_8, r_8, t_8, t);
      ;
      LocalPopChoice(s_29);
    }
  else
    {
      t = r_29;
      {
        ATerm t_29 = t;
        int x_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(u_8, y_8, z_8, t);
            ;
            LocalPopChoice(x_29);
          }
        else
          {
            t = t_29;
            t = Option_3_0(e_9, i_9, j_9, t);
          }
      }
    }
  return(t);
}
ATerm g_8 (ATerm y_29, ATerm z_29, ATerm t)
{
  ATerm t_27 = NULL;
  t = term_u_28;
  t_27 = t;
  t = SSL_table_put(t_27, y_29, z_29);
  t = (ATerm) ATmakeAppl(sym__3, term_u_28, y_29, z_29);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm w_27 = NULL,g_28 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_28 = NULL,i_28 = NULL,m_28 = NULL;
      t = term_i_12;
      t = d_0(t);
      h_28 = t;
      t = term_a_30;
      i_28 = t;
      t = term_b_30;
      m_28 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_30, term_b_30, h_28);
      t = e_8(i_28, m_28, h_28, t);
      _fail(t);
    }
  else
    {
      ATerm a_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_27 = ATgetFirst((ATermList) t);
          g_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_27;
      t = a_0(t);
      t = term_i_12;
      t = c_0(t);
      a_29 = t;
      t = (ATerm) ATinsert(CheckATermList(g_28), a_29);
    }
  return(t);
}
ATerm k_9 (ATerm t)
{
  ATerm i_29 = NULL;
  i_29 = t;
  if(match_string(t, "-o"))
    {
      t = i_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = i_29;
    }
  return(t);
}
ATerm l_9 (ATerm t)
{
  ATerm l_29 = NULL,m_29 = NULL;
  l_29 = t;
  t = term_k_22;
  m_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_22, l_29);
  t = g_8(m_29, l_29, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, l_29);
  return(t);
}
ATerm m_9 (ATerm t)
{
  t = term_c_30;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_9, l_9, m_9, t);
  return(t);
}
ATerm e_8 (ATerm q_32, ATerm r_32, ATerm p_32, ATerm t)
{
  ATerm u_29 = NULL,v_29 = NULL,w_29 = NULL;
  u_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_32, r_32);
  {
    ATerm f_30 = t;
    int g_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_30 = ATgetArgument(t, 0);
            ATerm i_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, q_32, r_32);
        t = d_8(q_32, r_32, t);
        ;
        LocalPopChoice(g_30);
      }
    else
      {
        t = f_30;
        t = (ATerm) ATempty;
      }
    v_29 = t;
    t = (ATerm) ATinsert(CheckATermList(v_29), p_32);
    w_29 = t;
    t = SSL_table_put(q_32, r_32, w_29);
    t = u_29;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm m_30 = NULL,n_30 = NULL,o_30 = NULL,p_30 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_30 = NULL,u_30 = NULL,v_30 = NULL;
      t = term_i_12;
      t = j_0(t);
      s_30 = t;
      t = term_a_30;
      u_30 = t;
      t = term_b_30;
      v_30 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_30, term_b_30, s_30);
      t = e_8(u_30, v_30, s_30, t);
      _fail(t);
    }
  else
    {
      ATerm z_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_30 = ATgetFirst((ATermList) t);
          n_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_30;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_30 = ATgetFirst((ATermList) t);
          p_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_30;
      t = h_0(t);
      t = o_30;
      t = i_0(t);
      z_30 = t;
      t = (ATerm) ATinsert(CheckATermList(p_30), z_30);
    }
  return(t);
}
ATerm n_9 (ATerm t)
{
  ATerm b_31 = NULL;
  b_31 = t;
  if(match_string(t, "-i"))
    {
      t = b_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = b_31;
    }
  return(t);
}
ATerm o_9 (ATerm t)
{
  ATerm c_31 = NULL,d_31 = NULL;
  c_31 = t;
  t = term_o_22;
  d_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_22, c_31);
  t = g_8(d_31, c_31, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, c_31);
  return(t);
}
ATerm s_9 (ATerm t)
{
  t = term_j_30;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_9, o_9, s_9, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_12;
  t = whoami_0_0(t);
  e_31 = t;
  t = term_t_18;
  f_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_k_30), e_31);
  g_31 = t;
  t = SSL_printnl(f_31, g_31);
  t = term_p_13;
  h_31 = t;
  t = SSL_exit(h_31);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_l_30;
  t = get_config_0_0(t);
  return(t);
}
ATerm z_7 (ATerm t_44, ATerm u_44, ATerm t)
{
  ATerm t_30 = t;
  int w_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(t_44, u_44);
      ;
      LocalPopChoice(w_30);
    }
  else
    {
      t = t_30;
      t = SSL_addr(t_44, u_44);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm b_96 (ATerm), ATerm c_96 (ATerm), ATerm t)
{
  ATerm x_30 = t;
  int y_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = b_96(t);
      ;
      LocalPopChoice(y_30);
    }
  else
    {
      t = x_30;
      {
        ATerm s_31 = NULL,v_31 = NULL,a_32 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_31 = ATgetFirst((ATermList) t);
            v_31 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_31;
        t = foldr_2_0(b_96, c_96, t);
        a_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_31, a_32);
        t = c_96(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm t_9 (ATerm t)
{
  t = term_t_13;
  return(t);
}
ATerm u_9 (ATerm t)
{
  ATerm b_6 = NULL,c_6 = NULL;
  if(match_cons(t, sym__2))
    {
      b_6 = ATgetArgument(t, 0);
      c_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_7(b_6, c_6, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm e_32 = NULL,x_5 = NULL,y_5 = NULL;
  t = times_0_0(t);
  x_5 = t;
  t = SSL_explode_term(x_5);
  if(match_cons(t, sym__2))
    {
      ATerm a_31 = ATgetArgument(t, 0);
      y_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_5;
  t = foldr_2_0(t_9, u_9, t);
  e_32 = t;
  t = SSL_TicksToSeconds(e_32);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm h_33 = NULL,i_33 = NULL,j_33 = NULL;
  h_33 = t;
  if(match_cons(t, sym__2))
    {
      i_33 = ATgetArgument(t, 0);
      j_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_31 = t;
    int j_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_33;
        if((i_33 != t))
          {
            _fail(t);
          }
        t = h_33;
        ;
        LocalPopChoice(j_31);
      }
    else
      {
        t = i_31;
        t = (ATerm) ATmakeAppl(sym__2, i_33, j_33);
        {
          ATerm k_31 = t;
          int l_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(i_33, j_33);
              ;
              LocalPopChoice(l_31);
            }
          else
            {
              t = k_31;
              t = SSL_gtr(i_33, j_33);
            }
          t = (ATerm) ATmakeAppl(sym__2, i_33, j_33);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm e_82 (ATerm), ATerm t)
{
  ATerm m_31 = t;
  int n_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_33 = NULL,q_33 = NULL;
      n_33 = t;
      t = term_c_29;
      t = get_config_0_0(t);
      q_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_33, term_p_13);
      t = geq_0_0(t);
      t = n_33;
      t = e_82(t);
      ;
      LocalPopChoice(n_31);
    }
  else
    {
      t = m_31;
    }
  return(t);
}
ATerm v_9 (ATerm t)
{
  ATerm t_33 = NULL,u_33 = NULL,x_33 = NULL,z_33 = NULL;
  t = run_time_0_0(t);
  t_33 = t;
  t = term_i_12;
  t = whoami_0_0(t);
  u_33 = t;
  t = term_t_18;
  x_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_31), t_33), term_o_31), u_33);
  z_33 = t;
  t = SSL_printnl(x_33, z_33);
  t = (ATerm) ATmakeAppl(sym__2, term_t_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_31), t_33), term_o_31), u_33));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(v_9, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm c_34 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_13;
  c_34 = t;
  t = SSL_exit(c_34);
  return(t);
}
ATerm x_9 (ATerm t)
{
  ATerm q_31 = t;
  int r_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(r_31);
    }
  else
    {
      t = q_31;
      {
        ATerm t_31 = t;
        int u_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(u_31);
          }
        else
          {
            t = t_31;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm j_101 (ATerm), ATerm t)
{
  ATerm w_31 = t;
  int x_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_31;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(x_31);
    }
  else
    {
      t = w_31;
      t = fetch_1_0(x_9, t);
    }
  t = j_101(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm e_34 = NULL,f_34 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_34 = ATgetFirst((ATermList) t);
      f_34 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm l_34 = NULL,n_34 = NULL;
        t = f_34;
        t = g_0(t);
        l_34 = t;
        t = e_34;
        t = e_0(t);
        n_34 = t;
        t = f_34;
        {
          ATerm c_10 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(l_34), n_34);
            return(t);
          }
          t = reverse_acc_2_0(e_0, c_10, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_i_12;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm n_77 (ATerm), ATerm t)
{
  ATerm q_34 = NULL,r_34 = NULL,t_34 = NULL,u_34 = NULL,t_1 = NULL,v_1 = NULL;
  u_34 = t;
  if(match_cons(t, sym_Program_1))
    {
      r_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_34);
  q_34 = t;
  t = r_34;
  t = n_77(t);
  t_34 = t;
  v_1 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, t_34);
  t_1 = t;
  t = SSLsetAnnotations(t_1, q_34);
  return(t);
}
ATerm d_10 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm f_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm g_10 (ATerm t)
{
  ATerm c_35 = NULL;
  c_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_35), term_z_31);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm y_34 = NULL,b_35 = NULL;
  ATerm b_32 = t;
  int c_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_30;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(c_32);
    }
  else
    {
      t = b_32;
      t = fetch_1_0(d_10, t);
    }
  t = term_d_32;
  t = echo_0_0(t);
  t = term_a_30;
  y_34 = t;
  t = term_b_30;
  b_35 = t;
  t = term_f_32;
  t = d_8(y_34, b_35, t);
  t = reverse_acc_2_0(_id, f_10, t);
  t = map_1_0(g_10, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm o_77 (ATerm), ATerm t)
{
  ATerm e_35 = NULL,f_35 = NULL,g_35 = NULL,h_35 = NULL,w_1 = NULL,x_1 = NULL;
  h_35 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      f_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_35);
  e_35 = t;
  t = f_35;
  t = o_77(t);
  g_35 = t;
  x_1 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, g_35);
  w_1 = t;
  t = SSLsetAnnotations(w_1, e_35);
  return(t);
}
ATerm fetch_1_0 (ATerm t_89 (ATerm), ATerm t)
{
  ATerm k_35 (ATerm t)
  {
    ATerm g_32 = t;
    int h_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(t_89, _id, t);
        ;
        LocalPopChoice(h_32);
      }
    else
      {
        t = g_32;
        t = Cons_2_0(_id, k_35, t);
      }
    return(t);
  }
  t = k_35(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm m_35 = NULL,n_35 = NULL,o_35 = NULL;
  m_35 = t;
  {
    ATerm i_32 = t;
    int j_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = m_35;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm k_32 = ATgetFirst((ATermList) t);
                ATerm l_32 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = m_35;
          }
        ;
        LocalPopChoice(j_32);
      }
    else
      {
        t = i_32;
        t = (ATerm) ATinsert(ATempty, m_35);
      }
    n_35 = t;
    t = term_l_22;
    o_35 = t;
    t = SSL_printnl(o_35, n_35);
    t = m_35;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_l_30;
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
  ATerm v_35 = NULL,w_35 = NULL,e_36 = NULL,f_36 = NULL;
  v_35 = t;
  t = c_105(t);
  w_35 = t;
  t = term_t_18;
  e_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_35), w_35);
  f_36 = t;
  t = SSL_printnl(e_36, f_36);
  t = v_35;
  return(t);
}
ATerm map_1_0 (ATerm j_89 (ATerm), ATerm t)
{
  ATerm g_36 (ATerm t)
  {
    ATerm m_32 = t;
    int n_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(n_32);
      }
    else
      {
        t = m_32;
        t = Cons_2_0(j_89, g_36, t);
      }
    return(t);
  }
  t = g_36(t);
  return(t);
}
ATerm h_10 (ATerm t)
{
  ATerm o_32 = t;
  int s_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(s_32);
    }
  else
    {
      t = o_32;
    }
  return(t);
}
ATerm i_10 (ATerm t)
{
  t = term_t_32;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm u_32 = t;
  int x_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_36 = NULL;
      u_36 = t;
      t = SSL_is_string(u_36);
      ;
      LocalPopChoice(x_32);
    }
  else
    {
      t = u_32;
      {
        ATerm y_32 = t;
        int z_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(h_10, t);
            ;
            LocalPopChoice(z_32);
          }
        else
          {
            t = y_32;
            {
              ATerm y_36 = NULL,z_36 = NULL,a_37 = NULL;
              y_36 = t;
              if(match_cons(t, sym_Path_1))
                {
                  z_36 = ATgetArgument(t, 0);
                  t = z_36;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      z_36 = ATgetArgument(t, 0);
                      t = z_36;
                      {
                        ATerm a_33 = t;
                        int b_33 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(b_33);
                          }
                        else
                          {
                            t = a_33;
                            t = debug_1_0(i_10, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm f_37 = NULL,h_37 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          z_36 = ATgetArgument(t, 0);
                          a_37 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = z_36;
                      t = eval_config_0_0(t);
                      f_37 = t;
                      t = a_37;
                      t = eval_config_0_0(t);
                      h_37 = t;
                      t = (ATerm) ATmakeAppl(sym__2, f_37, h_37);
                      t = c_8(f_37, h_37, t);
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
  ATerm m_37 = NULL,n_37 = NULL;
  m_37 = t;
  t = term_u_28;
  n_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_28, m_37);
  t = d_8(n_37, m_37, t);
  {
    ATerm c_33 = t;
    int d_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_37 = NULL,q_37 = NULL;
        t = eval_config_0_0(t);
        p_37 = t;
        t = term_u_28;
        q_37 = t;
        t = SSL_table_put(q_37, m_37, p_37);
        t = p_37;
        ;
        LocalPopChoice(d_33);
      }
    else
      {
        t = c_33;
      }
  }
  return(t);
}
ATerm j_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_10 (ATerm t)
{
  ATerm r_37 = NULL,s_37 = NULL;
  t = term_e_33;
  r_37 = t;
  t = term_i_12;
  s_37 = t;
  t = term_f_33;
  t = g_8(r_37, s_37, t);
  return(t);
}
ATerm l_10 (ATerm t)
{
  t = term_g_33;
  return(t);
}
ATerm m_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_10 (ATerm t)
{
  ATerm t_37 = NULL,u_37 = NULL,v_37 = NULL,w_37 = NULL;
  t = term_e_33;
  t_37 = t;
  t = term_i_12;
  u_37 = t;
  t = term_f_33;
  t = g_8(t_37, u_37, t);
  t = term_k_33;
  v_37 = t;
  t = term_i_12;
  w_37 = t;
  t = term_l_33;
  t = g_8(v_37, w_37, t);
  t = term_m_33;
  return(t);
}
ATerm o_10 (ATerm t)
{
  t = term_o_33;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm p_33 = t;
  int r_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_10, k_10, l_10, t);
      ;
      LocalPopChoice(r_33);
    }
  else
    {
      t = p_33;
      t = Option_3_0(m_10, n_10, o_10, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm o_72 (ATerm), ATerm p_72 (ATerm), ATerm t)
{
  ATerm x_37 = NULL,a_38 = NULL,b_38 = NULL,c_38 = NULL,d_38 = NULL,e_38 = NULL,z_1 = NULL,a_2 = NULL;
  e_38 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_38 = ATgetFirst((ATermList) t);
      b_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_38);
  x_37 = t;
  t = a_38;
  t = o_72(t);
  c_38 = t;
  t = b_38;
  t = p_72(t);
  d_38 = t;
  a_2 = t;
  t = (ATerm) ATinsert(CheckATermList(d_38), c_38);
  z_1 = t;
  t = SSLsetAnnotations(z_1, x_37);
  return(t);
}
ATerm p_10 (ATerm t)
{
  ATerm j_38 = NULL,k_38 = NULL;
  j_38 = t;
  t = term_l_30;
  k_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_30, j_38);
  t = g_8(k_38, j_38, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, j_38);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm h_103 (ATerm), ATerm t)
{
  ATerm i_38 = NULL;
  i_38 = t;
  {
    ATerm s_33 = t;
    int v_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_w_33;
        t = h_103(t);
        ;
        LocalPopChoice(v_33);
      }
    else
      {
        t = s_33;
      }
    t = i_38;
    {
      ATerm q_10 (ATerm t)
      {
        ATerm y_33 = t;
        int a_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_34 = t;
            int d_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(d_34);
              }
            else
              {
                t = b_34;
                t = h_103(t);
                t = Cons_2_0(_id, q_10, t);
              }
            ;
            LocalPopChoice(a_34);
          }
        else
          {
            t = y_33;
            {
              ATerm m_38 = NULL,r_38 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  m_38 = ATgetFirst((ATermList) t);
                  r_38 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(r_38), (ATerm) ATmakeAppl(sym_Undefined_1, m_38));
            }
          }
        return(t);
      }
      t = Cons_2_0(p_10, q_10, t);
    }
  }
  return(t);
}
ATerm t_10 (ATerm t)
{
  ATerm j_39 = NULL;
  j_39 = t;
  if(match_string(t, "--help"))
    {
      t = j_39;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = j_39;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = j_39;
        }
    }
  return(t);
}
ATerm u_10 (ATerm t)
{
  ATerm k_39 = NULL,m_39 = NULL;
  t = term_y_31;
  k_39 = t;
  t = term_i_12;
  m_39 = t;
  t = term_g_34;
  t = g_8(k_39, m_39, t);
  t = term_j_34;
  return(t);
}
ATerm v_10 (ATerm t)
{
  t = term_k_34;
  return(t);
}
ATerm w_10 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm g_103 (ATerm), ATerm t)
{
  ATerm y_38 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL,f_39 = NULL,g_39 = NULL,h_39 = NULL;
  y_38 = t;
  t = term_a_30;
  d_39 = t;
  t = term_b_30;
  f_39 = t;
  t = (ATerm) ATempty;
  g_39 = t;
  t = SSL_table_put(d_39, f_39, g_39);
  t = y_38;
  {
    ATerm s_10 (ATerm t)
    {
      ATerm m_34 = t;
      int o_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_103(t);
          ;
          LocalPopChoice(o_34);
        }
      else
        {
          t = m_34;
          {
            ATerm p_34 = t;
            int s_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(t_10, u_10, v_10, t);
                ;
                LocalPopChoice(s_34);
              }
            else
              {
                t = p_34;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(s_10, t);
    {
      ATerm v_34 = t;
      int w_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_39 = NULL;
          t_39 = t;
          {
            ATerm x_34 = t;
            int z_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_7 = NULL;
                t = t_39;
                {
                  ATerm a_35 = t;
                  int d_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_y_31;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(d_35);
                    }
                  else
                    {
                      t = a_35;
                      t = fetch_1_0(w_10, t);
                    }
                  t = t_39;
                  t = default_system_usage_0_0(t);
                  t = term_t_13;
                  s_7 = t;
                  t = SSL_exit(s_7);
                }
                ;
                LocalPopChoice(z_34);
              }
            else
              {
                t = x_34;
                {
                  ATerm h_8 = NULL;
                  t = term_e_33;
                  t = get_config_0_0(t);
                  t = t_39;
                  t = default_system_about_0_0(t);
                  t = term_t_13;
                  h_8 = t;
                  t = SSL_exit(h_8);
                }
              }
          }
          ;
          LocalPopChoice(w_34);
        }
      else
        {
          t = v_34;
          {
            ATerm i_35 = t;
            int j_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_39 = NULL,v_39 = NULL,x_39 = NULL;
                ATerm x_10 (ATerm t)
                {
                  ATerm y_10 (ATerm t)
                  {
                    if(((b_39 != NULL) && (b_39 != t)))
                      _fail(t);
                    else
                      b_39 = t;
                    return(t);
                  }
                  t = Undefined_1_0(y_10, t);
                  return(t);
                }
                t = fetch_1_0(x_10, t);
                t = term_t_18;
                u_39 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_39)), term_l_35);
                v_39 = t;
                t = SSL_printnl(u_39, v_39);
                t = (ATerm) ATmakeAppl(sym__2, term_t_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_39)), term_l_35));
                t = default_system_usage_0_0(t);
                t = term_p_13;
                x_39 = t;
                t = SSL_exit(x_39);
                ;
                LocalPopChoice(j_35);
              }
            else
              {
                t = i_35;
              }
          }
        }
      c_39 = t;
      t = term_a_30;
      h_39 = t;
      t = SSL_table_destroy(h_39);
      t = c_39;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm l_101 (ATerm), ATerm m_101 (ATerm), ATerm n_101 (ATerm), ATerm o_101 (ATerm), ATerm t)
{
  ATerm g_40 = NULL,h_40 = NULL,i_40 = NULL,j_40 = NULL;
  t = parse_options_1_0(l_101, t);
  g_40 = t;
  t = term_x_24;
  h_40 = t;
  t = SSL_table_create(h_40);
  t = term_x_24;
  i_40 = t;
  t = term_a_25;
  j_40 = t;
  t = SSL_table_put(i_40, j_40, g_40);
  t = g_40;
  t = n_101(t);
  {
    ATerm p_35 = t;
    int q_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(m_101, t);
        ;
        LocalPopChoice(q_35);
      }
    else
      {
        t = p_35;
        {
          ATerm r_35 = t;
          int s_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_101(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(s_35);
            }
          else
            {
              t = r_35;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm z_10 (ATerm t)
{
  ATerm t_35 = t;
  int u_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(u_35);
    }
  else
    {
      t = t_35;
      {
        ATerm x_35 = t;
        int y_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(y_35);
          }
        else
          {
            t = x_35;
            {
              ATerm z_35 = t;
              int a_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(a_11, d_11, f_11, t);
                  ;
                  LocalPopChoice(a_36);
                }
              else
                {
                  t = z_35;
                  {
                    ATerm b_36 = t;
                    int c_36 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(c_36);
                      }
                    else
                      {
                        t = b_36;
                        {
                          ATerm d_36 = t;
                          int h_36 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = keep_option_0_0(t);
                              ;
                              LocalPopChoice(h_36);
                            }
                          else
                            {
                              t = d_36;
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
ATerm a_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_11 (ATerm t)
{
  ATerm l_40 = NULL,m_40 = NULL;
  t = term_i_36;
  l_40 = t;
  t = term_i_12;
  m_40 = t;
  t = term_j_36;
  t = g_8(l_40, m_40, t);
  t = term_k_36;
  return(t);
}
ATerm f_11 (ATerm t)
{
  t = term_l_36;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(z_10, default_usage_0_0, _id, ast2abox_0_0, t);
  return(t);
}
