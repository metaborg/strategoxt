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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
ATerm term_v_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_f_11;
ATerm term_d_11;
ATerm term_s_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_v_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_z_8;
ATerm term_w_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_g_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_w_7;
ATerm term_v_7;
ATerm term_u_7;
ATerm term_t_7;
ATerm term_s_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_b_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_v_6;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_m_6;
ATerm term_j_6;
ATerm term_x_5;
ATerm term_w_5;
ATerm term_v_5;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(ATmakeSymbol("not in AsFix format", 0, ATtrue));
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(sym__2, term_a_7, term_b_7);
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_7);
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(sym__2, term_g_7, term_h_7);
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym__2, term_t_7, term_u_7);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("The asfix-yield utility unparses an asfix tree to flat text.\n", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("It reads from standard input and writes to standard output.\n", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(sym__2, term_j_9, term_h_7);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym__2, term_m_9, term_h_7);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym__2, term_a_10, term_h_7);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(sym__2, term_d_11, term_h_7);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm literal_1_0 (ATerm d_63 (ATerm), ATerm t);
ATerm at_tail_1_0 (ATerm y_71 (ATerm), ATerm t);
ATerm skip2_1_0 (ATerm t_0 (ATerm), ATerm t);
ATerm is_leaf_0_0 (ATerm t);
ATerm asfix_yield2_1_0 (ATerm a_63 (ATerm), ATerm t);
ATerm skip1_1_0 (ATerm r_0 (ATerm), ATerm t);
ATerm leaves_3_0 (ATerm b_67 (ATerm), ATerm c_67 (ATerm), ATerm d_67 (ATerm (ATerm), ATerm), ATerm t);
static ATerm f_0 (ATerm t);
ATerm asfix_yield_1_0 (ATerm z_62 (ATerm), ATerm t);
static ATerm q_14 (ATerm g_14, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm f_3 (ATerm u_15, ATerm t);
static ATerm g_3 (ATerm m_30, ATerm n_30, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm p_17 (ATerm j_15, ATerm t);
static ATerm u_17 (ATerm o_15, ATerm p_15, ATerm q_15, ATerm t);
static ATerm x_17 (ATerm l_16, ATerm q_16, ATerm r_16, ATerm t);
static ATerm h_3 (ATerm t);
static ATerm j_0 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm u_71 (ATerm), ATerm t);
static ATerm p_20 (ATerm f_20, ATerm t);
static ATerm q_20 (ATerm h_20, ATerm i_20, ATerm j_20, ATerm t);
static ATerm m_0 (ATerm t);
ATerm open_file_0_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm w_0 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm n_3 (ATerm g_39, ATerm h_39, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm l_3 (ATerm g_44, ATerm h_44, ATerm f_44, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm s_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm c_2 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm j_3 (ATerm d_29, ATerm e_29, ATerm t);
ATerm debug_1_0 (ATerm z_70 (ATerm), ATerm t);
ATerm map_1_0 (ATerm k_71 (ATerm), ATerm t);
static ATerm j_2 (ATerm t);
static ATerm p_2 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm k_3 (ATerm x_45, ATerm y_45, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm b_49 (ATerm), ATerm c_49 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm s_90 (ATerm), ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
ATerm parse_options_1_0 (ATerm r_90 (ATerm), ATerm t);
static ATerm m_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm literal_1_0 (ATerm d_63 (ATerm), ATerm t)
{
  ATerm g_0 = NULL,l_0 = NULL,v_0 = NULL,y_0 = NULL;
  y_0 = t;
  t = SSL_is_string(y_0);
  v_0 = t;
  t = d_63(t);
  l_0 = t;
  t = (ATerm) ATinsert(ATempty, v_0);
  g_0 = t;
  t = SSL_print(l_0, g_0);
  t = (ATerm) ATmakeAppl(sym__2, l_0, (ATerm) ATinsert(ATempty, v_0));
  return(t);
}
ATerm at_tail_1_0 (ATerm y_71 (ATerm), ATerm t)
{
  ATerm c_1 = NULL,e_1 = NULL,f_1 = NULL,h_1 = NULL,i_1 = NULL,r_1 = NULL;
  i_1 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_1 = ATgetFirst((ATermList) t);
      f_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_1);
  c_1 = t;
  t = f_1;
  t = y_71(t);
  h_1 = t;
  t = (ATerm) ATinsert(CheckATermList(h_1), e_1);
  r_1 = t;
  t = SSLsetAnnotations(r_1, c_1);
  return(t);
}
ATerm skip2_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  ATerm z_4 = NULL,a_5 = NULL,b_5 = NULL;
  z_4 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_5 = ATgetFirst((ATermList) t);
      b_5 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm h_0 = NULL,q_0 = NULL,t_1 = NULL;
        t = SSLgetAnnotations(z_4);
        h_0 = t;
        t = b_5;
        t = at_tail_1_0(t_0, t);
        q_0 = t;
        t = (ATerm) ATinsert(CheckATermList(q_0), a_5);
        t_1 = t;
        t = SSLsetAnnotations(t_1, h_0);
      }
    }
  else
    {
      if(match_cons(t, sym_appl_2))
        {
          a_5 = ATgetArgument(t, 0);
          b_5 = ATgetArgument(t, 1);
          {
            ATerm d_1 = NULL,k_1 = NULL,u_1 = NULL;
            t = SSLgetAnnotations(z_4);
            d_1 = t;
            t = b_5;
            t = map_1_0(t_0, t);
            k_1 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, a_5, k_1);
            u_1 = t;
            t = SSLsetAnnotations(u_1, d_1);
          }
        }
      else
        {
          if(match_cons(t, sym_amb_1))
            {
              a_5 = ATgetArgument(t, 0);
              {
                ATerm x_1 = NULL,z_1 = NULL,d_2 = NULL,g_2 = NULL,l_2 = NULL,m_2 = NULL,w_1 = NULL,v_1 = NULL;
                t = SSLgetAnnotations(z_4);
                x_1 = t;
                t = a_5;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    d_2 = ATgetFirst((ATermList) t);
                    g_2 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(a_5);
                z_1 = t;
                t = d_2;
                t = t_0(t);
                l_2 = t;
                t = (ATerm) ATinsert(CheckATermList(g_2), l_2);
                v_1 = t;
                t = SSLsetAnnotations(v_1, z_1);
                m_2 = t;
                t = (ATerm) ATmakeAppl(sym_amb_1, m_2);
                w_1 = t;
                t = SSLsetAnnotations(w_1, x_1);
              }
            }
          else
            {
              if(match_cons(t, sym_parsetree_2))
                {
                  a_5 = ATgetArgument(t, 0);
                  b_5 = ATgetArgument(t, 1);
                  {
                    ATerm z_2 = NULL,c_3 = NULL,a_2 = NULL;
                    t = SSLgetAnnotations(z_4);
                    z_2 = t;
                    t = a_5;
                    t = t_0(t);
                    c_3 = t;
                    t = (ATerm) ATmakeAppl(sym_parsetree_2, c_3, b_5);
                    a_2 = t;
                    t = SSLsetAnnotations(a_2, z_2);
                  }
                }
              else
                {
                  ATerm v_3 = NULL,z_3 = NULL,b_2 = NULL;
                  if(match_cons(t, sym_flatlex_2))
                    {
                      a_5 = ATgetArgument(t, 0);
                      b_5 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(z_4);
                  v_3 = t;
                  t = b_5;
                  t = t_0(t);
                  z_3 = t;
                  t = (ATerm) ATmakeAppl(sym_flatlex_2, a_5, z_3);
                  b_2 = t;
                  t = SSLsetAnnotations(b_2, v_3);
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
ATerm asfix_yield2_1_0 (ATerm a_63 (ATerm), ATerm t)
{
  static ATerm a_0 (ATerm t)
  {
    ATerm d_6 = NULL;
    d_6 = t;
    {
      ATerm w_3 = t;
      int x_3 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_4 = NULL,k_4 = NULL,l_4 = NULL;
          t = SSL_is_string(d_6);
          l_4 = t;
          t = a_63(t);
          k_4 = t;
          t = (ATerm) ATinsert(ATempty, l_4);
          h_4 = t;
          t = SSL_print(k_4, h_4);
          t = (ATerm) ATmakeAppl(sym__2, k_4, (ATerm) ATinsert(ATempty, l_4));
          LocalPopChoice(x_3);
        }
      else
        {
          t = w_3;
          {
            ATerm j_5 = NULL,k_5 = NULL;
            t = d_6;
            t = a_63(t);
            k_5 = t;
            t = (ATerm) ATinsert(ATempty, d_6);
            j_5 = t;
            t = SSL_printascii(k_5, j_5);
            t = (ATerm) ATmakeAppl(sym__2, k_5, (ATerm) ATinsert(ATempty, d_6));
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
  ATerm z_10 = NULL,b_11 = NULL,e_11 = NULL,g_11 = NULL,k_11 = NULL,m_11 = NULL,o_11 = NULL,p_11 = NULL,s_11 = NULL,u_11 = NULL;
  p_11 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_11 = ATgetFirst((ATermList) t);
      u_11 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_5 = NULL,c_6 = NULL,k_2 = NULL;
        t = SSLgetAnnotations(p_11);
        r_5 = t;
        t = u_11;
        t = r_0(t);
        c_6 = t;
        t = (ATerm) ATinsert(CheckATermList(c_6), s_11);
        k_2 = t;
        t = SSLsetAnnotations(k_2, r_5);
      }
    }
  else
    {
      if(match_cons(t, sym_term_9))
        {
          s_11 = ATgetArgument(t, 0);
          u_11 = ATgetArgument(t, 1);
          o_11 = ATgetArgument(t, 2);
          z_10 = ATgetArgument(t, 3);
          b_11 = ATgetArgument(t, 4);
          e_11 = ATgetArgument(t, 5);
          g_11 = ATgetArgument(t, 6);
          k_11 = ATgetArgument(t, 7);
          m_11 = ATgetArgument(t, 8);
          {
            ATerm u_6 = NULL,l_7 = NULL,o_7 = NULL,p_7 = NULL,n_2 = NULL;
            t = SSLgetAnnotations(p_11);
            u_6 = t;
            t = e_11;
            t = r_0(t);
            l_7 = t;
            t = g_11;
            t = r_0(t);
            o_7 = t;
            t = k_11;
            t = r_0(t);
            p_7 = t;
            t = (ATerm) ATmakeAppl(sym_term_9, s_11, u_11, o_11, z_10, b_11, l_7, o_7, p_7, m_11);
            n_2 = t;
            t = SSLsetAnnotations(n_2, u_6);
          }
        }
      else
        {
          if(match_cons(t, sym_appl_3))
            {
              s_11 = ATgetArgument(t, 0);
              u_11 = ATgetArgument(t, 1);
              o_11 = ATgetArgument(t, 2);
              {
                ATerm a_9 = NULL,r_9 = NULL,o_2 = NULL;
                t = SSLgetAnnotations(p_11);
                a_9 = t;
                t = o_11;
                t = map_1_0(r_0, t);
                r_9 = t;
                t = (ATerm) ATmakeAppl(sym_appl_3, s_11, u_11, r_9);
                o_2 = t;
                t = SSLsetAnnotations(o_2, a_9);
              }
            }
          else
            {
              if(match_cons(t, sym_list_3))
                {
                  s_11 = ATgetArgument(t, 0);
                  u_11 = ATgetArgument(t, 1);
                  o_11 = ATgetArgument(t, 2);
                  {
                    ATerm h_10 = NULL,m_10 = NULL,r_2 = NULL;
                    t = SSLgetAnnotations(p_11);
                    h_10 = t;
                    t = o_11;
                    t = map_1_0(r_0, t);
                    m_10 = t;
                    t = (ATerm) ATmakeAppl(sym_list_3, s_11, u_11, m_10);
                    r_2 = t;
                    t = SSLsetAnnotations(r_2, h_10);
                  }
                }
              else
                {
                  ATerm j_11 = NULL,q_11 = NULL,s_2 = NULL;
                  if(match_cons(t, sym_lex_2))
                    {
                      s_11 = ATgetArgument(t, 0);
                      u_11 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(p_11);
                  j_11 = t;
                  t = s_11;
                  t = r_0(t);
                  q_11 = t;
                  t = (ATerm) ATmakeAppl(sym_lex_2, q_11, u_11);
                  s_2 = t;
                  t = SSLsetAnnotations(s_2, j_11);
                }
            }
        }
    }
  return(t);
}
ATerm leaves_3_0 (ATerm b_67 (ATerm), ATerm c_67 (ATerm), ATerm d_67 (ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm d_12 (ATerm t)
  {
    ATerm b_4 = t;
    int c_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_67(t);
        t = b_67(t);
        LocalPopChoice(c_4);
      }
    else
      {
        t = b_4;
        {
          ATerm d_4 = t;
          int e_4 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_67(d_12, t);
              LocalPopChoice(e_4);
            }
          else
            {
              t = d_4;
              t = SRTS_all(d_12, t);
            }
        }
      }
    return(t);
  }
  t = d_12(t);
  return(t);
}
static ATerm f_0 (ATerm t)
{
  ATerm z_12 = NULL;
  z_12 = t;
  t = SSL_is_string(z_12);
  return(t);
}
ATerm asfix_yield_1_0 (ATerm z_62 (ATerm), ATerm t)
{
  ATerm f_4 = t;
  int g_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      static ATerm b_0 (ATerm t)
      {
        ATerm v_12 = NULL,x_12 = NULL,y_12 = NULL;
        y_12 = t;
        t = z_62(t);
        x_12 = t;
        t = (ATerm) ATinsert(ATempty, y_12);
        v_12 = t;
        t = SSL_print(x_12, v_12);
        t = (ATerm) ATmakeAppl(sym__2, x_12, (ATerm) ATinsert(ATempty, y_12));
        return(t);
      }
      ATerm i_4 = t;
      int j_4 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL,p_12 = NULL,q_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,t_3 = NULL;
          u_12 = t;
          if(match_cons(t, sym_term_9))
            {
              i_12 = ATgetArgument(t, 0);
              j_12 = ATgetArgument(t, 1);
              k_12 = ATgetArgument(t, 2);
              l_12 = ATgetArgument(t, 3);
              m_12 = ATgetArgument(t, 4);
              p_12 = ATgetArgument(t, 5);
              q_12 = ATgetArgument(t, 6);
              s_12 = ATgetArgument(t, 7);
              t_12 = ATgetArgument(t, 8);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(u_12);
          h_12 = t;
          t = (ATerm) ATmakeAppl(sym_term_9, i_12, j_12, k_12, l_12, m_12, p_12, q_12, s_12, t_12);
          t_3 = t;
          t = SSLsetAnnotations(t_3, h_12);
          LocalPopChoice(j_4);
        }
      else
        {
          t = i_4;
          if(match_cons(t, sym_appl_3))
            {
              ATerm o_4 = ATgetArgument(t, 0);
              if(match_cons(o_4, sym_prod_9))
                {
                  ATerm t_4 = ATgetArgument(o_4, 0);
                  if(match_cons(t_4, sym_id_1))
                    {
                      ATerm m_5 = ATgetArgument(t_4, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm u_4 = ATgetArgument(o_4, 1);
                  }
                  {
                    ATerm w_4 = ATgetArgument(o_4, 2);
                  }
                  {
                    ATerm y_4 = ATgetArgument(o_4, 3);
                  }
                  {
                    ATerm d_5 = ATgetArgument(o_4, 4);
                  }
                  {
                    ATerm f_5 = ATgetArgument(o_4, 5);
                  }
                  {
                    ATerm h_5 = ATgetArgument(o_4, 6);
                  }
                  {
                    ATerm i_5 = ATgetArgument(o_4, 7);
                  }
                  {
                    ATerm l_5 = ATgetArgument(o_4, 8);
                  }
                }
              else
                _fail(t);
              {
                ATerm p_4 = ATgetArgument(t, 1);
              }
              {
                ATerm r_4 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
        }
      t = leaves_3_0(b_0, f_0, skip1_1_0, t);
      LocalPopChoice(g_4);
    }
  else
    {
      t = f_4;
      {
        ATerm n_5 = t;
        int o_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_5 = t;
            int q_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,y_3 = NULL;
                f_13 = t;
                if(match_cons(t, sym_parsetree_2))
                  {
                    d_13 = ATgetArgument(t, 0);
                    e_13 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(f_13);
                c_13 = t;
                t = (ATerm) ATmakeAppl(sym_parsetree_2, d_13, e_13);
                y_3 = t;
                t = SSLsetAnnotations(y_3, c_13);
                LocalPopChoice(q_5);
              }
            else
              {
                t = p_5;
                {
                  ATerm i_13 = NULL,j_13 = NULL,k_13 = NULL,m_13 = NULL,a_4 = NULL;
                  m_13 = t;
                  if(match_cons(t, sym_appl_2))
                    {
                      j_13 = ATgetArgument(t, 0);
                      k_13 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(m_13);
                  i_13 = t;
                  t = (ATerm) ATmakeAppl(sym_appl_2, j_13, k_13);
                  a_4 = t;
                  t = SSLsetAnnotations(a_4, i_13);
                }
              }
            t = asfix_yield2_1_0(z_62, t);
            LocalPopChoice(o_5);
          }
        else
          {
            t = n_5;
            {
              ATerm t_5 = t;
              int u_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = literal_1_0(z_62, t);
                  LocalPopChoice(u_5);
                }
              else
                {
                  t = t_5;
                  {
                    ATerm n_13 = NULL,p_13 = NULL,q_13 = NULL;
                    t = term_v_5;
                    p_13 = t;
                    t = (ATerm) ATinsert(ATempty, term_w_5);
                    q_13 = t;
                    t = SSL_printnl(p_13, q_13);
                    t = term_x_5;
                    n_13 = t;
                    t = SSL_exit(n_13);
                    t = (ATerm) ATinsert(ATempty, term_w_5);
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm q_14 (ATerm g_14, ATerm t)
{
  t = SSL_fclose(g_14);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm j_14 = NULL,l_14 = NULL;
  l_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_14 = ATgetArgument(t, 0);
      {
        ATerm y_5 = t;
        int z_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(j_14);
            LocalPopChoice(z_5);
          }
        else
          {
            t = y_5;
            t = q_14(l_14, t);
          }
      }
    }
  else
    {
      t = q_14(l_14, t);
    }
  return(t);
}
static ATerm f_3 (ATerm u_15, ATerm t)
{
  t = SSL_read_term_from_stream(u_15);
  return(t);
}
static ATerm g_3 (ATerm m_30, ATerm n_30, ATerm t)
{
  ATerm u_14 = NULL;
  t = SSL_fopen(m_30, n_30);
  u_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_14);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm v_14 = NULL;
  t = SSL_stdin_stream();
  v_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_14);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm w_14 = NULL;
  t = SSL_stdout_stream();
  w_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_14);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm y_14 = NULL;
  t = SSL_stderr_stream();
  y_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_14);
  return(t);
}
static ATerm p_17 (ATerm j_15, ATerm t)
{
  ATerm l_15 = NULL;
  t = SSL_explode_term(j_15);
  if(match_cons(t, sym__2))
    {
      ATerm a_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_6) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm b_6 = ATgetArgument(t, 1);
        if(((ATgetType(b_6) == AT_LIST) && !(ATisEmpty(b_6))))
          {
            l_15 = ATgetFirst((ATermList) b_6);
            {
              ATerm e_6 = (ATerm) ATgetNext((ATermList) b_6);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = l_15;
  if(match_cons(t, sym_stderr_0))
    {
      t = l_15;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = l_15;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = l_15;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm u_17 (ATerm o_15, ATerm p_15, ATerm q_15, ATerm t)
{
  ATerm t_15 = NULL,y_15 = NULL,z_15 = NULL,f_16 = NULL,m_4 = NULL;
  t = SSLgetAnnotations(q_15);
  z_15 = t;
  t = o_15;
  if(match_cons(t, sym_Path_1))
    {
      f_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_16, p_15);
  m_4 = t;
  t = SSLsetAnnotations(m_4, z_15);
  if(match_cons(t, sym__2))
    {
      t_15 = ATgetArgument(t, 0);
      y_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_3(t_15, y_15, t);
  return(t);
}
static ATerm x_17 (ATerm l_16, ATerm q_16, ATerm r_16, ATerm t)
{
  ATerm u_16 = NULL,v_16 = NULL,w_16 = NULL,h_17 = NULL,n_4 = NULL;
  t = SSLgetAnnotations(r_16);
  w_16 = t;
  t = SSL_is_string(l_16);
  h_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_17, q_16);
  n_4 = t;
  t = SSLsetAnnotations(n_4, w_16);
  if(match_cons(t, sym__2))
    {
      u_16 = ATgetArgument(t, 0);
      v_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_3(u_16, v_16, t);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL,n_17 = NULL;
  l_17 = t;
  if(match_cons(t, sym__2))
    {
      m_17 = ATgetArgument(t, 0);
      n_17 = ATgetArgument(t, 1);
      {
        ATerm f_6 = t;
        int g_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_17(l_17, t);
            LocalPopChoice(g_6);
          }
        else
          {
            t = f_6;
            {
              ATerm h_6 = t;
              int i_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = u_17(m_17, n_17, l_17, t);
                  LocalPopChoice(i_6);
                }
              else
                {
                  t = h_6;
                  t = x_17(m_17, n_17, l_17, t);
                }
            }
          }
      }
    }
  else
    {
      t = p_17(l_17, t);
    }
  return(t);
}
static ATerm j_0 (ATerm t)
{
  t = term_j_6;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm y_17 = NULL,z_17 = NULL,a_18 = NULL;
  ATerm k_6 = t;
  int l_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_18 = NULL;
      b_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_18, term_m_6);
      t = h_3(t);
      LocalPopChoice(l_6);
    }
  else
    {
      t = k_6;
      t = debug_1_0(j_0, t);
      _fail(t);
    }
  z_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_3(a_18, t);
  y_17 = t;
  t = z_17;
  t = fclose_0_0(t);
  t = y_17;
  return(t);
}
ATerm fetch_1_0 (ATerm u_71 (ATerm), ATerm t)
{
  static ATerm w_19 (ATerm t)
  {
    ATerm s_19 = NULL,u_19 = NULL,v_19 = NULL;
    s_19 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_19 = ATgetFirst((ATermList) t);
        v_19 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm n_6 = t;
      int o_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_13 = NULL,l_13 = NULL,q_4 = NULL;
          t = SSLgetAnnotations(s_19);
          b_13 = t;
          t = u_19;
          t = u_71(t);
          l_13 = t;
          t = (ATerm) ATinsert(CheckATermList(v_19), l_13);
          q_4 = t;
          t = SSLsetAnnotations(q_4, b_13);
          LocalPopChoice(o_6);
        }
      else
        {
          t = n_6;
          {
            ATerm x_13 = NULL,a_14 = NULL,s_4 = NULL;
            t = SSLgetAnnotations(s_19);
            x_13 = t;
            t = v_19;
            t = w_19(t);
            a_14 = t;
            t = (ATerm) ATinsert(CheckATermList(a_14), u_19);
            s_4 = t;
            t = SSLsetAnnotations(s_4, x_13);
          }
        }
    }
    return(t);
  }
  t = w_19(t);
  return(t);
}
static ATerm p_20 (ATerm f_20, ATerm t)
{
  t = f_20;
  {
    ATerm p_6 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_6 = ATgetArgument(t, 0);
            ATerm r_6 = ATgetArgument(t, 1);
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
  t = term_s_6;
  t = debug_1_0(m_0, t);
  t = (ATerm) ATmakeAppl(sym__2, f_20, term_t_6);
  t = open_file_0_0(t);
  return(t);
}
static ATerm q_20 (ATerm h_20, ATerm i_20, ATerm j_20, ATerm t)
{
  t = SSL_open_file(h_20, i_20);
  return(t);
}
static ATerm m_0 (ATerm t)
{
  t = term_v_6;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm m_20 = NULL,n_20 = NULL,o_20 = NULL;
  m_20 = t;
  if(match_cons(t, sym__2))
    {
      n_20 = ATgetArgument(t, 0);
      o_20 = ATgetArgument(t, 1);
      {
        ATerm w_6 = t;
        int x_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_20(m_20, t);
            LocalPopChoice(x_6);
          }
        else
          {
            t = w_6;
            t = q_20(n_20, o_20, m_20, t);
          }
      }
    }
  else
    {
      t = p_20(m_20, t);
    }
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm s_20 = NULL;
  s_20 = t;
  if(match_string(t, "-k"))
    {
      t = s_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = s_20;
    }
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL;
  t_20 = t;
  t = SSL_string_to_int(t_20);
  u_20 = t;
  t = term_y_6;
  v_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_6, u_20);
  t = n_3(v_20, u_20, t);
  t = t_20;
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = term_z_6;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_0, u_0, w_0, t);
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm x_20 = NULL;
  x_20 = t;
  if(match_string(t, "-S"))
    {
      t = x_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = x_20;
    }
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm y_20 = NULL,z_20 = NULL;
  t = term_a_7;
  y_20 = t;
  t = term_b_7;
  z_20 = t;
  t = term_c_7;
  t = n_3(y_20, z_20, t);
  t = term_d_7;
  return(t);
}
static ATerm a_1 (ATerm t)
{
  t = term_e_7;
  return(t);
}
static ATerm b_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm a_21 = NULL,b_21 = NULL,c_21 = NULL;
  a_21 = t;
  t = SSL_string_to_int(a_21);
  b_21 = t;
  t = term_a_7;
  c_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_7, b_21);
  t = n_3(c_21, b_21, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, a_21);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_f_7;
  return(t);
}
static ATerm l_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm d_21 = NULL,e_21 = NULL;
  t = term_g_7;
  d_21 = t;
  t = term_h_7;
  e_21 = t;
  t = term_i_7;
  t = n_3(d_21, e_21, t);
  t = term_j_7;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = term_k_7;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm m_7 = t;
  int n_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_0, z_0, a_1, t);
      LocalPopChoice(n_7);
    }
  else
    {
      t = m_7;
      {
        ATerm q_7 = t;
        int r_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(b_1, g_1, j_1, t);
            LocalPopChoice(r_7);
          }
        else
          {
            t = q_7;
            t = Option_3_0(l_1, m_1, n_1, t);
          }
      }
    }
  return(t);
}
static ATerm n_3 (ATerm g_39, ATerm h_39, ATerm t)
{
  ATerm f_21 = NULL;
  t = term_s_7;
  f_21 = t;
  t = SSL_table_put(f_21, g_39, h_39);
  t = (ATerm) ATmakeAppl(sym__3, term_s_7, g_39, h_39);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm i_21 = NULL,j_21 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_21 = NULL,l_21 = NULL,m_21 = NULL;
      t = term_h_7;
      t = e_0(t);
      k_21 = t;
      t = term_t_7;
      l_21 = t;
      t = term_u_7;
      m_21 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_7, term_u_7, k_21);
      t = l_3(l_21, m_21, k_21, t);
      _fail(t);
    }
  else
    {
      ATerm p_21 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_21 = ATgetFirst((ATermList) t);
          j_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_21;
      t = c_0(t);
      t = term_h_7;
      t = d_0(t);
      p_21 = t;
      t = (ATerm) ATinsert(CheckATermList(j_21), p_21);
    }
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm r_21 = NULL;
  r_21 = t;
  if(match_string(t, "-o"))
    {
      t = r_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = r_21;
    }
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm s_21 = NULL,t_21 = NULL;
  s_21 = t;
  t = term_v_7;
  t_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_7, s_21);
  t = n_3(t_21, s_21, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, s_21);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = term_w_7;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_1, p_1, q_1, t);
  return(t);
}
static ATerm l_3 (ATerm g_44, ATerm h_44, ATerm f_44, ATerm t)
{
  ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL;
  v_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_44, h_44);
  {
    ATerm x_7 = t;
    int y_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_7 = ATgetArgument(t, 0);
            ATerm a_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, g_44, h_44);
        t = k_3(g_44, h_44, t);
        LocalPopChoice(y_7);
      }
    else
      {
        t = x_7;
        t = (ATerm) ATempty;
      }
  }
  w_21 = t;
  t = (ATerm) ATinsert(CheckATermList(w_21), f_44);
  x_21 = t;
  t = SSL_table_put(g_44, h_44, x_21);
  t = v_21;
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm e_22 = NULL,f_22 = NULL,g_22 = NULL,h_22 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_22 = NULL,j_22 = NULL,k_22 = NULL;
      t = term_h_7;
      t = p_0(t);
      i_22 = t;
      t = term_t_7;
      j_22 = t;
      t = term_u_7;
      k_22 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_7, term_u_7, i_22);
      t = l_3(j_22, k_22, i_22, t);
      _fail(t);
    }
  else
    {
      ATerm o_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_22 = ATgetFirst((ATermList) t);
          f_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_22;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_22 = ATgetFirst((ATermList) t);
          h_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_22;
      t = n_0(t);
      t = g_22;
      t = o_0(t);
      o_22 = t;
      t = (ATerm) ATinsert(CheckATermList(h_22), o_22);
    }
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm q_22 = NULL;
  q_22 = t;
  if(match_string(t, "-i"))
    {
      t = q_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = q_22;
    }
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm r_22 = NULL,s_22 = NULL;
  r_22 = t;
  t = term_b_8;
  s_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_8, r_22);
  t = n_3(s_22, r_22, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, r_22);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = term_c_8;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_1, y_1, c_2, t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm u_22 = NULL,v_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_22 = ATgetFirst((ATermList) t);
      v_22 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_22 = NULL,a_23 = NULL;
        static ATerm e_2 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(z_22)), not_null(a_23));
          return(t);
        }
        t = v_22;
        t = k_0(t);
        if(((z_22 != NULL) && (z_22 != t)))
          _fail(t);
        else
          z_22 = t;
        t = u_22;
        t = i_0(t);
        if(((a_23 != NULL) && (a_23 != t)))
          _fail(t);
        else
          a_23 = t;
        t = v_22;
        t = reverse_acc_2_0(i_0, e_2, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_h_7;
      t = k_0(t);
    }
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm n_23 = NULL;
  n_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_23), term_d_8);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm e_23 = NULL,f_23 = NULL,g_23 = NULL;
  ATerm e_8 = t;
  int f_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_8;
      t = get_config_0_0(t);
      e_23 = t;
      LocalPopChoice(f_8);
    }
  else
    {
      t = e_8;
      {
        static ATerm f_2 (ATerm t)
        {
          ATerm h_23 = NULL,i_23 = NULL,j_23 = NULL,v_4 = NULL;
          j_23 = t;
          if(match_cons(t, sym_Program_1))
            {
              i_23 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(j_23);
          h_23 = t;
          t = i_23;
          if(((e_23 != NULL) && (e_23 != t)))
            _fail(t);
          else
            e_23 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, i_23);
          v_4 = t;
          t = SSLsetAnnotations(v_4, h_23);
          return(t);
        }
        t = fetch_1_0(f_2, t);
      }
    }
  {
    ATerm h_8 = t;
    int i_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_8), not_null(e_23)), term_j_8);
        t = echo_0_0(t);
        LocalPopChoice(i_8);
      }
    else
      {
        t = h_8;
      }
  }
  t = term_l_8;
  t = echo_0_0(t);
  t = term_t_7;
  f_23 = t;
  t = term_u_7;
  g_23 = t;
  t = term_m_8;
  t = k_3(f_23, g_23, t);
  t = reverse_acc_2_0(_id, h_2, t);
  t = map_1_0(i_2, t);
  {
    ATerm n_8 = t;
    int o_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_8), term_q_8), term_p_8);
        t = echo_0_0(t);
        LocalPopChoice(o_8);
      }
    else
      {
        t = n_8;
      }
  }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm r_23 = NULL,s_23 = NULL,t_23 = NULL;
  r_23 = t;
  {
    ATerm s_8 = t;
    int t_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = r_23;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm u_8 = ATgetFirst((ATermList) t);
                ATerm v_8 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = r_23;
          }
        LocalPopChoice(t_8);
      }
    else
      {
        t = s_8;
        t = (ATerm) ATinsert(ATempty, r_23);
      }
  }
  s_23 = t;
  t = term_w_8;
  t_23 = t;
  t = SSL_printnl(t_23, s_23);
  t = r_23;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_g_8;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm j_3 (ATerm d_29, ATerm e_29, ATerm t)
{
  t = SSL_strcat(d_29, e_29);
  return(t);
}
ATerm debug_1_0 (ATerm z_70 (ATerm), ATerm t)
{
  ATerm x_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL;
  x_23 = t;
  t = z_70(t);
  y_23 = t;
  t = term_v_5;
  z_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_23), y_23);
  a_24 = t;
  t = SSL_printnl(z_23, a_24);
  t = x_23;
  return(t);
}
ATerm map_1_0 (ATerm k_71 (ATerm), ATerm t)
{
  static ATerm p_24 (ATerm t)
  {
    ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL;
    m_24 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = m_24;
      }
    else
      {
        ATerm t_14 = NULL,a_15 = NULL,b_15 = NULL,x_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_24 = ATgetFirst((ATermList) t);
            o_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_24);
        t_14 = t;
        t = n_24;
        t = k_71(t);
        a_15 = t;
        t = o_24;
        t = p_24(t);
        b_15 = t;
        t = (ATerm) ATinsert(CheckATermList(b_15), a_15);
        x_4 = t;
        t = SSLsetAnnotations(x_4, t_14);
      }
    return(t);
  }
  t = p_24(t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm x_8 = t;
  int y_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(y_8);
    }
  else
    {
      t = x_8;
    }
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_z_8;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm b_9 = t;
  int c_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_24 = NULL;
      x_24 = t;
      t = SSL_is_string(x_24);
      LocalPopChoice(c_9);
    }
  else
    {
      t = b_9;
      {
        ATerm d_9 = t;
        int e_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(j_2, t);
            LocalPopChoice(e_9);
          }
        else
          {
            t = d_9;
            {
              ATerm d_25 = NULL,e_25 = NULL,f_25 = NULL;
              d_25 = t;
              if(match_cons(t, sym_Path_1))
                {
                  e_25 = ATgetArgument(t, 0);
                  t = e_25;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      e_25 = ATgetArgument(t, 0);
                      t = e_25;
                      {
                        ATerm f_9 = t;
                        int g_9 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(g_9);
                          }
                        else
                          {
                            t = f_9;
                            t = debug_1_0(p_2, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm j_25 = NULL,k_25 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          e_25 = ATgetArgument(t, 0);
                          f_25 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = e_25;
                      t = eval_config_0_0(t);
                      j_25 = t;
                      t = f_25;
                      t = eval_config_0_0(t);
                      k_25 = t;
                      t = (ATerm) ATmakeAppl(sym__2, j_25, k_25);
                      t = j_3(j_25, k_25, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm k_3 (ATerm x_45, ATerm y_45, ATerm t)
{
  t = SSL_table_get(x_45, y_45);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm o_25 = NULL,p_25 = NULL;
  o_25 = t;
  t = term_s_7;
  p_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_7, o_25);
  t = k_3(p_25, o_25, t);
  {
    ATerm h_9 = t;
    int i_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_25 = NULL,r_25 = NULL;
        t = eval_config_0_0(t);
        q_25 = t;
        t = term_s_7;
        r_25 = t;
        t = SSL_table_put(r_25, o_25, q_25);
        t = q_25;
        LocalPopChoice(i_9);
      }
    else
      {
        t = h_9;
      }
  }
  return(t);
}
static ATerm q_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm u_25 = NULL,v_25 = NULL;
  t = term_j_9;
  u_25 = t;
  t = term_h_7;
  v_25 = t;
  t = term_k_9;
  t = n_3(u_25, v_25, t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_l_9;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm w_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL;
  t = term_j_9;
  y_25 = t;
  t = term_h_7;
  z_25 = t;
  t = term_k_9;
  t = n_3(y_25, z_25, t);
  t = term_m_9;
  w_25 = t;
  t = term_h_7;
  x_25 = t;
  t = term_n_9;
  t = n_3(w_25, x_25, t);
  t = term_o_9;
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = term_p_9;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm q_9 = t;
  int s_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_2, t_2, u_2, t);
      LocalPopChoice(s_9);
    }
  else
    {
      t = q_9;
      t = Option_3_0(v_2, w_2, x_2, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm b_49 (ATerm), ATerm c_49 (ATerm), ATerm t)
{
  ATerm a_26 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL,c_5 = NULL;
  f_26 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_26 = ATgetFirst((ATermList) t);
      c_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_26);
  a_26 = t;
  t = b_26;
  t = b_49(t);
  d_26 = t;
  t = c_26;
  t = c_49(t);
  e_26 = t;
  t = (ATerm) ATinsert(CheckATermList(e_26), d_26);
  c_5 = t;
  t = SSLsetAnnotations(c_5, a_26);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm s_90 (ATerm), ATerm t)
{
  ATerm k_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL,p_26 = NULL,q_26 = NULL,e_5 = NULL;
  k_26 = t;
  {
    ATerm t_9 = t;
    int u_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_9;
        t = s_90(t);
        LocalPopChoice(u_9);
      }
    else
      {
        t = t_9;
      }
  }
  t = k_26;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_26 = ATgetFirst((ATermList) t);
      n_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_26);
  l_26 = t;
  t = term_g_8;
  q_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_8, m_26);
  t = n_3(q_26, m_26, t);
  t = n_26;
  {
    static ATerm a_27 (ATerm t)
    {
      ATerm w_9 = t;
      int x_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_9 = t;
          int z_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_26 = NULL;
              t_26 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = t_26;
              LocalPopChoice(z_9);
            }
          else
            {
              t = y_9;
              t = s_90(t);
              t = Cons_2_0(_id, a_27, t);
            }
          LocalPopChoice(x_9);
        }
      else
        {
          t = w_9;
          {
            ATerm w_26 = NULL,x_26 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                w_26 = ATgetFirst((ATermList) t);
                x_26 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(x_26), (ATerm) ATmakeAppl(sym_Undefined_1, w_26));
          }
        }
      return(t);
    }
    t = a_27(t);
  }
  p_26 = t;
  t = (ATerm) ATinsert(CheckATermList(p_26), (ATerm) ATmakeAppl(sym_Program_1, m_26));
  e_5 = t;
  t = SSLsetAnnotations(e_5, l_26);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm m_27 = NULL;
  m_27 = t;
  if(match_string(t, "--help"))
    {
      t = m_27;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = m_27;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = m_27;
        }
    }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm n_27 = NULL,o_27 = NULL;
  t = term_a_10;
  n_27 = t;
  t = term_h_7;
  o_27 = t;
  t = term_b_10;
  t = n_3(n_27, o_27, t);
  t = term_c_10;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = term_d_10;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm r_90 (ATerm), ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL;
  h_27 = t;
  t = term_t_7;
  j_27 = t;
  t = term_u_7;
  k_27 = t;
  t = (ATerm) ATempty;
  l_27 = t;
  t = SSL_table_put(j_27, k_27, l_27);
  t = h_27;
  {
    static ATerm y_2 (ATerm t)
    {
      ATerm e_10 = t;
      int f_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_90(t);
          LocalPopChoice(f_10);
        }
      else
        {
          t = e_10;
          {
            ATerm g_10 = t;
            int i_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(a_3, b_3, d_3, t);
                LocalPopChoice(i_10);
              }
            else
              {
                t = g_10;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(y_2, t);
  }
  {
    ATerm j_10 = t;
    int k_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_27 = NULL;
        v_27 = t;
        {
          ATerm l_10 = t;
          int n_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_16 = NULL;
              t = v_27;
              {
                ATerm o_10 = t;
                int p_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_a_10;
                    t = get_config_0_0(t);
                    LocalPopChoice(p_10);
                  }
                else
                  {
                    t = o_10;
                    t = fetch_1_0(e_3, t);
                  }
              }
              t = v_27;
              t = default_system_usage_0_0(t);
              t = term_b_7;
              d_16 = t;
              t = SSL_exit(d_16);
              LocalPopChoice(n_10);
            }
          else
            {
              t = l_10;
              {
                ATerm j_16 = NULL;
                t = term_j_9;
                t = get_config_0_0(t);
                t = v_27;
                t = default_system_about_0_0(t);
                t = term_b_7;
                j_16 = t;
                t = SSL_exit(j_16);
              }
            }
        }
        LocalPopChoice(k_10);
      }
    else
      {
        t = j_10;
        {
          ATerm q_10 = t;
          int r_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL;
              static ATerm i_3 (ATerm t)
              {
                ATerm z_27 = NULL,a_28 = NULL,b_28 = NULL,g_5 = NULL;
                b_28 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    a_28 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(b_28);
                z_27 = t;
                t = a_28;
                if(((f_27 != NULL) && (f_27 != t)))
                  _fail(t);
                else
                  f_27 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, a_28);
                g_5 = t;
                t = SSLsetAnnotations(g_5, z_27);
                return(t);
              }
              t = fetch_1_0(i_3, t);
              t = term_v_5;
              x_27 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_27)), term_s_10);
              y_27 = t;
              t = SSL_printnl(x_27, y_27);
              t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_27)), term_s_10));
              t = default_system_usage_0_0(t);
              t = term_x_5;
              w_27 = t;
              t = SSL_exit(w_27);
              LocalPopChoice(r_10);
            }
          else
            {
              t = q_10;
            }
        }
      }
  }
  g_27 = t;
  t = term_t_7;
  i_27 = t;
  t = SSL_table_destroy(i_27);
  t = g_27;
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm t_10 = t;
  int u_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
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
            t = output_option_0_0(t);
            LocalPopChoice(w_10);
          }
        else
          {
            t = v_10;
            {
              ATerm x_10 = t;
              int y_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(o_3, p_3, q_3, t);
                  LocalPopChoice(y_10);
                }
              else
                {
                  t = x_10;
                  {
                    ATerm a_11 = t;
                    int c_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(c_11);
                      }
                    else
                      {
                        t = a_11;
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
static ATerm o_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL;
  t = term_d_11;
  o_28 = t;
  t = term_h_7;
  p_28 = t;
  t = term_f_11;
  t = n_3(o_28, p_28, t);
  t = term_h_11;
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = term_i_11;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL,m_28 = NULL,n_28 = NULL,s_5 = NULL;
  t = parse_options_1_0(m_3, t);
  h_28 = t;
  {
    ATerm l_11 = t;
    int n_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm r_3 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((g_28 != NULL) && (g_28 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                g_28 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(r_3, t);
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_28), term_t_6);
        t = open_file_0_0(t);
        LocalPopChoice(n_11);
      }
    else
      {
        t = l_11;
        t = term_w_8;
        g_28 = t;
      }
  }
  t = h_28;
  {
    ATerm r_11 = t;
    int t_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm s_3 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              if(((j_28 != NULL) && (j_28 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                j_28 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(s_3, t);
        LocalPopChoice(t_11);
      }
    else
      {
        t = r_11;
        t = term_v_11;
        j_28 = t;
      }
  }
  t = not_null(j_28);
  t = ReadFromFile_0_0(t);
  k_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_28, k_28);
  n_28 = t;
  if(match_cons(t, sym__2))
    {
      ATerm w_11 = ATgetArgument(t, 0);
      ATerm x_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_28);
  l_28 = t;
  t = k_28;
  {
    static ATerm u_3 (ATerm t)
    {
      t = not_null(g_28);
      return(t);
    }
    t = asfix_yield_1_0(u_3, t);
  }
  m_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_28, m_28);
  s_5 = t;
  t = SSLsetAnnotations(s_5, l_28);
  t = term_b_7;
  i_28 = t;
  t = SSL_exit(i_28);
  return(t);
}
