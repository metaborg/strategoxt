#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
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
Symbol sym_Undefined_0;
Symbol sym_Path_1;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Hashtable_1;
Symbol sym_parsetree_2;
Symbol sym_amb_1;
Symbol sym_appl_2;
Symbol sym_flatlex_2;
Symbol sym_term_9;
Symbol sym_prod_9;
Symbol sym_id_1;
Symbol sym_appl_3;
Symbol sym_list_3;
Symbol sym_lex_2;
static void init_module_constructors (void)
{
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
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
  sym_parsetree_2 = ATmakeSymbol("parsetree", 2, ATfalse);
  ATprotectSymbol(sym_parsetree_2);
  sym_amb_1 = ATmakeSymbol("amb", 1, ATfalse);
  ATprotectSymbol(sym_amb_1);
  sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
  ATprotectSymbol(sym_appl_2);
  sym_flatlex_2 = ATmakeSymbol("flatlex", 2, ATfalse);
  ATprotectSymbol(sym_flatlex_2);
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
}
ATerm term_j_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_q_10;
ATerm term_n_10;
ATerm term_l_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_m_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_l_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_e_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_x_7;
ATerm term_w_7;
ATerm term_v_7;
ATerm term_u_7;
ATerm term_t_7;
ATerm term_m_7;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_b_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_v_6;
ATerm term_u_6;
ATerm term_t_6;
ATerm term_m_6;
ATerm term_l_6;
ATerm term_y_5;
ATerm term_w_5;
ATerm term_u_5;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(ATmakeSymbol("not in AsFix format", 0, ATtrue));
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(sym__2, term_b_7, term_c_7);
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_7);
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(sym__2, term_h_7, term_j_7);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(sym__2, term_t_7, term_h_8);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(sym__2, term_u_7, term_v_7);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("The asfix-yield utility unparses an asfix tree to flat text.\n", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("It reads from standard input and writes to standard output.\n", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(sym__2, term_a_9, term_j_7);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym__2, term_d_9, term_j_7);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym__2, term_v_9, term_j_7);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym__3, term_u_7, term_v_7, (ATerm) ATempty);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym__2, term_t_7, term_v_9);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym__2, term_t_7, term_a_9);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym__2, term_a_11, term_j_7);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm literal_1_0 (ATerm f_67 (ATerm), ATerm t);
ATerm at_tail_1_0 (ATerm b_76 (ATerm), ATerm t);
ATerm skip2_1_0 (ATerm t_0 (ATerm), ATerm t);
ATerm is_leaf_0_0 (ATerm t);
ATerm asfix_yield2_1_0 (ATerm c_67 (ATerm), ATerm t);
ATerm skip1_1_0 (ATerm r_0 (ATerm), ATerm t);
ATerm leaves_3_0 (ATerm d_71 (ATerm), ATerm e_71 (ATerm), ATerm f_71 (ATerm (ATerm), ATerm), ATerm t);
static ATerm f_0 (ATerm t);
ATerm asfix_yield_1_0 (ATerm b_67 (ATerm), ATerm t);
static ATerm e_15 (ATerm y_14, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm n_3 (ATerm v_15, ATerm t);
static ATerm o_3 (ATerm r_29, ATerm s_29, ATerm t);
static ATerm p_3 (ATerm a_31, ATerm b_31, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm w_17 (ATerm g_16, ATerm t);
static ATerm c_18 (ATerm m_16, ATerm n_16, ATerm o_16, ATerm t);
static ATerm d_18 (ATerm a_17, ATerm b_17, ATerm e_17, ATerm t);
static ATerm q_3 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm w_75 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm b_75 (ATerm), ATerm t);
static ATerm h_22 (ATerm r_21, ATerm t);
static ATerm i_22 (ATerm w_21, ATerm x_21, ATerm y_21, ATerm t);
static ATerm j_0 (ATerm t);
ATerm open_file_0_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm u_0 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm x_3 (ATerm r_40, ATerm s_40, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm v_3 (ATerm m_45, ATerm n_45, ATerm l_45, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm q_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm r_3 (ATerm j_49, ATerm k_49, ATerm t);
static ATerm s_3 (ATerm o_49, ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm m_75 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm u_3 (ATerm f_47, ATerm g_47, ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm c_53 (ATerm), ATerm d_53 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm v_95 (ATerm), ATerm t);
static ATerm y_3 (ATerm e_49, ATerm f_49, ATerm g_49, ATerm t);
static ATerm z_3 (ATerm h_49, ATerm i_49, ATerm t);
ATerm new_hashtable_0_2 (ATerm m_49, ATerm n_49, ATerm t);
ATerm table_create_0_0 (ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm lookup_table_0_1 (ATerm y_46, ATerm t);
static ATerm t_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm z_2 (ATerm t);
ATerm parse_options_1_0 (ATerm u_95 (ATerm), ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm literal_1_0 (ATerm f_67 (ATerm), ATerm t)
{
  ATerm g_0 = NULL,l_0 = NULL,v_0 = NULL,z_0 = NULL;
  z_0 = t;
  t = SSL_is_string(z_0);
  v_0 = t;
  t = f_67(t);
  l_0 = t;
  t = (ATerm) ATinsert(ATempty, v_0);
  g_0 = t;
  t = SSL_print(l_0, g_0);
  t = (ATerm) ATmakeAppl(sym__2, l_0, (ATerm) ATinsert(ATempty, v_0));
  return(t);
}
ATerm at_tail_1_0 (ATerm b_76 (ATerm), ATerm t)
{
  ATerm c_1 = NULL,d_1 = NULL,g_1 = NULL,i_1 = NULL,j_1 = NULL,s_1 = NULL;
  j_1 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_1 = ATgetFirst((ATermList) t);
      g_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_1);
  c_1 = t;
  t = g_1;
  t = b_76(t);
  i_1 = t;
  t = (ATerm) ATinsert(CheckATermList(i_1), d_1);
  s_1 = t;
  t = SSLsetAnnotations(s_1, c_1);
  return(t);
}
ATerm skip2_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  ATerm l_5 = NULL,m_5 = NULL,n_5 = NULL;
  l_5 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_5 = ATgetFirst((ATermList) t);
      n_5 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm h_0 = NULL,q_0 = NULL,v_1 = NULL;
        t = SSLgetAnnotations(l_5);
        h_0 = t;
        t = n_5;
        t = at_tail_1_0(t_0, t);
        q_0 = t;
        t = (ATerm) ATinsert(CheckATermList(q_0), m_5);
        v_1 = t;
        t = SSLsetAnnotations(v_1, h_0);
      }
    }
  else
    {
      if(match_cons(t, sym_appl_2))
        {
          m_5 = ATgetArgument(t, 0);
          n_5 = ATgetArgument(t, 1);
          {
            ATerm e_1 = NULL,k_1 = NULL,z_1 = NULL;
            t = SSLgetAnnotations(l_5);
            e_1 = t;
            t = n_5;
            t = map_1_0(t_0, t);
            k_1 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, m_5, k_1);
            z_1 = t;
            t = SSLsetAnnotations(z_1, e_1);
          }
        }
      else
        {
          if(match_cons(t, sym_amb_1))
            {
              m_5 = ATgetArgument(t, 0);
              {
                ATerm r_1 = NULL,w_1 = NULL,x_1 = NULL,y_1 = NULL,f_2 = NULL,g_2 = NULL,b_2 = NULL,a_2 = NULL;
                t = SSLgetAnnotations(l_5);
                r_1 = t;
                t = m_5;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    x_1 = ATgetFirst((ATermList) t);
                    y_1 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(m_5);
                w_1 = t;
                t = x_1;
                t = t_0(t);
                f_2 = t;
                t = (ATerm) ATinsert(CheckATermList(y_1), f_2);
                a_2 = t;
                t = SSLsetAnnotations(a_2, w_1);
                g_2 = t;
                t = (ATerm) ATmakeAppl(sym_amb_1, g_2);
                b_2 = t;
                t = SSLsetAnnotations(b_2, r_1);
              }
            }
          else
            {
              if(match_cons(t, sym_parsetree_2))
                {
                  m_5 = ATgetArgument(t, 0);
                  n_5 = ATgetArgument(t, 1);
                  {
                    ATerm u_2 = NULL,y_2 = NULL,c_2 = NULL;
                    t = SSLgetAnnotations(l_5);
                    u_2 = t;
                    t = m_5;
                    t = t_0(t);
                    y_2 = t;
                    t = (ATerm) ATmakeAppl(sym_parsetree_2, y_2, n_5);
                    c_2 = t;
                    t = SSLsetAnnotations(c_2, u_2);
                  }
                }
              else
                {
                  ATerm j_3 = NULL,w_3 = NULL,d_2 = NULL;
                  if(match_cons(t, sym_flatlex_2))
                    {
                      m_5 = ATgetArgument(t, 0);
                      n_5 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(l_5);
                  j_3 = t;
                  t = n_5;
                  t = t_0(t);
                  w_3 = t;
                  t = (ATerm) ATmakeAppl(sym_flatlex_2, m_5, w_3);
                  d_2 = t;
                  t = SSLsetAnnotations(d_2, j_3);
                }
            }
        }
    }
  return(t);
}
ATerm is_leaf_0_0 (ATerm t)
{
  t = SRTS_all(_fail, t);
  return(t);
}
ATerm asfix_yield2_1_0 (ATerm c_67 (ATerm), ATerm t)
{
  static ATerm a_0 (ATerm t)
  {
    ATerm q_6 = NULL;
    q_6 = t;
    {
      ATerm l_3 = t;
      int m_3 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_4 = NULL,i_4 = NULL,k_4 = NULL;
          t = SSL_is_string(q_6);
          k_4 = t;
          t = c_67(t);
          i_4 = t;
          t = (ATerm) ATinsert(ATempty, k_4);
          h_4 = t;
          t = SSL_print(i_4, h_4);
          t = (ATerm) ATmakeAppl(sym__2, i_4, (ATerm) ATinsert(ATempty, k_4));
          LocalPopChoice(m_3);
        }
      else
        {
          t = l_3;
          {
            ATerm q_4 = NULL,r_4 = NULL;
            t = q_6;
            t = c_67(t);
            r_4 = t;
            t = (ATerm) ATinsert(ATempty, q_6);
            q_4 = t;
            t = SSL_printascii(r_4, q_4);
            t = (ATerm) ATmakeAppl(sym__2, r_4, (ATerm) ATinsert(ATempty, q_6));
          }
        }
    }
    return(t);
  }
  t = leaves_3_0(a_0, is_leaf_0_0, skip2_1_0, t);
  return(t);
}
ATerm skip1_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm p_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,z_11 = NULL,c_12 = NULL;
  x_11 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_11 = ATgetFirst((ATermList) t);
      c_12 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm t_5 = NULL,x_5 = NULL,r_2 = NULL;
        t = SSLgetAnnotations(x_11);
        t_5 = t;
        t = c_12;
        t = r_0(t);
        x_5 = t;
        t = (ATerm) ATinsert(CheckATermList(x_5), z_11);
        r_2 = t;
        t = SSLsetAnnotations(r_2, t_5);
      }
    }
  else
    {
      if(match_cons(t, sym_term_9))
        {
          z_11 = ATgetArgument(t, 0);
          c_12 = ATgetArgument(t, 1);
          w_11 = ATgetArgument(t, 2);
          p_11 = ATgetArgument(t, 3);
          q_11 = ATgetArgument(t, 4);
          r_11 = ATgetArgument(t, 5);
          s_11 = ATgetArgument(t, 6);
          t_11 = ATgetArgument(t, 7);
          v_11 = ATgetArgument(t, 8);
          {
            ATerm y_6 = NULL,i_7 = NULL,n_7 = NULL,o_7 = NULL,s_2 = NULL;
            t = SSLgetAnnotations(x_11);
            y_6 = t;
            t = r_11;
            t = r_0(t);
            i_7 = t;
            t = s_11;
            t = r_0(t);
            n_7 = t;
            t = t_11;
            t = r_0(t);
            o_7 = t;
            t = (ATerm) ATmakeAppl(sym_term_9, z_11, c_12, w_11, p_11, q_11, i_7, n_7, o_7, v_11);
            s_2 = t;
            t = SSLsetAnnotations(s_2, y_6);
          }
        }
      else
        {
          if(match_cons(t, sym_appl_3))
            {
              z_11 = ATgetArgument(t, 0);
              c_12 = ATgetArgument(t, 1);
              w_11 = ATgetArgument(t, 2);
              {
                ATerm m_8 = NULL,f_9 = NULL,v_2 = NULL;
                t = SSLgetAnnotations(x_11);
                m_8 = t;
                t = w_11;
                t = map_1_0(r_0, t);
                f_9 = t;
                t = (ATerm) ATmakeAppl(sym_appl_3, z_11, c_12, f_9);
                v_2 = t;
                t = SSLsetAnnotations(v_2, m_8);
              }
            }
          else
            {
              if(match_cons(t, sym_list_3))
                {
                  z_11 = ATgetArgument(t, 0);
                  c_12 = ATgetArgument(t, 1);
                  w_11 = ATgetArgument(t, 2);
                  {
                    ATerm h_10 = NULL,m_10 = NULL,a_3 = NULL;
                    t = SSLgetAnnotations(x_11);
                    h_10 = t;
                    t = w_11;
                    t = map_1_0(r_0, t);
                    m_10 = t;
                    t = (ATerm) ATmakeAppl(sym_list_3, z_11, c_12, m_10);
                    a_3 = t;
                    t = SSLsetAnnotations(a_3, h_10);
                  }
                }
              else
                {
                  ATerm y_10 = NULL,c_11 = NULL,b_3 = NULL;
                  if(match_cons(t, sym_lex_2))
                    {
                      z_11 = ATgetArgument(t, 0);
                      c_12 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(x_11);
                  y_10 = t;
                  t = z_11;
                  t = r_0(t);
                  c_11 = t;
                  t = (ATerm) ATmakeAppl(sym_lex_2, c_11, c_12);
                  b_3 = t;
                  t = SSLsetAnnotations(b_3, y_10);
                }
            }
        }
    }
  return(t);
}
ATerm leaves_3_0 (ATerm d_71 (ATerm), ATerm e_71 (ATerm), ATerm f_71 (ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm q_12 (ATerm t)
  {
    ATerm t_3 = t;
    int a_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_71(t);
        t = d_71(t);
        LocalPopChoice(a_4);
      }
    else
      {
        t = t_3;
        {
          ATerm b_4 = t;
          int c_4 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_71(q_12, t);
              LocalPopChoice(c_4);
            }
          else
            {
              t = b_4;
              t = SRTS_all(q_12, t);
            }
        }
      }
    return(t);
  }
  t = q_12(t);
  return(t);
}
static ATerm f_0 (ATerm t)
{
  ATerm q_13 = NULL;
  q_13 = t;
  t = SSL_is_string(q_13);
  return(t);
}
ATerm asfix_yield_1_0 (ATerm b_67 (ATerm), ATerm t)
{
  ATerm d_4 = t;
  int e_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      static ATerm b_0 (ATerm t)
      {
        ATerm k_13 = NULL,l_13 = NULL,p_13 = NULL;
        p_13 = t;
        t = b_67(t);
        l_13 = t;
        t = (ATerm) ATinsert(ATempty, p_13);
        k_13 = t;
        t = SSL_print(l_13, k_13);
        t = (ATerm) ATmakeAppl(sym__2, l_13, (ATerm) ATinsert(ATempty, p_13));
        return(t);
      }
      ATerm f_4 = t;
      int g_4 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_12 = NULL,v_12 = NULL,x_12 = NULL,z_12 = NULL,a_13 = NULL,c_13 = NULL,d_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,j_4 = NULL;
          j_13 = t;
          if(match_cons(t, sym_term_9))
            {
              v_12 = ATgetArgument(t, 0);
              x_12 = ATgetArgument(t, 1);
              z_12 = ATgetArgument(t, 2);
              a_13 = ATgetArgument(t, 3);
              c_13 = ATgetArgument(t, 4);
              d_13 = ATgetArgument(t, 5);
              g_13 = ATgetArgument(t, 6);
              h_13 = ATgetArgument(t, 7);
              i_13 = ATgetArgument(t, 8);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(j_13);
          s_12 = t;
          t = (ATerm) ATmakeAppl(sym_term_9, v_12, x_12, z_12, a_13, c_13, d_13, g_13, h_13, i_13);
          j_4 = t;
          t = SSLsetAnnotations(j_4, s_12);
          LocalPopChoice(g_4);
        }
      else
        {
          t = f_4;
          if(match_cons(t, sym_appl_3))
            {
              ATerm m_4 = ATgetArgument(t, 0);
              if(match_cons(m_4, sym_prod_9))
                {
                  ATerm s_4 = ATgetArgument(m_4, 0);
                  if(match_cons(s_4, sym_id_1))
                    {
                      ATerm f_5 = ATgetArgument(s_4, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm t_4 = ATgetArgument(m_4, 1);
                  }
                  {
                    ATerm u_4 = ATgetArgument(m_4, 2);
                  }
                  {
                    ATerm v_4 = ATgetArgument(m_4, 3);
                  }
                  {
                    ATerm w_4 = ATgetArgument(m_4, 4);
                  }
                  {
                    ATerm x_4 = ATgetArgument(m_4, 5);
                  }
                  {
                    ATerm a_5 = ATgetArgument(m_4, 6);
                  }
                  {
                    ATerm b_5 = ATgetArgument(m_4, 7);
                  }
                  {
                    ATerm d_5 = ATgetArgument(m_4, 8);
                  }
                }
              else
                _fail(t);
              {
                ATerm n_4 = ATgetArgument(t, 1);
              }
              {
                ATerm o_4 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
        }
      t = leaves_3_0(b_0, f_0, skip1_1_0, t);
      LocalPopChoice(e_4);
    }
  else
    {
      t = d_4;
      {
        ATerm g_5 = t;
        int i_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_5 = t;
            int p_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_13 = NULL,u_13 = NULL,w_13 = NULL,x_13 = NULL,l_4 = NULL;
                x_13 = t;
                if(match_cons(t, sym_parsetree_2))
                  {
                    u_13 = ATgetArgument(t, 0);
                    w_13 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(x_13);
                t_13 = t;
                t = (ATerm) ATmakeAppl(sym_parsetree_2, u_13, w_13);
                l_4 = t;
                t = SSLsetAnnotations(l_4, t_13);
                LocalPopChoice(p_5);
              }
            else
              {
                t = k_5;
                {
                  ATerm y_13 = NULL,a_14 = NULL,c_14 = NULL,d_14 = NULL,p_4 = NULL;
                  d_14 = t;
                  if(match_cons(t, sym_appl_2))
                    {
                      a_14 = ATgetArgument(t, 0);
                      c_14 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(d_14);
                  y_13 = t;
                  t = (ATerm) ATmakeAppl(sym_appl_2, a_14, c_14);
                  p_4 = t;
                  t = SSLsetAnnotations(p_4, y_13);
                }
              }
            t = asfix_yield2_1_0(b_67, t);
            LocalPopChoice(i_5);
          }
        else
          {
            t = g_5;
            {
              ATerm r_5 = t;
              int s_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = literal_1_0(b_67, t);
                  LocalPopChoice(s_5);
                }
              else
                {
                  t = r_5;
                  {
                    ATerm e_14 = NULL,f_14 = NULL,g_14 = NULL;
                    t = term_u_5;
                    f_14 = t;
                    t = (ATerm) ATinsert(ATempty, term_w_5);
                    g_14 = t;
                    t = SSL_printnl(f_14, g_14);
                    t = term_y_5;
                    e_14 = t;
                    t = SSL_exit(e_14);
                    t = (ATerm) ATinsert(ATempty, term_w_5);
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm e_15 (ATerm y_14, ATerm t)
{
  t = SSL_fclose(y_14);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm b_15 = NULL,c_15 = NULL;
  c_15 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_15 = ATgetArgument(t, 0);
      {
        ATerm z_5 = t;
        int a_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(b_15);
            LocalPopChoice(a_6);
          }
        else
          {
            t = z_5;
            t = e_15(c_15, t);
          }
      }
    }
  else
    {
      t = e_15(c_15, t);
    }
  return(t);
}
static ATerm n_3 (ATerm v_15, ATerm t)
{
  t = SSL_read_term_from_stream(v_15);
  return(t);
}
static ATerm o_3 (ATerm r_29, ATerm s_29, ATerm t)
{
  t = SSL_strcat(r_29, s_29);
  return(t);
}
static ATerm p_3 (ATerm a_31, ATerm b_31, ATerm t)
{
  ATerm i_15 = NULL;
  t = SSL_fopen(a_31, b_31);
  i_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_15);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm m_15 = NULL;
  t = SSL_stdin_stream();
  m_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_15);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm n_15 = NULL;
  t = SSL_stdout_stream();
  n_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_15);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm p_15 = NULL;
  t = SSL_stderr_stream();
  p_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_15);
  return(t);
}
static ATerm w_17 (ATerm g_16, ATerm t)
{
  ATerm h_16 = NULL;
  t = SSL_explode_term(g_16);
  if(match_cons(t, sym__2))
    {
      ATerm b_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_6) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm c_6 = ATgetArgument(t, 1);
        if(((ATgetType(c_6) == AT_LIST) && !(ATisEmpty(c_6))))
          {
            h_16 = ATgetFirst((ATermList) c_6);
            {
              ATerm d_6 = (ATerm) ATgetNext((ATermList) c_6);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_16;
  if(match_cons(t, sym_stderr_0))
    {
      t = h_16;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = h_16;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = h_16;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm c_18 (ATerm m_16, ATerm n_16, ATerm o_16, ATerm t)
{
  ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL,u_16 = NULL,y_4 = NULL;
  t = SSLgetAnnotations(o_16);
  r_16 = t;
  t = m_16;
  if(match_cons(t, sym_Path_1))
    {
      u_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_16, n_16);
  y_4 = t;
  t = SSLsetAnnotations(y_4, r_16);
  if(match_cons(t, sym__2))
    {
      p_16 = ATgetArgument(t, 0);
      q_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_3(p_16, q_16, t);
  return(t);
}
static ATerm d_18 (ATerm a_17, ATerm b_17, ATerm e_17, ATerm t)
{
  ATerm f_17 = NULL,g_17 = NULL,j_17 = NULL,m_17 = NULL,z_4 = NULL;
  t = SSLgetAnnotations(e_17);
  j_17 = t;
  t = SSL_is_string(a_17);
  m_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_17, b_17);
  z_4 = t;
  t = SSLsetAnnotations(z_4, j_17);
  if(match_cons(t, sym__2))
    {
      f_17 = ATgetArgument(t, 0);
      g_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_3(f_17, g_17, t);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm q_17 = NULL,t_17 = NULL,v_17 = NULL;
  q_17 = t;
  if(match_cons(t, sym__2))
    {
      t_17 = ATgetArgument(t, 0);
      v_17 = ATgetArgument(t, 1);
      {
        ATerm e_6 = t;
        int f_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_17(q_17, t);
            LocalPopChoice(f_6);
          }
        else
          {
            t = e_6;
            {
              ATerm h_6 = t;
              int i_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_18(t_17, v_17, q_17, t);
                  LocalPopChoice(i_6);
                }
              else
                {
                  t = h_6;
                  t = d_18(t_17, v_17, q_17, t);
                }
            }
          }
      }
    }
  else
    {
      t = w_17(q_17, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm j_18 = NULL,m_18 = NULL,p_18 = NULL,c_19 = NULL;
  c_19 = t;
  {
    ATerm j_6 = t;
    int k_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, c_19, term_l_6);
        t = q_3(t);
        LocalPopChoice(k_6);
      }
    else
      {
        t = j_6;
        {
          ATerm o_12 = NULL,p_12 = NULL;
          t = term_m_6;
          p_12 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_m_6, c_19);
          t = o_3(p_12, c_19, t);
          o_12 = t;
          t = SSL_perror(o_12);
          _fail(t);
        }
      }
  }
  m_18 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_3(p_18, t);
  j_18 = t;
  t = m_18;
  t = fclose_0_0(t);
  t = j_18;
  return(t);
}
ATerm fetch_1_0 (ATerm w_75 (ATerm), ATerm t)
{
  static ATerm w_20 (ATerm t)
  {
    ATerm s_20 = NULL,u_20 = NULL,v_20 = NULL;
    s_20 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_20 = ATgetFirst((ATermList) t);
        v_20 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm n_6 = t;
      int o_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_12 = NULL,f_13 = NULL,c_5 = NULL;
          t = SSLgetAnnotations(s_20);
          y_12 = t;
          t = u_20;
          t = w_75(t);
          f_13 = t;
          t = (ATerm) ATinsert(CheckATermList(v_20), f_13);
          c_5 = t;
          t = SSLsetAnnotations(c_5, y_12);
          LocalPopChoice(o_6);
        }
      else
        {
          t = n_6;
          {
            ATerm b_14 = NULL,j_14 = NULL,e_5 = NULL;
            t = SSLgetAnnotations(s_20);
            b_14 = t;
            t = v_20;
            t = w_20(t);
            j_14 = t;
            t = (ATerm) ATinsert(CheckATermList(j_14), u_20);
            e_5 = t;
            t = SSLsetAnnotations(e_5, b_14);
          }
        }
    }
    return(t);
  }
  t = w_20(t);
  return(t);
}
ATerm debug_1_0 (ATerm b_75 (ATerm), ATerm t)
{
  ATerm f_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL;
  f_21 = t;
  t = b_75(t);
  l_21 = t;
  t = term_u_5;
  m_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_21), l_21);
  n_21 = t;
  t = SSL_printnl(m_21, n_21);
  t = f_21;
  return(t);
}
static ATerm h_22 (ATerm r_21, ATerm t)
{
  t = r_21;
  {
    ATerm p_6 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_6 = ATgetArgument(t, 0);
            ATerm s_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = p_6;
      }
  }
  t = term_t_6;
  t = debug_1_0(j_0, t);
  t = (ATerm) ATmakeAppl(sym__2, r_21, term_u_6);
  t = open_file_0_0(t);
  return(t);
}
static ATerm i_22 (ATerm w_21, ATerm x_21, ATerm y_21, ATerm t)
{
  t = SSL_open_file(w_21, x_21);
  return(t);
}
static ATerm j_0 (ATerm t)
{
  t = term_v_6;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm c_22 = NULL,f_22 = NULL,g_22 = NULL;
  c_22 = t;
  if(match_cons(t, sym__2))
    {
      f_22 = ATgetArgument(t, 0);
      g_22 = ATgetArgument(t, 1);
      {
        ATerm w_6 = t;
        int x_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_22(c_22, t);
            LocalPopChoice(x_6);
          }
        else
          {
            t = w_6;
            t = i_22(f_22, g_22, c_22, t);
          }
      }
    }
  else
    {
      t = h_22(c_22, t);
    }
  return(t);
}
static ATerm m_0 (ATerm t)
{
  ATerm k_22 = NULL;
  k_22 = t;
  if(match_string(t, "-k"))
    {
      t = k_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = k_22;
    }
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL;
  l_22 = t;
  t = SSL_string_to_int(l_22);
  m_22 = t;
  t = term_z_6;
  n_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_6, m_22);
  t = x_3(n_22, m_22, t);
  t = l_22;
  return(t);
}
static ATerm u_0 (ATerm t)
{
  t = term_a_7;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_0, s_0, u_0, t);
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm p_22 = NULL;
  p_22 = t;
  if(match_string(t, "-S"))
    {
      t = p_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = p_22;
    }
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm q_22 = NULL,r_22 = NULL;
  t = term_b_7;
  q_22 = t;
  t = term_c_7;
  r_22 = t;
  t = term_d_7;
  t = x_3(q_22, r_22, t);
  t = term_e_7;
  return(t);
}
static ATerm y_0 (ATerm t)
{
  t = term_f_7;
  return(t);
}
static ATerm a_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL;
  s_22 = t;
  t = SSL_string_to_int(s_22);
  t_22 = t;
  t = term_b_7;
  u_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_7, t_22);
  t = x_3(u_22, t_22, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, s_22);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_g_7;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm v_22 = NULL,w_22 = NULL;
  t = term_h_7;
  v_22 = t;
  t = term_j_7;
  w_22 = t;
  t = term_k_7;
  t = x_3(v_22, w_22, t);
  t = term_l_7;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_m_7;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm p_7 = t;
  int q_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_0, x_0, y_0, t);
      LocalPopChoice(q_7);
    }
  else
    {
      t = p_7;
      {
        ATerm r_7 = t;
        int s_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(a_1, b_1, f_1, t);
            LocalPopChoice(s_7);
          }
        else
          {
            t = r_7;
            t = Option_3_0(h_1, l_1, m_1, t);
          }
      }
    }
  return(t);
}
static ATerm x_3 (ATerm r_40, ATerm s_40, ATerm t)
{
  ATerm x_22 = NULL,y_22 = NULL;
  t = term_t_7;
  x_22 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_t_7, r_40, s_40);
  t = lookup_table_0_1(x_22, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_3(r_40, s_40, y_22, t);
  t = (ATerm) ATmakeAppl(sym__3, term_t_7, r_40, s_40);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm c_23 = NULL,d_23 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_23 = NULL,f_23 = NULL,g_23 = NULL;
      t = term_j_7;
      t = e_0(t);
      e_23 = t;
      t = term_u_7;
      f_23 = t;
      t = term_v_7;
      g_23 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_7, term_v_7, e_23);
      t = v_3(f_23, g_23, e_23, t);
      _fail(t);
    }
  else
    {
      ATerm j_23 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_23 = ATgetFirst((ATermList) t);
          d_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_23;
      t = c_0(t);
      t = term_j_7;
      t = d_0(t);
      j_23 = t;
      t = (ATerm) ATinsert(CheckATermList(d_23), j_23);
    }
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm l_23 = NULL;
  l_23 = t;
  if(match_string(t, "-o"))
    {
      t = l_23;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = l_23;
    }
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm m_23 = NULL,n_23 = NULL;
  m_23 = t;
  t = term_w_7;
  n_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_7, m_23);
  t = x_3(n_23, m_23, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, m_23);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_x_7;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_1, o_1, p_1, t);
  return(t);
}
static ATerm v_3 (ATerm m_45, ATerm n_45, ATerm l_45, ATerm t)
{
  ATerm p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL;
  p_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_45, n_45);
  {
    ATerm y_7 = t;
    int z_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_8 = ATgetArgument(t, 0);
            ATerm b_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, m_45, n_45);
        t = u_3(m_45, n_45, t);
        LocalPopChoice(z_7);
      }
    else
      {
        t = y_7;
        t = (ATerm) ATempty;
      }
  }
  q_23 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_45, n_45, (ATerm) ATinsert(CheckATermList(q_23), l_45));
  t = lookup_table_0_1(m_45, t);
  t_23 = t;
  t = (ATerm) ATinsert(CheckATermList(q_23), l_45);
  r_23 = t;
  t = t_23;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_3(n_45, r_23, s_23, t);
  t = p_23;
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm a_24 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_24 = NULL,f_24 = NULL,g_24 = NULL;
      t = term_j_7;
      t = p_0(t);
      e_24 = t;
      t = term_u_7;
      f_24 = t;
      t = term_v_7;
      g_24 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_7, term_v_7, e_24);
      t = v_3(f_24, g_24, e_24, t);
      _fail(t);
    }
  else
    {
      ATerm k_24 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_24 = ATgetFirst((ATermList) t);
          b_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_24;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_24 = ATgetFirst((ATermList) t);
          d_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_24;
      t = n_0(t);
      t = c_24;
      t = o_0(t);
      k_24 = t;
      t = (ATerm) ATinsert(CheckATermList(d_24), k_24);
    }
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm m_24 = NULL;
  m_24 = t;
  if(match_string(t, "-i"))
    {
      t = m_24;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = m_24;
    }
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm n_24 = NULL,o_24 = NULL;
  n_24 = t;
  t = term_c_8;
  o_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_8, n_24);
  t = x_3(o_24, n_24, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, n_24);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = term_d_8;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_1, t_1, u_1, t);
  return(t);
}
static ATerm r_3 (ATerm j_49, ATerm k_49, ATerm t)
{
  ATerm p_24 = NULL;
  t = SSL_hashtable_remove(k_49, j_49);
  p_24 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, p_24);
  return(t);
}
static ATerm s_3 (ATerm o_49, ATerm t)
{
  ATerm q_24 = NULL;
  t = SSL_hashtable_destroy(o_49);
  q_24 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_24);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm r_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL;
  r_24 = t;
  t = table_hashtable_0_0(t);
  s_24 = t;
  t = lookup_table_0_1(r_24, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_3(u_24, t);
  t = s_24;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_3(r_24, t_24, t);
  t = r_24;
  return(t);
}
ATerm map_1_0 (ATerm m_75 (ATerm), ATerm t)
{
  static ATerm j_25 (ATerm t)
  {
    ATerm g_25 = NULL,h_25 = NULL,i_25 = NULL;
    g_25 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = g_25;
      }
    else
      {
        ATerm u_14 = NULL,f_15 = NULL,g_15 = NULL,h_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_25 = ATgetFirst((ATermList) t);
            i_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_25);
        u_14 = t;
        t = h_25;
        t = m_75(t);
        f_15 = t;
        t = i_25;
        t = j_25(t);
        g_15 = t;
        t = (ATerm) ATinsert(CheckATermList(g_15), f_15);
        h_5 = t;
        t = SSLsetAnnotations(h_5, u_14);
      }
    return(t);
  }
  t = j_25(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm m_25 = NULL,n_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_25 = ATgetFirst((ATermList) t);
      n_25 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_25 = NULL,s_25 = NULL;
        static ATerm e_2 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(r_25)), not_null(s_25));
          return(t);
        }
        t = n_25;
        t = k_0(t);
        if(((r_25 != NULL) && (r_25 != t)))
          _fail(t);
        else
          r_25 = t;
        t = m_25;
        t = i_0(t);
        if(((s_25 != NULL) && (s_25 != t)))
          _fail(t);
        else
          s_25 = t;
        t = n_25;
        t = reverse_acc_2_0(i_0, e_2, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_j_7;
      t = k_0(t);
    }
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm h_26 = NULL;
  h_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_26), term_e_8);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm w_25 = NULL,x_25 = NULL,y_25 = NULL;
  ATerm f_8 = t;
  int g_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_25 = NULL,a_26 = NULL;
      t = term_t_7;
      z_25 = t;
      t = term_h_8;
      a_26 = t;
      t = term_i_8;
      t = u_3(z_25, a_26, t);
      w_25 = t;
      LocalPopChoice(g_8);
    }
  else
    {
      t = f_8;
      {
        static ATerm h_2 (ATerm t)
        {
          ATerm b_26 = NULL,c_26 = NULL,d_26 = NULL,j_5 = NULL;
          d_26 = t;
          if(match_cons(t, sym_Program_1))
            {
              c_26 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(d_26);
          b_26 = t;
          t = c_26;
          if(((w_25 != NULL) && (w_25 != t)))
            _fail(t);
          else
            w_25 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, c_26);
          j_5 = t;
          t = SSLsetAnnotations(j_5, b_26);
          return(t);
        }
        t = fetch_1_0(h_2, t);
      }
    }
  {
    ATerm j_8 = t;
    int k_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_8), not_null(w_25)), term_l_8);
        t = echo_0_0(t);
        LocalPopChoice(k_8);
      }
    else
      {
        t = j_8;
      }
  }
  t = term_o_8;
  t = echo_0_0(t);
  t = term_u_7;
  x_25 = t;
  t = term_v_7;
  y_25 = t;
  t = term_p_8;
  t = u_3(x_25, y_25, t);
  t = reverse_acc_2_0(_id, i_2, t);
  t = map_1_0(j_2, t);
  {
    ATerm q_8 = t;
    int r_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_8), term_t_8), term_s_8);
        t = echo_0_0(t);
        LocalPopChoice(r_8);
      }
    else
      {
        t = q_8;
      }
  }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm l_26 = NULL,m_26 = NULL,n_26 = NULL;
  l_26 = t;
  {
    ATerm v_8 = t;
    int w_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = l_26;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm x_8 = ATgetFirst((ATermList) t);
                ATerm y_8 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = l_26;
          }
        LocalPopChoice(w_8);
      }
    else
      {
        t = v_8;
        t = (ATerm) ATinsert(ATempty, l_26);
      }
  }
  m_26 = t;
  t = term_z_8;
  n_26 = t;
  t = SSL_printnl(n_26, m_26);
  t = l_26;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm r_26 = NULL,s_26 = NULL;
  t = term_t_7;
  r_26 = t;
  t = term_h_8;
  s_26 = t;
  t = term_i_8;
  t = u_3(r_26, s_26, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm u_3 (ATerm f_47, ATerm g_47, ATerm t)
{
  ATerm t_26 = NULL;
  t = lookup_table_0_1(f_47, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      t_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_3(g_47, t_26, t);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm v_26 = NULL,w_26 = NULL;
  t = term_a_9;
  v_26 = t;
  t = term_j_7;
  w_26 = t;
  t = term_b_9;
  t = x_3(v_26, w_26, t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_c_9;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm x_26 = NULL,y_26 = NULL,z_26 = NULL,a_27 = NULL;
  t = term_a_9;
  z_26 = t;
  t = term_j_7;
  a_27 = t;
  t = term_b_9;
  t = x_3(z_26, a_27, t);
  t = term_d_9;
  x_26 = t;
  t = term_j_7;
  y_26 = t;
  t = term_e_9;
  t = x_3(x_26, y_26, t);
  t = term_g_9;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_h_9;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm i_9 = t;
  int j_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_2, l_2, m_2, t);
      LocalPopChoice(j_9);
    }
  else
    {
      t = i_9;
      t = Option_3_0(n_2, o_2, p_2, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm c_53 (ATerm), ATerm d_53 (ATerm), ATerm t)
{
  ATerm b_27 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL,f_27 = NULL,g_27 = NULL,o_5 = NULL;
  g_27 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_27 = ATgetFirst((ATermList) t);
      d_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_27);
  b_27 = t;
  t = c_27;
  t = c_53(t);
  e_27 = t;
  t = d_27;
  t = d_53(t);
  f_27 = t;
  t = (ATerm) ATinsert(CheckATermList(f_27), e_27);
  o_5 = t;
  t = SSLsetAnnotations(o_5, b_27);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_95 (ATerm), ATerm t)
{
  ATerm l_27 = NULL,m_27 = NULL,n_27 = NULL,o_27 = NULL,q_27 = NULL,r_27 = NULL,q_5 = NULL;
  l_27 = t;
  {
    ATerm k_9 = t;
    int l_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_9;
        t = v_95(t);
        LocalPopChoice(l_9);
      }
    else
      {
        t = k_9;
      }
  }
  t = l_27;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_27 = ATgetFirst((ATermList) t);
      o_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_27);
  m_27 = t;
  t = term_h_8;
  r_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_8, n_27);
  t = x_3(r_27, n_27, t);
  t = o_27;
  {
    static ATerm b_28 (ATerm t)
    {
      ATerm n_9 = t;
      int o_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_9 = t;
          int q_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_27 = NULL;
              u_27 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = u_27;
              LocalPopChoice(q_9);
            }
          else
            {
              t = p_9;
              t = v_95(t);
              t = Cons_2_0(_id, b_28, t);
            }
          LocalPopChoice(o_9);
        }
      else
        {
          t = n_9;
          {
            ATerm x_27 = NULL,y_27 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                x_27 = ATgetFirst((ATermList) t);
                y_27 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(y_27), (ATerm) ATmakeAppl(sym_Undefined_1, x_27));
          }
        }
      return(t);
    }
    t = b_28(t);
  }
  q_27 = t;
  t = (ATerm) ATinsert(CheckATermList(q_27), (ATerm) ATmakeAppl(sym_Program_1, n_27));
  q_5 = t;
  t = SSLsetAnnotations(q_5, m_27);
  return(t);
}
static ATerm y_3 (ATerm e_49, ATerm f_49, ATerm g_49, ATerm t)
{
  ATerm c_28 = NULL;
  t = SSL_hashtable_put(g_49, e_49, f_49);
  c_28 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_28);
  return(t);
}
static ATerm z_3 (ATerm h_49, ATerm i_49, ATerm t)
{
  t = SSL_hashtable_get(i_49, h_49);
  return(t);
}
ATerm new_hashtable_0_2 (ATerm m_49, ATerm n_49, ATerm t)
{
  ATerm d_28 = NULL;
  t = SSL_hashtable_create(m_49, n_49);
  d_28 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_28);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm e_28 = NULL,f_28 = NULL,g_28 = NULL,i_28 = NULL,j_28 = NULL;
  e_28 = t;
  t = term_r_9;
  i_28 = t;
  t = term_s_9;
  j_28 = t;
  t = e_28;
  t = new_hashtable_0_2(i_28, j_28, t);
  f_28 = t;
  t = e_28;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_3(e_28, f_28, g_28, t);
  t = e_28;
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm k_28 = NULL;
  t = SSL_table_hashtable();
  k_28 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_28);
  return(t);
}
ATerm lookup_table_0_1 (ATerm y_46, ATerm t)
{
  ATerm t_28 = NULL;
  t = table_hashtable_0_0(t);
  t_28 = t;
  {
    ATerm t_9 = t;
    int u_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_15 = NULL;
        t = t_28;
        if(match_cons(t, sym_Hashtable_1))
          {
            q_15 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = z_3(y_46, q_15, t);
        LocalPopChoice(u_9);
      }
    else
      {
        t = t_9;
        {
          ATerm w_15 = NULL;
          t = y_46;
          t = table_create_0_0(t);
          t = t_28;
          if(match_cons(t, sym_Hashtable_1))
            {
              w_15 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_3(y_46, w_15, t);
        }
      }
  }
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm i_29 = NULL;
  i_29 = t;
  if(match_string(t, "--help"))
    {
      t = i_29;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = i_29;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = i_29;
        }
    }
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm j_29 = NULL,k_29 = NULL;
  t = term_v_9;
  j_29 = t;
  t = term_j_7;
  k_29 = t;
  t = term_w_9;
  t = x_3(j_29, k_29, t);
  t = term_x_9;
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = term_y_9;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm u_95 (ATerm), ATerm t)
{
  ATerm a_29 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL;
  c_29 = t;
  t = term_u_7;
  d_29 = t;
  t = term_z_9;
  t = lookup_table_0_1(d_29, t);
  h_29 = t;
  t = term_v_7;
  e_29 = t;
  t = (ATerm) ATempty;
  f_29 = t;
  t = h_29;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_3(e_29, f_29, g_29, t);
  t = c_29;
  {
    static ATerm q_2 (ATerm t)
    {
      ATerm a_10 = t;
      int b_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_95(t);
          LocalPopChoice(b_10);
        }
      else
        {
          t = a_10;
          {
            ATerm c_10 = t;
            int d_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(t_2, w_2, x_2, t);
                LocalPopChoice(d_10);
              }
            else
              {
                t = c_10;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(q_2, t);
  }
  {
    ATerm e_10 = t;
    int f_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_29 = NULL;
        x_29 = t;
        {
          ATerm g_10 = t;
          int i_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_16 = NULL;
              t = x_29;
              {
                ATerm j_10 = t;
                int k_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm b_16 = NULL,c_16 = NULL;
                    t = term_t_7;
                    b_16 = t;
                    t = term_v_9;
                    c_16 = t;
                    t = term_l_10;
                    t = u_3(b_16, c_16, t);
                    LocalPopChoice(k_10);
                  }
                else
                  {
                    t = j_10;
                    t = fetch_1_0(z_2, t);
                  }
              }
              t = x_29;
              t = default_system_usage_0_0(t);
              t = term_c_7;
              a_16 = t;
              t = SSL_exit(a_16);
              LocalPopChoice(i_10);
            }
          else
            {
              t = g_10;
              {
                ATerm k_16 = NULL,l_16 = NULL,v_16 = NULL;
                t = term_t_7;
                l_16 = t;
                t = term_a_9;
                v_16 = t;
                t = term_n_10;
                t = u_3(l_16, v_16, t);
                t = x_29;
                t = default_system_about_0_0(t);
                t = term_c_7;
                k_16 = t;
                t = SSL_exit(k_16);
              }
            }
        }
        LocalPopChoice(f_10);
      }
    else
      {
        t = e_10;
        {
          ATerm o_10 = t;
          int p_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_29 = NULL,z_29 = NULL,a_30 = NULL;
              static ATerm c_3 (ATerm t)
              {
                ATerm b_30 = NULL,c_30 = NULL,d_30 = NULL,v_5 = NULL;
                d_30 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    c_30 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(d_30);
                b_30 = t;
                t = c_30;
                if(((a_29 != NULL) && (a_29 != t)))
                  _fail(t);
                else
                  a_29 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, c_30);
                v_5 = t;
                t = SSLsetAnnotations(v_5, b_30);
                return(t);
              }
              t = fetch_1_0(c_3, t);
              t = term_u_5;
              z_29 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_29)), term_q_10);
              a_30 = t;
              t = SSL_printnl(z_29, a_30);
              t = (ATerm) ATmakeAppl(sym__2, term_u_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_29)), term_q_10));
              t = default_system_usage_0_0(t);
              t = term_y_5;
              y_29 = t;
              t = SSL_exit(y_29);
              LocalPopChoice(p_10);
            }
          else
            {
              t = o_10;
            }
        }
      }
  }
  b_29 = t;
  t = term_u_7;
  t = table_destroy_0_0(t);
  t = b_29;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm r_10 = t;
  int s_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(s_10);
    }
  else
    {
      t = r_10;
      {
        ATerm t_10 = t;
        int u_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(u_10);
          }
        else
          {
            t = t_10;
            {
              ATerm v_10 = t;
              int w_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(e_3, f_3, g_3, t);
                  LocalPopChoice(w_10);
                }
              else
                {
                  t = v_10;
                  {
                    ATerm x_10 = t;
                    int z_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(z_10);
                      }
                    else
                      {
                        t = x_10;
                        t = keep_option_0_0(t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm t_30 = NULL,u_30 = NULL;
  t = term_a_11;
  t_30 = t;
  t = term_j_7;
  u_30 = t;
  t = term_b_11;
  t = x_3(t_30, u_30, t);
  t = term_d_11;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_e_11;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm l_30 = NULL,m_30 = NULL,n_30 = NULL,o_30 = NULL,p_30 = NULL,q_30 = NULL,r_30 = NULL,s_30 = NULL,g_6 = NULL;
  t = parse_options_1_0(d_3, t);
  m_30 = t;
  {
    ATerm f_11 = t;
    int g_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm h_3 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((l_30 != NULL) && (l_30 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                l_30 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(h_3, t);
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_30), term_u_6);
        t = open_file_0_0(t);
        LocalPopChoice(g_11);
      }
    else
      {
        t = f_11;
        t = term_z_8;
        l_30 = t;
      }
  }
  t = m_30;
  {
    ATerm h_11 = t;
    int i_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm i_3 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              if(((o_30 != NULL) && (o_30 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                o_30 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(i_3, t);
        LocalPopChoice(i_11);
      }
    else
      {
        t = h_11;
        t = term_j_11;
        o_30 = t;
      }
  }
  t = not_null(o_30);
  t = ReadFromFile_0_0(t);
  p_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_30, p_30);
  s_30 = t;
  if(match_cons(t, sym__2))
    {
      ATerm k_11 = ATgetArgument(t, 0);
      ATerm l_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_30);
  q_30 = t;
  t = p_30;
  {
    static ATerm k_3 (ATerm t)
    {
      t = not_null(l_30);
      return(t);
    }
    t = asfix_yield_1_0(k_3, t);
  }
  r_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_30, r_30);
  g_6 = t;
  t = SSLsetAnnotations(g_6, q_30);
  t = term_c_7;
  n_30 = t;
  t = SSL_exit(n_30);
  return(t);
}
