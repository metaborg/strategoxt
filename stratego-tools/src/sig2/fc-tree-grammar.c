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
Symbol sym_TreeGrammar_1;
Symbol sym_NonTermRef_2;
Symbol sym_NonTermDec_3;
Symbol sym_Prod_2;
Symbol sym_NonTermRef_2;
Symbol sym_Param_1;
Symbol sym_String_0;
Symbol sym_Int_0;
Symbol sym_Id_1;
Symbol sym_NonTermRef_2;
Symbol sym_Param_1;
Symbol sym_String_0;
Symbol sym_Int_0;
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
Symbol sym_Runtime_1;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
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
  sym_TreeGrammar_1 = ATmakeSymbol("TreeGrammar", 1, ATfalse);
  ATprotectSymbol(sym_TreeGrammar_1);
  sym_NonTermRef_2 = ATmakeSymbol("NonTermRef", 2, ATfalse);
  ATprotectSymbol(sym_NonTermRef_2);
  sym_NonTermDec_3 = ATmakeSymbol("NonTermDec", 3, ATfalse);
  ATprotectSymbol(sym_NonTermDec_3);
  sym_Prod_2 = ATmakeSymbol("Prod", 2, ATfalse);
  ATprotectSymbol(sym_Prod_2);
  sym_NonTermRef_2 = ATmakeSymbol("NonTermRef", 2, ATfalse);
  ATprotectSymbol(sym_NonTermRef_2);
  sym_Param_1 = ATmakeSymbol("Param", 1, ATfalse);
  ATprotectSymbol(sym_Param_1);
  sym_String_0 = ATmakeSymbol("String", 0, ATfalse);
  ATprotectSymbol(sym_String_0);
  sym_Int_0 = ATmakeSymbol("Int", 0, ATfalse);
  ATprotectSymbol(sym_Int_0);
  sym_Id_1 = ATmakeSymbol("Id", 1, ATfalse);
  ATprotectSymbol(sym_Id_1);
  sym_NonTermRef_2 = ATmakeSymbol("NonTermRef", 2, ATfalse);
  ATprotectSymbol(sym_NonTermRef_2);
  sym_Param_1 = ATmakeSymbol("Param", 1, ATfalse);
  ATprotectSymbol(sym_Param_1);
  sym_String_0 = ATmakeSymbol("String", 0, ATfalse);
  ATprotectSymbol(sym_String_0);
  sym_Int_0 = ATmakeSymbol("Int", 0, ATfalse);
  ATprotectSymbol(sym_Int_0);
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
  sym_Runtime_1 = ATmakeSymbol("Runtime", 1, ATfalse);
  ATprotectSymbol(sym_Runtime_1);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_z_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_e_18;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_h_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_c_16;
ATerm term_t_15;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_m_13;
ATerm term_h_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_s_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_i_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_o_10;
ATerm term_m_9;
ATerm term_f_9;
ATerm term_a_7;
ATerm term_v_6;
void init_constant_terms (void)
{
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym_Verbose_1, term_g_12);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym__3, term_o_16, term_p_16, term_v_6);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm v_82 (ATerm), ATerm);
ATerm Param_1_0 (ATerm j_61 (ATerm), ATerm);
ATerm c_0 (ATerm);
ATerm k_0 (ATerm);
ATerm m_0 (ATerm);
ATerm n_0 (ATerm);
ATerm o_0 (ATerm);
ATerm q_0 (ATerm);
ATerm fc_Arg_0_0 (ATerm);
ATerm NonTermRef_2_0 (ATerm c_61 (ATerm), ATerm d_61 (ATerm), ATerm);
ATerm t_0 (ATerm);
ATerm w_0 (ATerm);
ATerm y_0 (ATerm);
ATerm a_1 (ATerm);
ATerm c_1 (ATerm);
ATerm e_1 (ATerm);
ATerm fc_ProdItem_0_0 (ATerm);
ATerm i_1 (ATerm);
ATerm fc_List_1_0 (ATerm g_67 (ATerm), ATerm);
ATerm Id_1_0 (ATerm k_61 (ATerm), ATerm);
ATerm Prod_2_0 (ATerm h_61 (ATerm), ATerm i_61 (ATerm), ATerm);
ATerm NonTermDec_3_0 (ATerm e_61 (ATerm), ATerm f_61 (ATerm), ATerm g_61 (ATerm), ATerm);
ATerm TreeGrammar_1_0 (ATerm b_61 (ATerm), ATerm);
ATerm _2_0 (ATerm k_56 (ATerm), ATerm l_56 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm q_87 (ATerm), ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm q_1 (ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm w_1 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm d_84 (ATerm), ATerm);
ATerm e_8 (ATerm v_7, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm a_2 (ATerm);
ATerm d_2 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm u_71 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm a_72 (ATerm), ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm o_2 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm t_2 (ATerm);
ATerm z_2 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm s_3 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm a_78 (ATerm), ATerm b_78 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm u_82 (ATerm), ATerm);
ATerm c_4 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm d_4 (ATerm);
ATerm need_help_1_0 (ATerm b_85 (ATerm), ATerm);
ATerm map_1_0 (ATerm j_71 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm l_66 (ATerm), ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm m_66 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm z_60 (ATerm), ATerm a_61 (ATerm), ATerm);
ATerm p_4 (ATerm);
ATerm parse_options_p__1_0 (ATerm x_89 (ATerm), ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm a_5 (ATerm);
ATerm c_5 (ATerm);
ATerm parse_options_1_0 (ATerm w_89 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm d_85 (ATerm), ATerm e_85 (ATerm), ATerm f_85 (ATerm), ATerm g_85 (ATerm), ATerm);
ATerm i_5 (ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm iowrap_3_0 (ATerm m_84 (ATerm), ATerm n_84 (ATerm), ATerm o_84 (ATerm), ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm s_5 (ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm b_6 (ATerm);
ATerm c_6 (ATerm);
ATerm f_6 (ATerm);
ATerm i_6 (ATerm);
ATerm j_6 (ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm m_6 (ATerm);
ATerm s_6 (ATerm);
ATerm u_6 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm e_0 = NULL,l_0 = NULL;
  e_0 = t;
  t = term_v_6;
  t = whoami_0_0(t);
  l_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), l_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = e_0;
  return(t);
}
ATerm if_verbose2_1_0 (ATerm v_82 (ATerm), ATerm t)
{
  ATerm w_6 = t;
  int x_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_0 = NULL,r_0 = NULL;
      p_0 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm y_6 = t;
        int z_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_0 = NULL;
            t = eval_config_0_0(t);
            u_0 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), u_0);
            t = u_0;
            ;
            LocalPopChoice(z_6);
          }
        else
          {
            t = y_6;
          }
        r_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_0, term_a_7);
        t = geq_0_0(t);
        t = p_0;
        t = v_82(t);
      }
      ;
      LocalPopChoice(x_6);
    }
  else
    {
      t = w_6;
    }
  return(t);
}
ATerm Param_1_0 (ATerm j_61 (ATerm), ATerm t)
{
  ATerm s_0 = NULL,x_0 = NULL,b_1 = NULL,h_1 = NULL;
  h_1 = t;
  if(match_cons(t, sym_Param_1))
    {
      x_0 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_1);
  s_0 = t;
  t = x_0;
  t = j_61(t);
  b_1 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Param_1, b_1), s_0);
  return(t);
}
ATerm c_0 (ATerm t)
{
  ATerm b_7 = t;
  int o_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_1_0(m_0, t);
      ;
      LocalPopChoice(o_7);
    }
  else
    {
      t = b_7;
      t = if_verbose2_1_0(n_0, t);
    }
  return(t);
}
ATerm k_0 (ATerm t)
{
  t = fc_List_1_0(fc_Arg_0_0, t);
  return(t);
}
ATerm m_0 (ATerm t)
{
  ATerm r_1 = NULL;
  r_1 = t;
  t = SSL_is_string(r_1);
  return(t);
}
ATerm n_0 (ATerm t)
{
  ATerm v_0 = NULL;
  v_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, v_0), (ATerm) ATmakeAppl(ATmakeSymbol("Not a Id: ", 0, ATtrue))));
  t = v_0;
  return(t);
}
ATerm o_0 (ATerm t)
{
  ATerm u_1 = NULL;
  u_1 = t;
  t = SSL_is_int(u_1);
  return(t);
}
ATerm q_0 (ATerm t)
{
  ATerm z_0 = NULL;
  z_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, z_0), (ATerm) ATmakeAppl(ATmakeSymbol("Not a Arg: ", 0, ATtrue))));
  t = z_0;
  return(t);
}
ATerm fc_Arg_0_0 (ATerm t)
{
  ATerm p_7 = t;
  int q_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_7 = t;
      int s_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = NonTermRef_2_0(c_0, k_0, t);
          ;
          LocalPopChoice(s_7);
        }
      else
        {
          t = r_7;
          {
            ATerm t_7 = t;
            int u_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Param_1_0(o_0, t);
                ;
                LocalPopChoice(u_7);
              }
            else
              {
                t = t_7;
                {
                  ATerm w_7 = t;
                  int x_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(!(match_cons(t, sym_String_0)))
                        _fail(t);
                      ;
                      LocalPopChoice(x_7);
                    }
                  else
                    {
                      t = w_7;
                      if(!(match_cons(t, sym_Int_0)))
                        _fail(t);
                    }
                }
              }
          }
        }
      ;
      LocalPopChoice(q_7);
    }
  else
    {
      t = p_7;
      t = if_verbose2_1_0(q_0, t);
    }
  return(t);
}
ATerm NonTermRef_2_0 (ATerm c_61 (ATerm), ATerm d_61 (ATerm), ATerm t)
{
  ATerm v_1 = NULL,x_1 = NULL,y_1 = NULL,z_1 = NULL,b_2 = NULL,c_2 = NULL;
  c_2 = t;
  if(match_cons(t, sym_NonTermRef_2))
    {
      x_1 = ATgetArgument(t, 0);
      y_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_2);
  v_1 = t;
  t = x_1;
  t = c_61(t);
  z_1 = t;
  t = y_1;
  t = d_61(t);
  b_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_NonTermRef_2, z_1, b_2), v_1);
  return(t);
}
ATerm t_0 (ATerm t)
{
  ATerm z_7 = t;
  int a_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_1_0(y_0, t);
      ;
      LocalPopChoice(a_8);
    }
  else
    {
      t = z_7;
      t = if_verbose2_1_0(a_1, t);
    }
  return(t);
}
ATerm w_0 (ATerm t)
{
  t = fc_List_1_0(fc_Arg_0_0, t);
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm h_2 = NULL;
  h_2 = t;
  t = SSL_is_string(h_2);
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm d_1 = NULL;
  d_1 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, d_1), (ATerm) ATmakeAppl(ATmakeSymbol("Not a Id: ", 0, ATtrue))));
  t = d_1;
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm i_2 = NULL;
  i_2 = t;
  t = SSL_is_int(i_2);
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm g_1 = NULL;
  g_1 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, g_1), (ATerm) ATmakeAppl(ATmakeSymbol("Not a ProdItem: ", 0, ATtrue))));
  t = g_1;
  return(t);
}
ATerm fc_ProdItem_0_0 (ATerm t)
{
  ATerm d_8 = t;
  int i_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_8 = t;
      int k_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = NonTermRef_2_0(t_0, w_0, t);
          ;
          LocalPopChoice(k_8);
        }
      else
        {
          t = j_8;
          {
            ATerm l_8 = t;
            int m_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Param_1_0(c_1, t);
                ;
                LocalPopChoice(m_8);
              }
            else
              {
                t = l_8;
                {
                  ATerm n_8 = t;
                  int o_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(!(match_cons(t, sym_String_0)))
                        _fail(t);
                      ;
                      LocalPopChoice(o_8);
                    }
                  else
                    {
                      t = n_8;
                      if(!(match_cons(t, sym_Int_0)))
                        _fail(t);
                    }
                }
              }
          }
        }
      ;
      LocalPopChoice(i_8);
    }
  else
    {
      t = d_8;
      t = if_verbose2_1_0(e_1, t);
    }
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm l_1 = NULL;
  l_1 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, l_1), (ATerm) ATmakeAppl(ATmakeSymbol("Not a List: ", 0, ATtrue))));
  t = l_1;
  return(t);
}
ATerm fc_List_1_0 (ATerm g_67 (ATerm), ATerm t)
{
  ATerm v_8 = t;
  int c_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_9 = t;
      int e_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(e_9);
        }
      else
        {
          t = d_9;
          {
            ATerm f_1 (ATerm t)
            {
              t = fc_List_1_0(g_67, t);
              return(t);
            }
            t = Cons_2_0(g_67, f_1, t);
          }
        }
      ;
      LocalPopChoice(c_9);
    }
  else
    {
      t = v_8;
      t = if_verbose2_1_0(i_1, t);
    }
  return(t);
}
ATerm Id_1_0 (ATerm k_61 (ATerm), ATerm t)
{
  ATerm j_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL;
  m_2 = t;
  if(match_cons(t, sym_Id_1))
    {
      k_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_2);
  j_2 = t;
  t = k_2;
  t = k_61(t);
  l_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_1, l_2), j_2);
  return(t);
}
ATerm Prod_2_0 (ATerm h_61 (ATerm), ATerm i_61 (ATerm), ATerm t)
{
  ATerm s_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL,x_2 = NULL,y_2 = NULL;
  y_2 = t;
  if(match_cons(t, sym_Prod_2))
    {
      u_2 = ATgetArgument(t, 0);
      v_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_2);
  s_2 = t;
  t = u_2;
  t = h_61(t);
  w_2 = t;
  t = v_2;
  t = i_61(t);
  x_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prod_2, w_2, x_2), s_2);
  return(t);
}
ATerm NonTermDec_3_0 (ATerm e_61 (ATerm), ATerm f_61 (ATerm), ATerm g_61 (ATerm), ATerm t)
{
  ATerm e_3 = NULL,f_3 = NULL,g_3 = NULL,i_3 = NULL,j_3 = NULL,m_3 = NULL,n_3 = NULL,t_3 = NULL;
  t_3 = t;
  if(match_cons(t, sym_NonTermDec_3))
    {
      f_3 = ATgetArgument(t, 0);
      g_3 = ATgetArgument(t, 1);
      i_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_3);
  e_3 = t;
  t = f_3;
  t = e_61(t);
  j_3 = t;
  t = g_3;
  t = f_61(t);
  m_3 = t;
  t = i_3;
  t = g_61(t);
  n_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_NonTermDec_3, j_3, m_3, n_3), e_3);
  return(t);
}
ATerm TreeGrammar_1_0 (ATerm b_61 (ATerm), ATerm t)
{
  ATerm x_4 = NULL,y_4 = NULL,z_4 = NULL,b_5 = NULL;
  b_5 = t;
  if(match_cons(t, sym_TreeGrammar_1))
    {
      y_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_5);
  x_4 = t;
  t = y_4;
  t = b_61(t);
  z_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_TreeGrammar_1, z_4), x_4);
  return(t);
}
ATerm _2_0 (ATerm k_56 (ATerm), ATerm l_56 (ATerm), ATerm t)
{
  ATerm u_5 = NULL,v_5 = NULL,a_6 = NULL,d_6 = NULL,e_6 = NULL,h_6 = NULL;
  h_6 = t;
  if(match_cons(t, sym__2))
    {
      v_5 = ATgetArgument(t, 0);
      a_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_6);
  u_5 = t;
  t = v_5;
  t = k_56(t);
  d_6 = t;
  t = a_6;
  t = l_56(t);
  e_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, d_6, e_6), u_5);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm q_87 (ATerm), ATerm t)
{
  ATerm n_6 = NULL,o_6 = NULL,p_6 = NULL;
  if(match_cons(t, sym__2))
    {
      n_6 = ATgetArgument(t, 0);
      o_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_6, term_f_9);
  t = open_stream_0_0(t);
  p_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_6, o_6);
  t = q_87(t);
  t = fclose_0_0(t);
  t = o_6;
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = fetch_1_0(q_1, t);
  return(t);
}
ATerm o_1 (ATerm t)
{
  t = WriteToFile_1_0(s_1, t);
  return(t);
}
ATerm q_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm c_7 = NULL,d_7 = NULL,e_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_9 = ATgetArgument(t, 0);
      if(match_cons(h_9, sym_Stream_1))
        {
          c_7 = ATgetArgument(h_9, 0);
        }
      else
        _fail(t);
      d_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(c_7, d_7);
  e_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_7);
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = WriteToFile_1_0(w_1, t);
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm f_7 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_9 = ATgetArgument(t, 0);
      if(match_cons(j_9, sym_Stream_1))
        {
          f_7 = ATgetArgument(j_9, 0);
        }
      else
        _fail(t);
      g_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(f_7, g_7);
  h_7 = t;
  t = SSL_fputc((ATerm)ATmakeInt(10), h_7);
  i_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_7);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm q_6 = NULL,t_6 = NULL;
  q_6 = t;
  {
    ATerm j_1 (ATerm t)
    {
      ATerm k_9 = t;
      int l_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_1 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((t_6 != NULL) && (t_6 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  t_6 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(k_1, t);
          ;
          LocalPopChoice(l_9);
        }
      else
        {
          t = k_9;
          t = term_m_9;
          if(((t_6 != NULL) && (t_6 != t)))
            _fail(t);
          else
            t_6 = t;
        }
      return(t);
    }
    t = _2_0(j_1, _id, t);
    t = q_6;
    {
      ATerm m_1 (ATerm t)
      {
        ATerm p_1 = NULL;
        p_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_6), p_1);
        return(t);
      }
      t = _2_0(_id, m_1, t);
      {
        ATerm p_9 = t;
        int q_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(n_1, o_1, t);
            ;
            LocalPopChoice(q_9);
          }
        else
          {
            t = p_9;
            t = _2_0(_id, t_1, t);
          }
      }
    }
  }
  return(t);
}
ATerm dtime_0_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1_0 (ATerm d_84 (ATerm), ATerm t)
{
  ATerm j_7 = NULL,k_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL;
  j_7 = t;
  t = dtime_0_0(t);
  t = j_7;
  t = d_84(t);
  k_7 = t;
  t = dtime_0_0(t);
  l_7 = t;
  t = k_7;
  if(match_cons(t, sym__2))
    {
      m_7 = ATgetArgument(t, 0);
      n_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_7), (ATerm) ATmakeAppl(sym_Runtime_1, l_7)), n_7);
  return(t);
}
ATerm e_8 (ATerm v_7, ATerm t)
{
  t = SSL_fclose(v_7);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm y_7 = NULL,c_8 = NULL;
  c_8 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_7 = ATgetArgument(t, 0);
      {
        ATerm s_9 = t;
        int t_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(y_7);
            ;
            LocalPopChoice(t_9);
          }
        else
          {
            t = s_9;
            t = e_8(c_8, t);
          }
      }
    }
  else
    {
      t = e_8(c_8, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm f_8 = NULL;
  t = SSL_stdin_stream();
  f_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_8);
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
  ATerm h_8 = NULL;
  t = SSL_stderr_stream();
  h_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_8);
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm s_8 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      s_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_8;
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm x_8 = NULL;
  x_8 = t;
  t = SSL_is_string(x_8);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm u_9 = ATgetArgument(t, 0);
      ATerm v_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_9 = t;
    int z_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_3 = NULL,b_3 = NULL;
        a_3 = t;
        t = SSL_explode_term(a_3);
        if(match_cons(t, sym__2))
          {
            ATerm d_10 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) d_10) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm g_10 = ATgetArgument(t, 1);
              if(((ATgetType(g_10) == AT_LIST) && !(ATisEmpty(g_10))))
                {
                  b_3 = ATgetFirst((ATermList) g_10);
                  {
                    ATerm h_10 = (ATerm) ATgetNext((ATermList) g_10);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = b_3;
        if(match_cons(t, sym_stderr_0))
          {
            t = b_3;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = b_3;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = b_3;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(z_9);
      }
    else
      {
        t = x_9;
        {
          ATerm i_10 = t;
          int k_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_8 = NULL,q_8 = NULL,r_8 = NULL;
              t = _2_0(a_2, _id, t);
              if(match_cons(t, sym__2))
                {
                  p_8 = ATgetArgument(t, 0);
                  q_8 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(p_8, q_8);
              r_8 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, r_8);
              ;
              LocalPopChoice(k_10);
            }
          else
            {
              t = i_10;
              {
                ATerm t_8 = NULL,u_8 = NULL,w_8 = NULL;
                t = _2_0(d_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    t_8 = ATgetArgument(t, 0);
                    u_8 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(t_8, u_8);
                w_8 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, w_8);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm y_8 = NULL,z_8 = NULL,a_9 = NULL;
  ATerm l_10 = t;
  int m_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_9 = NULL;
      b_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_9, term_o_10);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(m_10);
    }
  else
    {
      t = l_10;
      {
        ATerm h_3 = NULL;
        h_3 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, h_3), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = h_3;
        _fail(t);
      }
    }
  y_8 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(a_9);
  z_8 = t;
  t = y_8;
  t = fclose_0_0(t);
  t = z_8;
  return(t);
}
ATerm fetch_1_0 (ATerm u_71 (ATerm), ATerm t)
{
  ATerm g_9 (ATerm t)
  {
    ATerm p_10 = t;
    int q_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(u_71, _id, t);
        ;
        LocalPopChoice(q_10);
      }
    else
      {
        t = p_10;
        t = Cons_2_0(_id, g_9, t);
      }
    return(t);
  }
  t = g_9(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm u_10 = t;
  int v_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(v_10);
    }
  else
    {
      t = u_10;
      {
        ATerm n_9 = NULL,o_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_9 = ATgetFirst((ATermList) t);
            o_9 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = n_9;
        {
          ATerm e_2 (ATerm t)
          {
            t = o_9;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(e_2, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm a_72 (ATerm), ATerm t)
{
  ATerm y_9 (ATerm t)
  {
    ATerm w_10 = t;
    int z_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, y_9, t);
        ;
        LocalPopChoice(z_10);
      }
    else
      {
        t = w_10;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = a_72(t);
      }
    return(t);
  }
  t = y_9(t);
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm b_10 = NULL;
  b_10 = t;
  t = SSL_explode_string(b_10);
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm c_10 = NULL;
  c_10 = t;
  t = SSL_explode_string(c_10);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm a_10 = NULL;
  t = _2_0(f_2, g_2, t);
  {
    ATerm a_11 = t;
    int b_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_10 = NULL,f_10 = NULL;
        if(match_cons(t, sym__2))
          {
            e_10 = ATgetArgument(t, 0);
            f_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_10;
        {
          ATerm n_2 (ATerm t)
          {
            t = f_10;
            return(t);
          }
          t = at_end_1_0(n_2, t);
        }
        ;
        LocalPopChoice(b_11);
      }
    else
      {
        t = a_11;
        {
          ATerm q_3 = NULL,r_3 = NULL;
          q_3 = t;
          t = SSL_explode_term(q_3);
          if(match_cons(t, sym__2))
            {
              ATerm c_11 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) c_11) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              r_3 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_3;
          t = concat_0_0(t);
        }
      }
    a_10 = t;
    t = SSL_implode_string(a_10);
  }
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm d_11 = t;
  int l_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(l_11);
    }
  else
    {
      t = d_11;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm m_11 = t;
  int q_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_10 = NULL;
      n_10 = t;
      t = SSL_is_string(n_10);
      ;
      LocalPopChoice(q_11);
    }
  else
    {
      t = m_11;
      {
        ATerm r_11 = t;
        int t_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(o_2, t);
            ;
            LocalPopChoice(t_11);
          }
        else
          {
            t = r_11;
            {
              ATerm r_10 = NULL,s_10 = NULL,t_10 = NULL;
              r_10 = t;
              if(match_cons(t, sym_Path_1))
                {
                  s_10 = ATgetArgument(t, 0);
                  t = s_10;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      s_10 = ATgetArgument(t, 0);
                      t = s_10;
                      {
                        ATerm x_11 = t;
                        int c_12 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), s_10);
                            {
                              ATerm d_12 = t;
                              int e_12 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm m_4 = NULL;
                                  t = eval_config_0_0(t);
                                  m_4 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), s_10, m_4);
                                  t = m_4;
                                  ;
                                  LocalPopChoice(e_12);
                                }
                              else
                                {
                                  t = d_12;
                                }
                            }
                            ;
                            LocalPopChoice(c_12);
                          }
                        else
                          {
                            t = x_11;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, s_10), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = s_10;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm x_10 = NULL,y_10 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          s_10 = ATgetArgument(t, 0);
                          t_10 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = s_10;
                      t = eval_config_0_0(t);
                      x_10 = t;
                      t = t_10;
                      t = eval_config_0_0(t);
                      y_10 = t;
                      t = (ATerm) ATmakeAppl(sym__2, x_10, y_10);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm e_11 = NULL;
  e_11 = t;
  if(match_string(t, "-k"))
    {
      t = e_11;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = e_11;
    }
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm f_11 = NULL,g_11 = NULL;
  f_11 = t;
  t = SSL_string_to_int(f_11);
  g_11 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), g_11);
  t = f_11;
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = term_f_12;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_2, q_2, r_2, t);
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm i_11 = NULL;
  i_11 = t;
  if(match_string(t, "-S"))
    {
      t = i_11;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = i_11;
    }
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_i_12;
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = term_o_12;
  return(t);
}
ATerm d_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm j_11 = NULL,k_11 = NULL;
  j_11 = t;
  t = SSL_string_to_int(j_11);
  k_11 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), k_11);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, j_11);
  return(t);
}
ATerm l_3 (ATerm t)
{
  t = term_p_12;
  return(t);
}
ATerm o_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_q_12;
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = term_s_12;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm w_12 = t;
  int y_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_2, z_2, c_3, t);
      ;
      LocalPopChoice(y_12);
    }
  else
    {
      t = w_12;
      {
        ATerm b_13 = t;
        int c_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(d_3, k_3, l_3, t);
            ;
            LocalPopChoice(c_13);
          }
        else
          {
            t = b_13;
            t = Option_3_0(o_3, p_3, s_3, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm n_11 = NULL,o_11 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_11 = NULL;
      t = term_v_6;
      t = d_0(t);
      p_11 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_13, term_f_13, p_11);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm s_11 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_11 = ATgetFirst((ATermList) t);
          o_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_11;
      t = a_0(t);
      t = term_v_6;
      t = b_0(t);
      s_11 = t;
      t = (ATerm) ATinsert(CheckATermList(o_11), s_11);
    }
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm u_11 = NULL;
  u_11 = t;
  if(match_string(t, "-o"))
    {
      t = u_11;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = u_11;
    }
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm v_11 = NULL;
  v_11 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), v_11);
  t = (ATerm) ATmakeAppl(sym_Output_1, v_11);
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = term_h_13;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_3, v_3, w_3, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL;
  if(match_cons(t, sym__3))
    {
      y_11 = ATgetArgument(t, 0);
      z_11 = ATgetArgument(t, 1);
      a_12 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_11, z_11);
  {
    ATerm i_13 = t;
    int j_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_13 = ATgetArgument(t, 0);
            ATerm l_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(y_11, z_11);
        ;
        LocalPopChoice(j_13);
      }
    else
      {
        t = i_13;
        t = (ATerm) ATempty;
      }
    b_12 = t;
    t = SSL_table_put(y_11, z_11, (ATerm) ATinsert(CheckATermList(b_12), a_12));
    t = (ATerm) ATmakeAppl(sym__3, y_11, z_11, a_12);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_12 = NULL;
      t = term_v_6;
      t = j_0(t);
      n_12 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_13, term_f_13, n_12);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm r_12 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_12 = ATgetFirst((ATermList) t);
          k_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_12;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_12 = ATgetFirst((ATermList) t);
          m_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_12;
      t = h_0(t);
      t = l_12;
      t = i_0(t);
      r_12 = t;
      t = (ATerm) ATinsert(CheckATermList(m_12), r_12);
    }
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm t_12 = NULL;
  t_12 = t;
  if(match_string(t, "-i"))
    {
      t = t_12;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = t_12;
    }
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm u_12 = NULL;
  u_12 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), u_12);
  t = (ATerm) ATmakeAppl(sym_Input_1, u_12);
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = term_m_13;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_3, y_3, z_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm v_12 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_6;
  t = whoami_0_0(t);
  v_12 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), v_12));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm n_13 = t;
    int o_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_4 = NULL;
        t = eval_config_0_0(t);
        u_4 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), u_4);
        t = u_4;
        ;
        LocalPopChoice(o_13);
      }
    else
      {
        t = n_13;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm a_78 (ATerm), ATerm b_78 (ATerm), ATerm t)
{
  ATerm p_13 = t;
  int q_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = a_78(t);
      ;
      LocalPopChoice(q_13);
    }
  else
    {
      t = p_13;
      {
        ATerm z_12 = NULL,a_13 = NULL,d_13 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_12 = ATgetFirst((ATermList) t);
            a_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = a_13;
        t = foldr_2_0(a_78, b_78, t);
        d_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_12, d_13);
        t = b_78(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_g_12;
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm e_5 = NULL,f_5 = NULL;
  if(match_cons(t, sym__2))
    {
      e_5 = ATgetArgument(t, 0);
      f_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_13 = t;
    int v_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(e_5, f_5);
        ;
        LocalPopChoice(v_13);
      }
    else
      {
        t = u_13;
        t = SSL_addr(e_5, f_5);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm g_13 = NULL,v_4 = NULL,w_4 = NULL;
  t = times_0_0(t);
  v_4 = t;
  t = SSL_explode_term(v_4);
  if(match_cons(t, sym__2))
    {
      ATerm x_13 = ATgetArgument(t, 0);
      w_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_4;
  t = foldr_2_0(a_4, b_4, t);
  g_13 = t;
  t = SSL_TicksToSeconds(g_13);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm r_13 = NULL,s_13 = NULL,t_13 = NULL;
  r_13 = t;
  if(match_cons(t, sym__2))
    {
      s_13 = ATgetArgument(t, 0);
      t_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_13 = t;
    int d_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_13;
        if((s_13 != t))
          {
            _fail(t);
          }
        t = r_13;
        ;
        LocalPopChoice(d_14);
      }
    else
      {
        t = z_13;
        t = r_13;
        {
          ATerm g_14 = t;
          int h_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(s_13, t_13);
              ;
              LocalPopChoice(h_14);
            }
          else
            {
              t = g_14;
              t = SSL_gtr(s_13, t_13);
            }
          t = (ATerm) ATmakeAppl(sym__2, s_13, t_13);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm u_82 (ATerm), ATerm t)
{
  ATerm i_14 = t;
  int j_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_13 = NULL,y_13 = NULL;
      w_13 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm k_14 = t;
        int m_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_5 = NULL;
            t = eval_config_0_0(t);
            t_5 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), t_5);
            t = t_5;
            ;
            LocalPopChoice(m_14);
          }
        else
          {
            t = k_14;
          }
        y_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_13, term_q_14);
        t = geq_0_0(t);
        t = w_13;
        t = u_82(t);
      }
      ;
      LocalPopChoice(j_14);
    }
  else
    {
      t = i_14;
    }
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm a_14 = NULL,b_14 = NULL;
  t = run_time_0_0(t);
  a_14 = t;
  t = term_v_6;
  t = whoami_0_0(t);
  b_14 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), a_14), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), b_14));
  t = (ATerm) ATmakeAppl(sym__2, term_r_14, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_14), a_14), term_u_14), b_14));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(c_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm w_14 = t;
  int x_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(x_14);
    }
  else
    {
      t = w_14;
      {
        ATerm d_15 = t;
        int e_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(e_15);
          }
        else
          {
            t = d_15;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm b_85 (ATerm), ATerm t)
{
  ATerm f_15 = t;
  int i_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm j_15 = t;
        int k_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_5 = NULL;
            t = eval_config_0_0(t);
            z_5 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), z_5);
            t = z_5;
            ;
            LocalPopChoice(k_15);
          }
        else
          {
            t = j_15;
          }
      }
      ;
      LocalPopChoice(i_15);
    }
  else
    {
      t = f_15;
      t = fetch_1_0(d_4, t);
    }
  t = b_85(t);
  return(t);
}
ATerm map_1_0 (ATerm j_71 (ATerm), ATerm t)
{
  ATerm c_14 (ATerm t)
  {
    ATerm r_15 = t;
    int s_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(s_15);
      }
    else
      {
        t = r_15;
        t = Cons_2_0(j_71, c_14, t);
      }
    return(t);
  }
  t = c_14(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm e_14 = NULL,f_14 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_14 = ATgetFirst((ATermList) t);
      f_14 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm l_14 = NULL,n_14 = NULL;
        t = f_14;
        t = g_0(t);
        l_14 = t;
        t = e_14;
        t = f_0(t);
        n_14 = t;
        t = f_14;
        {
          ATerm e_4 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(l_14), n_14);
            return(t);
          }
          t = reverse_acc_2_0(f_0, e_4, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_v_6;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm l_66 (ATerm), ATerm t)
{
  ATerm o_14 = NULL,p_14 = NULL,s_14 = NULL,t_14 = NULL;
  t_14 = t;
  if(match_cons(t, sym_Program_1))
    {
      p_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_14);
  o_14 = t;
  t = p_14;
  t = l_66(t);
  s_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, s_14), o_14);
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm y_14 = NULL;
  y_14 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_14), term_t_15);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm w_15 = t;
  int z_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm a_16 = t;
        int b_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_6 = NULL;
            t = eval_config_0_0(t);
            g_6 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), g_6);
            t = g_6;
            ;
            LocalPopChoice(b_16);
          }
        else
          {
            t = a_16;
          }
      }
      ;
      LocalPopChoice(z_15);
    }
  else
    {
      t = w_15;
      t = fetch_1_0(f_4, t);
    }
  t = term_c_16;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, g_4, t);
  t = map_1_0(h_4, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm m_66 (ATerm), ATerm t)
{
  ATerm z_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL;
  c_15 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      a_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_15);
  z_14 = t;
  t = a_15;
  t = m_66(t);
  b_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, b_15), z_14);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm g_15 = NULL,h_15 = NULL;
  g_15 = t;
  {
    ATerm d_16 = t;
    int e_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = g_15;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm j_16 = ATgetFirst((ATermList) t);
                ATerm k_16 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = g_15;
          }
        ;
        LocalPopChoice(e_16);
      }
    else
      {
        t = d_16;
        t = (ATerm) ATinsert(ATempty, g_15);
      }
    h_15 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), h_15);
    t = g_15;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm l_16 = t;
    int m_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_6 = NULL;
        t = eval_config_0_0(t);
        r_6 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), r_6);
        t = r_6;
        ;
        LocalPopChoice(m_16);
      }
    else
      {
        t = l_16;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm i_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_z_16;
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = term_a_17;
  return(t);
}
ATerm l_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_b_17;
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = term_c_17;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm d_17 = t;
  int e_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_4, j_4, k_4, t);
      ;
      LocalPopChoice(e_17);
    }
  else
    {
      t = d_17;
      t = Option_3_0(l_4, n_4, o_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm z_60 (ATerm), ATerm a_61 (ATerm), ATerm t)
{
  ATerm l_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL;
  q_15 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_15 = ATgetFirst((ATermList) t);
      n_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_15);
  l_15 = t;
  t = m_15;
  t = z_60(t);
  o_15 = t;
  t = n_15;
  t = a_61(t);
  p_15 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(p_15), o_15), l_15);
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm v_15 = NULL;
  v_15 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), v_15);
  t = (ATerm) ATmakeAppl(sym_Program_1, v_15);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm x_89 (ATerm), ATerm t)
{
  ATerm u_15 = NULL;
  u_15 = t;
  {
    ATerm f_17 = t;
    int g_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_17;
        t = x_89(t);
        ;
        LocalPopChoice(g_17);
      }
    else
      {
        t = f_17;
      }
    t = u_15;
    {
      ATerm q_4 (ATerm t)
      {
        ATerm i_17 = t;
        int j_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_17 = t;
            int l_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(l_17);
              }
            else
              {
                t = k_17;
                t = x_89(t);
                t = Cons_2_0(_id, q_4, t);
              }
            ;
            LocalPopChoice(j_17);
          }
        else
          {
            t = i_17;
            {
              ATerm x_15 = NULL,y_15 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  x_15 = ATgetFirst((ATermList) t);
                  y_15 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(y_15), (ATerm) ATmakeAppl(sym_Undefined_1, x_15));
            }
          }
        return(t);
      }
      t = Cons_2_0(p_4, q_4, t);
    }
  }
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm i_16 = NULL;
  i_16 = t;
  if(match_string(t, "--help"))
    {
      t = i_16;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = i_16;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = i_16;
        }
    }
  return(t);
}
ATerm t_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_m_17;
  return(t);
}
ATerm a_5 (ATerm t)
{
  t = term_n_17;
  return(t);
}
ATerm c_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm w_89 (ATerm), ATerm t)
{
  ATerm f_16 = NULL,g_16 = NULL,h_16 = NULL;
  f_16 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = f_16;
  {
    ATerm r_4 (ATerm t)
    {
      ATerm o_17 = t;
      int p_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_89(t);
          ;
          LocalPopChoice(p_17);
        }
      else
        {
          t = o_17;
          {
            ATerm q_17 = t;
            int r_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(s_4, t_4, a_5, t);
                ;
                LocalPopChoice(r_17);
              }
            else
              {
                t = q_17;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(r_4, t);
    {
      ATerm s_17 = t;
      int t_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_16 = NULL;
          n_16 = t;
          {
            ATerm u_17 = t;
            int v_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = n_16;
                {
                  ATerm w_17 = t;
                  int x_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm y_17 = t;
                        int z_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm b_8 = NULL;
                            t = eval_config_0_0(t);
                            b_8 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), b_8);
                            t = b_8;
                            ;
                            LocalPopChoice(z_17);
                          }
                        else
                          {
                            t = y_17;
                          }
                      }
                      ;
                      LocalPopChoice(x_17);
                    }
                  else
                    {
                      t = w_17;
                      t = fetch_1_0(c_5, t);
                    }
                  t = n_16;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(v_17);
              }
            else
              {
                t = u_17;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm a_18 = t;
                  int b_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm i_9 = NULL;
                      t = eval_config_0_0(t);
                      i_9 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), i_9);
                      t = i_9;
                      ;
                      LocalPopChoice(b_18);
                    }
                  else
                    {
                      t = a_18;
                    }
                  t = n_16;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(t_17);
        }
      else
        {
          t = s_17;
          {
            ATerm c_18 = t;
            int d_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_5 (ATerm t)
                {
                  ATerm g_5 (ATerm t)
                  {
                    if(((g_16 != NULL) && (g_16 != t)))
                      _fail(t);
                    else
                      g_16 = t;
                    return(t);
                  }
                  t = Undefined_1_0(g_5, t);
                  return(t);
                }
                t = fetch_1_0(d_5, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(g_16)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_r_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_16)), term_e_18));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(d_18);
              }
            else
              {
                t = c_18;
              }
          }
        }
      h_16 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = h_16;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm d_85 (ATerm), ATerm e_85 (ATerm), ATerm f_85 (ATerm), ATerm g_85 (ATerm), ATerm t)
{
  ATerm q_16 = NULL;
  t = parse_options_1_0(d_85, t);
  q_16 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), q_16);
  t = q_16;
  t = f_85(t);
  {
    ATerm f_18 = t;
    int g_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(e_85, t);
        ;
        LocalPopChoice(g_18);
      }
    else
      {
        t = f_18;
        {
          ATerm h_18 = t;
          int i_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_85(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(i_18);
            }
          else
            {
              t = h_18;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = if_verbose2_1_0(n_5, t);
  return(t);
}
ATerm k_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_j_18;
  return(t);
}
ATerm m_5 (ATerm t)
{
  t = term_k_18;
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm r_16 = NULL,s_16 = NULL;
  r_16 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm l_18 = t;
    int m_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_9 = NULL;
        t = eval_config_0_0(t);
        r_9 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), r_9);
        t = r_9;
        ;
        LocalPopChoice(m_18);
      }
    else
      {
        t = l_18;
      }
    s_16 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, s_16));
    t = r_16;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm m_84 (ATerm), ATerm n_84 (ATerm), ATerm o_84 (ATerm), ATerm t)
{
  ATerm h_5 (ATerm t)
  {
    ATerm n_18 = t;
    int o_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_84(t);
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
              t = input_option_0_0(t);
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
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(s_18);
                  }
                else
                  {
                    t = r_18;
                    {
                      ATerm t_18 = t;
                      int u_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(k_5, l_5, m_5, t);
                          ;
                          LocalPopChoice(u_18);
                        }
                      else
                        {
                          t = t_18;
                          {
                            ATerm v_18 = t;
                            int w_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(w_18);
                              }
                            else
                              {
                                t = v_18;
                                t = keep_option_0_0(t);
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
  ATerm j_5 (ATerm t)
  {
    ATerm t_16 = NULL,u_16 = NULL,w_9 = NULL;
    t_16 = t;
    {
      ATerm x_18 = t;
      int y_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((u_16 != NULL) && (u_16 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  u_16 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(o_5, t);
          ;
          LocalPopChoice(y_18);
        }
      else
        {
          t = x_18;
          t = term_z_18;
          u_16 = t;
        }
      t = not_null(u_16);
      t = ReadFromFile_0_0(t);
      w_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_16, w_9);
      t = apply_strategy_1_0(m_84, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(h_5, o_84, i_5, j_5, t);
  return(t);
}
ATerm p_5 (ATerm t)
{
  t = _2_0(_id, q_5, t);
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm v_16 = NULL;
  v_16 = t;
  {
    ATerm a_19 = t;
    int b_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = TreeGrammar_1_0(r_5, t);
        ;
        LocalPopChoice(b_19);
      }
    else
      {
        t = a_19;
        t = if_verbose2_1_0(u_6, t);
      }
    t = v_16;
  }
  return(t);
}
ATerm r_5 (ATerm t)
{
  t = fc_List_1_0(s_5, t);
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm c_19 = t;
  int d_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = NonTermDec_3_0(w_5, x_5, y_5, t);
      ;
      LocalPopChoice(d_19);
    }
  else
    {
      t = c_19;
      t = if_verbose2_1_0(s_6, t);
    }
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm e_19 = t;
  int f_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_1_0(b_6, t);
      ;
      LocalPopChoice(f_19);
    }
  else
    {
      t = e_19;
      t = if_verbose2_1_0(c_6, t);
    }
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm x_16 = NULL;
  x_16 = t;
  t = SSL_is_int(x_16);
  return(t);
}
ATerm y_5 (ATerm t)
{
  t = fc_List_1_0(f_6, t);
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm w_16 = NULL;
  w_16 = t;
  t = SSL_is_string(w_16);
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm j_10 = NULL;
  j_10 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, j_10), (ATerm) ATmakeAppl(ATmakeSymbol("Not a Id: ", 0, ATtrue))));
  t = j_10;
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm g_19 = t;
  int h_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Prod_2_0(i_6, j_6, t);
      ;
      LocalPopChoice(h_19);
    }
  else
    {
      t = g_19;
      t = if_verbose2_1_0(m_6, t);
    }
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm i_19 = t;
  int j_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_1_0(k_6, t);
      ;
      LocalPopChoice(j_19);
    }
  else
    {
      t = i_19;
      t = if_verbose2_1_0(l_6, t);
    }
  return(t);
}
ATerm j_6 (ATerm t)
{
  t = fc_List_1_0(fc_ProdItem_0_0, t);
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm y_16 = NULL;
  y_16 = t;
  t = SSL_is_string(y_16);
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm h_11 = NULL;
  h_11 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, h_11), (ATerm) ATmakeAppl(ATmakeSymbol("Not a Id: ", 0, ATtrue))));
  t = h_11;
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm w_11 = NULL;
  w_11 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, w_11), (ATerm) ATmakeAppl(ATmakeSymbol("Not a Prod: ", 0, ATtrue))));
  t = w_11;
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm h_12 = NULL;
  h_12 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, h_12), (ATerm) ATmakeAppl(ATmakeSymbol("Not a NonTermDec: ", 0, ATtrue))));
  t = h_12;
  return(t);
}
ATerm u_6 (ATerm t)
{
  ATerm x_12 = NULL;
  x_12 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, x_12), (ATerm) ATmakeAppl(ATmakeSymbol("Not a TreeGrammar: ", 0, ATtrue))));
  t = x_12;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(p_5, _fail, default_usage_0_0, t);
  return(t);
}
