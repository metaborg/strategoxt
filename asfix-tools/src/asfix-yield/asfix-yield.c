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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Anno_2;
Symbol sym_Infinite_0;
Symbol sym_Keys_0;
Symbol sym_Keys_1;
Symbol sym_Keys_2;
Symbol sym_Keys_3;
Symbol sym_Keys_4;
Symbol sym_Keys_5;
Symbol sym_Keys_6;
Symbol sym_Keys_7;
Symbol sym_Keys_8;
Symbol sym_Keys_9;
Symbol sym_Keys_10;
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
Symbol sym_Dummy_0;
Symbol sym_Scopes_0;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_EpochTime_1;
Symbol sym_ComponentTime_3;
Symbol sym_DayTime_3;
Symbol sym_Date_3;
Symbol sym_Dupl_2;
Symbol sym_January_0;
Symbol sym_February_0;
Symbol sym_March_0;
Symbol sym_April_0;
Symbol sym_May_0;
Symbol sym_June_0;
Symbol sym_July_0;
Symbol sym_August_0;
Symbol sym_September_0;
Symbol sym_October_0;
Symbol sym_November_0;
Symbol sym_December_0;
Symbol sym_Sunday_0;
Symbol sym_Monday_0;
Symbol sym_Tuesday_0;
Symbol sym_Wednesday_0;
Symbol sym_Thursday_0;
Symbol sym_Friday_0;
Symbol sym_Saturday_0;
Symbol sym_Silent_0;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_DeclVersion_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_parsetree_2;
Symbol sym_amb_1;
Symbol sym_appl_2;
Symbol sym_flatlex_2;
Symbol sym_AsFixCharacter_1;
Symbol sym_NatCon_1;
Symbol sym_term_9;
Symbol sym_prod_9;
Symbol sym_id_1;
Symbol sym_appl_3;
Symbol sym_list_3;
Symbol sym_lex_2;
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  sym_Keys_0 = ATmakeSymbol("Keys", 0, ATfalse);
  ATprotectSymbol(sym_Keys_0);
  sym_Keys_1 = ATmakeSymbol("Keys", 1, ATfalse);
  ATprotectSymbol(sym_Keys_1);
  sym_Keys_2 = ATmakeSymbol("Keys", 2, ATfalse);
  ATprotectSymbol(sym_Keys_2);
  sym_Keys_3 = ATmakeSymbol("Keys", 3, ATfalse);
  ATprotectSymbol(sym_Keys_3);
  sym_Keys_4 = ATmakeSymbol("Keys", 4, ATfalse);
  ATprotectSymbol(sym_Keys_4);
  sym_Keys_5 = ATmakeSymbol("Keys", 5, ATfalse);
  ATprotectSymbol(sym_Keys_5);
  sym_Keys_6 = ATmakeSymbol("Keys", 6, ATfalse);
  ATprotectSymbol(sym_Keys_6);
  sym_Keys_7 = ATmakeSymbol("Keys", 7, ATfalse);
  ATprotectSymbol(sym_Keys_7);
  sym_Keys_8 = ATmakeSymbol("Keys", 8, ATfalse);
  ATprotectSymbol(sym_Keys_8);
  sym_Keys_9 = ATmakeSymbol("Keys", 9, ATfalse);
  ATprotectSymbol(sym_Keys_9);
  sym_Keys_10 = ATmakeSymbol("Keys", 10, ATfalse);
  ATprotectSymbol(sym_Keys_10);
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
  sym_Dummy_0 = ATmakeSymbol("Dummy", 0, ATfalse);
  ATprotectSymbol(sym_Dummy_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_EpochTime_1 = ATmakeSymbol("EpochTime", 1, ATfalse);
  ATprotectSymbol(sym_EpochTime_1);
  sym_ComponentTime_3 = ATmakeSymbol("ComponentTime", 3, ATfalse);
  ATprotectSymbol(sym_ComponentTime_3);
  sym_DayTime_3 = ATmakeSymbol("DayTime", 3, ATfalse);
  ATprotectSymbol(sym_DayTime_3);
  sym_Date_3 = ATmakeSymbol("Date", 3, ATfalse);
  ATprotectSymbol(sym_Date_3);
  sym_Dupl_2 = ATmakeSymbol("Dupl", 2, ATfalse);
  ATprotectSymbol(sym_Dupl_2);
  sym_January_0 = ATmakeSymbol("January", 0, ATfalse);
  ATprotectSymbol(sym_January_0);
  sym_February_0 = ATmakeSymbol("February", 0, ATfalse);
  ATprotectSymbol(sym_February_0);
  sym_March_0 = ATmakeSymbol("March", 0, ATfalse);
  ATprotectSymbol(sym_March_0);
  sym_April_0 = ATmakeSymbol("April", 0, ATfalse);
  ATprotectSymbol(sym_April_0);
  sym_May_0 = ATmakeSymbol("May", 0, ATfalse);
  ATprotectSymbol(sym_May_0);
  sym_June_0 = ATmakeSymbol("June", 0, ATfalse);
  ATprotectSymbol(sym_June_0);
  sym_July_0 = ATmakeSymbol("July", 0, ATfalse);
  ATprotectSymbol(sym_July_0);
  sym_August_0 = ATmakeSymbol("August", 0, ATfalse);
  ATprotectSymbol(sym_August_0);
  sym_September_0 = ATmakeSymbol("September", 0, ATfalse);
  ATprotectSymbol(sym_September_0);
  sym_October_0 = ATmakeSymbol("October", 0, ATfalse);
  ATprotectSymbol(sym_October_0);
  sym_November_0 = ATmakeSymbol("November", 0, ATfalse);
  ATprotectSymbol(sym_November_0);
  sym_December_0 = ATmakeSymbol("December", 0, ATfalse);
  ATprotectSymbol(sym_December_0);
  sym_Sunday_0 = ATmakeSymbol("Sunday", 0, ATfalse);
  ATprotectSymbol(sym_Sunday_0);
  sym_Monday_0 = ATmakeSymbol("Monday", 0, ATfalse);
  ATprotectSymbol(sym_Monday_0);
  sym_Tuesday_0 = ATmakeSymbol("Tuesday", 0, ATfalse);
  ATprotectSymbol(sym_Tuesday_0);
  sym_Wednesday_0 = ATmakeSymbol("Wednesday", 0, ATfalse);
  ATprotectSymbol(sym_Wednesday_0);
  sym_Thursday_0 = ATmakeSymbol("Thursday", 0, ATfalse);
  ATprotectSymbol(sym_Thursday_0);
  sym_Friday_0 = ATmakeSymbol("Friday", 0, ATfalse);
  ATprotectSymbol(sym_Friday_0);
  sym_Saturday_0 = ATmakeSymbol("Saturday", 0, ATfalse);
  ATprotectSymbol(sym_Saturday_0);
  sym_Silent_0 = ATmakeSymbol("Silent", 0, ATfalse);
  ATprotectSymbol(sym_Silent_0);
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
  sym_Runtime_1 = ATmakeSymbol("Runtime", 1, ATfalse);
  ATprotectSymbol(sym_Runtime_1);
  sym_DeclVersion_1 = ATmakeSymbol("DeclVersion", 1, ATfalse);
  ATprotectSymbol(sym_DeclVersion_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_parsetree_2 = ATmakeSymbol("parsetree", 2, ATfalse);
  ATprotectSymbol(sym_parsetree_2);
  sym_amb_1 = ATmakeSymbol("amb", 1, ATfalse);
  ATprotectSymbol(sym_amb_1);
  sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
  ATprotectSymbol(sym_appl_2);
  sym_flatlex_2 = ATmakeSymbol("flatlex", 2, ATfalse);
  ATprotectSymbol(sym_flatlex_2);
  sym_AsFixCharacter_1 = ATmakeSymbol("AsFixCharacter", 1, ATfalse);
  ATprotectSymbol(sym_AsFixCharacter_1);
  sym_NatCon_1 = ATmakeSymbol("NatCon", 1, ATfalse);
  ATprotectSymbol(sym_NatCon_1);
  sym_term_9 = ATmakeSymbol("term", 9, ATfalse);
  ATprotectSymbol(sym_term_9);
  sym_prod_9 = ATmakeSymbol("prod", 9, ATfalse);
  ATprotectSymbol(sym_prod_9);
  sym_id_1 = ATmakeSymbol("id", 1, ATfalse);
  ATprotectSymbol(sym_id_1);
  sym_appl_3 = ATmakeSymbol("appl", 3, ATfalse);
  ATprotectSymbol(sym_appl_3);
  sym_list_3 = ATmakeSymbol("list", 3, ATfalse);
  ATprotectSymbol(sym_list_3);
  sym_lex_2 = ATmakeSymbol("lex", 2, ATfalse);
  ATprotectSymbol(sym_lex_2);
  init_constant_terms();
}
ATerm term_e_13;
ATerm term_v_12;
ATerm term_i_12;
ATerm term_d_12;
ATerm term_b_12;
ATerm term_z_11;
ATerm term_v_11;
ATerm term_i_11;
ATerm term_g_11;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_t_9;
ATerm term_r_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_v_7;
ATerm term_t_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_u_6;
ATerm term_t_6;
ATerm term_o_6;
ATerm term_l_6;
ATerm term_k_6;
ATerm term_d_6;
ATerm term_c_6;
ATerm term_y_5;
ATerm term_x_5;
ATerm term_w_5;
ATerm term_t_5;
ATerm term_r_5;
ATerm term_l_5;
ATerm term_g_5;
ATerm term_x_4;
ATerm term_u_4;
ATerm term_f_3;
ATerm term_d_3;
void init_constant_terms (void)
{
  ATprotect(&(term_d_3));
  term_d_3 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_3));
  term_f_3 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_4));
  term_u_4 = (ATerm) ATmakeAppl(ATmakeSymbol("not in AsFix format", 0, ATtrue));
  ATprotect(&(term_x_4));
  term_x_4 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_g_5));
  term_g_5 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_l_5));
  term_l_5 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_r_5));
  term_r_5 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(sym__2, term_w_5, term_x_5);
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(sym__2, term_o_6, term_t_6);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_6);
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(sym__2, term_d_7, term_x_5);
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(sym__2, term_a_8, term_x_5);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("The asfix-yield utility unparses an asfix tree to flat text.\n", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("It reads from standard input and writes to standard output.\n", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym__2, term_r_9, term_t_9);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym__2, term_v_11, term_x_5);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym__3, term_r_9, term_t_9, (ATerm) ATempty);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm exit_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm literal_1 (ATerm, ATerm j_58 (ATerm));
ATerm flatlex_2 (ATerm, ATerm u_56 (ATerm), ATerm v_56 (ATerm));
ATerm amb_1 (ATerm, ATerm r_56 (ATerm));
ATerm skip2_1 (ATerm, ATerm p_0 (ATerm));
ATerm is_leaf_0 (ATerm);
ATerm printascii_0 (ATerm);
ATerm asfix_yield2_1 (ATerm, ATerm g_58 (ATerm));
ATerm appl_2 (ATerm, ATerm s_56 (ATerm), ATerm t_56 (ATerm));
ATerm parsetree_2 (ATerm, ATerm p_56 (ATerm), ATerm q_56 (ATerm));
ATerm is_asfix2_0 (ATerm);
ATerm lex_2 (ATerm, ATerm x_57 (ATerm), ATerm y_57 (ATerm));
ATerm list_1 (ATerm, ATerm y_65 (ATerm));
ATerm list_3 (ATerm, ATerm u_57 (ATerm), ATerm v_57 (ATerm), ATerm w_57 (ATerm));
ATerm appl_3 (ATerm, ATerm r_57 (ATerm), ATerm s_57 (ATerm), ATerm t_57 (ATerm));
ATerm at_tail_1 (ATerm, ATerm j_66 (ATerm));
ATerm skip1_1 (ATerm, ATerm o_0 (ATerm));
ATerm print_0 (ATerm);
ATerm leaves_3 (ATerm, ATerm i_62 (ATerm), ATerm j_62 (ATerm), ATerm k_62 (ATerm, ATerm (ATerm)));
ATerm asfix_yield1_1 (ATerm, ATerm i_58 (ATerm));
ATerm term_9 (ATerm, ATerm y_56 (ATerm), ATerm z_56 (ATerm), ATerm a_57 (ATerm), ATerm b_57 (ATerm), ATerm c_57 (ATerm), ATerm d_57 (ATerm), ATerm e_57 (ATerm), ATerm f_57 (ATerm), ATerm g_57 (ATerm));
ATerm is_asfix1_0 (ATerm);
ATerm asfix_yield_1 (ATerm, ATerm f_58 (ATerm));
ATerm _2 (ATerm, ATerm t_49 (ATerm), ATerm u_49 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm v_73 (ATerm), ATerm w_73 (ATerm));
ATerm input_file_0 (ATerm);
ATerm obsolete_1 (ATerm, ATerm x_76 (ATerm));
ATerm open_file_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm f_66 (ATerm));
ATerm option_defined_1 (ATerm, ATerm q_80 (ATerm));
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_0 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm g_0 (ATerm));
ATerm Program_1 (ATerm, ATerm i_56 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm r_76 (ATerm));
ATerm Undefined_1 (ATerm, ATerm j_56 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm l_66 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm q_76 (ATerm));
ATerm map_1 (ATerm, ATerm w_65 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm l_58 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm v_81 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm c_51 (ATerm), ATerm d_51 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm t_81 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm s_81 (ATerm));
ATerm main_0 (ATerm);
ATerm exit_0 (ATerm t)
{
  ATerm y_3 = NULL;
  y_3 = t;
  t = SSL_exit(not_null(y_3));
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm c_3;
  c_3 = t;
  {
    ATerm m_4 = NULL;
    ATerm q_4 = NULL;
    q_4 = t;
    if(((m_4 != NULL) && (m_4 != q_4)))
      _fail(q_4);
    else
      m_4 = q_4;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_3, not_null(m_4));
      t = printnl_0(t);
    }
  }
  t = c_3;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm e_3;
  e_3 = t;
  {
    t = error_0(t);
    {
      t = term_f_3;
      t = exit_0(t);
    }
  }
  t = e_3;
  return(t);
}
ATerm literal_1 (ATerm t, ATerm j_58 (ATerm))
{
  t = is_string_0(t);
  {
    ATerm b_0 (ATerm t)
    {
      ATerm t_4 = NULL;
      t_4 = t;
      t = (ATerm) ATinsert(ATempty, not_null(t_4));
      return(t);
    }
    t = split_2(t, j_58, b_0);
    t = print_0(t);
  }
  return(t);
}
ATerm flatlex_2 (ATerm t, ATerm u_56 (ATerm), ATerm v_56 (ATerm))
{
  ATerm c_5 = NULL,d_5 = NULL,e_5 = NULL;
  c_5 = t;
  b_5 :
  if(match_cons(c_5, sym_flatlex_2))
    {
      d_5 = ATgetArgument(c_5, 0);
      e_5 = ATgetArgument(c_5, 1);
      {
        ATerm i_5 = NULL,k_5 = NULL;
        ATerm j_5 = NULL;
        t = SSLgetAnnotations(not_null(c_5));
        {
          j_5 = t;
          if(((i_5 != NULL) && (i_5 != j_5)))
            _fail(j_5);
          else
            i_5 = j_5;
        }
        {
          t = not_null(d_5);
          {
            ATerm m_5 = NULL;
            t = u_56(t);
            {
              k_5 = t;
              {
                t = not_null(e_5);
                {
                  ATerm o_5 = NULL;
                  t = v_56(t);
                  {
                    m_5 = t;
                    {
                      ATerm p_5 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_flatlex_2, not_null(k_5), not_null(m_5)), not_null(i_5));
                      {
                        p_5 = t;
                        if(((o_5 != NULL) && (o_5 != p_5)))
                          _fail(p_5);
                        else
                          o_5 = p_5;
                      }
                      t = not_null(o_5);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm amb_1 (ATerm t, ATerm r_56 (ATerm))
{
  ATerm a_6 = NULL,b_6 = NULL;
  a_6 = t;
  z_5 :
  if(match_cons(a_6, sym_amb_1))
    {
      b_6 = ATgetArgument(a_6, 0);
      {
        ATerm e_6 = NULL,g_6 = NULL;
        ATerm f_6 = NULL;
        t = SSLgetAnnotations(not_null(a_6));
        {
          f_6 = t;
          if(((e_6 != NULL) && (e_6 != f_6)))
            _fail(f_6);
          else
            e_6 = f_6;
        }
        {
          t = not_null(b_6);
          {
            ATerm i_6 = NULL;
            t = r_56(t);
            {
              g_6 = t;
              {
                ATerm j_6 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_amb_1, not_null(g_6)), not_null(e_6));
                {
                  j_6 = t;
                  if(((i_6 != NULL) && (i_6 != j_6)))
                    _fail(j_6);
                  else
                    i_6 = j_6;
                }
                t = not_null(i_6);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm skip2_1 (ATerm t, ATerm p_0 (ATerm))
{
  ATerm g_3 = t;
  int h_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_0 (ATerm t)
      {
        t = at_tail_1(t, p_0);
        return(t);
      }
      t = at_tail_1(t, e_0);
      ;
      LocalPopChoice(h_3);
    }
  else
    {
      t = g_3;
      {
        ATerm i_3 = t;
        int j_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_0 (ATerm t)
            {
              t = list_1(t, p_0);
              return(t);
            }
            t = appl_2(t, _id, f_0);
            ;
            LocalPopChoice(j_3);
          }
        else
          {
            t = i_3;
            {
              ATerm k_3 = t;
              int l_3 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_0 (ATerm t)
                  {
                    t = Cons_2(t, p_0, _id);
                    return(t);
                  }
                  t = amb_1(t, h_0);
                  ;
                  LocalPopChoice(l_3);
                }
              else
                {
                  t = k_3;
                  {
                    ATerm m_3 = t;
                    int n_3 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = parsetree_2(t, p_0, _id);
                        ;
                        LocalPopChoice(n_3);
                      }
                    else
                      {
                        t = m_3;
                        t = flatlex_2(t, _id, p_0);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm is_leaf_0 (ATerm t)
{
  t = _all(t, _fail);
  return(t);
}
ATerm printascii_0 (ATerm t)
{
  ATerm q_6 = NULL,r_6 = NULL,s_6 = NULL;
  q_6 = t;
  p_6 :
  if(match_cons(q_6, sym__2))
    {
      r_6 = ATgetArgument(q_6, 0);
      s_6 = ATgetArgument(q_6, 1);
      {
        ATerm o_3;
        o_3 = t;
        t = SSL_printascii(not_null(r_6), not_null(s_6));
        t = o_3;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm asfix_yield2_1 (ATerm t, ATerm g_58 (ATerm))
{
  ATerm q_0 (ATerm t)
  {
    ATerm p_3 = t;
    int q_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_string_0(t);
        {
          ATerm r_0 (ATerm t)
          {
            ATerm y_6 = NULL;
            y_6 = t;
            t = (ATerm) ATinsert(ATempty, not_null(y_6));
            return(t);
          }
          t = split_2(t, g_58, r_0);
          t = print_0(t);
        }
        ;
        LocalPopChoice(q_3);
      }
    else
      {
        t = p_3;
        {
          ATerm s_0 (ATerm t)
          {
            ATerm a_7 = NULL;
            a_7 = t;
            t = (ATerm) ATinsert(ATempty, not_null(a_7));
            return(t);
          }
          t = split_2(t, g_58, s_0);
          t = printascii_0(t);
        }
      }
    return(t);
  }
  t = leaves_3(t, q_0, is_leaf_0, skip2_1);
  return(t);
}
ATerm appl_2 (ATerm t, ATerm s_56 (ATerm), ATerm t_56 (ATerm))
{
  ATerm k_7 = NULL,l_7 = NULL,m_7 = NULL;
  k_7 = t;
  j_7 :
  if(match_cons(k_7, sym_appl_2))
    {
      l_7 = ATgetArgument(k_7, 0);
      m_7 = ATgetArgument(k_7, 1);
      {
        ATerm q_7 = NULL,s_7 = NULL;
        ATerm r_7 = NULL;
        t = SSLgetAnnotations(not_null(k_7));
        {
          r_7 = t;
          if(((q_7 != NULL) && (q_7 != r_7)))
            _fail(r_7);
          else
            q_7 = r_7;
        }
        {
          t = not_null(l_7);
          {
            ATerm u_7 = NULL;
            t = s_56(t);
            {
              s_7 = t;
              {
                t = not_null(m_7);
                {
                  ATerm w_7 = NULL;
                  t = t_56(t);
                  {
                    u_7 = t;
                    {
                      ATerm x_7 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_appl_2, not_null(s_7), not_null(u_7)), not_null(q_7));
                      {
                        x_7 = t;
                        if(((w_7 != NULL) && (w_7 != x_7)))
                          _fail(x_7);
                        else
                          w_7 = x_7;
                      }
                      t = not_null(w_7);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parsetree_2 (ATerm t, ATerm p_56 (ATerm), ATerm q_56 (ATerm))
{
  ATerm j_8 = NULL,k_8 = NULL,l_8 = NULL;
  j_8 = t;
  i_8 :
  if(match_cons(j_8, sym_parsetree_2))
    {
      k_8 = ATgetArgument(j_8, 0);
      l_8 = ATgetArgument(j_8, 1);
      {
        ATerm p_8 = NULL,r_8 = NULL;
        ATerm q_8 = NULL;
        t = SSLgetAnnotations(not_null(j_8));
        {
          q_8 = t;
          if(((p_8 != NULL) && (p_8 != q_8)))
            _fail(q_8);
          else
            p_8 = q_8;
        }
        {
          t = not_null(k_8);
          {
            ATerm t_8 = NULL;
            t = p_56(t);
            {
              r_8 = t;
              {
                t = not_null(l_8);
                {
                  ATerm v_8 = NULL;
                  t = q_56(t);
                  {
                    t_8 = t;
                    {
                      ATerm w_8 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_parsetree_2, not_null(r_8), not_null(t_8)), not_null(p_8));
                      {
                        w_8 = t;
                        if(((v_8 != NULL) && (v_8 != w_8)))
                          _fail(w_8);
                        else
                          v_8 = w_8;
                      }
                      t = not_null(v_8);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_asfix2_0 (ATerm t)
{
  ATerm r_3 = t;
  int s_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = parsetree_2(t, _id, _id);
      ;
      LocalPopChoice(s_3);
    }
  else
    {
      t = r_3;
      t = appl_2(t, _id, _id);
    }
  return(t);
}
ATerm lex_2 (ATerm t, ATerm x_57 (ATerm), ATerm y_57 (ATerm))
{
  ATerm i_9 = NULL,j_9 = NULL,k_9 = NULL;
  i_9 = t;
  h_9 :
  if(match_cons(i_9, sym_lex_2))
    {
      j_9 = ATgetArgument(i_9, 0);
      k_9 = ATgetArgument(i_9, 1);
      {
        ATerm o_9 = NULL,q_9 = NULL;
        ATerm p_9 = NULL;
        t = SSLgetAnnotations(not_null(i_9));
        {
          p_9 = t;
          if(((o_9 != NULL) && (o_9 != p_9)))
            _fail(p_9);
          else
            o_9 = p_9;
        }
        {
          t = not_null(j_9);
          {
            ATerm s_9 = NULL;
            t = x_57(t);
            {
              q_9 = t;
              {
                t = not_null(k_9);
                {
                  ATerm u_9 = NULL;
                  t = y_57(t);
                  {
                    s_9 = t;
                    {
                      ATerm v_9 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lex_2, not_null(q_9), not_null(s_9)), not_null(o_9));
                      {
                        v_9 = t;
                        if(((u_9 != NULL) && (u_9 != v_9)))
                          _fail(v_9);
                        else
                          u_9 = v_9;
                      }
                      t = not_null(u_9);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm y_65 (ATerm))
{
  ATerm b_10 (ATerm t)
  {
    ATerm t_3 = t;
    int u_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(u_3);
      }
    else
      {
        t = t_3;
        t = Cons_2(t, y_65, b_10);
      }
    return(t);
  }
  t = b_10(t);
  return(t);
}
ATerm list_3 (ATerm t, ATerm u_57 (ATerm), ATerm v_57 (ATerm), ATerm w_57 (ATerm))
{
  ATerm j_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL;
  j_10 = t;
  i_10 :
  if(match_cons(j_10, sym_list_3))
    {
      k_10 = ATgetArgument(j_10, 0);
      l_10 = ATgetArgument(j_10, 1);
      m_10 = ATgetArgument(j_10, 2);
      {
        ATerm r_10 = NULL,t_10 = NULL;
        ATerm s_10 = NULL;
        t = SSLgetAnnotations(not_null(j_10));
        {
          s_10 = t;
          if(((r_10 != NULL) && (r_10 != s_10)))
            _fail(s_10);
          else
            r_10 = s_10;
        }
        {
          t = not_null(k_10);
          {
            ATerm v_10 = NULL;
            t = u_57(t);
            {
              t_10 = t;
              {
                t = not_null(l_10);
                {
                  ATerm x_10 = NULL;
                  t = v_57(t);
                  {
                    v_10 = t;
                    {
                      t = not_null(m_10);
                      {
                        ATerm z_10 = NULL;
                        t = w_57(t);
                        {
                          x_10 = t;
                          {
                            ATerm a_11 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_list_3, not_null(t_10), not_null(v_10), not_null(x_10)), not_null(r_10));
                            {
                              a_11 = t;
                              if(((z_10 != NULL) && (z_10 != a_11)))
                                _fail(a_11);
                              else
                                z_10 = a_11;
                            }
                            t = not_null(z_10);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm appl_3 (ATerm t, ATerm r_57 (ATerm), ATerm s_57 (ATerm), ATerm t_57 (ATerm))
{
  ATerm o_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL;
  o_11 = t;
  n_11 :
  if(match_cons(o_11, sym_appl_3))
    {
      p_11 = ATgetArgument(o_11, 0);
      q_11 = ATgetArgument(o_11, 1);
      r_11 = ATgetArgument(o_11, 2);
      {
        ATerm w_11 = NULL,y_11 = NULL;
        ATerm x_11 = NULL;
        t = SSLgetAnnotations(not_null(o_11));
        {
          x_11 = t;
          if(((w_11 != NULL) && (w_11 != x_11)))
            _fail(x_11);
          else
            w_11 = x_11;
        }
        {
          t = not_null(p_11);
          {
            ATerm a_12 = NULL;
            t = r_57(t);
            {
              y_11 = t;
              {
                t = not_null(q_11);
                {
                  ATerm c_12 = NULL;
                  t = s_57(t);
                  {
                    a_12 = t;
                    {
                      t = not_null(r_11);
                      {
                        ATerm e_12 = NULL;
                        t = t_57(t);
                        {
                          c_12 = t;
                          {
                            ATerm f_12 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_appl_3, not_null(y_11), not_null(a_12), not_null(c_12)), not_null(w_11));
                            {
                              f_12 = t;
                              if(((e_12 != NULL) && (e_12 != f_12)))
                                _fail(f_12);
                              else
                                e_12 = f_12;
                            }
                            t = not_null(e_12);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm at_tail_1 (ATerm t, ATerm j_66 (ATerm))
{
  t = Cons_2(t, _id, j_66);
  return(t);
}
ATerm skip1_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm v_3 = t;
  int w_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = at_tail_1(t, o_0);
      ;
      LocalPopChoice(w_3);
    }
  else
    {
      t = v_3;
      {
        ATerm x_3 = t;
        int z_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_9(t, _id, _id, _id, _id, _id, o_0, o_0, o_0, _id);
            ;
            LocalPopChoice(z_3);
          }
        else
          {
            t = x_3;
            {
              ATerm a_4 = t;
              int b_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_0 (ATerm t)
                  {
                    t = list_1(t, o_0);
                    return(t);
                  }
                  t = appl_3(t, _id, _id, t_0);
                  ;
                  LocalPopChoice(b_4);
                }
              else
                {
                  t = a_4;
                  {
                    ATerm c_4 = t;
                    int d_4 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm u_0 (ATerm t)
                        {
                          t = list_1(t, o_0);
                          return(t);
                        }
                        t = list_3(t, _id, _id, u_0);
                        ;
                        LocalPopChoice(d_4);
                      }
                    else
                      {
                        t = c_4;
                        t = lex_2(t, o_0, _id);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm print_0 (ATerm t)
{
  ATerm o_12 = NULL,p_12 = NULL,q_12 = NULL;
  o_12 = t;
  n_12 :
  if(match_cons(o_12, sym__2))
    {
      p_12 = ATgetArgument(o_12, 0);
      q_12 = ATgetArgument(o_12, 1);
      {
        ATerm e_4;
        e_4 = t;
        t = SSL_print(not_null(p_12), not_null(q_12));
        t = e_4;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm leaves_3 (ATerm t, ATerm i_62 (ATerm), ATerm j_62 (ATerm), ATerm k_62 (ATerm, ATerm (ATerm)))
{
  ATerm u_12 (ATerm t)
  {
    ATerm f_4 = t;
    int g_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_62(t);
        t = i_62(t);
        ;
        LocalPopChoice(g_4);
      }
    else
      {
        t = f_4;
        {
          ATerm h_4 = t;
          int i_4 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_62(t, u_12);
              ;
              LocalPopChoice(i_4);
            }
          else
            {
              t = h_4;
              t = _all(t, u_12);
            }
        }
      }
    return(t);
  }
  t = u_12(t);
  return(t);
}
ATerm asfix_yield1_1 (ATerm t, ATerm i_58 (ATerm))
{
  ATerm v_0 (ATerm t)
  {
    ATerm w_0 (ATerm t)
    {
      ATerm w_12 = NULL;
      w_12 = t;
      t = (ATerm) ATinsert(ATempty, not_null(w_12));
      return(t);
    }
    t = split_2(t, i_58, w_0);
    t = print_0(t);
    return(t);
  }
  t = leaves_3(t, v_0, is_string_0, skip1_1);
  return(t);
}
ATerm term_9 (ATerm t, ATerm y_56 (ATerm), ATerm z_56 (ATerm), ATerm a_57 (ATerm), ATerm b_57 (ATerm), ATerm c_57 (ATerm), ATerm d_57 (ATerm), ATerm e_57 (ATerm), ATerm f_57 (ATerm), ATerm g_57 (ATerm))
{
  ATerm m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL;
  m_13 = t;
  l_13 :
  if(match_cons(m_13, sym_term_9))
    {
      n_13 = ATgetArgument(m_13, 0);
      o_13 = ATgetArgument(m_13, 1);
      p_13 = ATgetArgument(m_13, 2);
      q_13 = ATgetArgument(m_13, 3);
      r_13 = ATgetArgument(m_13, 4);
      s_13 = ATgetArgument(m_13, 5);
      t_13 = ATgetArgument(m_13, 6);
      u_13 = ATgetArgument(m_13, 7);
      v_13 = ATgetArgument(m_13, 8);
      {
        ATerm g_14 = NULL,i_14 = NULL;
        ATerm h_14 = NULL;
        t = SSLgetAnnotations(not_null(m_13));
        {
          h_14 = t;
          if(((g_14 != NULL) && (g_14 != h_14)))
            _fail(h_14);
          else
            g_14 = h_14;
        }
        {
          t = not_null(n_13);
          {
            ATerm k_14 = NULL;
            t = y_56(t);
            {
              i_14 = t;
              {
                t = not_null(o_13);
                {
                  ATerm m_14 = NULL;
                  t = z_56(t);
                  {
                    k_14 = t;
                    {
                      t = not_null(p_13);
                      {
                        ATerm o_14 = NULL;
                        t = a_57(t);
                        {
                          m_14 = t;
                          {
                            t = not_null(q_13);
                            {
                              ATerm q_14 = NULL;
                              t = b_57(t);
                              {
                                o_14 = t;
                                {
                                  t = not_null(r_13);
                                  {
                                    ATerm s_14 = NULL;
                                    t = c_57(t);
                                    {
                                      q_14 = t;
                                      {
                                        t = not_null(s_13);
                                        {
                                          ATerm u_14 = NULL;
                                          t = d_57(t);
                                          {
                                            s_14 = t;
                                            {
                                              t = not_null(t_13);
                                              {
                                                ATerm w_14 = NULL;
                                                t = e_57(t);
                                                {
                                                  u_14 = t;
                                                  {
                                                    t = not_null(u_13);
                                                    {
                                                      ATerm y_14 = NULL;
                                                      t = f_57(t);
                                                      {
                                                        w_14 = t;
                                                        {
                                                          t = not_null(v_13);
                                                          {
                                                            ATerm a_15 = NULL;
                                                            t = g_57(t);
                                                            {
                                                              y_14 = t;
                                                              {
                                                                ATerm b_15 = NULL;
                                                                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_term_9, not_null(i_14), not_null(k_14), not_null(m_14), not_null(o_14), not_null(q_14), not_null(s_14), not_null(u_14), not_null(w_14), not_null(y_14)), not_null(g_14));
                                                                {
                                                                  b_15 = t;
                                                                  if(((a_15 != NULL) && (a_15 != b_15)))
                                                                    _fail(b_15);
                                                                  else
                                                                    a_15 = b_15;
                                                                }
                                                                t = not_null(a_15);
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_asfix1_0 (ATerm t)
{
  ATerm j_4 = t;
  int k_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_9(t, _id, _id, _id, _id, _id, _id, _id, _id, _id);
      ;
      LocalPopChoice(k_4);
    }
  else
    {
      t = j_4;
      {
        ATerm r_15 = NULL,s_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL;
        r_15 = t;
        o_15 :
        if(match_cons(r_15, sym_appl_3))
          {
            s_15 = ATgetArgument(r_15, 0);
            d_16 = ATgetArgument(r_15, 1);
            e_16 = ATgetArgument(r_15, 2);
            p_15 :
            if(match_cons(s_15, sym_prod_9))
              {
                t_15 = ATgetArgument(s_15, 0);
                v_15 = ATgetArgument(s_15, 1);
                w_15 = ATgetArgument(s_15, 2);
                x_15 = ATgetArgument(s_15, 3);
                y_15 = ATgetArgument(s_15, 4);
                z_15 = ATgetArgument(s_15, 5);
                a_16 = ATgetArgument(s_15, 6);
                b_16 = ATgetArgument(s_15, 7);
                c_16 = ATgetArgument(s_15, 8);
                q_15 :
                if(match_cons(t_15, sym_id_1))
                  {
                    u_15 = ATgetArgument(t_15, 0);
                    {
                    }
                  }
                else
                  {
                    _fail(t);
                  }
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm asfix_yield_1 (ATerm t, ATerm f_58 (ATerm))
{
  ATerm l_4 = t;
  int n_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_asfix1_0(t);
      t = asfix_yield1_1(t, f_58);
      ;
      LocalPopChoice(n_4);
    }
  else
    {
      t = l_4;
      {
        ATerm o_4 = t;
        int p_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = is_asfix2_0(t);
            t = asfix_yield2_1(t, f_58);
            ;
            LocalPopChoice(p_4);
          }
        else
          {
            t = o_4;
            {
              ATerm r_4 = t;
              int s_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = literal_1(t, f_58);
                  ;
                  LocalPopChoice(s_4);
                }
              else
                {
                  t = r_4;
                  {
                    t = (ATerm) ATinsert(ATempty, term_u_4);
                    t = fatal_error_0(t);
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm t_49 (ATerm), ATerm u_49 (ATerm))
{
  ATerm l_16 = NULL,m_16 = NULL,n_16 = NULL;
  l_16 = t;
  k_16 :
  if(match_cons(l_16, sym__2))
    {
      m_16 = ATgetArgument(l_16, 0);
      n_16 = ATgetArgument(l_16, 1);
      {
        ATerm r_16 = NULL,t_16 = NULL;
        ATerm s_16 = NULL;
        t = SSLgetAnnotations(not_null(l_16));
        {
          s_16 = t;
          if(((r_16 != NULL) && (r_16 != s_16)))
            _fail(s_16);
          else
            r_16 = s_16;
        }
        {
          t = not_null(m_16);
          {
            ATerm v_16 = NULL;
            t = t_49(t);
            {
              t_16 = t;
              {
                t = not_null(n_16);
                {
                  ATerm x_16 = NULL;
                  t = u_49(t);
                  {
                    v_16 = t;
                    {
                      ATerm y_16 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(t_16), not_null(v_16)), not_null(r_16));
                      {
                        y_16 = t;
                        if(((x_16 != NULL) && (x_16 != y_16)))
                          _fail(y_16);
                        else
                          x_16 = y_16;
                      }
                      t = not_null(x_16);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm f_17 = NULL;
  ATerm v_4 = t;
  int w_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_17 = NULL;
      g_17 = t;
      {
        if(((f_17 != NULL) && (f_17 != g_17)))
          _fail(g_17);
        else
          f_17 = g_17;
        t = SSL_ReadFromFile(not_null(f_17));
      }
      ;
      LocalPopChoice(w_4);
    }
  else
    {
      t = v_4;
      {
        ATerm x_0 (ATerm t)
        {
          t = term_x_4;
          return(t);
        }
        t = debug_1(t, x_0);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm v_73 (ATerm), ATerm w_73 (ATerm))
{
  ATerm k_17 = NULL,m_17 = NULL;
  ATerm y_4;
  y_4 = t;
  {
    ATerm l_17 = NULL;
    t = v_73(t);
    {
      l_17 = t;
      if(((k_17 != NULL) && (k_17 != l_17)))
        _fail(l_17);
      else
        k_17 = l_17;
    }
  }
  t = y_4;
  {
    ATerm n_17 = NULL;
    t = w_73(t);
    {
      n_17 = t;
      if(((m_17 != NULL) && (m_17 != n_17)))
        _fail(n_17);
      else
        m_17 = n_17;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_17), not_null(m_17));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm t_17 = NULL;
  ATerm z_4;
  z_4 = t;
  {
    ATerm a_5 = t;
    int f_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_0 (ATerm t)
        {
          ATerm u_17 = NULL,v_17 = NULL;
          u_17 = t;
          r_17 :
          if(match_cons(u_17, sym_Input_1))
            {
              v_17 = ATgetArgument(u_17, 0);
              if(((t_17 != NULL) && (t_17 != v_17)))
                _fail(v_17);
              else
                t_17 = v_17;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, y_0);
        ;
        LocalPopChoice(f_5);
      }
    else
      {
        t = a_5;
        {
          ATerm w_17 = NULL;
          t = term_g_5;
          {
            w_17 = t;
            if(((t_17 != NULL) && (t_17 != w_17)))
              _fail(w_17);
            else
              t_17 = w_17;
          }
        }
      }
  }
  t = z_4;
  {
    ATerm z_0 (ATerm t)
    {
      t = not_null(t_17);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, z_0);
  }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm x_76 (ATerm))
{
  ATerm h_5;
  h_5 = t;
  {
    t = x_76(t);
    {
      ATerm a_1 (ATerm t)
      {
        t = term_l_5;
        return(t);
      }
      t = debug_1(t, a_1);
    }
  }
  t = h_5;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm d_18 = NULL,e_18 = NULL;
  ATerm n_5 = t;
  int q_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_18 = NULL,g_18 = NULL,h_18 = NULL;
      f_18 = t;
      a_18 :
      if(match_cons(f_18, sym__2))
        {
          g_18 = ATgetArgument(f_18, 0);
          h_18 = ATgetArgument(f_18, 1);
          {
            if(((e_18 != NULL) && (e_18 != g_18)))
              _fail(g_18);
            else
              e_18 = g_18;
            if(((d_18 != NULL) && (d_18 != h_18)))
              _fail(h_18);
            else
              d_18 = h_18;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(q_5);
      t = SSL_open_file(not_null(e_18), not_null(d_18));
    }
  else
    {
      t = n_5;
      {
        ATerm i_18 = NULL;
        ATerm j_18 = NULL;
        ATerm b_1 (ATerm t)
        {
          t = term_r_5;
          return(t);
        }
        t = obsolete_1(t, b_1);
        {
          i_18 = t;
          {
            if(((e_18 != NULL) && (e_18 != i_18)))
              _fail(i_18);
            else
              e_18 = i_18;
            {
              ATerm s_5;
              s_5 = t;
              {
                ATerm k_18 = NULL;
                t = term_t_5;
                {
                  k_18 = t;
                  if(((j_18 != NULL) && (j_18 != k_18)))
                    _fail(k_18);
                  else
                    j_18 = k_18;
                }
              }
              t = s_5;
              t = SSL_open_file(not_null(e_18), not_null(j_18));
            }
          }
        }
      }
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm f_66 (ATerm))
{
  ATerm o_18 (ATerm t)
  {
    ATerm u_5 = t;
    int v_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, f_66, _id);
        ;
        LocalPopChoice(v_5);
      }
    else
      {
        t = u_5;
        t = Cons_2(t, _id, o_18);
      }
    return(t);
  }
  t = o_18(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm q_80 (ATerm))
{
  t = fetch_1(t, q_80);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm c_1 (ATerm t)
  {
    ATerm q_18 = NULL;
    q_18 = t;
    p_18 :
    if(!(match_string(q_18, "-v")))
      {
        if(!(match_string(q_18, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm d_1 (ATerm t)
  {
    t = term_y_5;
    t = set_config_0(t);
    t = term_c_6;
    return(t);
  }
  ATerm e_1 (ATerm t)
  {
    t = term_d_6;
    return(t);
  }
  t = Option_3(t, c_1, d_1, e_1);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm f_1 (ATerm t)
  {
    ATerm t_18 = NULL;
    t_18 = t;
    r_18 :
    if(!(match_string(t_18, "-k")))
      {
        if(!(match_string(t_18, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm g_1 (ATerm t)
  {
    ATerm h_6;
    h_6 = t;
    {
      ATerm u_18 = NULL;
      ATerm v_18 = NULL;
      t = string_to_int_0(t);
      {
        v_18 = t;
        if(((u_18 != NULL) && (u_18 != v_18)))
          _fail(v_18);
        else
          u_18 = v_18;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_6, not_null(u_18));
        t = set_config_0(t);
      }
    }
    t = h_6;
    return(t);
  }
  ATerm h_1 (ATerm t)
  {
    t = term_l_6;
    return(t);
  }
  t = ArgOption_3(t, f_1, g_1, h_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm y_18 = NULL;
  y_18 = t;
  t = SSL_string_to_int(not_null(y_18));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm m_6 = t;
  int n_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_1 (ATerm t)
      {
        ATerm g_19 = NULL;
        g_19 = t;
        b_19 :
        if(!(match_string(g_19, "-S")))
          {
            if(!(match_string(g_19, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm j_1 (ATerm t)
      {
        t = term_u_6;
        t = set_config_0(t);
        t = term_v_6;
        return(t);
      }
      ATerm k_1 (ATerm t)
      {
        t = term_w_6;
        return(t);
      }
      t = Option_3(t, i_1, j_1, k_1);
      ;
      LocalPopChoice(n_6);
    }
  else
    {
      t = m_6;
      {
        ATerm x_6 = t;
        int z_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_1 (ATerm t)
            {
              ATerm h_19 = NULL;
              h_19 = t;
              c_19 :
              if(!(match_string(h_19, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm m_1 (ATerm t)
            {
              ATerm k_19 = NULL;
              ATerm b_7;
              b_7 = t;
              {
                ATerm i_19 = NULL;
                ATerm j_19 = NULL;
                t = string_to_int_0(t);
                {
                  j_19 = t;
                  if(((i_19 != NULL) && (i_19 != j_19)))
                    _fail(j_19);
                  else
                    i_19 = j_19;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_o_6, not_null(i_19));
                  t = set_config_0(t);
                }
              }
              t = b_7;
              {
                ATerm l_19 = NULL;
                l_19 = t;
                if(((k_19 != NULL) && (k_19 != l_19)))
                  _fail(l_19);
                else
                  k_19 = l_19;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(k_19));
              }
              return(t);
            }
            ATerm n_1 (ATerm t)
            {
              t = term_c_7;
              return(t);
            }
            t = ArgOption_3(t, l_1, m_1, n_1);
            ;
            LocalPopChoice(z_6);
          }
        else
          {
            t = x_6;
            {
              ATerm o_1 (ATerm t)
              {
                ATerm r_19 = NULL;
                r_19 = t;
                f_19 :
                if(!(match_string(r_19, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm p_1 (ATerm t)
              {
                t = term_e_7;
                t = set_config_0(t);
                t = term_f_7;
                return(t);
              }
              ATerm q_1 (ATerm t)
              {
                t = term_g_7;
                return(t);
              }
              t = Option_3(t, o_1, p_1, q_1);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm h_7 = t;
  int i_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(i_7);
    }
  else
    {
      t = h_7;
      {
        ATerm n_7 = t;
        int o_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(o_7);
          }
        else
          {
            t = n_7;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm r_1 (ATerm t)
  {
    ATerm x_19 = NULL;
    x_19 = t;
    u_19 :
    if(!(match_string(x_19, "-o")))
      {
        if(!(match_string(x_19, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm s_1 (ATerm t)
  {
    ATerm a_20 = NULL;
    ATerm p_7;
    p_7 = t;
    {
      ATerm y_19 = NULL;
      ATerm z_19 = NULL;
      z_19 = t;
      if(((y_19 != NULL) && (y_19 != z_19)))
        _fail(z_19);
      else
        y_19 = z_19;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_7, not_null(y_19));
        t = set_config_0(t);
      }
    }
    t = p_7;
    {
      ATerm b_20 = NULL;
      b_20 = t;
      if(((a_20 != NULL) && (a_20 != b_20)))
        _fail(b_20);
      else
        a_20 = b_20;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(a_20));
    }
    return(t);
  }
  ATerm t_1 (ATerm t)
  {
    t = term_v_7;
    return(t);
  }
  t = ArgOption_3(t, r_1, s_1, t_1);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm y_7 = t;
  int z_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(z_7);
    }
  else
    {
      t = y_7;
      {
        ATerm u_1 (ATerm t)
        {
          ATerm f_20 = NULL;
          f_20 = t;
          e_20 :
          if(!(match_string(f_20, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm v_1 (ATerm t)
        {
          t = term_b_8;
          t = set_config_0(t);
          t = term_c_8;
          return(t);
        }
        ATerm w_1 (ATerm t)
        {
          t = term_d_8;
          return(t);
        }
        t = Option_3(t, u_1, v_1, w_1);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL;
  l_20 = t;
  j_20 :
  if(match_string(l_20, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(l_20) == AT_LIST) && !(ATisEmpty(l_20))))
        {
          m_20 = ATgetFirst((ATermList) l_20);
          n_20 = (ATerm) ATgetNext((ATermList) l_20);
          k_20 :
          if(((ATgetType(n_20) == AT_LIST) && !(ATisEmpty(n_20))))
            {
              o_20 = ATgetFirst((ATermList) n_20);
              p_20 = (ATerm) ATgetNext((ATermList) n_20);
              {
                ATerm t_20 = NULL;
                ATerm e_8;
                e_8 = t;
                {
                  t = not_null(m_20);
                  t = l_0(t);
                }
                t = e_8;
                {
                  ATerm u_20 = NULL;
                  t = not_null(o_20);
                  {
                    t = m_0(t);
                    {
                      u_20 = t;
                      if(((t_20 != NULL) && (t_20 != u_20)))
                        _fail(u_20);
                      else
                        t_20 = u_20;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(p_20)), not_null(t_20));
                }
              }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm input_option_0 (ATerm t)
{
  ATerm x_1 (ATerm t)
  {
    ATerm b_21 = NULL;
    b_21 = t;
    y_20 :
    if(!(match_string(b_21, "-i")))
      {
        if(!(match_string(b_21, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm y_1 (ATerm t)
  {
    ATerm j_21 = NULL;
    ATerm f_8;
    f_8 = t;
    {
      ATerm h_21 = NULL;
      ATerm i_21 = NULL;
      i_21 = t;
      if(((h_21 != NULL) && (h_21 != i_21)))
        _fail(i_21);
      else
        h_21 = i_21;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_8, not_null(h_21));
        t = set_config_0(t);
      }
    }
    t = f_8;
    {
      ATerm k_21 = NULL;
      k_21 = t;
      if(((j_21 != NULL) && (j_21 != k_21)))
        _fail(k_21);
      else
        j_21 = k_21;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(j_21));
    }
    return(t);
  }
  ATerm z_1 (ATerm t)
  {
    t = term_h_8;
    return(t);
  }
  t = ArgOption_3(t, x_1, y_1, z_1);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm m_8 = t;
  int n_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(n_8);
    }
  else
    {
      t = m_8;
      {
        ATerm o_8 = t;
        int s_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(s_8);
          }
        else
          {
            t = o_8;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm o_21 = NULL;
  o_21 = t;
  t = SSL_table_destroy(not_null(o_21));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL;
  s_21 = t;
  r_21 :
  if(((ATgetType(s_21) == AT_LIST) && ATisEmpty(s_21)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(s_21) == AT_LIST) && !(ATisEmpty(s_21))))
        {
          t_21 = ATgetFirst((ATermList) s_21);
          u_21 = (ATerm) ATgetNext((ATermList) s_21);
          {
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm echo_0 (ATerm t)
{
  ATerm u_8;
  u_8 = t;
  {
    ATerm a_22 = NULL;
    ATerm d_22 = NULL;
    ATerm x_8 = t;
    int y_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(y_8);
      }
    else
      {
        t = x_8;
        {
          ATerm b_22 = NULL;
          ATerm c_22 = NULL;
          c_22 = t;
          if(((b_22 != NULL) && (b_22 != c_22)))
            _fail(c_22);
          else
            b_22 = c_22;
          t = (ATerm) ATinsert(ATempty, not_null(b_22));
        }
      }
    {
      d_22 = t;
      if(((a_22 != NULL) && (a_22 != d_22)))
        _fail(d_22);
      else
        a_22 = d_22;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_z_8, not_null(a_22));
      t = printnl_0(t);
    }
  }
  t = u_8;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATempty, term_b_9), term_a_9);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL;
  o_22 = t;
  l_22 :
  if(((ATgetType(o_22) == AT_LIST) && !(ATisEmpty(o_22))))
    {
      m_22 = ATgetFirst((ATermList) o_22);
      n_22 = (ATerm) ATgetNext((ATermList) o_22);
      {
        ATerm r_22 = NULL;
        t = not_null(n_22);
        {
          ATerm c_9;
          c_9 = t;
          {
            ATerm s_22 = NULL,u_22 = NULL,w_22 = NULL;
            ATerm d_9;
            d_9 = t;
            {
              ATerm t_22 = NULL;
              t = j_0(t);
              {
                t_22 = t;
                if(((s_22 != NULL) && (s_22 != t_22)))
                  _fail(t_22);
                else
                  s_22 = t_22;
              }
            }
            t = d_9;
            {
              ATerm v_22 = NULL;
              t = not_null(m_22);
              {
                t = i_0(t);
                {
                  v_22 = t;
                  if(((u_22 != NULL) && (u_22 != v_22)))
                    _fail(v_22);
                  else
                    u_22 = v_22;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(s_22)), not_null(u_22));
                {
                  w_22 = t;
                  if(((r_22 != NULL) && (r_22 != w_22)))
                    _fail(w_22);
                  else
                    r_22 = w_22;
                }
              }
            }
          }
          t = c_9;
          {
            ATerm a_2 (ATerm t)
            {
              t = not_null(r_22);
              return(t);
            }
            t = reverse_acc_2(t, i_0, a_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(o_22) == AT_LIST) && ATisEmpty(o_22)))
        {
          {
            t = term_x_5;
            t = j_0(t);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  ATerm b_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, b_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm g_0 (ATerm))
{
  ATerm d_23 = NULL;
  ATerm e_23 = NULL;
  t = term_x_5;
  {
    t = g_0(t);
    {
      e_23 = t;
      if(((d_23 != NULL) && (d_23 != e_23)))
        _fail(e_23);
      else
        d_23 = e_23;
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_9), not_null(d_23)), term_e_9);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm i_56 (ATerm))
{
  ATerm l_23 = NULL,m_23 = NULL;
  l_23 = t;
  k_23 :
  if(match_cons(l_23, sym_Program_1))
    {
      m_23 = ATgetArgument(l_23, 0);
      {
        ATerm p_23 = NULL,r_23 = NULL;
        ATerm q_23 = NULL;
        t = SSLgetAnnotations(not_null(l_23));
        {
          q_23 = t;
          if(((p_23 != NULL) && (p_23 != q_23)))
            _fail(q_23);
          else
            p_23 = q_23;
        }
        {
          t = not_null(m_23);
          {
            ATerm t_23 = NULL;
            t = i_56(t);
            {
              r_23 = t;
              {
                ATerm u_23 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(r_23)), not_null(p_23));
                {
                  u_23 = t;
                  if(((t_23 != NULL) && (t_23 != u_23)))
                    _fail(u_23);
                  else
                    t_23 = u_23;
                }
                t = not_null(t_23);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm d_24 = NULL;
  ATerm g_9 = t;
  int l_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_24 = NULL;
      t = term_m_9;
      {
        t = get_config_0(t);
        {
          e_24 = t;
          if(((d_24 != NULL) && (d_24 != e_24)))
            _fail(e_24);
          else
            d_24 = e_24;
        }
      }
      ;
      LocalPopChoice(l_9);
    }
  else
    {
      t = g_9;
      {
        ATerm c_2 (ATerm t)
        {
          ATerm d_2 (ATerm t)
          {
            ATerm f_24 = NULL;
            f_24 = t;
            if(((d_24 != NULL) && (d_24 != f_24)))
              _fail(f_24);
            else
              d_24 = f_24;
            return(t);
          }
          t = Program_1(t, d_2);
          return(t);
        }
        t = option_defined_1(t, c_2);
      }
    }
  {
    ATerm e_2 (ATerm t)
    {
      ATerm f_2 (ATerm t)
      {
        t = not_null(d_24);
        return(t);
      }
      t = short_description_1(t, f_2);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, e_2);
    {
      t = term_n_9;
      {
        t = echo_0(t);
        {
          t = term_w_9;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm g_2 (ATerm t)
                {
                  ATerm g_24 = NULL;
                  ATerm h_24 = NULL;
                  h_24 = t;
                  if(((g_24 != NULL) && (g_24 != h_24)))
                    _fail(h_24);
                  else
                    g_24 = h_24;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_24)), term_x_9);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, g_2);
                {
                  ATerm h_2 (ATerm t)
                  {
                    ATerm i_24 = NULL;
                    ATerm j_24 = NULL;
                    ATerm i_2 (ATerm t)
                    {
                      t = not_null(d_24);
                      return(t);
                    }
                    t = long_description_1(t, i_2);
                    {
                      j_24 = t;
                      if(((i_24 != NULL) && (i_24 != j_24)))
                        _fail(j_24);
                      else
                        i_24 = j_24;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(i_24)), term_y_9);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, h_2);
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
ATerm debug_0 (ATerm t)
{
  ATerm z_9;
  z_9 = t;
  {
    ATerm p_24 = NULL;
    ATerm q_24 = NULL;
    q_24 = t;
    if(((p_24 != NULL) && (p_24 != q_24)))
      _fail(q_24);
    else
      p_24 = q_24;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_3, (ATerm) ATinsert(ATempty, not_null(p_24)));
      t = printnl_0(t);
    }
  }
  t = z_9;
  return(t);
}
ATerm say_1 (ATerm t, ATerm r_76 (ATerm))
{
  ATerm a_10;
  a_10 = t;
  {
    t = r_76(t);
    t = debug_0(t);
  }
  t = a_10;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm j_56 (ATerm))
{
  ATerm x_24 = NULL,y_24 = NULL;
  x_24 = t;
  w_24 :
  if(match_cons(x_24, sym_Undefined_1))
    {
      y_24 = ATgetArgument(x_24, 0);
      {
        ATerm b_25 = NULL,d_25 = NULL;
        ATerm c_25 = NULL;
        t = SSLgetAnnotations(not_null(x_24));
        {
          c_25 = t;
          if(((b_25 != NULL) && (b_25 != c_25)))
            _fail(c_25);
          else
            b_25 = c_25;
        }
        {
          t = not_null(y_24);
          {
            ATerm f_25 = NULL;
            t = j_56(t);
            {
              d_25 = t;
              {
                ATerm g_25 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(d_25)), not_null(b_25));
                {
                  g_25 = t;
                  if(((f_25 != NULL) && (f_25 != g_25)))
                    _fail(g_25);
                  else
                    f_25 = g_25;
                }
                t = not_null(f_25);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm p_25 = NULL;
  p_25 = t;
  o_25 :
  if(match_cons(p_25, sym_Help_0))
    {
      ATerm r_25 = NULL,t_25 = NULL;
      ATerm c_10;
      c_10 = t;
      {
        ATerm s_25 = NULL;
        t = SSLgetAnnotations(not_null(p_25));
        {
          s_25 = t;
          if(((r_25 != NULL) && (r_25 != s_25)))
            _fail(s_25);
          else
            r_25 = s_25;
        }
      }
      t = c_10;
      {
        ATerm u_25 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(r_25));
        {
          u_25 = t;
          if(((t_25 != NULL) && (t_25 != u_25)))
            _fail(u_25);
          else
            t_25 = u_25;
        }
        t = not_null(t_25);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm z_25 = NULL;
  z_25 = t;
  t = SSL_implode_string(not_null(z_25));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm d_10 = t;
  int e_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(e_10);
    }
  else
    {
      t = d_10;
      {
        ATerm e_26 = NULL,f_26 = NULL,g_26 = NULL;
        e_26 = t;
        d_26 :
        if(((ATgetType(e_26) == AT_LIST) && !(ATisEmpty(e_26))))
          {
            f_26 = ATgetFirst((ATermList) e_26);
            g_26 = (ATerm) ATgetNext((ATermList) e_26);
            {
              t = not_null(f_26);
              {
                ATerm j_2 (ATerm t)
                {
                  t = not_null(g_26);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, j_2);
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm q_26 = NULL;
  ATerm s_26 = NULL;
  q_26 = t;
  {
    ATerm t_26 = NULL;
    ATerm v_26 = NULL,w_26 = NULL,x_26 = NULL;
    t = not_null(q_26);
    {
      t_26 = t;
      {
        t = SSL_explode_term(not_null(t_26));
        {
          v_26 = t;
          o_26 :
          if(match_cons(v_26, sym__2))
            {
              w_26 = ATgetArgument(v_26, 0);
              x_26 = ATgetArgument(v_26, 1);
              p_26 :
              if(match_string(w_26, ""))
                {
                  if(((s_26 != NULL) && (s_26 != x_26)))
                    _fail(x_26);
                  else
                    s_26 = x_26;
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(s_26);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm l_66 (ATerm))
{
  ATerm b_27 (ATerm t)
  {
    ATerm f_10 = t;
    int g_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, b_27);
        ;
        LocalPopChoice(g_10);
      }
    else
      {
        t = f_10;
        {
          t = Nil_0(t);
          t = l_66(t);
        }
      }
    return(t);
  }
  t = b_27(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm e_27 = NULL,f_27 = NULL,g_27 = NULL;
  e_27 = t;
  d_27 :
  if(match_cons(e_27, sym__2))
    {
      f_27 = ATgetArgument(e_27, 0);
      g_27 = ATgetArgument(e_27, 1);
      {
        t = not_null(f_27);
        {
          ATerm k_2 (ATerm t)
          {
            t = not_null(g_27);
            return(t);
          }
          t = at_end_1(t, k_2);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm h_10 = t;
  int n_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(n_10);
    }
  else
    {
      t = h_10;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm l_27 = NULL;
  l_27 = t;
  t = SSL_explode_string(not_null(l_27));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    t = conc_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm q_27 = NULL,r_27 = NULL,s_27 = NULL;
  q_27 = t;
  p_27 :
  if(match_cons(q_27, sym__2))
    {
      r_27 = ATgetArgument(q_27, 0);
      s_27 = ATgetArgument(q_27, 1);
      {
        ATerm o_10;
        o_10 = t;
        t = SSL_printnl(not_null(r_27), not_null(s_27));
        t = o_10;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm q_76 (ATerm))
{
  ATerm p_10;
  p_10 = t;
  {
    ATerm y_27 = NULL,a_28 = NULL;
    ATerm q_10;
    q_10 = t;
    {
      ATerm z_27 = NULL;
      t = q_76(t);
      {
        z_27 = t;
        if(((y_27 != NULL) && (y_27 != z_27)))
          _fail(z_27);
        else
          y_27 = z_27;
      }
    }
    t = q_10;
    {
      ATerm b_28 = NULL;
      b_28 = t;
      if(((a_28 != NULL) && (a_28 != b_28)))
        _fail(b_28);
      else
        a_28 = b_28;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_28)), not_null(y_27)));
        t = printnl_0(t);
      }
    }
  }
  t = p_10;
  return(t);
}
ATerm map_1 (ATerm t, ATerm w_65 (ATerm))
{
  ATerm e_28 (ATerm t)
  {
    ATerm u_10 = t;
    int w_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(w_10);
      }
    else
      {
        t = u_10;
        t = Cons_2(t, w_65, e_28);
      }
    return(t);
  }
  t = e_28(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm g_28 = NULL;
  g_28 = t;
  t = SSL_is_string(not_null(g_28));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm y_10 = t;
  int b_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(b_11);
    }
  else
    {
      t = y_10;
      {
        ATerm c_11 = t;
        int d_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_2 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, l_2);
            ;
            LocalPopChoice(d_11);
          }
        else
          {
            t = c_11;
            {
              ATerm p_28 = NULL,q_28 = NULL,r_28 = NULL;
              p_28 = t;
              o_28 :
              if(match_cons(p_28, sym_Path_1))
                {
                  q_28 = ATgetArgument(p_28, 0);
                  t = not_null(q_28);
                }
              else
                {
                  if(match_cons(p_28, sym_Var_1))
                    {
                      q_28 = ATgetArgument(p_28, 0);
                      {
                        t = not_null(q_28);
                        {
                          ATerm e_11 = t;
                          int f_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(f_11);
                            }
                          else
                            {
                              t = e_11;
                              {
                                ATerm m_2 (ATerm t)
                                {
                                  t = term_g_11;
                                  return(t);
                                }
                                t = debug_1(t, m_2);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(p_28, sym_Prefix_2))
                        {
                          q_28 = ATgetArgument(p_28, 0);
                          r_28 = ATgetArgument(p_28, 1);
                          {
                            ATerm w_28 = NULL,y_28 = NULL;
                            ATerm h_11;
                            h_11 = t;
                            {
                              ATerm x_28 = NULL;
                              t = not_null(q_28);
                              {
                                t = eval_config_0(t);
                                {
                                  x_28 = t;
                                  if(((w_28 != NULL) && (w_28 != x_28)))
                                    _fail(x_28);
                                  else
                                    w_28 = x_28;
                                }
                              }
                            }
                            t = h_11;
                            {
                              ATerm z_28 = NULL;
                              t = not_null(r_28);
                              {
                                t = eval_config_0(t);
                                {
                                  z_28 = t;
                                  if(((y_28 != NULL) && (y_28 != z_28)))
                                    _fail(z_28);
                                  else
                                    y_28 = z_28;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(w_28), not_null(y_28));
                                t = conc_strings_0(t);
                              }
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0 (ATerm t)
{
  ATerm h_29 = NULL;
  h_29 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_i_11, not_null(h_29));
    {
      t = table_get_0(t);
      {
        ATerm n_2 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm j_11;
            j_11 = t;
            {
              ATerm j_29 = NULL;
              ATerm k_29 = NULL;
              k_29 = t;
              if(((j_29 != NULL) && (j_29 != k_29)))
                _fail(k_29);
              else
                j_29 = k_29;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_i_11, not_null(h_29), not_null(j_29));
                t = table_put_0(t);
              }
            }
            t = j_11;
          }
          return(t);
        }
        t = try_1(t, n_2);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm l_58 (ATerm))
{
  ATerm k_11 = t;
  int l_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_58(t);
      ;
      LocalPopChoice(l_11);
    }
  else
    {
      t = k_11;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm p_29 = NULL,q_29 = NULL,r_29 = NULL;
  p_29 = t;
  o_29 :
  if(match_cons(p_29, sym__2))
    {
      q_29 = ATgetArgument(p_29, 0);
      r_29 = ATgetArgument(p_29, 1);
      t = SSL_table_get(not_null(q_29), not_null(r_29));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm y_29 = NULL,z_29 = NULL,a_30 = NULL,b_30 = NULL;
  y_29 = t;
  x_29 :
  if(match_cons(y_29, sym__3))
    {
      z_29 = ATgetArgument(y_29, 0);
      a_30 = ATgetArgument(y_29, 1);
      b_30 = ATgetArgument(y_29, 2);
      {
        ATerm m_11;
        m_11 = t;
        {
          ATerm f_30 = NULL;
          ATerm g_30 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_29), not_null(a_30));
          {
            ATerm s_11 = t;
            int t_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(t_11);
              }
            else
              {
                t = s_11;
                t = (ATerm) ATempty;
              }
            {
              g_30 = t;
              if(((f_30 != NULL) && (f_30 != g_30)))
                _fail(g_30);
              else
                f_30 = g_30;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(z_29), not_null(a_30), (ATerm) ATinsert(CheckATermList(not_null(f_30)), not_null(b_30)));
            t = table_put_0(t);
          }
        }
        t = m_11;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm v_81 (ATerm))
{
  ATerm k_30 = NULL;
  ATerm l_30 = NULL;
  t = term_x_5;
  {
    t = v_81(t);
    {
      l_30 = t;
      if(((k_30 != NULL) && (k_30 != l_30)))
        _fail(l_30);
      else
        k_30 = l_30;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_r_9, term_t_9, not_null(k_30));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm r_30 = NULL,s_30 = NULL,t_30 = NULL;
  r_30 = t;
  q_30 :
  if(match_string(r_30, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(r_30) == AT_LIST) && !(ATisEmpty(r_30))))
        {
          s_30 = ATgetFirst((ATermList) r_30);
          t_30 = (ATerm) ATgetNext((ATermList) r_30);
          {
            ATerm w_30 = NULL;
            ATerm u_11;
            u_11 = t;
            {
              t = not_null(s_30);
              t = a_0(t);
            }
            t = u_11;
            {
              ATerm x_30 = NULL;
              t = term_x_5;
              {
                t = c_0(t);
                {
                  x_30 = t;
                  if(((w_30 != NULL) && (w_30 != x_30)))
                    _fail(x_30);
                  else
                    w_30 = x_30;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(t_30)), not_null(w_30));
            }
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm o_2 (ATerm t)
  {
    ATerm c_31 = NULL;
    c_31 = t;
    b_31 :
    if(!(match_string(c_31, "--help")))
      {
        if(!(match_string(c_31, "-h")))
          {
            if(!(match_string(c_31, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm p_2 (ATerm t)
  {
    t = term_z_11;
    {
      t = set_config_0(t);
      t = term_b_12;
    }
    return(t);
  }
  ATerm q_2 (ATerm t)
  {
    t = term_d_12;
    return(t);
  }
  t = Option_3(t, o_2, p_2, q_2);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL;
  f_31 = t;
  e_31 :
  if(((ATgetType(f_31) == AT_LIST) && !(ATisEmpty(f_31))))
    {
      g_31 = ATgetFirst((ATermList) f_31);
      h_31 = (ATerm) ATgetNext((ATermList) f_31);
      t = (ATerm) ATinsert(CheckATermList(not_null(h_31)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(g_31)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm c_51 (ATerm), ATerm d_51 (ATerm))
{
  ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL;
  r_31 = t;
  q_31 :
  if(((ATgetType(r_31) == AT_LIST) && !(ATisEmpty(r_31))))
    {
      s_31 = ATgetFirst((ATermList) r_31);
      t_31 = (ATerm) ATgetNext((ATermList) r_31);
      {
        ATerm x_31 = NULL,z_31 = NULL;
        ATerm y_31 = NULL;
        t = SSLgetAnnotations(not_null(r_31));
        {
          y_31 = t;
          if(((x_31 != NULL) && (x_31 != y_31)))
            _fail(y_31);
          else
            x_31 = y_31;
        }
        {
          t = not_null(s_31);
          {
            ATerm b_32 = NULL;
            t = c_51(t);
            {
              z_31 = t;
              {
                t = not_null(t_31);
                {
                  ATerm d_32 = NULL;
                  t = d_51(t);
                  {
                    b_32 = t;
                    {
                      ATerm e_32 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(b_32)), not_null(z_31)), not_null(x_31));
                      {
                        e_32 = t;
                        if(((d_32 != NULL) && (d_32 != e_32)))
                          _fail(e_32);
                        else
                          d_32 = e_32;
                      }
                      t = not_null(d_32);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm o_32 = NULL;
  o_32 = t;
  n_32 :
  if(((ATgetType(o_32) == AT_LIST) && ATisEmpty(o_32)))
    {
      {
        ATerm q_32 = NULL,s_32 = NULL;
        ATerm g_12;
        g_12 = t;
        {
          ATerm r_32 = NULL;
          t = SSLgetAnnotations(not_null(o_32));
          {
            r_32 = t;
            if(((q_32 != NULL) && (q_32 != r_32)))
              _fail(r_32);
            else
              q_32 = r_32;
          }
        }
        t = g_12;
        {
          ATerm t_32 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(q_32));
          {
            t_32 = t;
            if(((s_32 != NULL) && (s_32 != t_32)))
              _fail(t_32);
            else
              s_32 = t_32;
          }
          t = not_null(s_32);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm z_32 = NULL,a_33 = NULL,b_33 = NULL;
  z_32 = t;
  y_32 :
  if(match_cons(z_32, sym__2))
    {
      a_33 = ATgetArgument(z_32, 0);
      b_33 = ATgetArgument(z_32, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_i_11, not_null(a_33), not_null(b_33));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm t_81 (ATerm))
{
  ATerm h_12;
  h_12 = t;
  {
    ATerm r_2 (ATerm t)
    {
      t = term_i_12;
      t = t_81(t);
      return(t);
    }
    t = try_1(t, r_2);
  }
  t = h_12;
  {
    ATerm s_2 (ATerm t)
    {
      ATerm j_33 = NULL;
      ATerm j_12;
      j_12 = t;
      {
        ATerm h_33 = NULL;
        ATerm i_33 = NULL;
        i_33 = t;
        if(((h_33 != NULL) && (h_33 != i_33)))
          _fail(i_33);
        else
          h_33 = i_33;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_m_9, not_null(h_33));
          t = set_config_0(t);
        }
      }
      t = j_12;
      {
        ATerm k_33 = NULL;
        k_33 = t;
        if(((j_33 != NULL) && (j_33 != k_33)))
          _fail(k_33);
        else
          j_33 = k_33;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(j_33));
      }
      return(t);
    }
    ATerm t_2 (ATerm t)
    {
      ATerm k_12 = t;
      int l_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_12 = t;
          int r_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(r_12);
            }
          else
            {
              t = m_12;
              {
                t = t_81(t);
                t = Cons_2(t, _id, t_2);
              }
            }
          ;
          LocalPopChoice(l_12);
        }
      else
        {
          t = k_12;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, s_2, t_2);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm q_33 = NULL,r_33 = NULL,s_33 = NULL;
  ATerm s_12;
  s_12 = t;
  {
    ATerm t_33 = NULL,u_33 = NULL,v_33 = NULL,z_33 = NULL;
    t_33 = t;
    p_33 :
    if(match_cons(t_33, sym__3))
      {
        u_33 = ATgetArgument(t_33, 0);
        v_33 = ATgetArgument(t_33, 1);
        z_33 = ATgetArgument(t_33, 2);
        {
          if(((q_33 != NULL) && (q_33 != u_33)))
            _fail(u_33);
          else
            q_33 = u_33;
          {
            if(((r_33 != NULL) && (r_33 != v_33)))
              _fail(v_33);
            else
              r_33 = v_33;
            {
              if(((s_33 != NULL) && (s_33 != z_33)))
                _fail(z_33);
              else
                s_33 = z_33;
              t = SSL_table_put(not_null(q_33), not_null(r_33), not_null(s_33));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = s_12;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm s_81 (ATerm))
{
  ATerm c_34 = NULL;
  ATerm t_12;
  t_12 = t;
  {
    t = term_v_12;
    t = table_put_0(t);
  }
  t = t_12;
  {
    ATerm u_2 (ATerm t)
    {
      ATerm x_12 = t;
      int y_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_81(t);
          ;
          LocalPopChoice(y_12);
        }
      else
        {
          t = x_12;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, u_2);
    {
      ATerm v_2 (ATerm t)
      {
        ATerm z_12 = t;
        int a_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_13;
            b_13 = t;
            {
              ATerm c_13 = t;
              int d_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_v_11;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(d_13);
                }
              else
                {
                  t = c_13;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = b_13;
            {
              t = system_usage_0(t);
              {
                t = term_t_6;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(a_13);
          }
        else
          {
            t = z_12;
            {
              ATerm w_2 (ATerm t)
              {
                ATerm x_2 (ATerm t)
                {
                  ATerm d_34 = NULL;
                  d_34 = t;
                  if(((c_34 != NULL) && (c_34 != d_34)))
                    _fail(d_34);
                  else
                    c_34 = d_34;
                  return(t);
                }
                t = Undefined_1(t, x_2);
                return(t);
              }
              t = option_defined_1(t, w_2);
              {
                ATerm y_2 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_34)), term_e_13);
                  return(t);
                }
                t = say_1(t, y_2);
                {
                  t = system_usage_0(t);
                  {
                    t = term_f_3;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, v_2);
      {
        ATerm f_13;
        f_13 = t;
        {
          t = term_r_9;
          t = table_destroy_0(t);
        }
        t = f_13;
      }
    }
  }
  return(t);
}
ATerm main_0 (ATerm t)
{
  ATerm i_34 = NULL;
  t = parse_options_1(t, io_options_0);
  {
    ATerm g_13;
    g_13 = t;
    {
      ATerm h_13 = t;
      int i_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_2 (ATerm t)
          {
            ATerm j_34 = NULL,k_34 = NULL;
            j_34 = t;
            g_34 :
            if(match_cons(j_34, sym_Output_1))
              {
                k_34 = ATgetArgument(j_34, 0);
                if(((i_34 != NULL) && (i_34 != k_34)))
                  _fail(k_34);
                else
                  i_34 = k_34;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, z_2);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(i_34), term_t_5);
            t = open_file_0(t);
          }
          ;
          LocalPopChoice(i_13);
        }
      else
        {
          t = h_13;
          {
            ATerm l_34 = NULL;
            t = term_z_8;
            {
              l_34 = t;
              if(((i_34 != NULL) && (i_34 != l_34)))
                _fail(l_34);
              else
                i_34 = l_34;
            }
          }
        }
    }
    t = g_13;
    {
      t = input_file_0(t);
      {
        ATerm a_3 (ATerm t)
        {
          ATerm b_3 (ATerm t)
          {
            t = not_null(i_34);
            return(t);
          }
          t = asfix_yield_1(t, b_3);
          return(t);
        }
        t = _2(t, _id, a_3);
        {
          t = term_t_6;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
