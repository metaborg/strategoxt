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
}
ATerm term_u_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_c_11;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_i_9;
ATerm term_f_9;
ATerm term_t_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_h_8;
ATerm term_f_8;
ATerm term_e_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_s_7;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_g_7;
ATerm term_c_7;
ATerm term_b_7;
ATerm term_y_6;
ATerm term_v_6;
ATerm term_u_6;
ATerm term_k_6;
ATerm term_j_6;
ATerm term_i_6;
ATerm term_h_6;
ATerm term_g_6;
ATerm term_b_6;
ATerm term_a_6;
ATerm term_z_5;
ATerm term_x_5;
ATerm term_w_5;
ATerm term_v_5;
ATerm term_u_5;
ATerm term_t_5;
ATerm term_s_5;
ATerm term_q_5;
ATerm term_p_5;
ATerm term_o_5;
ATerm term_n_5;
ATerm term_j_5;
ATerm term_i_5;
ATerm term_h_5;
ATerm term_b_5;
ATerm term_a_5;
ATerm term_h_4;
ATerm term_g_4;
ATerm term_d_4;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_d_4));
  term_d_4 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_g_4));
  term_g_4 = (ATerm) ATmakeAppl(ATmakeSymbol("not in AsFix format", 0, ATtrue));
  ATprotect(&(term_h_4));
  term_h_4 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_a_5));
  term_a_5 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_b_5));
  term_b_5 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_h_5));
  term_h_5 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_i_5));
  term_i_5 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_5));
  term_j_5 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_n_5));
  term_n_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_o_5));
  term_o_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeAppl(sym__2, term_p_5, term_q_5);
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(sym_Verbose_1, term_q_5);
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(sym__2, term_w_5, term_x_5);
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
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(sym__2, term_g_6, term_b_7);
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(sym__2, term_h_6, term_i_6);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("The asfix-yield utility unparses an asfix tree to flat text.\n", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("It reads from standard input and writes to standard output.\n", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(sym__2, term_c_8, term_x_5);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(sym__2, term_h_8, term_x_5);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym__2, term_l_9, term_x_5);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym__3, term_h_6, term_i_6, (ATerm) ATempty);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym__2, term_g_6, term_l_9);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym__2, term_g_6, term_c_8);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym__2, term_l_11, term_x_5);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm at_tail_1_0 (ATerm k_86 (ATerm), ATerm t);
ATerm skip2_1_0 (ATerm t_0 (ATerm), ATerm t);
ATerm is_leaf_0_0 (ATerm t);
ATerm leaves_3_0 (ATerm m_81 (ATerm), ATerm n_81 (ATerm), ATerm o_81 (ATerm (ATerm), ATerm), ATerm t);
ATerm asfix_yield2_1_0 (ATerm o_77 (ATerm), ATerm t);
ATerm asfix_yield_1_0 (ATerm n_77 (ATerm), ATerm t);
static ATerm u_7 (ATerm f_7, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm o_3 (ATerm i_16, ATerm t);
static ATerm p_3 (ATerm e_30, ATerm f_30, ATerm t);
static ATerm q_3 (ATerm n_31, ATerm o_31, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm s_10 (ATerm q_8, ATerm t);
static ATerm t_10 (ATerm u_8, ATerm w_8, ATerm y_8, ATerm t);
static ATerm w_10 (ATerm u_9, ATerm w_9, ATerm y_9, ATerm t);
static ATerm r_3 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm f_86 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm k_85 (ATerm), ATerm t);
static ATerm o_14 (ATerm v_13, ATerm t);
static ATerm p_14 (ATerm x_13, ATerm a_14, ATerm b_14, ATerm t);
static ATerm b_0 (ATerm t);
ATerm open_file_0_0 (ATerm t);
static ATerm c_0 (ATerm t);
static ATerm i_0 (ATerm t);
static ATerm j_0 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm n_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm f_1 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm y_3 (ATerm o_49, ATerm p_49, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm g_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm w_3 (ATerm j_54, ATerm k_54, ATerm i_54, ATerm t);
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm s_3 (ATerm g_59, ATerm h_59, ATerm t);
static ATerm t_3 (ATerm l_59, ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm v_85 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t);
static ATerm u_1 (ATerm t);
static ATerm w_1 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm v_3 (ATerm c_56, ATerm d_56, ATerm t);
static ATerm x_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm l_2 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm z_62 (ATerm), ATerm a_63 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm j_107 (ATerm), ATerm t);
static ATerm z_3 (ATerm b_59, ATerm c_59, ATerm d_59, ATerm t);
static ATerm a_4 (ATerm e_59, ATerm f_59, ATerm t);
ATerm new_hashtable_0_2 (ATerm j_59, ATerm k_59, ATerm t);
ATerm table_create_0_0 (ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm lookup_table_0_1 (ATerm v_55, ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
ATerm parse_options_1_0 (ATerm i_107 (ATerm), ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm y_2 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm at_tail_1_0 (ATerm k_86 (ATerm), ATerm t)
{
  ATerm e_0 = NULL,o_0 = NULL,w_0 = NULL,a_1 = NULL,d_1 = NULL,k_0 = NULL;
  d_1 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_0 = ATgetFirst((ATermList) t);
      w_0 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_1);
  e_0 = t;
  t = w_0;
  t = k_86(t);
  a_1 = t;
  t = (ATerm) ATinsert(CheckATermList(a_1), o_0);
  k_0 = t;
  t = SSLsetAnnotations(k_0, e_0);
  return(t);
}
ATerm skip2_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  ATerm q_4 = NULL,r_4 = NULL,s_4 = NULL;
  q_4 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_4 = ATgetFirst((ATermList) t);
      s_4 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_0 = NULL,s_0 = NULL,n_1 = NULL;
        t = SSLgetAnnotations(q_4);
        f_0 = t;
        t = s_4;
        t = at_tail_1_0(t_0, t);
        s_0 = t;
        t = (ATerm) ATinsert(CheckATermList(s_0), r_4);
        n_1 = t;
        t = SSLsetAnnotations(n_1, f_0);
      }
    }
  else
    {
      if(match_cons(t, sym_appl_2))
        {
          r_4 = ATgetArgument(t, 0);
          s_4 = ATgetArgument(t, 1);
          {
            ATerm e_1 = NULL,h_1 = NULL,o_1 = NULL;
            t = SSLgetAnnotations(q_4);
            e_1 = t;
            t = s_4;
            t = map_1_0(t_0, t);
            h_1 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, r_4, h_1);
            o_1 = t;
            t = SSLsetAnnotations(o_1, e_1);
          }
        }
      else
        {
          if(match_cons(t, sym_amb_1))
            {
              r_4 = ATgetArgument(t, 0);
              {
                ATerm v_1 = NULL,y_1 = NULL,z_1 = NULL,g_2 = NULL,h_2 = NULL,i_2 = NULL,r_1 = NULL,q_1 = NULL;
                t = SSLgetAnnotations(q_4);
                v_1 = t;
                t = r_4;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    z_1 = ATgetFirst((ATermList) t);
                    g_2 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(r_4);
                y_1 = t;
                t = z_1;
                t = t_0(t);
                h_2 = t;
                t = (ATerm) ATinsert(CheckATermList(g_2), h_2);
                q_1 = t;
                t = SSLsetAnnotations(q_1, y_1);
                i_2 = t;
                t = (ATerm) ATmakeAppl(sym_amb_1, i_2);
                r_1 = t;
                t = SSLsetAnnotations(r_1, v_1);
              }
            }
          else
            {
              ATerm x_2 = NULL,a_3 = NULL,s_1 = NULL;
              if(match_cons(t, sym_parsetree_2))
                {
                  r_4 = ATgetArgument(t, 0);
                  s_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(q_4);
              x_2 = t;
              t = r_4;
              t = t_0(t);
              a_3 = t;
              t = (ATerm) ATmakeAppl(sym_parsetree_2, a_3, s_4);
              s_1 = t;
              t = SSLsetAnnotations(s_1, x_2);
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
ATerm leaves_3_0 (ATerm m_81 (ATerm), ATerm n_81 (ATerm), ATerm o_81 (ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm x_4 (ATerm t)
  {
    ATerm f_3 = t;
    int g_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_81(t);
        t = m_81(t);
        LocalPopChoice(g_3);
      }
    else
      {
        t = f_3;
        {
          ATerm h_3 = t;
          int i_3 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_81(x_4, t);
              LocalPopChoice(i_3);
            }
          else
            {
              t = h_3;
              t = SRTS_all(x_4, t);
            }
        }
      }
    return(t);
  }
  t = x_4(t);
  return(t);
}
ATerm asfix_yield2_1_0 (ATerm o_77 (ATerm), ATerm t)
{
  static ATerm a_0 (ATerm t)
  {
    ATerm r_5 = NULL;
    r_5 = t;
    {
      ATerm m_3 = t;
      int n_3 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_3 = NULL,k_3 = NULL,l_3 = NULL;
          t = SSL_is_string(r_5);
          l_3 = t;
          t = o_77(t);
          k_3 = t;
          t = (ATerm) ATinsert(ATempty, l_3);
          j_3 = t;
          t = SSL_print(k_3, j_3);
          t = (ATerm) ATmakeAppl(sym__2, k_3, (ATerm) ATinsert(ATempty, l_3));
          LocalPopChoice(n_3);
        }
      else
        {
          t = m_3;
          {
            ATerm c_4 = NULL,e_4 = NULL;
            t = r_5;
            t = o_77(t);
            e_4 = t;
            t = (ATerm) ATinsert(ATempty, r_5);
            c_4 = t;
            t = SSL_printascii(e_4, c_4);
            t = (ATerm) ATmakeAppl(sym__2, e_4, (ATerm) ATinsert(ATempty, r_5));
          }
        }
    }
    return(t);
  }
  t = leaves_3_0(a_0, is_leaf_0_0, skip2_1_0, t);
  return(t);
}
ATerm asfix_yield_1_0 (ATerm n_77 (ATerm), ATerm t)
{
  ATerm x_3 = t;
  int b_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_5 = NULL,o_6 = NULL,p_6 = NULL;
      y_5 = t;
      if(match_cons(t, sym_parsetree_2))
        {
          o_6 = ATgetArgument(t, 0);
          p_6 = ATgetArgument(t, 1);
          {
            ATerm l_4 = NULL,c_2 = NULL;
            t = SSLgetAnnotations(y_5);
            l_4 = t;
            t = (ATerm) ATmakeAppl(sym_parsetree_2, o_6, p_6);
            c_2 = t;
            t = SSLsetAnnotations(c_2, l_4);
          }
        }
      else
        {
          ATerm l_5 = NULL,d_2 = NULL;
          if(match_cons(t, sym_appl_2))
            {
              o_6 = ATgetArgument(t, 0);
              p_6 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(y_5);
          l_5 = t;
          t = (ATerm) ATmakeAppl(sym_appl_2, o_6, p_6);
          d_2 = t;
          t = SSLsetAnnotations(d_2, l_5);
        }
      t = y_5;
      LocalPopChoice(b_4);
      t = asfix_yield2_1_0(n_77, t);
    }
  else
    {
      t = x_3;
      {
        ATerm q_6 = NULL,r_6 = NULL,s_6 = NULL;
        t = term_d_4;
        r_6 = t;
        t = (ATerm) ATinsert(ATempty, term_g_4);
        s_6 = t;
        t = SSL_printnl(r_6, s_6);
        t = term_h_4;
        q_6 = t;
        t = SSL_exit(q_6);
        t = (ATerm) ATinsert(ATempty, term_g_4);
      }
    }
  return(t);
}
static ATerm u_7 (ATerm f_7, ATerm t)
{
  t = SSL_fclose(f_7);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm n_7 = NULL,o_7 = NULL;
  o_7 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_7 = ATgetArgument(t, 0);
      {
        ATerm i_4 = t;
        int j_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(n_7);
            LocalPopChoice(j_4);
          }
        else
          {
            t = i_4;
            t = u_7(o_7, t);
          }
      }
    }
  else
    {
      t = u_7(o_7, t);
    }
  return(t);
}
static ATerm o_3 (ATerm i_16, ATerm t)
{
  t = SSL_read_term_from_stream(i_16);
  return(t);
}
static ATerm p_3 (ATerm e_30, ATerm f_30, ATerm t)
{
  t = SSL_strcat(e_30, f_30);
  return(t);
}
static ATerm q_3 (ATerm n_31, ATerm o_31, ATerm t)
{
  ATerm v_7 = NULL;
  t = SSL_fopen(n_31, o_31);
  v_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_7);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm z_7 = NULL;
  t = SSL_stdin_stream();
  z_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_7);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm g_8 = NULL;
  t = SSL_stdout_stream();
  g_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_8);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm i_8 = NULL;
  t = SSL_stderr_stream();
  i_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_8);
  return(t);
}
static ATerm s_10 (ATerm q_8, ATerm t)
{
  ATerm r_8 = NULL;
  t = SSL_explode_term(q_8);
  if(match_cons(t, sym__2))
    {
      ATerm k_4 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_4) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm n_4 = ATgetArgument(t, 1);
        if(((ATgetType(n_4) == AT_LIST) && !(ATisEmpty(n_4))))
          {
            r_8 = ATgetFirst((ATermList) n_4);
            {
              ATerm p_4 = (ATerm) ATgetNext((ATermList) n_4);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = r_8;
  if(match_cons(t, sym_stderr_0))
    {
      t = r_8;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = r_8;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = r_8;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm t_10 (ATerm u_8, ATerm w_8, ATerm y_8, ATerm t)
{
  ATerm b_9 = NULL,d_9 = NULL,h_9 = NULL,r_9 = NULL,j_2 = NULL;
  t = SSLgetAnnotations(y_8);
  h_9 = t;
  t = u_8;
  if(match_cons(t, sym_Path_1))
    {
      r_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_9, w_8);
  j_2 = t;
  t = SSLsetAnnotations(j_2, h_9);
  if(match_cons(t, sym__2))
    {
      b_9 = ATgetArgument(t, 0);
      d_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_3(b_9, d_9, t);
  return(t);
}
static ATerm w_10 (ATerm u_9, ATerm w_9, ATerm y_9, ATerm t)
{
  ATerm b_10 = NULL,c_10 = NULL,g_10 = NULL,n_10 = NULL,k_2 = NULL;
  t = SSLgetAnnotations(y_9);
  g_10 = t;
  t = SSL_is_string(u_9);
  n_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_10, w_9);
  k_2 = t;
  t = SSLsetAnnotations(k_2, g_10);
  if(match_cons(t, sym__2))
    {
      b_10 = ATgetArgument(t, 0);
      c_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_3(b_10, c_10, t);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm p_10 = NULL,q_10 = NULL,r_10 = NULL;
  p_10 = t;
  if(match_cons(t, sym__2))
    {
      q_10 = ATgetArgument(t, 0);
      r_10 = ATgetArgument(t, 1);
      {
        ATerm t_4 = t;
        int u_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_10(p_10, t);
            LocalPopChoice(u_4);
          }
        else
          {
            t = t_4;
            {
              ATerm v_4 = t;
              int w_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = t_10(q_10, r_10, p_10, t);
                  LocalPopChoice(w_4);
                }
              else
                {
                  t = v_4;
                  t = w_10(q_10, r_10, p_10, t);
                }
            }
          }
      }
    }
  else
    {
      t = s_10(p_10, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm z_10 = NULL,a_11 = NULL,b_11 = NULL,s_11 = NULL;
  s_11 = t;
  {
    ATerm y_4 = t;
    int z_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, s_11, term_a_5);
        t = r_3(t);
        LocalPopChoice(z_4);
      }
    else
      {
        t = y_4;
        {
          ATerm w_6 = NULL,x_6 = NULL;
          t = term_b_5;
          x_6 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_b_5, s_11);
          t = p_3(x_6, s_11, t);
          w_6 = t;
          t = SSL_perror(w_6);
          _fail(t);
        }
      }
  }
  a_11 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_3(b_11, t);
  z_10 = t;
  t = a_11;
  t = fclose_0_0(t);
  t = z_10;
  return(t);
}
ATerm fetch_1_0 (ATerm f_86 (ATerm), ATerm t)
{
  static ATerm f_13 (ATerm t)
  {
    ATerm b_13 = NULL,d_13 = NULL,e_13 = NULL;
    b_13 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_13 = ATgetFirst((ATermList) t);
        e_13 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm c_5 = t;
      int d_5 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_7 = NULL,l_7 = NULL,p_2 = NULL;
          t = SSLgetAnnotations(b_13);
          h_7 = t;
          t = d_13;
          t = f_86(t);
          l_7 = t;
          t = (ATerm) ATinsert(CheckATermList(e_13), l_7);
          p_2 = t;
          t = SSLsetAnnotations(p_2, h_7);
          LocalPopChoice(d_5);
        }
      else
        {
          t = c_5;
          {
            ATerm a_8 = NULL,d_8 = NULL,s_2 = NULL;
            t = SSLgetAnnotations(b_13);
            a_8 = t;
            t = e_13;
            t = f_13(t);
            d_8 = t;
            t = (ATerm) ATinsert(CheckATermList(d_8), d_13);
            s_2 = t;
            t = SSLsetAnnotations(s_2, a_8);
          }
        }
    }
    return(t);
  }
  t = f_13(t);
  return(t);
}
ATerm debug_1_0 (ATerm k_85 (ATerm), ATerm t)
{
  ATerm i_13 = NULL,l_13 = NULL,o_13 = NULL,p_13 = NULL;
  i_13 = t;
  t = k_85(t);
  l_13 = t;
  t = term_d_4;
  o_13 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_13), l_13);
  p_13 = t;
  t = SSL_printnl(o_13, p_13);
  t = i_13;
  return(t);
}
static ATerm o_14 (ATerm v_13, ATerm t)
{
  t = v_13;
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
  t = (ATerm) ATmakeAppl(sym__2, v_13, term_i_5);
  t = open_file_0_0(t);
  return(t);
}
static ATerm p_14 (ATerm x_13, ATerm a_14, ATerm b_14, ATerm t)
{
  t = SSL_open_file(x_13, a_14);
  return(t);
}
static ATerm b_0 (ATerm t)
{
  t = term_j_5;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm h_14 = NULL,i_14 = NULL,n_14 = NULL;
  h_14 = t;
  if(match_cons(t, sym__2))
    {
      i_14 = ATgetArgument(t, 0);
      n_14 = ATgetArgument(t, 1);
      {
        ATerm k_5 = t;
        int m_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_14(h_14, t);
            LocalPopChoice(m_5);
          }
        else
          {
            t = k_5;
            t = p_14(i_14, n_14, h_14, t);
          }
      }
    }
  else
    {
      t = o_14(h_14, t);
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
  t = y_3(i_15, g_15, t);
  t = d_15;
  return(t);
}
static ATerm j_0 (ATerm t)
{
  t = term_o_5;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_0, i_0, j_0, t);
  return(t);
}
static ATerm n_0 (ATerm t)
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
static ATerm u_0 (ATerm t)
{
  ATerm o_15 = NULL,p_15 = NULL;
  t = term_p_5;
  o_15 = t;
  t = term_q_5;
  p_15 = t;
  t = term_s_5;
  t = y_3(o_15, p_15, t);
  t = term_t_5;
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = term_u_5;
  return(t);
}
static ATerm x_0 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm q_15 = NULL,t_15 = NULL,u_15 = NULL;
  q_15 = t;
  t = SSL_string_to_int(q_15);
  t_15 = t;
  t = term_p_5;
  u_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_5, t_15);
  t = y_3(u_15, t_15, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, q_15);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  t = term_v_5;
  return(t);
}
static ATerm b_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm v_15 = NULL,x_15 = NULL;
  t = term_w_5;
  v_15 = t;
  t = term_x_5;
  x_15 = t;
  t = term_z_5;
  t = y_3(v_15, x_15, t);
  t = term_a_6;
  return(t);
}
static ATerm f_1 (ATerm t)
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
      t = Option_3_0(n_0, u_0, v_0, t);
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
            t = ArgOption_3_0(x_0, y_0, z_0, t);
            LocalPopChoice(f_6);
          }
        else
          {
            t = e_6;
            t = Option_3_0(b_1, c_1, f_1, t);
          }
      }
    }
  return(t);
}
static ATerm y_3 (ATerm o_49, ATerm p_49, ATerm t)
{
  ATerm g_16 = NULL,h_16 = NULL;
  t = term_g_6;
  g_16 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_g_6, o_49, p_49);
  t = lookup_table_0_1(g_16, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_3(o_49, p_49, h_16, t);
  t = (ATerm) ATmakeAppl(sym__3, term_g_6, o_49, p_49);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm o_16 = NULL,p_16 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_16 = NULL,r_16 = NULL,t_16 = NULL;
      t = term_x_5;
      t = h_0(t);
      q_16 = t;
      t = term_h_6;
      r_16 = t;
      t = term_i_6;
      t_16 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_6, term_i_6, q_16);
      t = w_3(r_16, t_16, q_16, t);
      _fail(t);
    }
  else
    {
      ATerm z_16 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_16 = ATgetFirst((ATermList) t);
          p_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_16;
      t = d_0(t);
      t = term_x_5;
      t = g_0(t);
      z_16 = t;
      t = (ATerm) ATinsert(CheckATermList(p_16), z_16);
    }
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm b_17 = NULL;
  b_17 = t;
  if(match_string(t, "-o"))
    {
      t = b_17;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = b_17;
    }
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm c_17 = NULL,d_17 = NULL;
  c_17 = t;
  t = term_j_6;
  d_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_6, c_17);
  t = y_3(d_17, c_17, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, c_17);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_k_6;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_1, i_1, j_1, t);
  return(t);
}
static ATerm w_3 (ATerm j_54, ATerm k_54, ATerm i_54, ATerm t)
{
  ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL;
  i_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_54, k_54);
  {
    ATerm l_6 = t;
    int m_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_6 = ATgetArgument(t, 0);
            ATerm t_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_54, k_54);
        t = v_3(j_54, k_54, t);
        LocalPopChoice(m_6);
      }
    else
      {
        t = l_6;
        t = (ATerm) ATempty;
      }
  }
  j_17 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_54, k_54, (ATerm) ATinsert(CheckATermList(j_17), i_54));
  t = lookup_table_0_1(j_54, t);
  m_17 = t;
  t = (ATerm) ATinsert(CheckATermList(j_17), i_54);
  k_17 = t;
  t = m_17;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_3(k_54, k_17, l_17, t);
  t = i_17;
  return(t);
}
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm v_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL;
      t = term_x_5;
      t = r_0(t);
      z_17 = t;
      t = term_h_6;
      a_18 = t;
      t = term_i_6;
      b_18 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_6, term_i_6, z_17);
      t = w_3(a_18, b_18, z_17, t);
      _fail(t);
    }
  else
    {
      ATerm f_18 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_17 = ATgetFirst((ATermList) t);
          w_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_17;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_17 = ATgetFirst((ATermList) t);
          y_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_17;
      t = p_0(t);
      t = x_17;
      t = q_0(t);
      f_18 = t;
      t = (ATerm) ATinsert(CheckATermList(y_17), f_18);
    }
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm h_18 = NULL;
  h_18 = t;
  if(match_string(t, "-i"))
    {
      t = h_18;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = h_18;
    }
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm i_18 = NULL,j_18 = NULL;
  i_18 = t;
  t = term_u_6;
  j_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_6, i_18);
  t = y_3(j_18, i_18, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, i_18);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_v_6;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_1, l_1, m_1, t);
  return(t);
}
static ATerm s_3 (ATerm g_59, ATerm h_59, ATerm t)
{
  ATerm k_18 = NULL;
  t = SSL_hashtable_remove(h_59, g_59);
  k_18 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_18);
  return(t);
}
static ATerm t_3 (ATerm l_59, ATerm t)
{
  ATerm l_18 = NULL;
  t = SSL_hashtable_destroy(l_59);
  l_18 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_18);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL;
  m_18 = t;
  t = table_hashtable_0_0(t);
  n_18 = t;
  t = lookup_table_0_1(m_18, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_3(p_18, t);
  t = n_18;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_3(m_18, o_18, t);
  t = m_18;
  return(t);
}
ATerm map_1_0 (ATerm v_85 (ATerm), ATerm t)
{
  static ATerm e_19 (ATerm t)
  {
    ATerm b_19 = NULL,c_19 = NULL,d_19 = NULL;
    b_19 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_19;
      }
    else
      {
        ATerm n_8 = NULL,v_8 = NULL,x_8 = NULL,b_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_19 = ATgetFirst((ATermList) t);
            d_19 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_19);
        n_8 = t;
        t = c_19;
        t = v_85(t);
        v_8 = t;
        t = d_19;
        t = e_19(t);
        x_8 = t;
        t = (ATerm) ATinsert(CheckATermList(x_8), v_8);
        b_3 = t;
        t = SSLsetAnnotations(b_3, n_8);
      }
    return(t);
  }
  t = e_19(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm h_19 = NULL,i_19 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_19 = ATgetFirst((ATermList) t);
      i_19 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm m_19 = NULL,n_19 = NULL;
        static ATerm p_1 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(m_19)), not_null(n_19));
          return(t);
        }
        t = i_19;
        t = m_0(t);
        if(((m_19 != NULL) && (m_19 != t)))
          _fail(t);
        else
          m_19 = t;
        t = h_19;
        t = l_0(t);
        if(((n_19 != NULL) && (n_19 != t)))
          _fail(t);
        else
          n_19 = t;
        t = i_19;
        t = reverse_acc_2_0(l_0, p_1, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_x_5;
      t = m_0(t);
    }
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm c_20 = NULL;
  c_20 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_20), term_y_6);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm r_19 = NULL,s_19 = NULL,t_19 = NULL;
  ATerm z_6 = t;
  int a_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_19 = NULL,v_19 = NULL;
      t = term_g_6;
      u_19 = t;
      t = term_b_7;
      v_19 = t;
      t = term_c_7;
      t = v_3(u_19, v_19, t);
      r_19 = t;
      LocalPopChoice(a_7);
    }
  else
    {
      t = z_6;
      {
        static ATerm t_1 (ATerm t)
        {
          ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL,d_3 = NULL;
          y_19 = t;
          if(match_cons(t, sym_Program_1))
            {
              x_19 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(y_19);
          w_19 = t;
          t = x_19;
          if(((r_19 != NULL) && (r_19 != t)))
            _fail(t);
          else
            r_19 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, x_19);
          d_3 = t;
          t = SSLsetAnnotations(d_3, w_19);
          return(t);
        }
        t = fetch_1_0(t_1, t);
      }
    }
  {
    ATerm d_7 = t;
    int e_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_7), not_null(r_19)), term_g_7);
        t = echo_0_0(t);
        LocalPopChoice(e_7);
      }
    else
      {
        t = d_7;
      }
  }
  t = term_j_7;
  t = echo_0_0(t);
  t = term_h_6;
  s_19 = t;
  t = term_i_6;
  t_19 = t;
  t = term_k_7;
  t = v_3(s_19, t_19, t);
  t = reverse_acc_2_0(_id, u_1, t);
  t = map_1_0(w_1, t);
  {
    ATerm m_7 = t;
    int p_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_7), term_r_7), term_q_7);
        t = echo_0_0(t);
        LocalPopChoice(p_7);
      }
    else
      {
        t = m_7;
      }
  }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm g_20 = NULL,h_20 = NULL,i_20 = NULL;
  g_20 = t;
  {
    ATerm t_7 = t;
    int w_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = g_20;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm x_7 = ATgetFirst((ATermList) t);
                ATerm y_7 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = g_20;
          }
        LocalPopChoice(w_7);
      }
    else
      {
        t = t_7;
        t = (ATerm) ATinsert(ATempty, g_20);
      }
  }
  h_20 = t;
  t = term_b_8;
  i_20 = t;
  t = SSL_printnl(i_20, h_20);
  t = g_20;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm m_20 = NULL,n_20 = NULL;
  t = term_g_6;
  m_20 = t;
  t = term_b_7;
  n_20 = t;
  t = term_c_7;
  t = v_3(m_20, n_20, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm v_3 (ATerm c_56, ATerm d_56, ATerm t)
{
  ATerm o_20 = NULL;
  t = lookup_table_0_1(c_56, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      o_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_4(d_56, o_20, t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm q_20 = NULL,r_20 = NULL;
  t = term_c_8;
  q_20 = t;
  t = term_x_5;
  r_20 = t;
  t = term_e_8;
  t = y_3(q_20, r_20, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = term_f_8;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm s_20 = NULL,t_20 = NULL,u_20 = NULL,v_20 = NULL;
  t = term_c_8;
  u_20 = t;
  t = term_x_5;
  v_20 = t;
  t = term_e_8;
  t = y_3(u_20, v_20, t);
  t = term_h_8;
  s_20 = t;
  t = term_x_5;
  t_20 = t;
  t = term_j_8;
  t = y_3(s_20, t_20, t);
  t = term_k_8;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_l_8;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm m_8 = t;
  int o_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_1, a_2, b_2, t);
      LocalPopChoice(o_8);
    }
  else
    {
      t = m_8;
      t = Option_3_0(e_2, f_2, l_2, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm z_62 (ATerm), ATerm a_63 (ATerm), ATerm t)
{
  ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL,u_3 = NULL;
  b_21 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_20 = ATgetFirst((ATermList) t);
      y_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_21);
  w_20 = t;
  t = x_20;
  t = z_62(t);
  z_20 = t;
  t = y_20;
  t = a_63(t);
  a_21 = t;
  t = (ATerm) ATinsert(CheckATermList(a_21), z_20);
  u_3 = t;
  t = SSLsetAnnotations(u_3, w_20);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm j_107 (ATerm), ATerm t)
{
  ATerm g_21 = NULL,h_21 = NULL,i_21 = NULL,j_21 = NULL,l_21 = NULL,m_21 = NULL,f_4 = NULL;
  g_21 = t;
  {
    ATerm p_8 = t;
    int s_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_8;
        t = j_107(t);
        LocalPopChoice(s_8);
      }
    else
      {
        t = p_8;
      }
  }
  t = g_21;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_21 = ATgetFirst((ATermList) t);
      j_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_21);
  h_21 = t;
  t = term_b_7;
  m_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_7, i_21);
  t = y_3(m_21, i_21, t);
  t = j_21;
  {
    static ATerm w_21 (ATerm t)
    {
      ATerm z_8 = t;
      int a_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_9 = t;
          int e_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_21 = NULL;
              p_21 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = p_21;
              LocalPopChoice(e_9);
            }
          else
            {
              t = c_9;
              t = j_107(t);
              t = Cons_2_0(_id, w_21, t);
            }
          LocalPopChoice(a_9);
        }
      else
        {
          t = z_8;
          {
            ATerm s_21 = NULL,t_21 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                s_21 = ATgetFirst((ATermList) t);
                t_21 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(t_21), (ATerm) ATmakeAppl(sym_Undefined_1, s_21));
          }
        }
      return(t);
    }
    t = w_21(t);
  }
  l_21 = t;
  t = (ATerm) ATinsert(CheckATermList(l_21), (ATerm) ATmakeAppl(sym_Program_1, i_21));
  f_4 = t;
  t = SSLsetAnnotations(f_4, h_21);
  return(t);
}
static ATerm z_3 (ATerm b_59, ATerm c_59, ATerm d_59, ATerm t)
{
  ATerm x_21 = NULL;
  t = SSL_hashtable_put(d_59, b_59, c_59);
  x_21 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_21);
  return(t);
}
static ATerm a_4 (ATerm e_59, ATerm f_59, ATerm t)
{
  t = SSL_hashtable_get(f_59, e_59);
  return(t);
}
ATerm new_hashtable_0_2 (ATerm j_59, ATerm k_59, ATerm t)
{
  ATerm y_21 = NULL;
  t = SSL_hashtable_create(j_59, k_59);
  y_21 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_21);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm z_21 = NULL,a_22 = NULL,b_22 = NULL,d_22 = NULL,e_22 = NULL;
  z_21 = t;
  t = term_f_9;
  d_22 = t;
  t = term_i_9;
  e_22 = t;
  t = z_21;
  t = new_hashtable_0_2(d_22, e_22, t);
  a_22 = t;
  t = z_21;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_3(z_21, a_22, b_22, t);
  t = z_21;
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm f_22 = NULL;
  t = SSL_table_hashtable();
  f_22 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_22);
  return(t);
}
ATerm lookup_table_0_1 (ATerm v_55, ATerm t)
{
  ATerm o_22 = NULL;
  t = table_hashtable_0_0(t);
  o_22 = t;
  {
    ATerm j_9 = t;
    int k_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_9 = NULL;
        t = o_22;
        if(match_cons(t, sym_Hashtable_1))
          {
            g_9 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = a_4(v_55, g_9, t);
        LocalPopChoice(k_9);
      }
    else
      {
        t = j_9;
        {
          ATerm n_9 = NULL;
          t = v_55;
          t = table_create_0_0(t);
          t = o_22;
          if(match_cons(t, sym_Hashtable_1))
            {
              n_9 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = a_4(v_55, n_9, t);
        }
      }
  }
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm d_23 = NULL;
  d_23 = t;
  if(match_string(t, "--help"))
    {
      t = d_23;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = d_23;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = d_23;
        }
    }
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm e_23 = NULL,f_23 = NULL;
  t = term_l_9;
  e_23 = t;
  t = term_x_5;
  f_23 = t;
  t = term_m_9;
  t = y_3(e_23, f_23, t);
  t = term_o_9;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_p_9;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm i_107 (ATerm), ATerm t)
{
  ATerm v_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL;
  x_22 = t;
  t = term_h_6;
  y_22 = t;
  t = term_q_9;
  t = lookup_table_0_1(y_22, t);
  c_23 = t;
  t = term_i_6;
  z_22 = t;
  t = (ATerm) ATempty;
  a_23 = t;
  t = c_23;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_3(z_22, a_23, b_23, t);
  t = x_22;
  {
    static ATerm m_2 (ATerm t)
    {
      ATerm s_9 = t;
      int t_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_107(t);
          LocalPopChoice(t_9);
        }
      else
        {
          t = s_9;
          {
            ATerm a_10 = t;
            int d_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(n_2, o_2, q_2, t);
                LocalPopChoice(d_10);
              }
            else
              {
                t = a_10;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(m_2, t);
  }
  {
    ATerm e_10 = t;
    int i_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_23 = NULL;
        q_23 = t;
        {
          ATerm j_10 = t;
          int l_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_9 = NULL;
              t = q_23;
              {
                ATerm m_10 = t;
                int o_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm x_9 = NULL,z_9 = NULL;
                    t = term_g_6;
                    x_9 = t;
                    t = term_l_9;
                    z_9 = t;
                    t = term_u_10;
                    t = v_3(x_9, z_9, t);
                    LocalPopChoice(o_10);
                  }
                else
                  {
                    t = m_10;
                    t = fetch_1_0(r_2, t);
                  }
              }
              t = q_23;
              t = default_system_usage_0_0(t);
              t = term_q_5;
              v_9 = t;
              t = SSL_exit(v_9);
              LocalPopChoice(l_10);
            }
          else
            {
              t = j_10;
              {
                ATerm f_10 = NULL,h_10 = NULL,k_10 = NULL;
                t = term_g_6;
                h_10 = t;
                t = term_c_8;
                k_10 = t;
                t = term_v_10;
                t = v_3(h_10, k_10, t);
                t = q_23;
                t = default_system_about_0_0(t);
                t = term_q_5;
                f_10 = t;
                t = SSL_exit(f_10);
              }
            }
        }
        LocalPopChoice(i_10);
      }
    else
      {
        t = e_10;
        {
          ATerm x_10 = t;
          int y_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_23 = NULL,s_23 = NULL,t_23 = NULL;
              static ATerm t_2 (ATerm t)
              {
                ATerm u_23 = NULL,v_23 = NULL,w_23 = NULL,m_4 = NULL;
                w_23 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    v_23 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(w_23);
                u_23 = t;
                t = v_23;
                if(((v_22 != NULL) && (v_22 != t)))
                  _fail(t);
                else
                  v_22 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, v_23);
                m_4 = t;
                t = SSLsetAnnotations(m_4, u_23);
                return(t);
              }
              t = fetch_1_0(t_2, t);
              t = term_d_4;
              s_23 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_22)), term_c_11);
              t_23 = t;
              t = SSL_printnl(s_23, t_23);
              t = (ATerm) ATmakeAppl(sym__2, term_d_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_22)), term_c_11));
              t = default_system_usage_0_0(t);
              t = term_h_4;
              r_23 = t;
              t = SSL_exit(r_23);
              LocalPopChoice(y_10);
            }
          else
            {
              t = x_10;
            }
        }
      }
  }
  w_22 = t;
  t = term_h_6;
  t = table_destroy_0_0(t);
  t = w_22;
  return(t);
}
static ATerm u_2 (ATerm t)
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
                  t = Option_3_0(v_2, w_2, y_2, t);
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
static ATerm v_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm j_24 = NULL,k_24 = NULL;
  t = term_l_11;
  j_24 = t;
  t = term_x_5;
  k_24 = t;
  t = term_m_11;
  t = y_3(j_24, k_24, t);
  t = term_n_11;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_o_11;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm b_24 = NULL,c_24 = NULL,d_24 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL,h_24 = NULL,i_24 = NULL,o_4 = NULL;
  t = parse_options_1_0(u_2, t);
  c_24 = t;
  {
    ATerm p_11 = t;
    int q_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm z_2 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((b_24 != NULL) && (b_24 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                b_24 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(z_2, t);
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_24), term_i_5);
        t = open_file_0_0(t);
        LocalPopChoice(q_11);
      }
    else
      {
        t = p_11;
        t = term_b_8;
        b_24 = t;
      }
  }
  t = c_24;
  {
    ATerm r_11 = t;
    int t_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm c_3 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              if(((e_24 != NULL) && (e_24 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                e_24 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(c_3, t);
        LocalPopChoice(t_11);
      }
    else
      {
        t = r_11;
        t = term_u_11;
        e_24 = t;
      }
  }
  t = not_null(e_24);
  t = ReadFromFile_0_0(t);
  f_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_24, f_24);
  i_24 = t;
  if(match_cons(t, sym__2))
    {
      ATerm v_11 = ATgetArgument(t, 0);
      ATerm w_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_24);
  g_24 = t;
  t = f_24;
  {
    static ATerm e_3 (ATerm t)
    {
      t = not_null(b_24);
      return(t);
    }
    t = asfix_yield_1_0(e_3, t);
  }
  h_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_24, h_24);
  o_4 = t;
  t = SSLsetAnnotations(o_4, g_24);
  t = term_q_5;
  d_24 = t;
  t = SSL_exit(d_24);
  return(t);
}
