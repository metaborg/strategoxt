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
ATerm term_y_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_g_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_m_9;
ATerm term_h_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_e_8;
ATerm term_d_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_t_7;
ATerm term_s_7;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_p_7;
ATerm term_j_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_b_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_x_6;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_r_6;
ATerm term_q_6;
ATerm term_p_6;
ATerm term_j_6;
ATerm term_i_6;
ATerm term_u_5;
ATerm term_s_5;
ATerm term_r_5;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_r_5));
  term_r_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeAppl(ATmakeSymbol("not in AsFix format", 0, ATtrue));
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(sym__2, term_x_6, term_y_6);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(sym_Verbose_1, term_y_6);
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(sym__2, term_d_7, term_e_7);
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(sym__2, term_p_7, term_d_8);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym__2, term_q_7, term_r_7);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("The asfix-yield utility unparses an asfix tree to flat text.\n", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("It reads from standard input and writes to standard output.\n", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(sym__2, term_v_8, term_e_7);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(sym__2, term_z_8, term_e_7);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(sym__2, term_m_9, term_e_7);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym__2, term_p_7, term_m_9);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym__2, term_p_7, term_v_8);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym__2, term_q_10, term_e_7);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm literal_1_0 (ATerm l_65 (ATerm), ATerm t);
ATerm at_tail_1_0 (ATerm h_74 (ATerm), ATerm t);
ATerm skip2_1_0 (ATerm t_0 (ATerm), ATerm t);
ATerm is_leaf_0_0 (ATerm t);
ATerm asfix_yield2_1_0 (ATerm i_65 (ATerm), ATerm t);
ATerm skip1_1_0 (ATerm r_0 (ATerm), ATerm t);
ATerm leaves_3_0 (ATerm j_69 (ATerm), ATerm k_69 (ATerm), ATerm l_69 (ATerm (ATerm), ATerm), ATerm t);
static ATerm f_0 (ATerm t);
ATerm asfix_yield_1_0 (ATerm h_65 (ATerm), ATerm t);
static ATerm z_14 (ATerm p_14, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm b_3 (ATerm v_15, ATerm t);
static ATerm c_3 (ATerm r_29, ATerm s_29, ATerm t);
static ATerm d_3 (ATerm a_31, ATerm b_31, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm c_18 (ATerm r_15, ATerm t);
static ATerm d_18 (ATerm a_16, ATerm d_16, ATerm g_16, ATerm t);
static ATerm e_18 (ATerm x_16, ATerm y_16, ATerm z_16, ATerm t);
static ATerm e_3 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm c_74 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm h_73 (ATerm), ATerm t);
static ATerm g_21 (ATerm w_20, ATerm t);
static ATerm h_21 (ATerm y_20, ATerm z_20, ATerm a_21, ATerm t);
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
static ATerm j_3 (ATerm r_40, ATerm s_40, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm h_3 (ATerm m_45, ATerm n_45, ATerm l_45, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm q_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm map_1_0 (ATerm s_73 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t);
static ATerm g_2 (ATerm t);
static ATerm j_2 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm g_3 (ATerm d_47, ATerm e_47, ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm i_51 (ATerm), ATerm j_51 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm t_93 (ATerm), ATerm t);
static ATerm t_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm z_2 (ATerm t);
ATerm parse_options_1_0 (ATerm s_93 (ATerm), ATerm t);
static ATerm f_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm literal_1_0 (ATerm l_65 (ATerm), ATerm t)
{
  ATerm g_0 = NULL,l_0 = NULL,v_0 = NULL,z_0 = NULL;
  z_0 = t;
  t = SSL_is_string(z_0);
  v_0 = t;
  t = l_65(t);
  l_0 = t;
  t = (ATerm) ATinsert(ATempty, v_0);
  g_0 = t;
  t = SSL_print(l_0, g_0);
  t = (ATerm) ATmakeAppl(sym__2, l_0, (ATerm) ATinsert(ATempty, v_0));
  return(t);
}
ATerm at_tail_1_0 (ATerm h_74 (ATerm), ATerm t)
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
  t = h_74(t);
  i_1 = t;
  t = (ATerm) ATinsert(CheckATermList(i_1), d_1);
  s_1 = t;
  t = SSLsetAnnotations(s_1, c_1);
  return(t);
}
ATerm skip2_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  ATerm a_5 = NULL,b_5 = NULL,c_5 = NULL;
  a_5 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_5 = ATgetFirst((ATermList) t);
      c_5 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm h_0 = NULL,q_0 = NULL,v_1 = NULL;
        t = SSLgetAnnotations(a_5);
        h_0 = t;
        t = c_5;
        t = at_tail_1_0(t_0, t);
        q_0 = t;
        t = (ATerm) ATinsert(CheckATermList(q_0), b_5);
        v_1 = t;
        t = SSLsetAnnotations(v_1, h_0);
      }
    }
  else
    {
      if(match_cons(t, sym_appl_2))
        {
          b_5 = ATgetArgument(t, 0);
          c_5 = ATgetArgument(t, 1);
          {
            ATerm e_1 = NULL,k_1 = NULL,w_1 = NULL;
            t = SSLgetAnnotations(a_5);
            e_1 = t;
            t = c_5;
            t = map_1_0(t_0, t);
            k_1 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, b_5, k_1);
            w_1 = t;
            t = SSLsetAnnotations(w_1, e_1);
          }
        }
      else
        {
          if(match_cons(t, sym_amb_1))
            {
              b_5 = ATgetArgument(t, 0);
              {
                ATerm r_1 = NULL,b_2 = NULL,c_2 = NULL,d_2 = NULL,h_2 = NULL,i_2 = NULL,y_1 = NULL,x_1 = NULL;
                t = SSLgetAnnotations(a_5);
                r_1 = t;
                t = b_5;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    c_2 = ATgetFirst((ATermList) t);
                    d_2 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(b_5);
                b_2 = t;
                t = c_2;
                t = t_0(t);
                h_2 = t;
                t = (ATerm) ATinsert(CheckATermList(d_2), h_2);
                x_1 = t;
                t = SSLsetAnnotations(x_1, b_2);
                i_2 = t;
                t = (ATerm) ATmakeAppl(sym_amb_1, i_2);
                y_1 = t;
                t = SSLsetAnnotations(y_1, r_1);
              }
            }
          else
            {
              if(match_cons(t, sym_parsetree_2))
                {
                  b_5 = ATgetArgument(t, 0);
                  c_5 = ATgetArgument(t, 1);
                  {
                    ATerm u_2 = NULL,y_2 = NULL,z_1 = NULL;
                    t = SSLgetAnnotations(a_5);
                    u_2 = t;
                    t = b_5;
                    t = t_0(t);
                    y_2 = t;
                    t = (ATerm) ATmakeAppl(sym_parsetree_2, y_2, c_5);
                    z_1 = t;
                    t = SSLsetAnnotations(z_1, u_2);
                  }
                }
              else
                {
                  ATerm r_3 = NULL,u_3 = NULL,a_2 = NULL;
                  if(match_cons(t, sym_flatlex_2))
                    {
                      b_5 = ATgetArgument(t, 0);
                      c_5 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(a_5);
                  r_3 = t;
                  t = c_5;
                  t = t_0(t);
                  u_3 = t;
                  t = (ATerm) ATmakeAppl(sym_flatlex_2, b_5, u_3);
                  a_2 = t;
                  t = SSLsetAnnotations(a_2, r_3);
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
ATerm asfix_yield2_1_0 (ATerm i_65 (ATerm), ATerm t)
{
  static ATerm a_0 (ATerm t)
  {
    ATerm g_6 = NULL;
    g_6 = t;
    {
      ATerm s_3 = t;
      int t_3 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_4 = NULL,g_4 = NULL,h_4 = NULL;
          t = SSL_is_string(g_6);
          h_4 = t;
          t = i_65(t);
          g_4 = t;
          t = (ATerm) ATinsert(ATempty, h_4);
          d_4 = t;
          t = SSL_print(g_4, d_4);
          t = (ATerm) ATmakeAppl(sym__2, g_4, (ATerm) ATinsert(ATempty, h_4));
          LocalPopChoice(t_3);
        }
      else
        {
          t = s_3;
          {
            ATerm f_5 = NULL,g_5 = NULL;
            t = g_6;
            t = i_65(t);
            g_5 = t;
            t = (ATerm) ATinsert(ATempty, g_6);
            f_5 = t;
            t = SSL_printascii(g_5, f_5);
            t = (ATerm) ATmakeAppl(sym__2, g_5, (ATerm) ATinsert(ATempty, g_6));
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
  ATerm e_11 = NULL,f_11 = NULL,h_11 = NULL,j_11 = NULL,m_11 = NULL,o_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL,w_11 = NULL;
  t_11 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_11 = ATgetFirst((ATermList) t);
      w_11 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm q_5 = NULL,y_5 = NULL,o_2 = NULL;
        t = SSLgetAnnotations(t_11);
        q_5 = t;
        t = w_11;
        t = r_0(t);
        y_5 = t;
        t = (ATerm) ATinsert(CheckATermList(y_5), u_11);
        o_2 = t;
        t = SSLsetAnnotations(o_2, q_5);
      }
    }
  else
    {
      if(match_cons(t, sym_term_9))
        {
          u_11 = ATgetArgument(t, 0);
          w_11 = ATgetArgument(t, 1);
          s_11 = ATgetArgument(t, 2);
          e_11 = ATgetArgument(t, 3);
          f_11 = ATgetArgument(t, 4);
          h_11 = ATgetArgument(t, 5);
          j_11 = ATgetArgument(t, 6);
          m_11 = ATgetArgument(t, 7);
          o_11 = ATgetArgument(t, 8);
          {
            ATerm u_6 = NULL,h_7 = NULL,i_7 = NULL,l_7 = NULL,r_2 = NULL;
            t = SSLgetAnnotations(t_11);
            u_6 = t;
            t = h_11;
            t = r_0(t);
            h_7 = t;
            t = j_11;
            t = r_0(t);
            i_7 = t;
            t = m_11;
            t = r_0(t);
            l_7 = t;
            t = (ATerm) ATmakeAppl(sym_term_9, u_11, w_11, s_11, e_11, f_11, h_7, i_7, l_7, o_11);
            r_2 = t;
            t = SSLsetAnnotations(r_2, u_6);
          }
        }
      else
        {
          if(match_cons(t, sym_appl_3))
            {
              u_11 = ATgetArgument(t, 0);
              w_11 = ATgetArgument(t, 1);
              s_11 = ATgetArgument(t, 2);
              {
                ATerm w_8 = NULL,n_9 = NULL,v_2 = NULL;
                t = SSLgetAnnotations(t_11);
                w_8 = t;
                t = s_11;
                t = map_1_0(r_0, t);
                n_9 = t;
                t = (ATerm) ATmakeAppl(sym_appl_3, u_11, w_11, n_9);
                v_2 = t;
                t = SSLsetAnnotations(v_2, w_8);
              }
            }
          else
            {
              if(match_cons(t, sym_list_3))
                {
                  u_11 = ATgetArgument(t, 0);
                  w_11 = ATgetArgument(t, 1);
                  s_11 = ATgetArgument(t, 2);
                  {
                    ATerm d_10 = NULL,i_10 = NULL,i_3 = NULL;
                    t = SSLgetAnnotations(t_11);
                    d_10 = t;
                    t = s_11;
                    t = map_1_0(r_0, t);
                    i_10 = t;
                    t = (ATerm) ATmakeAppl(sym_list_3, u_11, w_11, i_10);
                    i_3 = t;
                    t = SSLsetAnnotations(i_3, d_10);
                  }
                }
              else
                {
                  ATerm i_11 = NULL,n_11 = NULL,k_3 = NULL;
                  if(match_cons(t, sym_lex_2))
                    {
                      u_11 = ATgetArgument(t, 0);
                      w_11 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(t_11);
                  i_11 = t;
                  t = u_11;
                  t = r_0(t);
                  n_11 = t;
                  t = (ATerm) ATmakeAppl(sym_lex_2, n_11, w_11);
                  k_3 = t;
                  t = SSLsetAnnotations(k_3, i_11);
                }
            }
        }
    }
  return(t);
}
ATerm leaves_3_0 (ATerm j_69 (ATerm), ATerm k_69 (ATerm), ATerm l_69 (ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm i_12 (ATerm t)
  {
    ATerm v_3 = t;
    int w_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_69(t);
        t = j_69(t);
        LocalPopChoice(w_3);
      }
    else
      {
        t = v_3;
        {
          ATerm x_3 = t;
          int y_3 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_69(i_12, t);
              LocalPopChoice(y_3);
            }
          else
            {
              t = x_3;
              t = SRTS_all(i_12, t);
            }
        }
      }
    return(t);
  }
  t = i_12(t);
  return(t);
}
static ATerm f_0 (ATerm t)
{
  ATerm g_13 = NULL;
  g_13 = t;
  t = SSL_is_string(g_13);
  return(t);
}
ATerm asfix_yield_1_0 (ATerm h_65 (ATerm), ATerm t)
{
  ATerm z_3 = t;
  int a_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      static ATerm b_0 (ATerm t)
      {
        ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL;
        e_13 = t;
        t = h_65(t);
        d_13 = t;
        t = (ATerm) ATinsert(ATempty, e_13);
        c_13 = t;
        t = SSL_print(d_13, c_13);
        t = (ATerm) ATmakeAppl(sym__2, d_13, (ATerm) ATinsert(ATempty, e_13));
        return(t);
      }
      ATerm b_4 = t;
      int c_4 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_12 = NULL,m_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,b_13 = NULL,e_4 = NULL;
          b_13 = t;
          if(match_cons(t, sym_term_9))
            {
              m_12 = ATgetArgument(t, 0);
              o_12 = ATgetArgument(t, 1);
              p_12 = ATgetArgument(t, 2);
              q_12 = ATgetArgument(t, 3);
              r_12 = ATgetArgument(t, 4);
              u_12 = ATgetArgument(t, 5);
              v_12 = ATgetArgument(t, 6);
              w_12 = ATgetArgument(t, 7);
              x_12 = ATgetArgument(t, 8);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(b_13);
          j_12 = t;
          t = (ATerm) ATmakeAppl(sym_term_9, m_12, o_12, p_12, q_12, r_12, u_12, v_12, w_12, x_12);
          e_4 = t;
          t = SSLsetAnnotations(e_4, j_12);
          LocalPopChoice(c_4);
        }
      else
        {
          t = b_4;
          if(match_cons(t, sym_appl_3))
            {
              ATerm i_4 = ATgetArgument(t, 0);
              if(match_cons(i_4, sym_prod_9))
                {
                  ATerm m_4 = ATgetArgument(i_4, 0);
                  if(match_cons(m_4, sym_id_1))
                    {
                      ATerm h_5 = ATgetArgument(m_4, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm n_4 = ATgetArgument(i_4, 1);
                  }
                  {
                    ATerm q_4 = ATgetArgument(i_4, 2);
                  }
                  {
                    ATerm r_4 = ATgetArgument(i_4, 3);
                  }
                  {
                    ATerm u_4 = ATgetArgument(i_4, 4);
                  }
                  {
                    ATerm v_4 = ATgetArgument(i_4, 5);
                  }
                  {
                    ATerm x_4 = ATgetArgument(i_4, 6);
                  }
                  {
                    ATerm z_4 = ATgetArgument(i_4, 7);
                  }
                  {
                    ATerm e_5 = ATgetArgument(i_4, 8);
                  }
                }
              else
                _fail(t);
              {
                ATerm k_4 = ATgetArgument(t, 1);
              }
              {
                ATerm l_4 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
        }
      t = leaves_3_0(b_0, f_0, skip1_1_0, t);
      LocalPopChoice(a_4);
    }
  else
    {
      t = z_3;
      {
        ATerm i_5 = t;
        int j_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_5 = t;
            int m_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,f_4 = NULL;
                k_13 = t;
                if(match_cons(t, sym_parsetree_2))
                  {
                    i_13 = ATgetArgument(t, 0);
                    j_13 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(k_13);
                h_13 = t;
                t = (ATerm) ATmakeAppl(sym_parsetree_2, i_13, j_13);
                f_4 = t;
                t = SSLsetAnnotations(f_4, h_13);
                LocalPopChoice(m_5);
              }
            else
              {
                t = k_5;
                {
                  ATerm l_13 = NULL,p_13 = NULL,w_13 = NULL,x_13 = NULL,j_4 = NULL;
                  x_13 = t;
                  if(match_cons(t, sym_appl_2))
                    {
                      p_13 = ATgetArgument(t, 0);
                      w_13 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(x_13);
                  l_13 = t;
                  t = (ATerm) ATmakeAppl(sym_appl_2, p_13, w_13);
                  j_4 = t;
                  t = SSLsetAnnotations(j_4, l_13);
                }
              }
            t = asfix_yield2_1_0(h_65, t);
            LocalPopChoice(j_5);
          }
        else
          {
            t = i_5;
            {
              ATerm n_5 = t;
              int o_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = literal_1_0(h_65, t);
                  LocalPopChoice(o_5);
                }
              else
                {
                  t = n_5;
                  {
                    ATerm y_13 = NULL,z_13 = NULL,c_14 = NULL;
                    t = term_r_5;
                    z_13 = t;
                    t = (ATerm) ATinsert(ATempty, term_s_5);
                    c_14 = t;
                    t = SSL_printnl(z_13, c_14);
                    t = term_u_5;
                    y_13 = t;
                    t = SSL_exit(y_13);
                    t = (ATerm) ATinsert(ATempty, term_s_5);
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm z_14 (ATerm p_14, ATerm t)
{
  t = SSL_fclose(p_14);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_14 = NULL,x_14 = NULL;
  x_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_14 = ATgetArgument(t, 0);
      {
        ATerm v_5 = t;
        int w_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(u_14);
            LocalPopChoice(w_5);
          }
        else
          {
            t = v_5;
            t = z_14(x_14, t);
          }
      }
    }
  else
    {
      t = z_14(x_14, t);
    }
  return(t);
}
static ATerm b_3 (ATerm v_15, ATerm t)
{
  t = SSL_read_term_from_stream(v_15);
  return(t);
}
static ATerm c_3 (ATerm r_29, ATerm s_29, ATerm t)
{
  t = SSL_strcat(r_29, s_29);
  return(t);
}
static ATerm d_3 (ATerm a_31, ATerm b_31, ATerm t)
{
  ATerm d_15 = NULL;
  t = SSL_fopen(a_31, b_31);
  d_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_15);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_15 = NULL;
  t = SSL_stdin_stream();
  e_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_15);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_15 = NULL;
  t = SSL_stdout_stream();
  f_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_15);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm g_15 = NULL;
  t = SSL_stderr_stream();
  g_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_15);
  return(t);
}
static ATerm c_18 (ATerm r_15, ATerm t)
{
  ATerm s_15 = NULL;
  t = SSL_explode_term(r_15);
  if(match_cons(t, sym__2))
    {
      ATerm x_5 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_5) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_5 = ATgetArgument(t, 1);
        if(((ATgetType(z_5) == AT_LIST) && !(ATisEmpty(z_5))))
          {
            s_15 = ATgetFirst((ATermList) z_5);
            {
              ATerm a_6 = (ATerm) ATgetNext((ATermList) z_5);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = s_15;
  if(match_cons(t, sym_stderr_0))
    {
      t = s_15;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = s_15;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = s_15;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm d_18 (ATerm a_16, ATerm d_16, ATerm g_16, ATerm t)
{
  ATerm h_16 = NULL,k_16 = NULL,m_16 = NULL,t_16 = NULL,o_4 = NULL;
  t = SSLgetAnnotations(g_16);
  m_16 = t;
  t = a_16;
  if(match_cons(t, sym_Path_1))
    {
      t_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_16, d_16);
  o_4 = t;
  t = SSLsetAnnotations(o_4, m_16);
  if(match_cons(t, sym__2))
    {
      h_16 = ATgetArgument(t, 0);
      k_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_3(h_16, k_16, t);
  return(t);
}
static ATerm e_18 (ATerm x_16, ATerm y_16, ATerm z_16, ATerm t)
{
  ATerm e_17 = NULL,f_17 = NULL,k_17 = NULL,p_17 = NULL,p_4 = NULL;
  t = SSLgetAnnotations(z_16);
  k_17 = t;
  t = SSL_is_string(x_16);
  p_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_17, y_16);
  p_4 = t;
  t = SSLsetAnnotations(p_4, k_17);
  if(match_cons(t, sym__2))
    {
      e_17 = ATgetArgument(t, 0);
      f_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_3(e_17, f_17, t);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm t_17 = NULL,y_17 = NULL,b_18 = NULL;
  t_17 = t;
  if(match_cons(t, sym__2))
    {
      y_17 = ATgetArgument(t, 0);
      b_18 = ATgetArgument(t, 1);
      {
        ATerm b_6 = t;
        int c_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_18(t_17, t);
            LocalPopChoice(c_6);
          }
        else
          {
            t = b_6;
            {
              ATerm d_6 = t;
              int e_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = d_18(y_17, b_18, t_17, t);
                  LocalPopChoice(e_6);
                }
              else
                {
                  t = d_6;
                  t = e_18(y_17, b_18, t_17, t);
                }
            }
          }
      }
    }
  else
    {
      t = c_18(t_17, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm m_18 = NULL,n_18 = NULL,o_18 = NULL,w_18 = NULL;
  w_18 = t;
  {
    ATerm f_6 = t;
    int h_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, w_18, term_i_6);
        t = e_3(t);
        LocalPopChoice(h_6);
      }
    else
      {
        t = f_6;
        {
          ATerm n_12 = NULL,s_12 = NULL;
          t = term_j_6;
          s_12 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_j_6, w_18);
          t = c_3(s_12, w_18, t);
          n_12 = t;
          t = SSL_perror(n_12);
          _fail(t);
        }
      }
  }
  n_18 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_3(o_18, t);
  m_18 = t;
  t = n_18;
  t = fclose_0_0(t);
  t = m_18;
  return(t);
}
ATerm fetch_1_0 (ATerm c_74 (ATerm), ATerm t)
{
  static ATerm m_20 (ATerm t)
  {
    ATerm j_20 = NULL,k_20 = NULL,l_20 = NULL;
    j_20 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_20 = ATgetFirst((ATermList) t);
        l_20 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm k_6 = t;
      int l_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_13 = NULL,o_13 = NULL,s_4 = NULL;
          t = SSLgetAnnotations(j_20);
          f_13 = t;
          t = k_20;
          t = c_74(t);
          o_13 = t;
          t = (ATerm) ATinsert(CheckATermList(l_20), o_13);
          s_4 = t;
          t = SSLsetAnnotations(s_4, f_13);
          LocalPopChoice(l_6);
        }
      else
        {
          t = k_6;
          {
            ATerm b_14 = NULL,f_14 = NULL,t_4 = NULL;
            t = SSLgetAnnotations(j_20);
            b_14 = t;
            t = l_20;
            t = m_20(t);
            f_14 = t;
            t = (ATerm) ATinsert(CheckATermList(f_14), k_20);
            t_4 = t;
            t = SSLsetAnnotations(t_4, b_14);
          }
        }
    }
    return(t);
  }
  t = m_20(t);
  return(t);
}
ATerm debug_1_0 (ATerm h_73 (ATerm), ATerm t)
{
  ATerm p_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL;
  p_20 = t;
  t = h_73(t);
  q_20 = t;
  t = term_r_5;
  r_20 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_20), q_20);
  s_20 = t;
  t = SSL_printnl(r_20, s_20);
  t = p_20;
  return(t);
}
static ATerm g_21 (ATerm w_20, ATerm t)
{
  t = w_20;
  {
    ATerm m_6 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_6 = ATgetArgument(t, 0);
            ATerm o_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_6;
      }
  }
  t = term_p_6;
  t = debug_1_0(j_0, t);
  t = (ATerm) ATmakeAppl(sym__2, w_20, term_q_6);
  t = open_file_0_0(t);
  return(t);
}
static ATerm h_21 (ATerm y_20, ATerm z_20, ATerm a_21, ATerm t)
{
  t = SSL_open_file(y_20, z_20);
  return(t);
}
static ATerm j_0 (ATerm t)
{
  t = term_r_6;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm d_21 = NULL,e_21 = NULL,f_21 = NULL;
  d_21 = t;
  if(match_cons(t, sym__2))
    {
      e_21 = ATgetArgument(t, 0);
      f_21 = ATgetArgument(t, 1);
      {
        ATerm s_6 = t;
        int t_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_21(d_21, t);
            LocalPopChoice(t_6);
          }
        else
          {
            t = s_6;
            t = h_21(e_21, f_21, d_21, t);
          }
      }
    }
  else
    {
      t = g_21(d_21, t);
    }
  return(t);
}
static ATerm m_0 (ATerm t)
{
  ATerm j_21 = NULL;
  j_21 = t;
  if(match_string(t, "-k"))
    {
      t = j_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = j_21;
    }
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm k_21 = NULL,l_21 = NULL,m_21 = NULL;
  k_21 = t;
  t = SSL_string_to_int(k_21);
  l_21 = t;
  t = term_v_6;
  m_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_6, l_21);
  t = j_3(m_21, l_21, t);
  t = k_21;
  return(t);
}
static ATerm u_0 (ATerm t)
{
  t = term_w_6;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_0, s_0, u_0, t);
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm o_21 = NULL;
  o_21 = t;
  if(match_string(t, "-S"))
    {
      t = o_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = o_21;
    }
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm p_21 = NULL,q_21 = NULL;
  t = term_x_6;
  p_21 = t;
  t = term_y_6;
  q_21 = t;
  t = term_z_6;
  t = j_3(p_21, q_21, t);
  t = term_a_7;
  return(t);
}
static ATerm y_0 (ATerm t)
{
  t = term_b_7;
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
  ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL;
  r_21 = t;
  t = SSL_string_to_int(r_21);
  s_21 = t;
  t = term_x_6;
  t_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_6, s_21);
  t = j_3(t_21, s_21, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, r_21);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_c_7;
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
  ATerm u_21 = NULL,v_21 = NULL;
  t = term_d_7;
  u_21 = t;
  t = term_e_7;
  v_21 = t;
  t = term_f_7;
  t = j_3(u_21, v_21, t);
  t = term_g_7;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_j_7;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm k_7 = t;
  int m_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_0, x_0, y_0, t);
      LocalPopChoice(m_7);
    }
  else
    {
      t = k_7;
      {
        ATerm n_7 = t;
        int o_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(a_1, b_1, f_1, t);
            LocalPopChoice(o_7);
          }
        else
          {
            t = n_7;
            t = Option_3_0(h_1, l_1, m_1, t);
          }
      }
    }
  return(t);
}
static ATerm j_3 (ATerm r_40, ATerm s_40, ATerm t)
{
  ATerm w_21 = NULL;
  t = term_p_7;
  w_21 = t;
  t = SSL_table_put(w_21, r_40, s_40);
  t = (ATerm) ATmakeAppl(sym__3, term_p_7, r_40, s_40);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm z_21 = NULL,a_22 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_22 = NULL,c_22 = NULL,d_22 = NULL;
      t = term_e_7;
      t = e_0(t);
      b_22 = t;
      t = term_q_7;
      c_22 = t;
      t = term_r_7;
      d_22 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_7, term_r_7, b_22);
      t = h_3(c_22, d_22, b_22, t);
      _fail(t);
    }
  else
    {
      ATerm g_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_21 = ATgetFirst((ATermList) t);
          a_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_21;
      t = c_0(t);
      t = term_e_7;
      t = d_0(t);
      g_22 = t;
      t = (ATerm) ATinsert(CheckATermList(a_22), g_22);
    }
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm i_22 = NULL;
  i_22 = t;
  if(match_string(t, "-o"))
    {
      t = i_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = i_22;
    }
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm j_22 = NULL,k_22 = NULL;
  j_22 = t;
  t = term_s_7;
  k_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_7, j_22);
  t = j_3(k_22, j_22, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, j_22);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_t_7;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_1, o_1, p_1, t);
  return(t);
}
static ATerm h_3 (ATerm m_45, ATerm n_45, ATerm l_45, ATerm t)
{
  ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL;
  m_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_45, n_45);
  {
    ATerm u_7 = t;
    int v_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_7 = ATgetArgument(t, 0);
            ATerm x_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, m_45, n_45);
        t = g_3(m_45, n_45, t);
        LocalPopChoice(v_7);
      }
    else
      {
        t = u_7;
        t = (ATerm) ATempty;
      }
  }
  n_22 = t;
  t = (ATerm) ATinsert(CheckATermList(n_22), l_45);
  o_22 = t;
  t = SSL_table_put(m_45, n_45, o_22);
  t = m_22;
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm v_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_22 = NULL,a_23 = NULL,b_23 = NULL;
      t = term_e_7;
      t = p_0(t);
      z_22 = t;
      t = term_q_7;
      a_23 = t;
      t = term_r_7;
      b_23 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_7, term_r_7, z_22);
      t = h_3(a_23, b_23, z_22, t);
      _fail(t);
    }
  else
    {
      ATerm f_23 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_22 = ATgetFirst((ATermList) t);
          w_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_22;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_22 = ATgetFirst((ATermList) t);
          y_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_22;
      t = n_0(t);
      t = x_22;
      t = o_0(t);
      f_23 = t;
      t = (ATerm) ATinsert(CheckATermList(y_22), f_23);
    }
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm h_23 = NULL;
  h_23 = t;
  if(match_string(t, "-i"))
    {
      t = h_23;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = h_23;
    }
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm i_23 = NULL,j_23 = NULL;
  i_23 = t;
  t = term_y_7;
  j_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_7, i_23);
  t = j_3(j_23, i_23, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, i_23);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = term_z_7;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_1, t_1, u_1, t);
  return(t);
}
ATerm map_1_0 (ATerm s_73 (ATerm), ATerm t)
{
  static ATerm y_23 (ATerm t)
  {
    ATerm v_23 = NULL,w_23 = NULL,x_23 = NULL;
    v_23 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_23;
      }
    else
      {
        ATerm v_14 = NULL,b_15 = NULL,c_15 = NULL,w_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_23 = ATgetFirst((ATermList) t);
            x_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_23);
        v_14 = t;
        t = w_23;
        t = s_73(t);
        b_15 = t;
        t = x_23;
        t = y_23(t);
        c_15 = t;
        t = (ATerm) ATinsert(CheckATermList(c_15), b_15);
        w_4 = t;
        t = SSLsetAnnotations(w_4, v_14);
      }
    return(t);
  }
  t = y_23(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm b_24 = NULL,c_24 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_24 = ATgetFirst((ATermList) t);
      c_24 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_24 = NULL,h_24 = NULL;
        static ATerm e_2 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(g_24)), not_null(h_24));
          return(t);
        }
        t = c_24;
        t = k_0(t);
        if(((g_24 != NULL) && (g_24 != t)))
          _fail(t);
        else
          g_24 = t;
        t = b_24;
        t = i_0(t);
        if(((h_24 != NULL) && (h_24 != t)))
          _fail(t);
        else
          h_24 = t;
        t = c_24;
        t = reverse_acc_2_0(i_0, e_2, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_e_7;
      t = k_0(t);
    }
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm w_24 = NULL;
  w_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_24), term_a_8);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm l_24 = NULL,m_24 = NULL,n_24 = NULL;
  ATerm b_8 = t;
  int c_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_24 = NULL,p_24 = NULL;
      t = term_p_7;
      o_24 = t;
      t = term_d_8;
      p_24 = t;
      t = term_e_8;
      t = g_3(o_24, p_24, t);
      l_24 = t;
      LocalPopChoice(c_8);
    }
  else
    {
      t = b_8;
      {
        static ATerm f_2 (ATerm t)
        {
          ATerm q_24 = NULL,r_24 = NULL,s_24 = NULL,y_4 = NULL;
          s_24 = t;
          if(match_cons(t, sym_Program_1))
            {
              r_24 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(s_24);
          q_24 = t;
          t = r_24;
          if(((l_24 != NULL) && (l_24 != t)))
            _fail(t);
          else
            l_24 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, r_24);
          y_4 = t;
          t = SSLsetAnnotations(y_4, q_24);
          return(t);
        }
        t = fetch_1_0(f_2, t);
      }
    }
  {
    ATerm f_8 = t;
    int g_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_8), not_null(l_24)), term_h_8);
        t = echo_0_0(t);
        LocalPopChoice(g_8);
      }
    else
      {
        t = f_8;
      }
  }
  t = term_j_8;
  t = echo_0_0(t);
  t = term_q_7;
  m_24 = t;
  t = term_r_7;
  n_24 = t;
  t = term_k_8;
  t = g_3(m_24, n_24, t);
  t = reverse_acc_2_0(_id, g_2, t);
  t = map_1_0(j_2, t);
  {
    ATerm l_8 = t;
    int m_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_8), term_o_8), term_n_8);
        t = echo_0_0(t);
        LocalPopChoice(m_8);
      }
    else
      {
        t = l_8;
      }
  }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL;
  a_25 = t;
  {
    ATerm q_8 = t;
    int r_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = a_25;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm s_8 = ATgetFirst((ATermList) t);
                ATerm t_8 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = a_25;
          }
        LocalPopChoice(r_8);
      }
    else
      {
        t = q_8;
        t = (ATerm) ATinsert(ATempty, a_25);
      }
  }
  b_25 = t;
  t = term_u_8;
  c_25 = t;
  t = SSL_printnl(c_25, b_25);
  t = a_25;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm g_25 = NULL,h_25 = NULL;
  t = term_p_7;
  g_25 = t;
  t = term_d_8;
  h_25 = t;
  t = term_e_8;
  t = g_3(g_25, h_25, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm g_3 (ATerm d_47, ATerm e_47, ATerm t)
{
  t = SSL_table_get(d_47, e_47);
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
  ATerm i_25 = NULL,j_25 = NULL;
  t = term_v_8;
  i_25 = t;
  t = term_e_7;
  j_25 = t;
  t = term_x_8;
  t = j_3(i_25, j_25, t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_y_8;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL;
  t = term_v_8;
  m_25 = t;
  t = term_e_7;
  n_25 = t;
  t = term_x_8;
  t = j_3(m_25, n_25, t);
  t = term_z_8;
  k_25 = t;
  t = term_e_7;
  l_25 = t;
  t = term_a_9;
  t = j_3(k_25, l_25, t);
  t = term_b_9;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_c_9;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm d_9 = t;
  int e_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_2, l_2, m_2, t);
      LocalPopChoice(e_9);
    }
  else
    {
      t = d_9;
      t = Option_3_0(n_2, p_2, q_2, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm i_51 (ATerm), ATerm j_51 (ATerm), ATerm t)
{
  ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL,d_5 = NULL;
  t_25 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_25 = ATgetFirst((ATermList) t);
      q_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_25);
  o_25 = t;
  t = p_25;
  t = i_51(t);
  r_25 = t;
  t = q_25;
  t = j_51(t);
  s_25 = t;
  t = (ATerm) ATinsert(CheckATermList(s_25), r_25);
  d_5 = t;
  t = SSLsetAnnotations(d_5, o_25);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm t_93 (ATerm), ATerm t)
{
  ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL,d_26 = NULL,e_26 = NULL,l_5 = NULL;
  y_25 = t;
  {
    ATerm f_9 = t;
    int g_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_9;
        t = t_93(t);
        LocalPopChoice(g_9);
      }
    else
      {
        t = f_9;
      }
  }
  t = y_25;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_26 = ATgetFirst((ATermList) t);
      b_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_25);
  z_25 = t;
  t = term_d_8;
  e_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_8, a_26);
  t = j_3(e_26, a_26, t);
  t = b_26;
  {
    static ATerm o_26 (ATerm t)
    {
      ATerm i_9 = t;
      int j_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_9 = t;
          int l_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_26 = NULL;
              h_26 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = h_26;
              LocalPopChoice(l_9);
            }
          else
            {
              t = k_9;
              t = t_93(t);
              t = Cons_2_0(_id, o_26, t);
            }
          LocalPopChoice(j_9);
        }
      else
        {
          t = i_9;
          {
            ATerm k_26 = NULL,l_26 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                k_26 = ATgetFirst((ATermList) t);
                l_26 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(l_26), (ATerm) ATmakeAppl(sym_Undefined_1, k_26));
          }
        }
      return(t);
    }
    t = o_26(t);
  }
  d_26 = t;
  t = (ATerm) ATinsert(CheckATermList(d_26), (ATerm) ATmakeAppl(sym_Program_1, a_26));
  l_5 = t;
  t = SSLsetAnnotations(l_5, z_25);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm a_27 = NULL;
  a_27 = t;
  if(match_string(t, "--help"))
    {
      t = a_27;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = a_27;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = a_27;
        }
    }
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm b_27 = NULL,c_27 = NULL;
  t = term_m_9;
  b_27 = t;
  t = term_e_7;
  c_27 = t;
  t = term_o_9;
  t = j_3(b_27, c_27, t);
  t = term_p_9;
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = term_q_9;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm s_93 (ATerm), ATerm t)
{
  ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL,y_26 = NULL,z_26 = NULL;
  v_26 = t;
  t = term_q_7;
  x_26 = t;
  t = term_r_7;
  y_26 = t;
  t = (ATerm) ATempty;
  z_26 = t;
  t = SSL_table_put(x_26, y_26, z_26);
  t = v_26;
  {
    static ATerm s_2 (ATerm t)
    {
      ATerm r_9 = t;
      int s_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_93(t);
          LocalPopChoice(s_9);
        }
      else
        {
          t = r_9;
          {
            ATerm t_9 = t;
            int u_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(t_2, w_2, x_2, t);
                LocalPopChoice(u_9);
              }
            else
              {
                t = t_9;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(s_2, t);
  }
  {
    ATerm v_9 = t;
    int w_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_27 = NULL;
        n_27 = t;
        {
          ATerm x_9 = t;
          int y_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_15 = NULL;
              t = n_27;
              {
                ATerm z_9 = t;
                int a_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm o_15 = NULL,p_15 = NULL;
                    t = term_p_7;
                    o_15 = t;
                    t = term_m_9;
                    p_15 = t;
                    t = term_b_10;
                    t = g_3(o_15, p_15, t);
                    LocalPopChoice(a_10);
                  }
                else
                  {
                    t = z_9;
                    t = fetch_1_0(z_2, t);
                  }
              }
              t = n_27;
              t = default_system_usage_0_0(t);
              t = term_y_6;
              n_15 = t;
              t = SSL_exit(n_15);
              LocalPopChoice(y_9);
            }
          else
            {
              t = x_9;
              {
                ATerm y_15 = NULL,z_15 = NULL,b_16 = NULL;
                t = term_p_7;
                z_15 = t;
                t = term_v_8;
                b_16 = t;
                t = term_c_10;
                t = g_3(z_15, b_16, t);
                t = n_27;
                t = default_system_about_0_0(t);
                t = term_y_6;
                y_15 = t;
                t = SSL_exit(y_15);
              }
            }
        }
        LocalPopChoice(w_9);
      }
    else
      {
        t = v_9;
        {
          ATerm e_10 = t;
          int f_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_27 = NULL,p_27 = NULL,q_27 = NULL;
              static ATerm a_3 (ATerm t)
              {
                ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL,p_5 = NULL;
                t_27 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    s_27 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(t_27);
                r_27 = t;
                t = s_27;
                if(((t_26 != NULL) && (t_26 != t)))
                  _fail(t);
                else
                  t_26 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, s_27);
                p_5 = t;
                t = SSLsetAnnotations(p_5, r_27);
                return(t);
              }
              t = fetch_1_0(a_3, t);
              t = term_r_5;
              p_27 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_26)), term_g_10);
              q_27 = t;
              t = SSL_printnl(p_27, q_27);
              t = (ATerm) ATmakeAppl(sym__2, term_r_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_26)), term_g_10));
              t = default_system_usage_0_0(t);
              t = term_u_5;
              o_27 = t;
              t = SSL_exit(o_27);
              LocalPopChoice(f_10);
            }
          else
            {
              t = e_10;
            }
        }
      }
  }
  u_26 = t;
  t = term_q_7;
  w_26 = t;
  t = SSL_table_destroy(w_26);
  t = u_26;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm h_10 = t;
  int j_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(j_10);
    }
  else
    {
      t = h_10;
      {
        ATerm k_10 = t;
        int l_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(l_10);
          }
        else
          {
            t = k_10;
            {
              ATerm m_10 = t;
              int n_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(l_3, m_3, n_3, t);
                  LocalPopChoice(n_10);
                }
              else
                {
                  t = m_10;
                  {
                    ATerm o_10 = t;
                    int p_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(p_10);
                      }
                    else
                      {
                        t = o_10;
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
static ATerm l_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm g_28 = NULL,h_28 = NULL;
  t = term_q_10;
  g_28 = t;
  t = term_e_7;
  h_28 = t;
  t = term_r_10;
  t = j_3(g_28, h_28, t);
  t = term_s_10;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_t_10;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm y_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL,t_5 = NULL;
  t = parse_options_1_0(f_3, t);
  z_27 = t;
  {
    ATerm u_10 = t;
    int v_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm o_3 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((y_27 != NULL) && (y_27 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                y_27 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(o_3, t);
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_27), term_q_6);
        t = open_file_0_0(t);
        LocalPopChoice(v_10);
      }
    else
      {
        t = u_10;
        t = term_u_8;
        y_27 = t;
      }
  }
  t = z_27;
  {
    ATerm w_10 = t;
    int x_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm p_3 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              if(((b_28 != NULL) && (b_28 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                b_28 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(p_3, t);
        LocalPopChoice(x_10);
      }
    else
      {
        t = w_10;
        t = term_y_10;
        b_28 = t;
      }
  }
  t = not_null(b_28);
  t = ReadFromFile_0_0(t);
  c_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_27, c_28);
  f_28 = t;
  if(match_cons(t, sym__2))
    {
      ATerm z_10 = ATgetArgument(t, 0);
      ATerm a_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_28);
  d_28 = t;
  t = c_28;
  {
    static ATerm q_3 (ATerm t)
    {
      t = not_null(y_27);
      return(t);
    }
    t = asfix_yield_1_0(q_3, t);
  }
  e_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_27, e_28);
  t_5 = t;
  t = SSLsetAnnotations(t_5, d_28);
  t = term_y_6;
  a_28 = t;
  t = SSL_exit(a_28);
  return(t);
}
