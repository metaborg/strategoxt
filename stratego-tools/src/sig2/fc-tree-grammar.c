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
ATerm term_s_17;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_s_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_c_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_v_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_a_15;
ATerm term_u_14;
ATerm term_y_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_t_12;
ATerm term_e_12;
ATerm term_a_12;
ATerm term_u_11;
ATerm term_e_11;
ATerm term_t_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_h_9;
ATerm term_d_9;
ATerm term_u_7;
ATerm term_q_7;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_m_7;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_p_6;
ATerm term_k_6;
ATerm term_h_6;
ATerm term_e_6;
ATerm term_b_6;
ATerm term_o_5;
void init_constant_terms (void)
{
  ATprotect(&(term_o_5));
  term_o_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a Arg: ", 0, ATtrue));
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a ProdItem: ", 0, ATtrue));
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a Prod: ", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a Id: ", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a NonTermDec: ", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a List: ", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a TreeGrammar: ", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_10);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym__3, term_s_15, term_t_15, term_t_6);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Param_1_0 (ATerm r_54 (ATerm), ATerm);
ATerm fc_Arg_0_0 (ATerm);
ATerm NonTermRef_2_0 (ATerm k_54 (ATerm), ATerm l_54 (ATerm), ATerm);
ATerm fc_ProdItem_0_0 (ATerm);
ATerm Prod_2_0 (ATerm p_54 (ATerm), ATerm q_54 (ATerm), ATerm);
ATerm fc_Prod_0_0 (ATerm);
ATerm Id_1_0 (ATerm s_54 (ATerm), ATerm);
ATerm fc_Id_0_0 (ATerm);
ATerm NonTermDec_3_0 (ATerm m_54 (ATerm), ATerm n_54 (ATerm), ATerm o_54 (ATerm), ATerm);
ATerm fc_NonTermDec_0_0 (ATerm);
ATerm fc_List_1_0 (ATerm o_60 (ATerm), ATerm);
ATerm TreeGrammar_1_0 (ATerm j_54 (ATerm), ATerm);
ATerm fc_TreeGrammar_0_0 (ATerm);
ATerm _2_0 (ATerm y_52 (ATerm), ATerm z_52 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm h_65 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm v_75 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm x_80 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm k_77 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm j_80 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm t_63 (ATerm), ATerm u_63 (ATerm), ATerm);
ATerm input_file_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm h_71 (ATerm), ATerm i_71 (ATerm), ATerm);
ATerm crush_2_0 (ATerm f_69 (ATerm), ATerm g_69 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm u_75 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm i_78 (ATerm), ATerm);
ATerm map_1_0 (ATerm r_64 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm t_59 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm u_59 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm b_65 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm b_82 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm try_1_0 (ATerm w_72 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm g_83 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm h_54 (ATerm), ATerm i_54 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm e_83 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm d_83 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm k_78 (ATerm), ATerm l_78 (ATerm), ATerm m_78 (ATerm), ATerm n_78 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm z_77 (ATerm), ATerm a_78 (ATerm), ATerm b_78 (ATerm), ATerm c_78 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm t_77 (ATerm), ATerm u_77 (ATerm), ATerm v_77 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm r_77 (ATerm), ATerm s_77 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm o_77 (ATerm), ATerm);
ATerm io_fc_tree_grammar_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm Param_1_0 (ATerm r_54 (ATerm), ATerm t)
{
  ATerm z_1 = NULL,a_2 = NULL,c_2 = NULL,d_2 = NULL;
  d_2 = t;
  if(match_cons(t, sym_Param_1))
    {
      a_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_2);
  z_1 = t;
  t = a_2;
  t = r_54(t);
  c_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Param_1, c_2), z_1);
  return(t);
}
ATerm fc_Arg_0_0 (ATerm t)
{
  ATerm c_5 = t;
  int d_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_5 = t;
      int g_5 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_0 (ATerm t)
          {
            t = fc_List_1_0(fc_Arg_0_0, t);
            return(t);
          }
          t = NonTermRef_2_0(fc_Id_0_0, c_0, t);
          ;
          LocalPopChoice(g_5);
        }
      else
        {
          t = f_5;
          {
            ATerm h_5 = t;
            int i_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_0 (ATerm t)
                {
                  ATerm j_2 = NULL;
                  j_2 = t;
                  t = SSL_is_int(j_2);
                  return(t);
                }
                t = Param_1_0(e_0, t);
                ;
                LocalPopChoice(i_5);
              }
            else
              {
                t = h_5;
                {
                  ATerm l_5 = t;
                  int n_5 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(!(match_cons(t, sym_String_0)))
                        _fail(t);
                      ;
                      LocalPopChoice(n_5);
                    }
                  else
                    {
                      t = l_5;
                      if(!(match_cons(t, sym_Int_0)))
                        _fail(t);
                    }
                }
              }
          }
        }
      ;
      LocalPopChoice(d_5);
    }
  else
    {
      t = c_5;
      {
        ATerm k_0 (ATerm t)
        {
          ATerm l_0 (ATerm t)
          {
            t = term_o_5;
            return(t);
          }
          t = debug_1_0(l_0, t);
          return(t);
        }
        t = if_verbose2_1_0(k_0, t);
      }
    }
  return(t);
}
ATerm NonTermRef_2_0 (ATerm k_54 (ATerm), ATerm l_54 (ATerm), ATerm t)
{
  ATerm l_2 = NULL,m_2 = NULL,n_2 = NULL,o_2 = NULL,p_2 = NULL,r_2 = NULL;
  r_2 = t;
  if(match_cons(t, sym_NonTermRef_2))
    {
      m_2 = ATgetArgument(t, 0);
      n_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_2);
  l_2 = t;
  t = m_2;
  t = k_54(t);
  o_2 = t;
  t = n_2;
  t = l_54(t);
  p_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_NonTermRef_2, o_2, p_2), l_2);
  return(t);
}
ATerm fc_ProdItem_0_0 (ATerm t)
{
  ATerm p_5 = t;
  int q_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_5 = t;
      int s_5 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_0 (ATerm t)
          {
            t = fc_List_1_0(fc_Arg_0_0, t);
            return(t);
          }
          t = NonTermRef_2_0(fc_Id_0_0, m_0, t);
          ;
          LocalPopChoice(s_5);
        }
      else
        {
          t = r_5;
          {
            ATerm t_5 = t;
            int v_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_0 (ATerm t)
                {
                  ATerm w_2 = NULL;
                  w_2 = t;
                  t = SSL_is_int(w_2);
                  return(t);
                }
                t = Param_1_0(n_0, t);
                ;
                LocalPopChoice(v_5);
              }
            else
              {
                t = t_5;
                {
                  ATerm w_5 = t;
                  int x_5 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(!(match_cons(t, sym_String_0)))
                        _fail(t);
                      ;
                      LocalPopChoice(x_5);
                    }
                  else
                    {
                      t = w_5;
                      if(!(match_cons(t, sym_Int_0)))
                        _fail(t);
                    }
                }
              }
          }
        }
      ;
      LocalPopChoice(q_5);
    }
  else
    {
      t = p_5;
      {
        ATerm o_0 (ATerm t)
        {
          ATerm p_0 (ATerm t)
          {
            t = term_b_6;
            return(t);
          }
          t = debug_1_0(p_0, t);
          return(t);
        }
        t = if_verbose2_1_0(o_0, t);
      }
    }
  return(t);
}
ATerm Prod_2_0 (ATerm p_54 (ATerm), ATerm q_54 (ATerm), ATerm t)
{
  ATerm x_2 = NULL,y_2 = NULL,z_2 = NULL,a_3 = NULL,d_3 = NULL,e_3 = NULL;
  e_3 = t;
  if(match_cons(t, sym_Prod_2))
    {
      y_2 = ATgetArgument(t, 0);
      z_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_3);
  x_2 = t;
  t = y_2;
  t = p_54(t);
  a_3 = t;
  t = z_2;
  t = q_54(t);
  d_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prod_2, a_3, d_3), x_2);
  return(t);
}
ATerm fc_Prod_0_0 (ATerm t)
{
  ATerm c_6 = t;
  int d_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_0 (ATerm t)
      {
        t = fc_List_1_0(fc_ProdItem_0_0, t);
        return(t);
      }
      t = Prod_2_0(fc_Id_0_0, q_0, t);
      ;
      LocalPopChoice(d_6);
    }
  else
    {
      t = c_6;
      {
        ATerm r_0 (ATerm t)
        {
          ATerm s_0 (ATerm t)
          {
            t = term_e_6;
            return(t);
          }
          t = debug_1_0(s_0, t);
          return(t);
        }
        t = if_verbose2_1_0(r_0, t);
      }
    }
  return(t);
}
ATerm Id_1_0 (ATerm s_54 (ATerm), ATerm t)
{
  ATerm a_4 = NULL,c_4 = NULL,n_4 = NULL,o_4 = NULL;
  o_4 = t;
  if(match_cons(t, sym_Id_1))
    {
      c_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_4);
  a_4 = t;
  t = c_4;
  t = s_54(t);
  n_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_1, n_4), a_4);
  return(t);
}
ATerm fc_Id_0_0 (ATerm t)
{
  ATerm f_6 = t;
  int g_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_0 (ATerm t)
      {
        ATerm w_4 = NULL;
        w_4 = t;
        t = SSL_is_string(w_4);
        return(t);
      }
      t = Id_1_0(t_0, t);
      ;
      LocalPopChoice(g_6);
    }
  else
    {
      t = f_6;
      {
        ATerm u_0 (ATerm t)
        {
          ATerm x_0 (ATerm t)
          {
            t = term_h_6;
            return(t);
          }
          t = debug_1_0(x_0, t);
          return(t);
        }
        t = if_verbose2_1_0(u_0, t);
      }
    }
  return(t);
}
ATerm NonTermDec_3_0 (ATerm m_54 (ATerm), ATerm n_54 (ATerm), ATerm o_54 (ATerm), ATerm t)
{
  ATerm e_5 = NULL,j_5 = NULL,k_5 = NULL,m_5 = NULL,u_5 = NULL,y_5 = NULL,z_5 = NULL,a_6 = NULL;
  a_6 = t;
  if(match_cons(t, sym_NonTermDec_3))
    {
      j_5 = ATgetArgument(t, 0);
      k_5 = ATgetArgument(t, 1);
      m_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_6);
  e_5 = t;
  t = j_5;
  t = m_54(t);
  u_5 = t;
  t = k_5;
  t = n_54(t);
  y_5 = t;
  t = m_5;
  t = o_54(t);
  z_5 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_NonTermDec_3, u_5, y_5, z_5), e_5);
  return(t);
}
ATerm fc_NonTermDec_0_0 (ATerm t)
{
  ATerm i_6 = t;
  int j_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_0 (ATerm t)
      {
        ATerm y_6 = NULL;
        y_6 = t;
        t = SSL_is_int(y_6);
        return(t);
      }
      ATerm z_0 (ATerm t)
      {
        t = fc_List_1_0(fc_Prod_0_0, t);
        return(t);
      }
      t = NonTermDec_3_0(fc_Id_0_0, y_0, z_0, t);
      ;
      LocalPopChoice(j_6);
    }
  else
    {
      t = i_6;
      {
        ATerm a_1 (ATerm t)
        {
          ATerm b_1 (ATerm t)
          {
            t = term_k_6;
            return(t);
          }
          t = debug_1_0(b_1, t);
          return(t);
        }
        t = if_verbose2_1_0(a_1, t);
      }
    }
  return(t);
}
ATerm fc_List_1_0 (ATerm o_60 (ATerm), ATerm t)
{
  ATerm l_6 = t;
  int m_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_6 = t;
      int o_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(o_6);
        }
      else
        {
          t = n_6;
          {
            ATerm c_1 (ATerm t)
            {
              t = fc_List_1_0(o_60, t);
              return(t);
            }
            t = Cons_2_0(o_60, c_1, t);
          }
        }
      ;
      LocalPopChoice(m_6);
    }
  else
    {
      t = l_6;
      {
        ATerm d_1 (ATerm t)
        {
          ATerm e_1 (ATerm t)
          {
            t = term_p_6;
            return(t);
          }
          t = debug_1_0(e_1, t);
          return(t);
        }
        t = if_verbose2_1_0(d_1, t);
      }
    }
  return(t);
}
ATerm TreeGrammar_1_0 (ATerm j_54 (ATerm), ATerm t)
{
  ATerm c_7 = NULL,d_7 = NULL,e_7 = NULL,g_7 = NULL;
  g_7 = t;
  if(match_cons(t, sym_TreeGrammar_1))
    {
      d_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_7);
  c_7 = t;
  t = d_7;
  t = j_54(t);
  e_7 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_TreeGrammar_1, e_7), c_7);
  return(t);
}
ATerm fc_TreeGrammar_0_0 (ATerm t)
{
  ATerm q_6 = t;
  int r_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_1 (ATerm t)
      {
        t = fc_List_1_0(fc_NonTermDec_0_0, t);
        return(t);
      }
      t = TreeGrammar_1_0(f_1, t);
      ;
      LocalPopChoice(r_6);
    }
  else
    {
      t = q_6;
      {
        ATerm g_1 (ATerm t)
        {
          ATerm h_1 (ATerm t)
          {
            t = term_s_6;
            return(t);
          }
          t = debug_1_0(h_1, t);
          return(t);
        }
        t = if_verbose2_1_0(g_1, t);
      }
    }
  return(t);
}
ATerm _2_0 (ATerm y_52 (ATerm), ATerm z_52 (ATerm), ATerm t)
{
  ATerm v_7 = NULL,w_7 = NULL,x_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL;
  a_8 = t;
  if(match_cons(t, sym__2))
    {
      w_7 = ATgetArgument(t, 0);
      x_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_8);
  v_7 = t;
  t = w_7;
  t = y_52(t);
  y_7 = t;
  t = x_7;
  t = z_52(t);
  z_7 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, y_7, z_7), v_7);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm e_8 = NULL,f_8 = NULL;
  e_8 = t;
  t = term_t_6;
  t = whoami_0_0(t);
  f_8 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), f_8), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = e_8;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm u_6 = t;
  int v_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(v_6);
    }
  else
    {
      t = u_6;
      {
        ATerm i_8 = NULL,j_8 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_8 = ATgetFirst((ATermList) t);
            j_8 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = i_8;
        {
          ATerm i_1 (ATerm t)
          {
            t = j_8;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(i_1, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm n_8 = NULL,o_8 = NULL;
  n_8 = t;
  t = SSL_explode_term(n_8);
  if(match_cons(t, sym__2))
    {
      ATerm w_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_6) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      o_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_8;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm h_65 (ATerm), ATerm t)
{
  ATerm p_8 (ATerm t)
  {
    ATerm x_6 = t;
    int z_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, p_8, t);
        ;
        LocalPopChoice(z_6);
      }
    else
      {
        t = x_6;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = h_65(t);
      }
    return(t);
  }
  t = p_8(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm q_8 = NULL,r_8 = NULL;
  if(match_cons(t, sym__2))
    {
      r_8 = ATgetArgument(t, 0);
      q_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_8;
  {
    ATerm j_1 (ATerm t)
    {
      t = q_8;
      return(t);
    }
    t = at_end_1_0(j_1, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm a_7 = t;
  int b_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(b_7);
    }
  else
    {
      t = a_7;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm s_8 = NULL;
  ATerm k_1 (ATerm t)
  {
    ATerm t_8 = NULL;
    t_8 = t;
    t = SSL_explode_string(t_8);
    return(t);
  }
  ATerm l_1 (ATerm t)
  {
    ATerm u_8 = NULL;
    u_8 = t;
    t = SSL_explode_string(u_8);
    return(t);
  }
  t = _2_0(k_1, l_1, t);
  t = conc_0_0(t);
  s_8 = t;
  t = SSL_implode_string(s_8);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm f_7 = t;
  int h_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_9 = NULL;
      a_9 = t;
      t = SSL_is_string(a_9);
      ;
      LocalPopChoice(h_7);
    }
  else
    {
      t = f_7;
      {
        ATerm i_7 = t;
        int j_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_1 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(m_1, t);
            ;
            LocalPopChoice(j_7);
          }
        else
          {
            t = i_7;
            {
              ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL;
              e_9 = t;
              if(match_cons(t, sym_Path_1))
                {
                  f_9 = ATgetArgument(t, 0);
                  t = f_9;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      f_9 = ATgetArgument(t, 0);
                      t = f_9;
                      {
                        ATerm k_7 = t;
                        int l_7 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(l_7);
                          }
                        else
                          {
                            t = k_7;
                            {
                              ATerm n_1 (ATerm t)
                              {
                                t = term_m_7;
                                return(t);
                              }
                              t = debug_1_0(n_1, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm k_9 = NULL,l_9 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          f_9 = ATgetArgument(t, 0);
                          g_9 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = f_9;
                      t = eval_config_0_0(t);
                      k_9 = t;
                      t = g_9;
                      t = eval_config_0_0(t);
                      l_9 = t;
                      t = (ATerm) ATmakeAppl(sym__2, k_9, l_9);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm o_9 = NULL;
  o_9 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), o_9);
  {
    ATerm o_1 (ATerm t)
    {
      ATerm p_9 = NULL;
      t = eval_config_0_0(t);
      p_9 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), o_9, p_9);
      t = p_9;
      return(t);
    }
    t = try_1_0(o_1, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm v_75 (ATerm), ATerm t)
{
  ATerm p_1 (ATerm t)
  {
    ATerm q_9 = NULL,r_9 = NULL;
    q_9 = t;
    t = term_n_7;
    t = get_config_0_0(t);
    r_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_9, term_o_7);
    t = geq_0_0(t);
    t = q_9;
    t = v_75(t);
    return(t);
  }
  t = try_1_0(p_1, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm q_1 (ATerm t)
  {
    ATerm s_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm p_7 = ATgetArgument(t, 0);
        if(match_cons(p_7, sym_Stream_1))
          {
            s_9 = ATgetArgument(p_7, 0);
          }
        else
          _fail(t);
        v_9 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(s_9, v_9);
    w_9 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), w_9);
    x_9 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, x_9);
    return(t);
  }
  t = WriteToFile_1_0(q_1, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm x_80 (ATerm), ATerm t)
{
  ATerm y_9 = NULL,z_9 = NULL,a_10 = NULL;
  if(match_cons(t, sym__2))
    {
      y_9 = ATgetArgument(t, 0);
      z_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_9, term_q_7);
  t = open_stream_0_0(t);
  a_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_10, z_9);
  t = x_80(t);
  t = fclose_0_0(t);
  t = z_9;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm r_1 (ATerm t)
  {
    ATerm b_10 = NULL,c_10 = NULL,d_10 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm r_7 = ATgetArgument(t, 0);
        if(match_cons(r_7, sym_Stream_1))
          {
            b_10 = ATgetArgument(r_7, 0);
          }
        else
          _fail(t);
        c_10 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(b_10, c_10);
    d_10 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, d_10);
    return(t);
  }
  t = WriteToFile_1_0(r_1, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm e_10 = NULL,f_10 = NULL;
  e_10 = t;
  {
    ATerm s_1 (ATerm t)
    {
      ATerm s_7 = t;
      int t_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_1 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                f_10 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(t_1, t);
          ;
          LocalPopChoice(t_7);
        }
      else
        {
          t = s_7;
          t = term_u_7;
          f_10 = t;
        }
      return(t);
    }
    t = _2_0(s_1, _id, t);
    t = e_10;
    {
      ATerm u_1 (ATerm t)
      {
        ATerm v_1 (ATerm t)
        {
          t = not_null(f_10);
          return(t);
        }
        t = split_2_0(v_1, _id, t);
        return(t);
      }
      t = _2_0(_id, u_1, t);
      {
        ATerm b_8 = t;
        int c_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_1 (ATerm t)
            {
              ATerm x_1 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(x_1, t);
              return(t);
            }
            t = _2_0(w_1, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(c_8);
          }
        else
          {
            t = b_8;
            t = _2_0(_id, WriteToTextFile_0_0, t);
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
ATerm apply_strategy_1_0 (ATerm k_77 (ATerm), ATerm t)
{
  ATerm g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL;
  g_10 = t;
  t = dtime_0_0(t);
  t = g_10;
  t = k_77(t);
  h_10 = t;
  t = dtime_0_0(t);
  i_10 = t;
  t = h_10;
  if(match_cons(t, sym__2))
    {
      j_10 = ATgetArgument(t, 0);
      k_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_10), (ATerm) ATmakeAppl(sym_Runtime_1, i_10)), k_10);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm y_10 (ATerm s_10, ATerm t)
  {
    t = SSL_fclose(s_10);
    return(t);
  }
  ATerm v_10 = NULL,w_10 = NULL;
  w_10 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_10 = ATgetArgument(t, 0);
      {
        ATerm d_8 = t;
        int g_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(v_10);
            ;
            LocalPopChoice(g_8);
          }
        else
          {
            t = d_8;
            t = y_10(w_10, t);
          }
      }
    }
  else
    {
      t = y_10(w_10, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm j_80 (ATerm), ATerm t)
{
  ATerm z_10 = NULL,a_11 = NULL;
  z_10 = t;
  t = j_80(t);
  a_11 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, z_10), a_11));
  t = z_10;
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm b_11 = NULL;
  t = SSL_stdin_stream();
  b_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_11);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm c_11 = NULL;
  t = SSL_stdout_stream();
  c_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_11);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm d_11 = NULL;
  t = SSL_stderr_stream();
  d_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_11);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm f_11 = NULL;
  f_11 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = f_11;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = f_11;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = f_11;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm h_8 = ATgetArgument(t, 0);
      ATerm k_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_8 = t;
    int m_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_0 = NULL,w_0 = NULL;
        v_0 = t;
        t = SSL_explode_term(v_0);
        if(match_cons(t, sym__2))
          {
            ATerm v_8 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) v_8) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm w_8 = ATgetArgument(t, 1);
              if(((ATgetType(w_8) == AT_LIST) && !(ATisEmpty(w_8))))
                {
                  w_0 = ATgetFirst((ATermList) w_8);
                  {
                    ATerm x_8 = (ATerm) ATgetNext((ATermList) w_8);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = w_0;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(m_8);
      }
    else
      {
        t = l_8;
        {
          ATerm y_8 = t;
          int z_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL;
              ATerm y_1 (ATerm t)
              {
                ATerm l_11 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    l_11 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = l_11;
                return(t);
              }
              t = _2_0(y_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  i_11 = ATgetArgument(t, 0);
                  j_11 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(i_11, j_11);
              k_11 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, k_11);
              ;
              LocalPopChoice(z_8);
            }
          else
            {
              t = y_8;
              {
                ATerm m_11 = NULL,n_11 = NULL,o_11 = NULL;
                ATerm b_2 (ATerm t)
                {
                  ATerm p_11 = NULL;
                  p_11 = t;
                  t = SSL_is_string(p_11);
                  return(t);
                }
                t = _2_0(b_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    m_11 = ATgetArgument(t, 0);
                    n_11 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(m_11, n_11);
                o_11 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, o_11);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm q_11 = NULL,r_11 = NULL,s_11 = NULL;
  ATerm b_9 = t;
  int c_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_11 = NULL;
      t_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_11, term_d_9);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(c_9);
    }
  else
    {
      t = b_9;
      {
        ATerm e_2 (ATerm t)
        {
          t = term_h_9;
          return(t);
        }
        t = debug_1_0(e_2, t);
        _fail(t);
      }
    }
  q_11 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(s_11);
  r_11 = t;
  t = q_11;
  t = fclose_0_0(t);
  t = r_11;
  return(t);
}
ATerm split_2_0 (ATerm t_63 (ATerm), ATerm u_63 (ATerm), ATerm t)
{
  ATerm v_11 = NULL,w_11 = NULL,x_11 = NULL;
  v_11 = t;
  t = t_63(t);
  w_11 = t;
  t = v_11;
  t = u_63(t);
  x_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_11, x_11);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm y_11 = NULL,z_11 = NULL;
  y_11 = t;
  {
    ATerm i_9 = t;
    int j_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_2 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              z_11 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(f_2, t);
        ;
        LocalPopChoice(j_9);
      }
    else
      {
        t = i_9;
        t = term_m_9;
        z_11 = t;
      }
    t = y_11;
    {
      ATerm g_2 (ATerm t)
      {
        t = not_null(z_11);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, g_2, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm h_2 (ATerm t)
  {
    ATerm b_12 = NULL;
    b_12 = t;
    if(match_string(t, "-k"))
      {
        t = b_12;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = b_12;
      }
    return(t);
  }
  ATerm i_2 (ATerm t)
  {
    ATerm c_12 = NULL,d_12 = NULL;
    c_12 = t;
    t = SSL_string_to_int(c_12);
    d_12 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), d_12);
    t = c_12;
    return(t);
  }
  ATerm k_2 (ATerm t)
  {
    t = term_n_9;
    return(t);
  }
  t = ArgOption_3_0(h_2, i_2, k_2, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm t_9 = t;
  int u_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_2 (ATerm t)
      {
        ATerm f_12 = NULL;
        f_12 = t;
        if(match_string(t, "-S"))
          {
            t = f_12;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = f_12;
          }
        return(t);
      }
      ATerm s_2 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_m_10;
        return(t);
      }
      ATerm t_2 (ATerm t)
      {
        t = term_n_10;
        return(t);
      }
      t = Option_3_0(q_2, s_2, t_2, t);
      ;
      LocalPopChoice(u_9);
    }
  else
    {
      t = t_9;
      {
        ATerm o_10 = t;
        int p_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_2 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm v_2 (ATerm t)
            {
              ATerm g_12 = NULL,h_12 = NULL;
              g_12 = t;
              t = SSL_string_to_int(g_12);
              h_12 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), h_12);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, g_12);
              return(t);
            }
            ATerm b_3 (ATerm t)
            {
              t = term_q_10;
              return(t);
            }
            t = ArgOption_3_0(u_2, v_2, b_3, t);
            ;
            LocalPopChoice(p_10);
          }
        else
          {
            t = o_10;
            {
              ATerm c_3 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm f_3 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_r_10;
                return(t);
              }
              ATerm g_3 (ATerm t)
              {
                t = term_t_10;
                return(t);
              }
              t = Option_3_0(c_3, f_3, g_3, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm u_10 = t;
  int x_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(x_10);
    }
  else
    {
      t = u_10;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm h_3 (ATerm t)
  {
    ATerm j_12 = NULL;
    j_12 = t;
    if(match_string(t, "-o"))
      {
        t = j_12;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = j_12;
      }
    return(t);
  }
  ATerm i_3 (ATerm t)
  {
    ATerm k_12 = NULL;
    k_12 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), k_12);
    t = (ATerm) ATmakeAppl(sym_Output_1, k_12);
    return(t);
  }
  ATerm j_3 (ATerm t)
  {
    t = term_e_11;
    return(t);
  }
  t = ArgOption_3_0(h_3, i_3, j_3, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm g_11 = t;
  int h_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(h_11);
    }
  else
    {
      t = g_11;
      {
        ATerm k_3 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm l_3 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_u_11;
          return(t);
        }
        ATerm m_3 (ATerm t)
        {
          t = term_a_12;
          return(t);
        }
        t = Option_3_0(k_3, l_3, m_3, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL;
  n_12 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = n_12;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm v_12 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_12 = ATgetFirst((ATermList) t);
          p_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_12;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_12 = ATgetFirst((ATermList) t);
          r_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_12;
      t = h_0(t);
      t = q_12;
      t = i_0(t);
      v_12 = t;
      t = (ATerm) ATinsert(CheckATermList(r_12), v_12);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm n_3 (ATerm t)
  {
    ATerm x_12 = NULL;
    x_12 = t;
    if(match_string(t, "-i"))
      {
        t = x_12;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = x_12;
      }
    return(t);
  }
  ATerm o_3 (ATerm t)
  {
    ATerm y_12 = NULL;
    y_12 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), y_12);
    t = (ATerm) ATmakeAppl(sym_Input_1, y_12);
    return(t);
  }
  ATerm p_3 (ATerm t)
  {
    t = term_e_12;
    return(t);
  }
  t = ArgOption_3_0(n_3, o_3, p_3, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm i_12 = t;
  int l_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(l_12);
    }
  else
    {
      t = i_12;
      {
        ATerm m_12 = t;
        int s_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(s_12);
          }
        else
          {
            t = m_12;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm z_12 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_6;
  t = whoami_0_0(t);
  z_12 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), z_12));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_t_12;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm h_71 (ATerm), ATerm i_71 (ATerm), ATerm t)
{
  ATerm u_12 = t;
  int w_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = h_71(t);
      ;
      LocalPopChoice(w_12);
    }
  else
    {
      t = u_12;
      {
        ATerm c_13 = NULL,d_13 = NULL,g_13 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_13 = ATgetFirst((ATermList) t);
            d_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = d_13;
        t = foldr_2_0(h_71, i_71, t);
        g_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_13, g_13);
        t = i_71(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm f_69 (ATerm), ATerm g_69 (ATerm), ATerm t)
{
  ATerm h_13 = NULL,i_13 = NULL;
  h_13 = t;
  t = SSL_explode_term(h_13);
  if(match_cons(t, sym__2))
    {
      ATerm a_13 = ATgetArgument(t, 0);
      i_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_13;
  t = foldr_2_0(f_69, g_69, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm j_13 = NULL;
  t = times_0_0(t);
  {
    ATerm q_3 (ATerm t)
    {
      t = term_l_10;
      return(t);
    }
    ATerm r_3 (ATerm t)
    {
      ATerm k_13 = NULL,l_13 = NULL;
      if(match_cons(t, sym__2))
        {
          k_13 = ATgetArgument(t, 0);
          l_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm b_13 = t;
        int e_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(k_13, l_13);
            ;
            LocalPopChoice(e_13);
          }
        else
          {
            t = b_13;
            t = SSL_addr(k_13, l_13);
          }
      }
      return(t);
    }
    t = crush_2_0(q_3, r_3, t);
    j_13 = t;
    t = SSL_TicksToSeconds(j_13);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL;
  u_13 = t;
  if(match_cons(t, sym__2))
    {
      v_13 = ATgetArgument(t, 0);
      w_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_13 = t;
    int m_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_13;
        if((v_13 != t))
          {
            _fail(t);
          }
        t = u_13;
        ;
        LocalPopChoice(m_13);
      }
    else
      {
        t = f_13;
        t = u_13;
        {
          ATerm n_13 = t;
          int o_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(v_13, w_13);
              ;
              LocalPopChoice(o_13);
            }
          else
            {
              t = n_13;
              t = SSL_gtr(v_13, w_13);
            }
          t = (ATerm) ATmakeAppl(sym__2, v_13, w_13);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm u_75 (ATerm), ATerm t)
{
  ATerm s_3 (ATerm t)
  {
    ATerm z_13 = NULL,a_14 = NULL;
    z_13 = t;
    t = term_n_7;
    t = get_config_0_0(t);
    a_14 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_14, term_p_13);
    t = geq_0_0(t);
    t = z_13;
    t = u_75(t);
    return(t);
  }
  t = try_1_0(s_3, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm t_3 (ATerm t)
  {
    ATerm c_14 = NULL,d_14 = NULL;
    t = run_time_0_0(t);
    c_14 = t;
    t = term_t_6;
    t = whoami_0_0(t);
    d_14 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), c_14), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), d_14));
    t = (ATerm) ATmakeAppl(sym__2, term_q_13, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_13), c_14), term_r_13), d_14));
    return(t);
  }
  t = if_verbose1_1_0(t_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm i_78 (ATerm), ATerm t)
{
  ATerm t_13 = t;
  int x_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_13;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(x_13);
    }
  else
    {
      t = t_13;
      {
        ATerm u_3 (ATerm t)
        {
          ATerm b_14 = t;
          int e_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(e_14);
            }
          else
            {
              t = b_14;
              {
                ATerm g_14 = t;
                int j_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(j_14);
                  }
                else
                  {
                    t = g_14;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(u_3, t);
      }
    }
  t = i_78(t);
  return(t);
}
ATerm map_1_0 (ATerm r_64 (ATerm), ATerm t)
{
  ATerm f_14 (ATerm t)
  {
    ATerm k_14 = t;
    int l_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(l_14);
      }
    else
      {
        t = k_14;
        t = Cons_2_0(r_64, f_14, t);
      }
    return(t);
  }
  t = f_14(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm h_14 = NULL,i_14 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_14 = ATgetFirst((ATermList) t);
      i_14 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm m_14 = NULL,n_14 = NULL;
        t = i_14;
        t = g_0(t);
        m_14 = t;
        t = h_14;
        t = f_0(t);
        n_14 = t;
        t = i_14;
        {
          ATerm v_3 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(m_14), n_14);
            return(t);
          }
          t = reverse_acc_2_0(f_0, v_3, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_t_6;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm w_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, w_3, t);
  return(t);
}
ATerm Program_1_0 (ATerm t_59 (ATerm), ATerm t)
{
  ATerm o_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL;
  r_14 = t;
  if(match_cons(t, sym_Program_1))
    {
      p_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_14);
  o_14 = t;
  t = p_14;
  t = t_59(t);
  q_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, q_14), o_14);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm s_14 = t;
  int t_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_12;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(t_14);
    }
  else
    {
      t = s_14;
      {
        ATerm x_3 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(x_3, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_u_14;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm y_3 (ATerm t)
    {
      ATerm v_14 = NULL;
      v_14 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, v_14), term_a_15);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(y_3, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm u_59 (ATerm), ATerm t)
{
  ATerm w_14 = NULL,x_14 = NULL,y_14 = NULL,z_14 = NULL;
  z_14 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      x_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_14);
  w_14 = t;
  t = x_14;
  t = u_59(t);
  y_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, y_14), w_14);
  return(t);
}
ATerm fetch_1_0 (ATerm b_65 (ATerm), ATerm t)
{
  ATerm d_15 (ATerm t)
  {
    ATerm b_15 = t;
    int c_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(b_65, _id, t);
        ;
        LocalPopChoice(c_15);
      }
    else
      {
        t = b_15;
        t = Cons_2_0(_id, d_15, t);
      }
    return(t);
  }
  t = d_15(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm b_82 (ATerm), ATerm t)
{
  t = fetch_1_0(b_82, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm f_15 = NULL,g_15 = NULL;
  f_15 = t;
  {
    ATerm e_15 = t;
    int h_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = f_15;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm i_15 = ATgetFirst((ATermList) t);
                ATerm j_15 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = f_15;
          }
        ;
        LocalPopChoice(h_15);
      }
    else
      {
        t = e_15;
        t = (ATerm) ATinsert(ATempty, f_15);
      }
    g_15 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), g_15);
    t = f_15;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_t_12;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm try_1_0 (ATerm w_72 (ATerm), ATerm t)
{
  ATerm k_15 = t;
  int l_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_72(t);
      ;
      LocalPopChoice(l_15);
    }
  else
    {
      t = k_15;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm q_15 = t;
  int r_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_3 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm b_4 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_v_15;
        return(t);
      }
      ATerm d_4 (ATerm t)
      {
        t = term_z_15;
        return(t);
      }
      t = Option_3_0(z_3, b_4, d_4, t);
      ;
      LocalPopChoice(r_15);
    }
  else
    {
      t = q_15;
      {
        ATerm e_4 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm f_4 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_a_16;
          return(t);
        }
        ATerm g_4 (ATerm t)
        {
          t = term_c_16;
          return(t);
        }
        t = Option_3_0(e_4, f_4, g_4, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL;
  if(match_cons(t, sym__3))
    {
      m_15 = ATgetArgument(t, 0);
      n_15 = ATgetArgument(t, 1);
      o_15 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_15, n_15);
  {
    ATerm k_16 = t;
    int l_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_16 = ATgetArgument(t, 0);
            ATerm n_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(m_15, n_15);
        ;
        LocalPopChoice(l_16);
      }
    else
      {
        t = k_16;
        t = (ATerm) ATempty;
      }
    p_15 = t;
    t = SSL_table_put(m_15, n_15, (ATerm) ATinsert(CheckATermList(p_15), o_15));
    t = (ATerm) ATmakeAppl(sym__3, m_15, n_15, o_15);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm g_83 (ATerm), ATerm t)
{
  ATerm u_15 = NULL;
  t = term_t_6;
  t = g_83(t);
  u_15 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_o_16, term_p_16, u_15);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL;
  w_15 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = w_15;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm b_16 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_15 = ATgetFirst((ATermList) t);
          y_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_15;
      t = a_0(t);
      t = term_t_6;
      t = b_0(t);
      b_16 = t;
      t = (ATerm) ATinsert(CheckATermList(y_15), b_16);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm i_4 (ATerm t)
  {
    ATerm d_16 = NULL;
    d_16 = t;
    if(match_string(t, "--help"))
      {
        t = d_16;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = d_16;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = d_16;
          }
      }
    return(t);
  }
  ATerm j_4 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_s_16;
    return(t);
  }
  ATerm k_4 (ATerm t)
  {
    t = term_v_16;
    return(t);
  }
  t = Option_3_0(i_4, j_4, k_4, t);
  return(t);
}
ATerm Cons_2_0 (ATerm h_54 (ATerm), ATerm i_54 (ATerm), ATerm t)
{
  ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL;
  j_16 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_16 = ATgetFirst((ATermList) t);
      g_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_16);
  e_16 = t;
  t = f_16;
  t = h_54(t);
  h_16 = t;
  t = g_16;
  t = i_54(t);
  i_16 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(i_16), h_16), e_16);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm e_83 (ATerm), ATerm t)
{
  ATerm q_16 = NULL;
  q_16 = t;
  {
    ATerm l_4 (ATerm t)
    {
      t = term_w_16;
      t = e_83(t);
      return(t);
    }
    t = try_1_0(l_4, t);
    t = q_16;
    {
      ATerm m_4 (ATerm t)
      {
        ATerm r_16 = NULL;
        r_16 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), r_16);
        t = (ATerm) ATmakeAppl(sym_Program_1, r_16);
        return(t);
      }
      ATerm p_4 (ATerm t)
      {
        ATerm x_16 = t;
        int y_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_16 = t;
            int d_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(d_17);
              }
            else
              {
                t = z_16;
                t = e_83(t);
                t = Cons_2_0(_id, p_4, t);
              }
            ;
            LocalPopChoice(y_16);
          }
        else
          {
            t = x_16;
            {
              ATerm t_16 = NULL,u_16 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  t_16 = ATgetFirst((ATermList) t);
                  u_16 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(u_16), (ATerm) ATmakeAppl(sym_Undefined_1, t_16));
            }
          }
        return(t);
      }
      t = Cons_2_0(m_4, p_4, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm d_83 (ATerm), ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL;
  a_17 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = a_17;
  {
    ATerm q_4 (ATerm t)
    {
      ATerm e_17 = t;
      int f_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_83(t);
          ;
          LocalPopChoice(f_17);
        }
      else
        {
          t = e_17;
          {
            ATerm g_17 = t;
            int i_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(i_17);
              }
            else
              {
                t = g_17;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(q_4, t);
    {
      ATerm r_4 (ATerm t)
      {
        ATerm j_17 = t;
        int n_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_17 = NULL;
            h_17 = t;
            {
              ATerm o_17 = t;
              int p_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = h_17;
                  {
                    ATerm q_17 = t;
                    int r_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_y_13;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(r_17);
                      }
                    else
                      {
                        t = q_17;
                        {
                          ATerm s_4 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(s_4, t);
                        }
                      }
                    t = h_17;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(p_17);
                }
              else
                {
                  t = o_17;
                  t = term_t_15;
                  t = get_config_0_0(t);
                  t = h_17;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(n_17);
          }
        else
          {
            t = j_17;
            {
              ATerm t_4 (ATerm t)
              {
                ATerm u_4 (ATerm t)
                {
                  b_17 = t;
                  return(t);
                }
                t = Undefined_1_0(u_4, t);
                return(t);
              }
              t = option_defined_1_0(t_4, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(b_17)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_q_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_17)), term_s_17));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(r_4, t);
      c_17 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = c_17;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm k_78 (ATerm), ATerm l_78 (ATerm), ATerm m_78 (ATerm), ATerm n_78 (ATerm), ATerm t)
{
  ATerm h_4 = NULL;
  t = parse_options_1_0(k_78, t);
  h_4 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), h_4);
  t = h_4;
  t = m_78(t);
  {
    ATerm t_17 = t;
    int u_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(l_78, t);
        ;
        LocalPopChoice(u_17);
      }
    else
      {
        t = t_17;
        {
          ATerm v_17 = t;
          int w_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_78(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(w_17);
            }
          else
            {
              t = v_17;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm z_77 (ATerm), ATerm a_78 (ATerm), ATerm b_78 (ATerm), ATerm c_78 (ATerm), ATerm t)
{
  ATerm v_4 (ATerm t)
  {
    ATerm x_17 = t;
    int y_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_78(t);
        ;
        LocalPopChoice(y_17);
      }
    else
      {
        t = x_17;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm x_4 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(z_77, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(v_4, b_78, c_78, x_4, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm t_77 (ATerm), ATerm u_77 (ATerm), ATerm v_77 (ATerm), ATerm t)
{
  ATerm y_4 (ATerm t)
  {
    ATerm z_4 (ATerm t)
    {
      ATerm k_17 = NULL,l_17 = NULL;
      k_17 = t;
      t = term_t_12;
      t = get_config_0_0(t);
      l_17 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, l_17));
      t = k_17;
      return(t);
    }
    t = if_verbose2_1_0(z_4, t);
    return(t);
  }
  t = iowrap_4_0(t_77, u_77, v_77, y_4, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm r_77 (ATerm), ATerm s_77 (ATerm), ATerm t)
{
  t = iowrap_3_0(r_77, s_77, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm o_77 (ATerm), ATerm t)
{
  ATerm a_5 (ATerm t)
  {
    t = _2_0(_id, o_77, t);
    return(t);
  }
  t = iowrap_2_0(a_5, _fail, t);
  return(t);
}
ATerm io_fc_tree_grammar_0_0 (ATerm t)
{
  ATerm b_5 (ATerm t)
  {
    ATerm m_17 = NULL;
    m_17 = t;
    t = fc_TreeGrammar_0_0(t);
    t = m_17;
    return(t);
  }
  t = iowrap_1_0(b_5, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_fc_tree_grammar_0_0(t);
  return(t);
}
