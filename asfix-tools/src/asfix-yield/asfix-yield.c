#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Undefined_0;
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
Symbol sym_Hashtable_1;
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
static void init_module_constructors (void)
{
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
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
}
ATerm term_u_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_c_11;
ATerm term_w_10;
ATerm term_u_10;
ATerm term_r_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_y_8;
ATerm term_m_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_g_8;
ATerm term_e_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_s_7;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_i_7;
ATerm term_h_7;
ATerm term_c_7;
ATerm term_b_7;
ATerm term_y_6;
ATerm term_x_6;
ATerm term_w_6;
ATerm term_k_6;
ATerm term_j_6;
ATerm term_i_6;
ATerm term_h_6;
ATerm term_g_6;
ATerm term_b_6;
ATerm term_a_6;
ATerm term_z_5;
ATerm term_y_5;
ATerm term_w_5;
ATerm term_v_5;
ATerm term_u_5;
ATerm term_t_5;
ATerm term_s_5;
ATerm term_r_5;
ATerm term_p_5;
ATerm term_o_5;
ATerm term_n_5;
ATerm term_k_5;
ATerm term_i_5;
ATerm term_h_5;
ATerm term_b_5;
ATerm term_a_5;
ATerm term_g_4;
ATerm term_f_4;
ATerm term_d_4;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_d_4));
  term_d_4 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_4));
  term_f_4 = (ATerm) ATmakeAppl(ATmakeSymbol("not in AsFix format", 0, ATtrue));
  ATprotect(&(term_g_4));
  term_g_4 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_a_5));
  term_a_5 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_b_5));
  term_b_5 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_h_5));
  term_h_5 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_i_5));
  term_i_5 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_5));
  term_k_5 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_n_5));
  term_n_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_o_5));
  term_o_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_5));
  term_r_5 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeAppl(sym__2, term_p_5, term_r_5);
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(sym_Verbose_1, term_r_5);
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(sym__2, term_w_5, term_y_5);
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(sym__2, term_g_6, term_b_7);
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(sym__2, term_h_6, term_i_6);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("The asfix-yield utility unparses an asfix tree to flat text.\n", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("It reads from standard input and writes to standard output.\n", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(sym__2, term_d_8, term_y_5);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(sym__2, term_i_8, term_y_5);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym__2, term_m_9, term_y_5);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym__3, term_h_6, term_i_6, (ATerm) ATempty);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym__2, term_g_6, term_m_9);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym__2, term_g_6, term_d_8);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym__2, term_l_11, term_y_5);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm at_tail_1_0 (ATerm t_93 (ATerm), ATerm t);
ATerm skip2_1_0 (ATerm r_0 (ATerm), ATerm t);
ATerm is_leaf_0_0 (ATerm t);
ATerm leaves_3_0 (ATerm v_88 (ATerm), ATerm w_88 (ATerm), ATerm x_88 (ATerm (ATerm), ATerm), ATerm t);
ATerm asfix_yield2_1_0 (ATerm b_83 (ATerm), ATerm t);
ATerm asfix_yield_1_0 (ATerm a_83 (ATerm), ATerm t);
static ATerm t_7 (ATerm e_7, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm n_3 (ATerm t_27, ATerm t);
static ATerm o_3 (ATerm q_41, ATerm r_41, ATerm t);
static ATerm p_3 (ATerm o_43, ATerm p_43, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm r_10 (ATerm p_8, ATerm t);
static ATerm s_10 (ATerm t_8, ATerm v_8, ATerm x_8, ATerm t);
static ATerm v_10 (ATerm t_9, ATerm v_9, ATerm x_9, ATerm t);
static ATerm q_3 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm o_93 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm t_92 (ATerm), ATerm t);
static ATerm n_14 (ATerm u_13, ATerm t);
static ATerm o_14 (ATerm w_13, ATerm z_13, ATerm a_14, ATerm t);
static ATerm b_0 (ATerm t);
ATerm open_file_0_0 (ATerm t);
static ATerm c_0 (ATerm t);
static ATerm i_0 (ATerm t);
static ATerm k_0 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm t_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm x_3 (ATerm k_62, ATerm l_62, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm v_3 (ATerm t_48, ATerm u_48, ATerm s_48, ATerm t);
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm r_3 (ATerm q_53, ATerm r_53, ATerm t);
static ATerm s_3 (ATerm v_53, ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm e_93 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm v_1 (ATerm t);
static ATerm z_1 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm u_3 (ATerm m_50, ATerm n_50, ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm t_72 (ATerm), ATerm u_72 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm p_113 (ATerm), ATerm t);
static ATerm y_3 (ATerm l_53, ATerm m_53, ATerm n_53, ATerm t);
static ATerm z_3 (ATerm o_53, ATerm p_53, ATerm t);
ATerm new_hashtable_0_2 (ATerm t_53, ATerm u_53, ATerm t);
ATerm table_create_0_0 (ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm lookup_table_0_1 (ATerm f_50, ATerm t);
static ATerm m_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
ATerm parse_options_1_0 (ATerm o_113 (ATerm), ATerm t);
static ATerm t_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm z_2 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm at_tail_1_0 (ATerm t_93 (ATerm), ATerm t)
{
  ATerm e_0 = NULL,m_0 = NULL,v_0 = NULL,z_0 = NULL,c_1 = NULL,m_1 = NULL;
  c_1 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_0 = ATgetFirst((ATermList) t);
      v_0 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_1);
  e_0 = t;
  t = v_0;
  t = t_93(t);
  z_0 = t;
  t = (ATerm) ATinsert(CheckATermList(z_0), m_0);
  m_1 = t;
  t = SSLsetAnnotations(m_1, e_0);
  return(t);
}
ATerm skip2_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm p_4 = NULL,q_4 = NULL,r_4 = NULL;
  p_4 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_4 = ATgetFirst((ATermList) t);
      r_4 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm h_0 = NULL,n_0 = NULL,p_1 = NULL;
        t = SSLgetAnnotations(p_4);
        h_0 = t;
        t = r_4;
        t = at_tail_1_0(r_0, t);
        n_0 = t;
        t = (ATerm) ATinsert(CheckATermList(n_0), q_4);
        p_1 = t;
        t = SSLsetAnnotations(p_1, h_0);
      }
    }
  else
    {
      if(match_cons(t, sym_appl_2))
        {
          q_4 = ATgetArgument(t, 0);
          r_4 = ATgetArgument(t, 1);
          {
            ATerm b_1 = NULL,f_1 = NULL,q_1 = NULL;
            t = SSLgetAnnotations(p_4);
            b_1 = t;
            t = r_4;
            t = map_1_0(r_0, t);
            f_1 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, q_4, f_1);
            q_1 = t;
            t = SSLsetAnnotations(q_1, b_1);
          }
        }
      else
        {
          if(match_cons(t, sym_amb_1))
            {
              q_4 = ATgetArgument(t, 0);
              {
                ATerm o_1 = NULL,w_1 = NULL,x_1 = NULL,y_1 = NULL,f_2 = NULL,g_2 = NULL,s_1 = NULL,r_1 = NULL;
                t = SSLgetAnnotations(p_4);
                o_1 = t;
                t = q_4;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    x_1 = ATgetFirst((ATermList) t);
                    y_1 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(q_4);
                w_1 = t;
                t = x_1;
                t = r_0(t);
                f_2 = t;
                t = (ATerm) ATinsert(CheckATermList(y_1), f_2);
                r_1 = t;
                t = SSLsetAnnotations(r_1, w_1);
                g_2 = t;
                t = (ATerm) ATmakeAppl(sym_amb_1, g_2);
                s_1 = t;
                t = SSLsetAnnotations(s_1, o_1);
              }
            }
          else
            {
              ATerm u_2 = NULL,y_2 = NULL,t_1 = NULL;
              if(match_cons(t, sym_parsetree_2))
                {
                  q_4 = ATgetArgument(t, 0);
                  r_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(p_4);
              u_2 = t;
              t = q_4;
              t = r_0(t);
              y_2 = t;
              t = (ATerm) ATmakeAppl(sym_parsetree_2, y_2, r_4);
              t_1 = t;
              t = SSLsetAnnotations(t_1, u_2);
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
ATerm leaves_3_0 (ATerm v_88 (ATerm), ATerm w_88 (ATerm), ATerm x_88 (ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm w_4 (ATerm t);
  static ATerm w_4 (ATerm t)
  {
    ATerm e_3 = t;
    int f_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_88(t);
        t = v_88(t);
        LocalPopChoice(f_3);
      }
    else
      {
        t = e_3;
        {
          ATerm g_3 = t;
          int k_3 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_88(w_4, t);
              LocalPopChoice(k_3);
            }
          else
            {
              t = g_3;
              t = SRTS_all(w_4, t);
            }
        }
      }
    return(t);
  }
  t = w_4(t);
  return(t);
}
ATerm asfix_yield2_1_0 (ATerm b_83 (ATerm), ATerm t)
{
  static ATerm a_0 (ATerm t);
  static ATerm a_0 (ATerm t)
  {
    ATerm q_5 = NULL;
    q_5 = t;
    {
      ATerm l_3 = t;
      int m_3 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_3 = NULL,i_3 = NULL,j_3 = NULL;
          t = SSL_is_string(q_5);
          j_3 = t;
          t = b_83(t);
          i_3 = t;
          t = (ATerm) ATinsert(ATempty, j_3);
          h_3 = t;
          t = SSL_print(i_3, h_3);
          t = (ATerm) ATmakeAppl(sym__2, i_3, (ATerm) ATinsert(ATempty, j_3));
          LocalPopChoice(m_3);
        }
      else
        {
          t = l_3;
          {
            ATerm a_4 = NULL,b_4 = NULL;
            t = q_5;
            t = b_83(t);
            b_4 = t;
            t = (ATerm) ATinsert(ATempty, q_5);
            a_4 = t;
            t = SSL_printascii(b_4, a_4);
            t = (ATerm) ATmakeAppl(sym__2, b_4, (ATerm) ATinsert(ATempty, q_5));
          }
        }
    }
    return(t);
  }
  t = leaves_3_0(a_0, is_leaf_0_0, skip2_1_0, t);
  return(t);
}
ATerm asfix_yield_1_0 (ATerm a_83 (ATerm), ATerm t)
{
  ATerm w_3 = t;
  int c_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_5 = NULL,n_6 = NULL,o_6 = NULL;
      x_5 = t;
      if(match_cons(t, sym_parsetree_2))
        {
          n_6 = ATgetArgument(t, 0);
          o_6 = ATgetArgument(t, 1);
          {
            ATerm i_4 = NULL,d_2 = NULL;
            t = SSLgetAnnotations(x_5);
            i_4 = t;
            t = (ATerm) ATmakeAppl(sym_parsetree_2, n_6, o_6);
            d_2 = t;
            t = SSLsetAnnotations(d_2, i_4);
          }
        }
      else
        {
          ATerm j_5 = NULL,e_2 = NULL;
          if(match_cons(t, sym_appl_2))
            {
              n_6 = ATgetArgument(t, 0);
              o_6 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(x_5);
          j_5 = t;
          t = (ATerm) ATmakeAppl(sym_appl_2, n_6, o_6);
          e_2 = t;
          t = SSLsetAnnotations(e_2, j_5);
        }
      t = x_5;
      LocalPopChoice(c_4);
      t = asfix_yield2_1_0(a_83, t);
    }
  else
    {
      t = w_3;
      {
        ATerm p_6 = NULL,q_6 = NULL,r_6 = NULL;
        t = term_d_4;
        q_6 = t;
        t = (ATerm) ATinsert(ATempty, term_f_4);
        r_6 = t;
        t = SSL_printnl(q_6, r_6);
        t = term_g_4;
        p_6 = t;
        t = SSL_exit(p_6);
        t = (ATerm) ATinsert(ATempty, term_f_4);
      }
    }
  return(t);
}
static ATerm t_7 (ATerm e_7, ATerm t)
{
  t = SSL_fclose(e_7);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm m_7 = NULL,n_7 = NULL;
  n_7 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_7 = ATgetArgument(t, 0);
      {
        ATerm h_4 = t;
        int j_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(m_7);
            LocalPopChoice(j_4);
          }
        else
          {
            t = h_4;
            t = t_7(n_7, t);
          }
      }
    }
  else
    {
      t = t_7(n_7, t);
    }
  return(t);
}
static ATerm n_3 (ATerm t_27, ATerm t)
{
  t = SSL_read_term_from_stream(t_27);
  return(t);
}
static ATerm o_3 (ATerm q_41, ATerm r_41, ATerm t)
{
  t = SSL_strcat(q_41, r_41);
  return(t);
}
static ATerm p_3 (ATerm o_43, ATerm p_43, ATerm t)
{
  ATerm u_7 = NULL;
  t = SSL_fopen(o_43, p_43);
  u_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_7);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm y_7 = NULL;
  t = SSL_stdin_stream();
  y_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_7);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_8 = NULL;
  t = SSL_stdout_stream();
  f_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_8);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm h_8 = NULL;
  t = SSL_stderr_stream();
  h_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_8);
  return(t);
}
static ATerm r_10 (ATerm p_8, ATerm t)
{
  ATerm q_8 = NULL;
  t = SSL_explode_term(p_8);
  if(match_cons(t, sym__2))
    {
      ATerm k_4 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_4) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm m_4 = ATgetArgument(t, 1);
        if(((ATgetType(m_4) == AT_LIST) && !(ATisEmpty(m_4))))
          {
            q_8 = ATgetFirst((ATermList) m_4);
            {
              ATerm o_4 = (ATerm) ATgetNext((ATermList) m_4);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = q_8;
  if(match_cons(t, sym_stderr_0))
    {
      t = q_8;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = q_8;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = q_8;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm s_10 (ATerm t_8, ATerm v_8, ATerm x_8, ATerm t)
{
  ATerm a_9 = NULL,c_9 = NULL,g_9 = NULL,q_9 = NULL,k_2 = NULL;
  t = SSLgetAnnotations(x_8);
  g_9 = t;
  t = t_8;
  if(match_cons(t, sym_Path_1))
    {
      q_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_9, v_8);
  k_2 = t;
  t = SSLsetAnnotations(k_2, g_9);
  if(match_cons(t, sym__2))
    {
      a_9 = ATgetArgument(t, 0);
      c_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_3(a_9, c_9, t);
  return(t);
}
static ATerm v_10 (ATerm t_9, ATerm v_9, ATerm x_9, ATerm t)
{
  ATerm a_10 = NULL,b_10 = NULL,f_10 = NULL,m_10 = NULL,n_2 = NULL;
  t = SSLgetAnnotations(x_9);
  f_10 = t;
  t = SSL_is_string(t_9);
  m_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_10, v_9);
  n_2 = t;
  t = SSLsetAnnotations(n_2, f_10);
  if(match_cons(t, sym__2))
    {
      a_10 = ATgetArgument(t, 0);
      b_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_3(a_10, b_10, t);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL;
  o_10 = t;
  if(match_cons(t, sym__2))
    {
      p_10 = ATgetArgument(t, 0);
      q_10 = ATgetArgument(t, 1);
      {
        ATerm t_4 = t;
        int u_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_10(o_10, t);
            LocalPopChoice(u_4);
          }
        else
          {
            t = t_4;
            {
              ATerm v_4 = t;
              int x_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = s_10(p_10, q_10, o_10, t);
                  LocalPopChoice(x_4);
                }
              else
                {
                  t = v_4;
                  t = v_10(p_10, q_10, o_10, t);
                }
            }
          }
      }
    }
  else
    {
      t = r_10(o_10, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm y_10 = NULL,z_10 = NULL,a_11 = NULL,r_11 = NULL;
  r_11 = t;
  {
    ATerm y_4 = t;
    int z_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, r_11, term_a_5);
        t = q_3(t);
        LocalPopChoice(z_4);
      }
    else
      {
        t = y_4;
        {
          ATerm t_6 = NULL,v_6 = NULL;
          t = term_b_5;
          v_6 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_b_5, r_11);
          t = o_3(v_6, r_11, t);
          t_6 = t;
          t = SSL_perror(t_6);
          _fail(t);
        }
      }
  }
  z_10 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_3(a_11, t);
  y_10 = t;
  t = z_10;
  t = fclose_0_0(t);
  t = y_10;
  return(t);
}
ATerm fetch_1_0 (ATerm o_93 (ATerm), ATerm t)
{
  static ATerm e_13 (ATerm t);
  static ATerm e_13 (ATerm t)
  {
    ATerm a_13 = NULL,c_13 = NULL,d_13 = NULL;
    a_13 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_13 = ATgetFirst((ATermList) t);
        d_13 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm c_5 = t;
      int d_5 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_7 = NULL,j_7 = NULL,s_2 = NULL;
          t = SSLgetAnnotations(a_13);
          f_7 = t;
          t = c_13;
          t = o_93(t);
          j_7 = t;
          t = (ATerm) ATinsert(CheckATermList(d_13), j_7);
          s_2 = t;
          t = SSLsetAnnotations(s_2, f_7);
          LocalPopChoice(d_5);
        }
      else
        {
          t = c_5;
          {
            ATerm x_7 = NULL,b_8 = NULL,v_2 = NULL;
            t = SSLgetAnnotations(a_13);
            x_7 = t;
            t = d_13;
            t = e_13(t);
            b_8 = t;
            t = (ATerm) ATinsert(CheckATermList(b_8), c_13);
            v_2 = t;
            t = SSLsetAnnotations(v_2, x_7);
          }
        }
    }
    return(t);
  }
  t = e_13(t);
  return(t);
}
ATerm debug_1_0 (ATerm t_92 (ATerm), ATerm t)
{
  ATerm h_13 = NULL,k_13 = NULL,n_13 = NULL,o_13 = NULL;
  h_13 = t;
  t = t_92(t);
  k_13 = t;
  t = term_d_4;
  n_13 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_13), k_13);
  o_13 = t;
  t = SSL_printnl(n_13, o_13);
  t = h_13;
  return(t);
}
static ATerm n_14 (ATerm u_13, ATerm t)
{
  t = u_13;
  {
    ATerm e_5 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_5 = ATgetArgument(t, 0);
            ATerm g_5 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_5;
      }
  }
  t = term_h_5;
  t = debug_1_0(b_0, t);
  t = (ATerm) ATmakeAppl(sym__2, u_13, term_i_5);
  t = open_file_0_0(t);
  return(t);
}
static ATerm o_14 (ATerm w_13, ATerm z_13, ATerm a_14, ATerm t)
{
  t = SSL_open_file(w_13, z_13);
  return(t);
}
static ATerm b_0 (ATerm t)
{
  t = term_k_5;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm g_14 = NULL,h_14 = NULL,m_14 = NULL;
  g_14 = t;
  if(match_cons(t, sym__2))
    {
      h_14 = ATgetArgument(t, 0);
      m_14 = ATgetArgument(t, 1);
      {
        ATerm l_5 = t;
        int m_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_14(g_14, t);
            LocalPopChoice(m_5);
          }
        else
          {
            t = l_5;
            t = o_14(h_14, m_14, g_14, t);
          }
      }
    }
  else
    {
      t = n_14(g_14, t);
    }
  return(t);
}
static ATerm c_0 (ATerm t)
{
  ATerm c_15 = NULL;
  c_15 = t;
  if(match_string(t, "-k"))
    {
      t = c_15;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = c_15;
    }
  return(t);
}
static ATerm i_0 (ATerm t)
{
  ATerm d_15 = NULL,g_15 = NULL,i_15 = NULL;
  d_15 = t;
  t = SSL_string_to_int(d_15);
  g_15 = t;
  t = term_n_5;
  i_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_5, g_15);
  t = x_3(i_15, g_15, t);
  t = d_15;
  return(t);
}
static ATerm k_0 (ATerm t)
{
  t = term_o_5;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_0, i_0, k_0, t);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm n_15 = NULL;
  n_15 = t;
  if(match_string(t, "-S"))
    {
      t = n_15;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = n_15;
    }
  return(t);
}
static ATerm t_0 (ATerm t)
{
  ATerm o_15 = NULL,p_15 = NULL;
  t = term_p_5;
  o_15 = t;
  t = term_r_5;
  p_15 = t;
  t = term_s_5;
  t = x_3(o_15, p_15, t);
  t = term_t_5;
  return(t);
}
static ATerm u_0 (ATerm t)
{
  t = term_u_5;
  return(t);
}
static ATerm w_0 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm q_15 = NULL,t_15 = NULL,u_15 = NULL;
  q_15 = t;
  t = SSL_string_to_int(q_15);
  t_15 = t;
  t = term_p_5;
  u_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_5, t_15);
  t = x_3(u_15, t_15, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, q_15);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  t = term_v_5;
  return(t);
}
static ATerm a_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm v_15 = NULL,x_15 = NULL;
  t = term_w_5;
  v_15 = t;
  t = term_y_5;
  x_15 = t;
  t = term_z_5;
  t = x_3(v_15, x_15, t);
  t = term_a_6;
  return(t);
}
static ATerm e_1 (ATerm t)
{
  t = term_b_6;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm c_6 = t;
  int d_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_0, t_0, u_0, t);
      LocalPopChoice(d_6);
    }
  else
    {
      t = c_6;
      {
        ATerm e_6 = t;
        int f_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(w_0, x_0, y_0, t);
            LocalPopChoice(f_6);
          }
        else
          {
            t = e_6;
            t = Option_3_0(a_1, d_1, e_1, t);
          }
      }
    }
  return(t);
}
static ATerm x_3 (ATerm k_62, ATerm l_62, ATerm t)
{
  ATerm c_16 = NULL,e_16 = NULL;
  t = term_g_6;
  c_16 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_g_6, k_62, l_62);
  t = lookup_table_0_1(c_16, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_3(k_62, l_62, e_16, t);
  t = (ATerm) ATmakeAppl(sym__3, term_g_6, k_62, l_62);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm n_16 = NULL,o_16 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL;
      t = term_y_5;
      t = g_0(t);
      p_16 = t;
      t = term_h_6;
      q_16 = t;
      t = term_i_6;
      r_16 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_6, term_i_6, p_16);
      t = v_3(q_16, r_16, p_16, t);
      _fail(t);
    }
  else
    {
      ATerm x_16 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_16 = ATgetFirst((ATermList) t);
          o_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_16;
      t = d_0(t);
      t = term_y_5;
      t = f_0(t);
      x_16 = t;
      t = (ATerm) ATinsert(CheckATermList(o_16), x_16);
    }
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm z_16 = NULL;
  z_16 = t;
  if(match_string(t, "-o"))
    {
      t = z_16;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = z_16;
    }
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL;
  a_17 = t;
  t = term_j_6;
  b_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_6, a_17);
  t = x_3(b_17, a_17, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, a_17);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = term_k_6;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_1, h_1, i_1, t);
  return(t);
}
static ATerm v_3 (ATerm t_48, ATerm u_48, ATerm s_48, ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL;
  g_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_48, u_48);
  {
    ATerm l_6 = t;
    int m_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_6 = ATgetArgument(t, 0);
            ATerm u_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, t_48, u_48);
        t = u_3(t_48, u_48, t);
        LocalPopChoice(m_6);
      }
    else
      {
        t = l_6;
        t = (ATerm) ATempty;
      }
  }
  h_17 = t;
  t = (ATerm) ATmakeAppl(sym__3, t_48, u_48, (ATerm) ATinsert(CheckATermList(h_17), s_48));
  t = lookup_table_0_1(t_48, t);
  k_17 = t;
  t = (ATerm) ATinsert(CheckATermList(h_17), s_48);
  i_17 = t;
  t = k_17;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_3(u_48, i_17, j_17, t);
  t = g_17;
  return(t);
}
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm t)
{
  ATerm r_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_17 = NULL,w_17 = NULL,x_17 = NULL;
      t = term_y_5;
      t = q_0(t);
      v_17 = t;
      t = term_h_6;
      w_17 = t;
      t = term_i_6;
      x_17 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_6, term_i_6, v_17);
      t = v_3(w_17, x_17, v_17, t);
      _fail(t);
    }
  else
    {
      ATerm b_18 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_17 = ATgetFirst((ATermList) t);
          s_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_17;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_17 = ATgetFirst((ATermList) t);
          u_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_17;
      t = o_0(t);
      t = t_17;
      t = p_0(t);
      b_18 = t;
      t = (ATerm) ATinsert(CheckATermList(u_17), b_18);
    }
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm d_18 = NULL;
  d_18 = t;
  if(match_string(t, "-i"))
    {
      t = d_18;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = d_18;
    }
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm e_18 = NULL,f_18 = NULL;
  e_18 = t;
  t = term_w_6;
  f_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_6, e_18);
  t = x_3(f_18, e_18, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, e_18);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_x_6;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_1, k_1, l_1, t);
  return(t);
}
static ATerm r_3 (ATerm q_53, ATerm r_53, ATerm t)
{
  ATerm g_18 = NULL;
  t = SSL_hashtable_remove(r_53, q_53);
  g_18 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_18);
  return(t);
}
static ATerm s_3 (ATerm v_53, ATerm t)
{
  ATerm h_18 = NULL;
  t = SSL_hashtable_destroy(v_53);
  h_18 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_18);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm i_18 = NULL,j_18 = NULL,k_18 = NULL,l_18 = NULL;
  i_18 = t;
  t = table_hashtable_0_0(t);
  j_18 = t;
  t = lookup_table_0_1(i_18, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_3(l_18, t);
  t = j_18;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_3(i_18, k_18, t);
  t = i_18;
  return(t);
}
ATerm map_1_0 (ATerm e_93 (ATerm), ATerm t)
{
  static ATerm a_19 (ATerm t);
  static ATerm a_19 (ATerm t)
  {
    ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL;
    x_18 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_18;
      }
    else
      {
        ATerm l_8 = NULL,o_8 = NULL,u_8 = NULL,c_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_18 = ATgetFirst((ATermList) t);
            z_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_18);
        l_8 = t;
        t = y_18;
        t = e_93(t);
        o_8 = t;
        t = z_18;
        t = a_19(t);
        u_8 = t;
        t = (ATerm) ATinsert(CheckATermList(u_8), o_8);
        c_3 = t;
        t = SSLsetAnnotations(c_3, l_8);
      }
    return(t);
  }
  t = a_19(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm d_19 = NULL,e_19 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_19 = ATgetFirst((ATermList) t);
      e_19 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm i_19 = NULL,j_19 = NULL;
        static ATerm n_1 (ATerm t);
        static ATerm n_1 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(i_19)), not_null(j_19));
          return(t);
        }
        t = e_19;
        t = l_0(t);
        if(((i_19 != NULL) && (i_19 != t)))
          _fail(t);
        else
          i_19 = t;
        t = d_19;
        t = j_0(t);
        if(((j_19 != NULL) && (j_19 != t)))
          _fail(t);
        else
          j_19 = t;
        t = e_19;
        t = reverse_acc_2_0(j_0, n_1, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_y_5;
      t = l_0(t);
    }
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm y_19 = NULL;
  y_19 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_19), term_y_6);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm n_19 = NULL,o_19 = NULL,p_19 = NULL;
  ATerm z_6 = t;
  int a_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_19 = NULL,r_19 = NULL;
      t = term_g_6;
      q_19 = t;
      t = term_b_7;
      r_19 = t;
      t = term_c_7;
      t = u_3(q_19, r_19, t);
      n_19 = t;
      LocalPopChoice(a_7);
    }
  else
    {
      t = z_6;
      {
        static ATerm u_1 (ATerm t);
        static ATerm u_1 (ATerm t)
        {
          ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL,t_3 = NULL;
          u_19 = t;
          if(match_cons(t, sym_Program_1))
            {
              t_19 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(u_19);
          s_19 = t;
          t = t_19;
          if(((n_19 != NULL) && (n_19 != t)))
            _fail(t);
          else
            n_19 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, t_19);
          t_3 = t;
          t = SSLsetAnnotations(t_3, s_19);
          return(t);
        }
        t = fetch_1_0(u_1, t);
      }
    }
  {
    ATerm d_7 = t;
    int g_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_7), not_null(n_19)), term_h_7);
        t = echo_0_0(t);
        LocalPopChoice(g_7);
      }
    else
      {
        t = d_7;
      }
  }
  t = term_k_7;
  t = echo_0_0(t);
  t = term_h_6;
  o_19 = t;
  t = term_i_6;
  p_19 = t;
  t = term_l_7;
  t = u_3(o_19, p_19, t);
  t = reverse_acc_2_0(_id, v_1, t);
  t = map_1_0(z_1, t);
  {
    ATerm o_7 = t;
    int p_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_7), term_r_7), term_q_7);
        t = echo_0_0(t);
        LocalPopChoice(p_7);
      }
    else
      {
        t = o_7;
      }
  }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL;
  c_20 = t;
  {
    ATerm v_7 = t;
    int w_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = c_20;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm z_7 = ATgetFirst((ATermList) t);
                ATerm a_8 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = c_20;
          }
        LocalPopChoice(w_7);
      }
    else
      {
        t = v_7;
        t = (ATerm) ATinsert(ATempty, c_20);
      }
  }
  d_20 = t;
  t = term_c_8;
  e_20 = t;
  t = SSL_printnl(e_20, d_20);
  t = c_20;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm i_20 = NULL,j_20 = NULL;
  t = term_g_6;
  i_20 = t;
  t = term_b_7;
  j_20 = t;
  t = term_c_7;
  t = u_3(i_20, j_20, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm u_3 (ATerm m_50, ATerm n_50, ATerm t)
{
  ATerm k_20 = NULL;
  t = lookup_table_0_1(m_50, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_3(n_50, k_20, t);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm m_20 = NULL,n_20 = NULL;
  t = term_d_8;
  m_20 = t;
  t = term_y_5;
  n_20 = t;
  t = term_e_8;
  t = x_3(m_20, n_20, t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = term_g_8;
  return(t);
}
static ATerm h_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL,r_20 = NULL;
  t = term_d_8;
  q_20 = t;
  t = term_y_5;
  r_20 = t;
  t = term_e_8;
  t = x_3(q_20, r_20, t);
  t = term_i_8;
  o_20 = t;
  t = term_y_5;
  p_20 = t;
  t = term_j_8;
  t = x_3(o_20, p_20, t);
  t = term_k_8;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_m_8;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm n_8 = t;
  int r_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_2, b_2, c_2, t);
      LocalPopChoice(r_8);
    }
  else
    {
      t = n_8;
      t = Option_3_0(h_2, i_2, j_2, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm t_72 (ATerm), ATerm u_72 (ATerm), ATerm t)
{
  ATerm s_20 = NULL,t_20 = NULL,u_20 = NULL,v_20 = NULL,w_20 = NULL,x_20 = NULL,e_4 = NULL;
  x_20 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_20 = ATgetFirst((ATermList) t);
      u_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_20);
  s_20 = t;
  t = t_20;
  t = t_72(t);
  v_20 = t;
  t = u_20;
  t = u_72(t);
  w_20 = t;
  t = (ATerm) ATinsert(CheckATermList(w_20), v_20);
  e_4 = t;
  t = SSLsetAnnotations(e_4, s_20);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_113 (ATerm), ATerm t)
{
  ATerm c_21 = NULL,d_21 = NULL,e_21 = NULL,f_21 = NULL,h_21 = NULL,i_21 = NULL,l_4 = NULL;
  c_21 = t;
  {
    ATerm s_8 = t;
    int w_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_y_8;
        t = p_113(t);
        LocalPopChoice(w_8);
      }
    else
      {
        t = s_8;
      }
  }
  t = c_21;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_21 = ATgetFirst((ATermList) t);
      f_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_21);
  d_21 = t;
  t = term_b_7;
  i_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_7, e_21);
  t = x_3(i_21, e_21, t);
  t = f_21;
  {
    static ATerm s_21 (ATerm t);
    static ATerm s_21 (ATerm t)
    {
      ATerm z_8 = t;
      int b_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_9 = t;
          int f_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_21 = NULL;
              l_21 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = l_21;
              LocalPopChoice(f_9);
            }
          else
            {
              t = d_9;
              t = p_113(t);
              t = Cons_2_0(_id, s_21, t);
            }
          LocalPopChoice(b_9);
        }
      else
        {
          t = z_8;
          {
            ATerm o_21 = NULL,p_21 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                o_21 = ATgetFirst((ATermList) t);
                p_21 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(p_21), (ATerm) ATmakeAppl(sym_Undefined_1, o_21));
          }
        }
      return(t);
    }
    t = s_21(t);
  }
  h_21 = t;
  t = (ATerm) ATinsert(CheckATermList(h_21), (ATerm) ATmakeAppl(sym_Program_1, e_21));
  l_4 = t;
  t = SSLsetAnnotations(l_4, d_21);
  return(t);
}
static ATerm y_3 (ATerm l_53, ATerm m_53, ATerm n_53, ATerm t)
{
  ATerm t_21 = NULL;
  t = SSL_hashtable_put(n_53, l_53, m_53);
  t_21 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_21);
  return(t);
}
static ATerm z_3 (ATerm o_53, ATerm p_53, ATerm t)
{
  t = SSL_hashtable_get(p_53, o_53);
  return(t);
}
ATerm new_hashtable_0_2 (ATerm t_53, ATerm u_53, ATerm t)
{
  ATerm u_21 = NULL;
  t = SSL_hashtable_create(t_53, u_53);
  u_21 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_21);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL,z_21 = NULL,a_22 = NULL;
  v_21 = t;
  t = term_h_9;
  z_21 = t;
  t = term_i_9;
  a_22 = t;
  t = v_21;
  t = new_hashtable_0_2(z_21, a_22, t);
  w_21 = t;
  t = v_21;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_3(v_21, w_21, x_21, t);
  t = v_21;
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm b_22 = NULL;
  t = SSL_table_hashtable();
  b_22 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_22);
  return(t);
}
ATerm lookup_table_0_1 (ATerm f_50, ATerm t)
{
  ATerm k_22 = NULL;
  t = table_hashtable_0_0(t);
  k_22 = t;
  {
    ATerm j_9 = t;
    int k_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_9 = NULL;
        t = k_22;
        if(match_cons(t, sym_Hashtable_1))
          {
            e_9 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = z_3(f_50, e_9, t);
        LocalPopChoice(k_9);
      }
    else
      {
        t = j_9;
        {
          ATerm l_9 = NULL;
          t = f_50;
          t = table_create_0_0(t);
          t = k_22;
          if(match_cons(t, sym_Hashtable_1))
            {
              l_9 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_3(f_50, l_9, t);
        }
      }
  }
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm z_22 = NULL;
  z_22 = t;
  if(match_string(t, "--help"))
    {
      t = z_22;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = z_22;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = z_22;
        }
    }
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm a_23 = NULL,b_23 = NULL;
  t = term_m_9;
  a_23 = t;
  t = term_y_5;
  b_23 = t;
  t = term_n_9;
  t = x_3(a_23, b_23, t);
  t = term_o_9;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_p_9;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm o_113 (ATerm), ATerm t)
{
  ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL;
  t_22 = t;
  t = term_h_6;
  u_22 = t;
  t = term_r_9;
  t = lookup_table_0_1(u_22, t);
  y_22 = t;
  t = term_i_6;
  v_22 = t;
  t = (ATerm) ATempty;
  w_22 = t;
  t = y_22;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_3(v_22, w_22, x_22, t);
  t = t_22;
  {
    static ATerm l_2 (ATerm t);
    static ATerm l_2 (ATerm t)
    {
      ATerm y_9 = t;
      int z_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_113(t);
          LocalPopChoice(z_9);
        }
      else
        {
          t = y_9;
          {
            ATerm c_10 = t;
            int h_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(m_2, o_2, p_2, t);
                LocalPopChoice(h_10);
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
    t = parse_options_p__1_0(l_2, t);
  }
  {
    ATerm i_10 = t;
    int j_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_23 = NULL;
        m_23 = t;
        {
          ATerm k_10 = t;
          int l_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_9 = NULL;
              t = m_23;
              {
                ATerm n_10 = t;
                int t_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm u_9 = NULL,w_9 = NULL;
                    t = term_g_6;
                    u_9 = t;
                    t = term_m_9;
                    w_9 = t;
                    t = term_u_10;
                    t = u_3(u_9, w_9, t);
                    LocalPopChoice(t_10);
                  }
                else
                  {
                    t = n_10;
                    t = fetch_1_0(q_2, t);
                  }
              }
              t = m_23;
              t = default_system_usage_0_0(t);
              t = term_r_5;
              s_9 = t;
              t = SSL_exit(s_9);
              LocalPopChoice(l_10);
            }
          else
            {
              t = k_10;
              {
                ATerm d_10 = NULL,e_10 = NULL,g_10 = NULL;
                t = term_g_6;
                e_10 = t;
                t = term_d_8;
                g_10 = t;
                t = term_w_10;
                t = u_3(e_10, g_10, t);
                t = m_23;
                t = default_system_about_0_0(t);
                t = term_r_5;
                d_10 = t;
                t = SSL_exit(d_10);
              }
            }
        }
        LocalPopChoice(j_10);
      }
    else
      {
        t = i_10;
        {
          ATerm x_10 = t;
          int b_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_23 = NULL,o_23 = NULL,p_23 = NULL;
              static ATerm r_2 (ATerm t);
              static ATerm r_2 (ATerm t)
              {
                ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL,n_4 = NULL;
                s_23 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    r_23 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(s_23);
                q_23 = t;
                t = r_23;
                if(((r_22 != NULL) && (r_22 != t)))
                  _fail(t);
                else
                  r_22 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, r_23);
                n_4 = t;
                t = SSLsetAnnotations(n_4, q_23);
                return(t);
              }
              t = fetch_1_0(r_2, t);
              t = term_d_4;
              o_23 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_22)), term_c_11);
              p_23 = t;
              t = SSL_printnl(o_23, p_23);
              t = (ATerm) ATmakeAppl(sym__2, term_d_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_22)), term_c_11));
              t = default_system_usage_0_0(t);
              t = term_g_4;
              n_23 = t;
              t = SSL_exit(n_23);
              LocalPopChoice(b_11);
            }
          else
            {
              t = x_10;
            }
        }
      }
  }
  s_22 = t;
  t = term_h_6;
  t = table_destroy_0_0(t);
  t = s_22;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm d_11 = t;
  int e_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(e_11);
    }
  else
    {
      t = d_11;
      {
        ATerm f_11 = t;
        int g_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(g_11);
          }
        else
          {
            t = f_11;
            {
              ATerm h_11 = t;
              int i_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(w_2, x_2, z_2, t);
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
                        t = verbose_option_0_0(t);
                        LocalPopChoice(k_11);
                      }
                    else
                      {
                        t = j_11;
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
static ATerm w_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm f_24 = NULL,g_24 = NULL;
  t = term_l_11;
  f_24 = t;
  t = term_y_5;
  g_24 = t;
  t = term_m_11;
  t = x_3(f_24, g_24, t);
  t = term_n_11;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_o_11;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm x_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL,e_24 = NULL,s_4 = NULL;
  t = parse_options_1_0(t_2, t);
  y_23 = t;
  {
    ATerm p_11 = t;
    int q_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm a_3 (ATerm t);
        static ATerm a_3 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((x_23 != NULL) && (x_23 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                x_23 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(a_3, t);
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_23), term_i_5);
        t = open_file_0_0(t);
        LocalPopChoice(q_11);
      }
    else
      {
        t = p_11;
        t = term_c_8;
        x_23 = t;
      }
  }
  t = y_23;
  {
    ATerm s_11 = t;
    int t_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm b_3 (ATerm t);
        static ATerm b_3 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              if(((a_24 != NULL) && (a_24 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                a_24 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(b_3, t);
        LocalPopChoice(t_11);
      }
    else
      {
        t = s_11;
        t = term_u_11;
        a_24 = t;
      }
  }
  t = not_null(a_24);
  t = ReadFromFile_0_0(t);
  b_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_23, b_24);
  e_24 = t;
  if(match_cons(t, sym__2))
    {
      ATerm v_11 = ATgetArgument(t, 0);
      ATerm w_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_24);
  c_24 = t;
  t = b_24;
  {
    static ATerm d_3 (ATerm t);
    static ATerm d_3 (ATerm t)
    {
      t = not_null(x_23);
      return(t);
    }
    t = asfix_yield_1_0(d_3, t);
  }
  d_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_23, d_24);
  s_4 = t;
  t = SSLsetAnnotations(s_4, c_24);
  t = term_r_5;
  z_23 = t;
  t = SSL_exit(z_23);
  return(t);
}
