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
Symbol sym_Imports_1;
Symbol sym_Strategies_1;
Symbol sym_Module_2;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Int_1;
Symbol sym_Str_1;
Symbol sym_CallNoArgs_1;
Symbol sym_Choice_2;
Symbol sym_Id_0;
Symbol sym_SVar_1;
Symbol sym_Call_2;
Symbol sym_Build_1;
Symbol sym_LChoice_2;
Symbol sym_Path_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_SDef_3;
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
Symbol sym_Undefined_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
  sym_Imports_1 = ATmakeSymbol("Imports", 1, ATfalse);
  ATprotectSymbol(sym_Imports_1);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Module_2 = ATmakeSymbol("Module", 2, ATfalse);
  ATprotectSymbol(sym_Module_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_CallNoArgs_1 = ATmakeSymbol("CallNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_CallNoArgs_1);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
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
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_e_18;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_j_17;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_m_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_l_15;
ATerm term_j_15;
ATerm term_h_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_t_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_d_12;
ATerm term_b_12;
ATerm term_t_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_n_11;
ATerm term_i_11;
ATerm term_q_9;
ATerm term_o_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_e_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_p_7;
ATerm term_n_7;
ATerm term_m_7;
ATerm term_b_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_x_6;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_u_6;
ATerm term_t_6;
ATerm term_u_4;
ATerm term_t_4;
void init_constant_terms (void)
{
  ATprotect(&(term_t_4));
  term_t_4 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_4));
  term_u_4 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("fc-param", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("is-string", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_6);
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_v_6);
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("is-int", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_6);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_z_6);
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("fc-", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a ", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("if-verbose2", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_7);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("debug", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_8);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("TODO", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("integers", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("string", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("verbose", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_q_11);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym__3, term_z_15, term_a_16, term_t_4);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm map_with_index_1_0 (ATerm m_84 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm x_95 (ATerm), ATerm y_95 (ATerm), ATerm);
ATerm for_3_0 (ATerm a_96 (ATerm), ATerm b_96 (ATerm), ATerm c_96 (ATerm), ATerm);
ATerm copy_0_0 (ATerm);
ATerm create_call_0_0 (ATerm);
ATerm to_fc_Body_0_0 (ATerm);
ATerm to_fc_SDef_0_0 (ATerm);
ATerm tg_to_format_checker_0_0 (ATerm);
ATerm _2_0 (ATerm o_61 (ATerm), ATerm p_61 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm v_92 (ATerm), ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm g_76 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm z_82 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm f_83 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm x_102 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm f_89 (ATerm), ATerm g_89 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm w_102 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm e_77 (ATerm), ATerm);
ATerm map_1_0 (ATerm o_82 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm l_75 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm m_75 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm x_62 (ATerm), ATerm y_62 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm c_95 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm b_95 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm g_77 (ATerm), ATerm h_77 (ATerm), ATerm i_77 (ATerm), ATerm j_77 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm p_76 (ATerm), ATerm q_76 (ATerm), ATerm r_76 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm l_0 = NULL,m_0 = NULL;
  l_0 = t;
  t = term_t_4;
  t = whoami_0_0(t);
  m_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), m_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = l_0;
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm n_0 = NULL;
  ATerm b_0 (ATerm t)
  {
    ATerm o_0 = NULL;
    o_0 = t;
    t = SSL_explode_string(o_0);
    return(t);
  }
  t = map_1_0(b_0, t);
  t = concat_0_0(t);
  n_0 = t;
  t = SSL_implode_string(n_0);
  return(t);
}
ATerm map_with_index_1_0 (ATerm m_84 (ATerm), ATerm t)
{
  ATerm t_0 = NULL;
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_4, t_0);
  {
    ATerm h_2 (ATerm t)
    {
      ATerm u_1 = NULL,z_1 = NULL,d_2 = NULL,g_2 = NULL;
      if(match_cons(t, sym__2))
        {
          u_1 = ATgetArgument(t, 0);
          z_1 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = z_1;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          ATerm v_0 = NULL,x_0 = NULL,z_0 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              d_2 = ATgetFirst((ATermList) t);
              g_2 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, u_1, d_2);
          t = m_84(t);
          v_0 = t;
          t = (ATerm) ATmakeAppl(sym__2, u_1, term_u_4);
          {
            ATerm x_4 = t;
            int r_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SSL_addi(u_1, (ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(r_5);
              }
            else
              {
                t = x_4;
                t = SSL_addr(u_1, (ATerm) ATmakeInt(1));
              }
            x_0 = t;
            t = (ATerm) ATmakeAppl(sym__2, x_0, g_2);
            t = h_2(t);
            z_0 = t;
            t = (ATerm) ATinsert(CheckATermList(z_0), v_0);
          }
        }
      return(t);
    }
    t = h_2(t);
  }
  return(t);
}
ATerm while_not_2_0 (ATerm x_95 (ATerm), ATerm y_95 (ATerm), ATerm t)
{
  ATerm k_2 (ATerm t)
  {
    ATerm s_5 = t;
    int m_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_95(t);
        ;
        LocalPopChoice(m_6);
      }
    else
      {
        t = s_5;
        t = y_95(t);
        t = k_2(t);
      }
    return(t);
  }
  t = k_2(t);
  return(t);
}
ATerm for_3_0 (ATerm a_96 (ATerm), ATerm b_96 (ATerm), ATerm c_96 (ATerm), ATerm t)
{
  t = a_96(t);
  t = while_not_2_0(b_96, c_96, t);
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  ATerm f_0 (ATerm t)
  {
    ATerm l_2 = NULL,n_2 = NULL;
    if(match_cons(t, sym__2))
      {
        l_2 = ATgetArgument(t, 0);
        n_2 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, l_2, n_2, (ATerm) ATempty);
    return(t);
  }
  ATerm k_0 (ATerm t)
  {
    ATerm o_2 = NULL;
    if(match_cons(t, sym__3))
      {
        ATerm n_6 = ATgetArgument(t, 0);
        if(((ATgetType(n_6) != AT_INT) || (ATgetInt((ATermInt) n_6) != 0)))
          _fail(t);
        {
          ATerm q_6 = ATgetArgument(t, 1);
        }
        o_2 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = o_2;
    return(t);
  }
  ATerm p_0 (ATerm t)
  {
    ATerm p_2 = NULL,q_2 = NULL,r_2 = NULL,t_2 = NULL;
    if(match_cons(t, sym__3))
      {
        p_2 = ATgetArgument(t, 0);
        q_2 = ATgetArgument(t, 1);
        r_2 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, p_2, term_u_4);
    t = geq_0_0(t);
    t = (ATerm) ATmakeAppl(sym__2, p_2, term_u_4);
    {
      ATerm r_6 = t;
      int s_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(p_2, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(s_6);
        }
      else
        {
          t = r_6;
          t = SSL_subtr(p_2, (ATerm) ATmakeInt(1));
        }
      t_2 = t;
      t = (ATerm) ATmakeAppl(sym__3, t_2, q_2, (ATerm) ATinsert(CheckATermList(r_2), q_2));
    }
    return(t);
  }
  t = for_3_0(f_0, k_0, p_0, t);
  return(t);
}
ATerm create_call_0_0 (ATerm t)
{
  ATerm k_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL;
  k_3 = t;
  if(match_cons(t, sym_Param_1))
    {
      l_3 = ATgetArgument(t, 0);
      {
        ATerm h_1 = NULL;
        t = SSL_int_to_string(l_3);
        h_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_t_6, h_1);
        t = conc_strings_0_0(t);
      }
    }
  else
    {
      if(match_cons(t, sym_String_0))
        {
          t = term_w_6;
        }
      else
        {
          if(match_cons(t, sym_Int_0))
            {
              t = term_a_7;
            }
          else
            {
              if(match_cons(t, sym_NonTermRef_2))
                {
                  l_3 = ATgetArgument(t, 0);
                  n_3 = ATgetArgument(t, 1);
                  {
                    ATerm r_3 = NULL,u_3 = NULL;
                    t = l_3;
                    if(match_cons(t, sym_Id_1))
                      {
                        m_3 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__2, term_b_7, m_3);
                    t = conc_strings_0_0(t);
                    r_3 = t;
                    t = n_3;
                    t = map_1_0(create_call_0_0, t);
                    u_3 = t;
                    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, r_3), u_3);
                  }
                }
              else
                {
                  ATerm j_4 = NULL;
                  if(match_cons(t, sym_Prod_2))
                    {
                      l_3 = ATgetArgument(t, 0);
                      n_3 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = l_3;
                  if(match_cons(t, sym_Id_1))
                    {
                      m_3 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = n_3;
                  t = map_1_0(create_call_0_0, t);
                  j_4 = t;
                  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, m_3), j_4);
                }
            }
        }
    }
  return(t);
}
ATerm to_fc_Body_0_0 (ATerm t)
{
  ATerm n_4 = NULL,o_4 = NULL,q_4 = NULL,r_4 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_4 = ATgetFirst((ATermList) t);
      r_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = r_4;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_4 = ATgetFirst((ATermList) t);
      o_4 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm v_4 = NULL,w_4 = NULL;
        t = q_4;
        t = create_call_0_0(t);
        v_4 = t;
        t = (ATerm) ATinsert(CheckATermList(o_4), n_4);
        t = to_fc_Body_0_0(t);
        w_4 = t;
        t = (ATerm) ATmakeAppl(sym_Choice_2, v_4, w_4);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = q_4;
      t = create_call_0_0(t);
    }
  return(t);
}
ATerm to_fc_SDef_0_0 (ATerm t)
{
  ATerm y_4 = NULL,z_4 = NULL,a_5 = NULL,b_5 = NULL,d_5 = NULL,e_5 = NULL,f_5 = NULL;
  if(match_cons(t, sym_NonTermDec_3))
    {
      ATerm e_7 = ATgetArgument(t, 0);
      if(match_cons(e_7, sym_Id_1))
        {
          y_4 = ATgetArgument(e_7, 0);
        }
      else
        _fail(t);
      z_4 = ATgetArgument(t, 1);
      a_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_b_7, y_4);
  t = conc_strings_0_0(t);
  b_5 = t;
  t = a_5;
  t = to_fc_Body_0_0(t);
  d_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_4, term_t_4);
  t = copy_0_0(t);
  {
    ATerm q_0 (ATerm t)
    {
      ATerm l_1 = NULL,m_1 = NULL;
      l_1 = t;
      t = SSL_explode_term(l_1);
      if(match_cons(t, sym__2))
        {
          ATerm j_7 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) j_7) != ATmakeSymbol("", 0, ATtrue)))
            _fail(t);
          {
            ATerm k_7 = ATgetArgument(t, 1);
            if(((ATgetType(k_7) == AT_LIST) && !(ATisEmpty(k_7))))
              {
                m_1 = ATgetFirst((ATermList) k_7);
                {
                  ATerm l_7 = (ATerm) ATgetNext((ATermList) k_7);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = m_1;
      return(t);
    }
    t = map_with_index_1_0(q_0, t);
    {
      ATerm r_0 (ATerm t)
      {
        ATerm g_5 = NULL,h_5 = NULL,i_5 = NULL;
        g_5 = t;
        t = SSL_int_to_string(g_5);
        i_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_t_6, i_5);
        t = conc_strings_0_0(t);
        h_5 = t;
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, h_5);
        return(t);
      }
      t = map_1_0(r_0, t);
      e_5 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_7), y_4), term_m_7);
      t = concat_strings_0_0(t);
      f_5 = t;
      t = (ATerm) ATmakeAppl(sym_SDef_3, b_5, e_5, (ATerm) ATmakeAppl(sym_LChoice_2, d_5, (ATerm) ATmakeAppl(sym_Call_2, term_b_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, term_d_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, f_5))))))));
    }
  }
  return(t);
}
ATerm tg_to_format_checker_0_0 (ATerm t)
{
  ATerm j_5 = NULL,k_5 = NULL;
  if(match_cons(t, sym_TreeGrammar_1))
    {
      j_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_5;
  t = map_1_0(to_fc_SDef_0_0, t);
  k_5 = t;
  t = (ATerm) ATmakeAppl(sym_Module_2, term_e_8, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, k_5)), (ATerm) ATmakeAppl(sym_Imports_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_8), term_h_8), term_g_8))));
  return(t);
}
ATerm _2_0 (ATerm o_61 (ATerm), ATerm p_61 (ATerm), ATerm t)
{
  ATerm l_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL,p_5 = NULL,q_5 = NULL;
  q_5 = t;
  if(match_cons(t, sym__2))
    {
      m_5 = ATgetArgument(t, 0);
      n_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_5);
  l_5 = t;
  t = m_5;
  t = o_61(t);
  o_5 = t;
  t = n_5;
  t = p_61(t);
  p_5 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, o_5, p_5), l_5);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm v_92 (ATerm), ATerm t)
{
  ATerm t_5 = NULL,v_5 = NULL,w_5 = NULL;
  if(match_cons(t, sym__2))
    {
      t_5 = ATgetArgument(t, 0);
      v_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_5, term_l_8);
  t = open_stream_0_0(t);
  w_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_5, v_5);
  t = v_92(t);
  t = fclose_0_0(t);
  t = v_5;
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm x_5 = NULL,y_5 = NULL;
  x_5 = t;
  {
    ATerm s_0 (ATerm t)
    {
      ATerm m_8 = t;
      int n_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_0 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((y_5 != NULL) && (y_5 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  y_5 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(u_0, t);
          ;
          LocalPopChoice(n_8);
        }
      else
        {
          t = m_8;
          t = term_o_8;
          if(((y_5 != NULL) && (y_5 != t)))
            _fail(t);
          else
            y_5 = t;
        }
      return(t);
    }
    t = _2_0(s_0, _id, t);
    t = x_5;
    {
      ATerm w_0 (ATerm t)
      {
        ATerm o_1 = NULL;
        o_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_5), o_1);
        return(t);
      }
      t = _2_0(_id, w_0, t);
      {
        ATerm u_8 = t;
        int v_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_0 (ATerm t)
            {
              ATerm b_1 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(b_1, t);
              return(t);
            }
            ATerm a_1 (ATerm t)
            {
              ATerm c_1 (ATerm t)
              {
                ATerm z_5 = NULL,a_6 = NULL,b_6 = NULL;
                if(match_cons(t, sym__2))
                  {
                    ATerm w_8 = ATgetArgument(t, 0);
                    if(match_cons(w_8, sym_Stream_1))
                      {
                        z_5 = ATgetArgument(w_8, 0);
                      }
                    else
                      _fail(t);
                    a_6 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_write_term_to_stream_baf(z_5, a_6);
                b_6 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, b_6);
                return(t);
              }
              t = WriteToFile_1_0(c_1, t);
              return(t);
            }
            t = _2_0(y_0, a_1, t);
            ;
            LocalPopChoice(v_8);
          }
        else
          {
            t = u_8;
            {
              ATerm d_1 (ATerm t)
              {
                ATerm e_1 (ATerm t)
                {
                  ATerm c_6 = NULL,d_6 = NULL,e_6 = NULL,f_6 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm x_8 = ATgetArgument(t, 0);
                      if(match_cons(x_8, sym_Stream_1))
                        {
                          c_6 = ATgetArgument(x_8, 0);
                        }
                      else
                        _fail(t);
                      d_6 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSL_write_term_to_stream_text(c_6, d_6);
                  e_6 = t;
                  t = SSL_fputc((ATerm)ATmakeInt(10), e_6);
                  f_6 = t;
                  t = (ATerm) ATmakeAppl(sym_Stream_1, f_6);
                  return(t);
                }
                t = WriteToFile_1_0(e_1, t);
                return(t);
              }
              t = _2_0(_id, d_1, t);
            }
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
ATerm apply_strategy_1_0 (ATerm g_76 (ATerm), ATerm t)
{
  ATerm g_6 = NULL,h_6 = NULL,i_6 = NULL,j_6 = NULL,l_6 = NULL;
  g_6 = t;
  t = dtime_0_0(t);
  t = g_6;
  t = g_76(t);
  h_6 = t;
  t = dtime_0_0(t);
  i_6 = t;
  t = h_6;
  if(match_cons(t, sym__2))
    {
      j_6 = ATgetArgument(t, 0);
      l_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_6), (ATerm) ATmakeAppl(sym_Runtime_1, i_6)), l_6);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm f_7 (ATerm y_6, ATerm t)
  {
    t = SSL_fclose(y_6);
    return(t);
  }
  ATerm c_7 = NULL,d_7 = NULL;
  d_7 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_7 = ATgetArgument(t, 0);
      {
        ATerm a_9 = t;
        int b_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(c_7);
            ;
            LocalPopChoice(b_9);
          }
        else
          {
            t = a_9;
            t = f_7(d_7, t);
          }
      }
    }
  else
    {
      t = f_7(d_7, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm g_7 = NULL;
  t = SSL_stdin_stream();
  g_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_7);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm h_7 = NULL;
  t = SSL_stdout_stream();
  h_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_7);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm i_7 = NULL;
  t = SSL_stderr_stream();
  i_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_7);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_9 = ATgetArgument(t, 0);
      ATerm d_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_9 = t;
    int g_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_2 = NULL,e_2 = NULL;
        c_2 = t;
        t = SSL_explode_term(c_2);
        if(match_cons(t, sym__2))
          {
            ATerm h_9 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) h_9) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm j_9 = ATgetArgument(t, 1);
              if(((ATgetType(j_9) == AT_LIST) && !(ATisEmpty(j_9))))
                {
                  e_2 = ATgetFirst((ATermList) j_9);
                  {
                    ATerm k_9 = (ATerm) ATgetNext((ATermList) j_9);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = e_2;
        if(match_cons(t, sym_stderr_0))
          {
            t = e_2;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = e_2;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = e_2;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(g_9);
      }
    else
      {
        t = f_9;
        {
          ATerm l_9 = t;
          int n_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_7 = NULL,q_7 = NULL,r_7 = NULL;
              ATerm f_1 (ATerm t)
              {
                ATerm s_7 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    s_7 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = s_7;
                return(t);
              }
              t = _2_0(f_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  o_7 = ATgetArgument(t, 0);
                  q_7 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(o_7, q_7);
              r_7 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, r_7);
              ;
              LocalPopChoice(n_9);
            }
          else
            {
              t = l_9;
              {
                ATerm t_7 = NULL,u_7 = NULL,v_7 = NULL;
                ATerm g_1 (ATerm t)
                {
                  ATerm w_7 = NULL;
                  w_7 = t;
                  t = SSL_is_string(w_7);
                  return(t);
                }
                t = _2_0(g_1, _id, t);
                if(match_cons(t, sym__2))
                  {
                    t_7 = ATgetArgument(t, 0);
                    u_7 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(t_7, u_7);
                v_7 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, v_7);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm x_7 = NULL,y_7 = NULL,z_7 = NULL;
  ATerm o_9 = t;
  int p_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_8 = NULL;
      a_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_8, term_q_9);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(p_9);
    }
  else
    {
      t = o_9;
      {
        ATerm f_2 = NULL;
        f_2 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, f_2), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = f_2;
        _fail(t);
      }
    }
  x_7 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(z_7);
  y_7 = t;
  t = x_7;
  t = fclose_0_0(t);
  t = y_7;
  return(t);
}
ATerm fetch_1_0 (ATerm z_82 (ATerm), ATerm t)
{
  ATerm f_8 (ATerm t)
  {
    ATerm u_9 = t;
    int v_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(z_82, _id, t);
        ;
        LocalPopChoice(v_9);
      }
    else
      {
        t = u_9;
        t = Cons_2_0(_id, f_8, t);
      }
    return(t);
  }
  t = f_8(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm w_9 = t;
  int z_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(z_9);
    }
  else
    {
      t = w_9;
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
ATerm at_end_1_0 (ATerm f_83 (ATerm), ATerm t)
{
  ATerm p_8 (ATerm t)
  {
    ATerm a_10 = t;
    int b_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, p_8, t);
        ;
        LocalPopChoice(b_10);
      }
    else
      {
        t = a_10;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = f_83(t);
      }
    return(t);
  }
  t = p_8(t);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm r_8 = NULL;
  ATerm j_1 (ATerm t)
  {
    ATerm s_8 = NULL;
    s_8 = t;
    t = SSL_explode_string(s_8);
    return(t);
  }
  ATerm k_1 (ATerm t)
  {
    ATerm t_8 = NULL;
    t_8 = t;
    t = SSL_explode_string(t_8);
    return(t);
  }
  t = _2_0(j_1, k_1, t);
  {
    ATerm c_10 = t;
    int e_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_8 = NULL,z_8 = NULL;
        if(match_cons(t, sym__2))
          {
            y_8 = ATgetArgument(t, 0);
            z_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_8;
        {
          ATerm n_1 (ATerm t)
          {
            t = z_8;
            return(t);
          }
          t = at_end_1_0(n_1, t);
        }
        ;
        LocalPopChoice(e_10);
      }
    else
      {
        t = c_10;
        {
          ATerm v_2 = NULL,w_2 = NULL;
          v_2 = t;
          t = SSL_explode_term(v_2);
          if(match_cons(t, sym__2))
            {
              ATerm f_10 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) f_10) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              w_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_2;
          t = concat_0_0(t);
        }
      }
    r_8 = t;
    t = SSL_implode_string(r_8);
  }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm h_10 = t;
  int i_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_9 = NULL;
      m_9 = t;
      t = SSL_is_string(m_9);
      ;
      LocalPopChoice(i_10);
    }
  else
    {
      t = h_10;
      {
        ATerm k_10 = t;
        int m_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_1 (ATerm t)
            {
              ATerm n_10 = t;
              int o_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0_0(t);
                  ;
                  LocalPopChoice(o_10);
                }
              else
                {
                  t = n_10;
                }
              return(t);
            }
            t = map_1_0(p_1, t);
            ;
            LocalPopChoice(m_10);
          }
        else
          {
            t = k_10;
            {
              ATerm r_9 = NULL,s_9 = NULL,t_9 = NULL;
              r_9 = t;
              if(match_cons(t, sym_Path_1))
                {
                  s_9 = ATgetArgument(t, 0);
                  t = s_9;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      s_9 = ATgetArgument(t, 0);
                      t = s_9;
                      {
                        ATerm r_10 = t;
                        int s_10 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), s_9);
                            {
                              ATerm w_10 = t;
                              int x_10 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm a_4 = NULL;
                                  t = eval_config_0_0(t);
                                  a_4 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), s_9, a_4);
                                  t = a_4;
                                  ;
                                  LocalPopChoice(x_10);
                                }
                              else
                                {
                                  t = w_10;
                                }
                            }
                            ;
                            LocalPopChoice(s_10);
                          }
                        else
                          {
                            t = r_10;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, s_9), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = s_9;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm x_9 = NULL,y_9 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          s_9 = ATgetArgument(t, 0);
                          t_9 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = s_9;
                      t = eval_config_0_0(t);
                      x_9 = t;
                      t = t_9;
                      t = eval_config_0_0(t);
                      y_9 = t;
                      t = (ATerm) ATmakeAppl(sym__2, x_9, y_9);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm x_102 (ATerm), ATerm t)
{
  ATerm b_11 = t;
  int c_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_10 = NULL,j_10 = NULL;
      g_10 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm e_11 = t;
        int h_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_4 = NULL;
            t = eval_config_0_0(t);
            h_4 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), h_4);
            t = h_4;
            ;
            LocalPopChoice(h_11);
          }
        else
          {
            t = e_11;
          }
        j_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_10, term_i_11);
        t = geq_0_0(t);
        t = g_10;
        t = x_102(t);
      }
      ;
      LocalPopChoice(c_11);
    }
  else
    {
      t = b_11;
    }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm q_1 (ATerm t)
  {
    ATerm l_10 = NULL;
    l_10 = t;
    if(match_string(t, "-k"))
      {
        t = l_10;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = l_10;
      }
    return(t);
  }
  ATerm r_1 (ATerm t)
  {
    ATerm p_10 = NULL,q_10 = NULL;
    p_10 = t;
    t = SSL_string_to_int(p_10);
    q_10 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), q_10);
    t = p_10;
    return(t);
  }
  ATerm s_1 (ATerm t)
  {
    t = term_n_11;
    return(t);
  }
  t = ArgOption_3_0(q_1, r_1, s_1, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm o_11 = t;
  int p_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_1 (ATerm t)
      {
        ATerm t_10 = NULL;
        t_10 = t;
        if(match_string(t, "-S"))
          {
            t = t_10;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = t_10;
          }
        return(t);
      }
      ATerm v_1 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_r_11;
        return(t);
      }
      ATerm w_1 (ATerm t)
      {
        t = term_t_11;
        return(t);
      }
      t = Option_3_0(t_1, v_1, w_1, t);
      ;
      LocalPopChoice(p_11);
    }
  else
    {
      t = o_11;
      {
        ATerm z_11 = t;
        int a_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_1 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm y_1 (ATerm t)
            {
              ATerm u_10 = NULL,v_10 = NULL;
              u_10 = t;
              t = SSL_string_to_int(u_10);
              v_10 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), v_10);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, u_10);
              return(t);
            }
            ATerm a_2 (ATerm t)
            {
              t = term_b_12;
              return(t);
            }
            t = ArgOption_3_0(x_1, y_1, a_2, t);
            ;
            LocalPopChoice(a_12);
          }
        else
          {
            t = z_11;
            {
              ATerm b_2 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm i_2 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_d_12;
                return(t);
              }
              ATerm j_2 (ATerm t)
              {
                t = term_h_12;
                return(t);
              }
              t = Option_3_0(b_2, i_2, j_2, t);
            }
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm y_10 = NULL,z_10 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_11 = NULL;
      t = term_t_4;
      t = d_0(t);
      a_11 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_12, term_l_12, a_11);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm d_11 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_10 = ATgetFirst((ATermList) t);
          z_10 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_10;
      t = a_0(t);
      t = term_t_4;
      t = c_0(t);
      d_11 = t;
      t = (ATerm) ATinsert(CheckATermList(z_10), d_11);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm m_2 (ATerm t)
  {
    ATerm f_11 = NULL;
    f_11 = t;
    if(match_string(t, "-o"))
      {
        t = f_11;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = f_11;
      }
    return(t);
  }
  ATerm s_2 (ATerm t)
  {
    ATerm g_11 = NULL;
    g_11 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), g_11);
    t = (ATerm) ATmakeAppl(sym_Output_1, g_11);
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    t = term_m_12;
    return(t);
  }
  t = ArgOption_3_0(m_2, s_2, u_2, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm j_11 = NULL,k_11 = NULL,l_11 = NULL,m_11 = NULL;
  if(match_cons(t, sym__3))
    {
      j_11 = ATgetArgument(t, 0);
      k_11 = ATgetArgument(t, 1);
      l_11 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_11, k_11);
  {
    ATerm o_12 = t;
    int p_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_12 = ATgetArgument(t, 0);
            ATerm s_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(j_11, k_11);
        ;
        LocalPopChoice(p_12);
      }
    else
      {
        t = o_12;
        t = (ATerm) ATempty;
      }
    m_11 = t;
    t = SSL_table_put(j_11, k_11, (ATerm) ATinsert(CheckATermList(m_11), l_11));
    t = (ATerm) ATmakeAppl(sym__3, j_11, k_11, l_11);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_11 = NULL;
      t = term_t_4;
      t = j_0(t);
      y_11 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_12, term_l_12, y_11);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm c_12 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_11 = ATgetFirst((ATermList) t);
          v_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_11;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_11 = ATgetFirst((ATermList) t);
          x_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_11;
      t = h_0(t);
      t = w_11;
      t = i_0(t);
      c_12 = t;
      t = (ATerm) ATinsert(CheckATermList(x_11), c_12);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm x_2 (ATerm t)
  {
    ATerm e_12 = NULL;
    e_12 = t;
    if(match_string(t, "-i"))
      {
        t = e_12;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = e_12;
      }
    return(t);
  }
  ATerm y_2 (ATerm t)
  {
    ATerm f_12 = NULL;
    f_12 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), f_12);
    t = (ATerm) ATmakeAppl(sym_Input_1, f_12);
    return(t);
  }
  ATerm z_2 (ATerm t)
  {
    t = term_t_12;
    return(t);
  }
  t = ArgOption_3_0(x_2, y_2, z_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm g_12 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_4;
  t = whoami_0_0(t);
  g_12 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), g_12));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm u_12 = t;
    int v_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_5 = NULL;
        t = eval_config_0_0(t);
        c_5 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), c_5);
        t = c_5;
        ;
        LocalPopChoice(v_12);
      }
    else
      {
        t = u_12;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm f_89 (ATerm), ATerm g_89 (ATerm), ATerm t)
{
  ATerm w_12 = t;
  int x_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = f_89(t);
      ;
      LocalPopChoice(x_12);
    }
  else
    {
      t = w_12;
      {
        ATerm j_12 = NULL,k_12 = NULL,n_12 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_12 = ATgetFirst((ATermList) t);
            k_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = k_12;
        t = foldr_2_0(f_89, g_89, t);
        n_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_12, n_12);
        t = g_89(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm q_12 = NULL,u_5 = NULL,k_6 = NULL;
  t = times_0_0(t);
  u_5 = t;
  t = SSL_explode_term(u_5);
  if(match_cons(t, sym__2))
    {
      ATerm y_12 = ATgetArgument(t, 0);
      k_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_6;
  {
    ATerm a_3 (ATerm t)
    {
      t = term_q_11;
      return(t);
    }
    ATerm b_3 (ATerm t)
    {
      ATerm o_6 = NULL,p_6 = NULL;
      if(match_cons(t, sym__2))
        {
          o_6 = ATgetArgument(t, 0);
          p_6 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm z_12 = t;
        int a_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(o_6, p_6);
            ;
            LocalPopChoice(a_13);
          }
        else
          {
            t = z_12;
            t = SSL_addr(o_6, p_6);
          }
      }
      return(t);
    }
    t = foldr_2_0(a_3, b_3, t);
    q_12 = t;
    t = SSL_TicksToSeconds(q_12);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm b_13 = NULL,c_13 = NULL,d_13 = NULL;
  b_13 = t;
  if(match_cons(t, sym__2))
    {
      c_13 = ATgetArgument(t, 0);
      d_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_13 = t;
    int f_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_13;
        if((c_13 != t))
          {
            _fail(t);
          }
        t = b_13;
        ;
        LocalPopChoice(f_13);
      }
    else
      {
        t = e_13;
        t = b_13;
        {
          ATerm h_13 = t;
          int j_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(c_13, d_13);
              ;
              LocalPopChoice(j_13);
            }
          else
            {
              t = h_13;
              t = SSL_gtr(c_13, d_13);
            }
          t = (ATerm) ATmakeAppl(sym__2, c_13, d_13);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm w_102 (ATerm), ATerm t)
{
  ATerm n_13 = t;
  int q_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_13 = NULL,i_13 = NULL;
      g_13 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm r_13 = t;
        int t_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_8 = NULL;
            t = eval_config_0_0(t);
            q_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), q_8);
            t = q_8;
            ;
            LocalPopChoice(t_13);
          }
        else
          {
            t = r_13;
          }
        i_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_13, term_u_4);
        t = geq_0_0(t);
        t = g_13;
        t = w_102(t);
      }
      ;
      LocalPopChoice(q_13);
    }
  else
    {
      t = n_13;
    }
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm c_3 (ATerm t)
  {
    ATerm k_13 = NULL,l_13 = NULL;
    t = run_time_0_0(t);
    k_13 = t;
    t = term_t_4;
    t = whoami_0_0(t);
    l_13 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), k_13), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), l_13));
    t = (ATerm) ATmakeAppl(sym__2, term_a_14, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_14), k_13), term_b_14), l_13));
    return(t);
  }
  t = if_verbose1_1_0(c_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm e_77 (ATerm), ATerm t)
{
  ATerm i_14 = t;
  int j_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm m_14 = t;
        int n_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_9 = NULL;
            t = eval_config_0_0(t);
            e_9 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), e_9);
            t = e_9;
            ;
            LocalPopChoice(n_14);
          }
        else
          {
            t = m_14;
          }
      }
      ;
      LocalPopChoice(j_14);
    }
  else
    {
      t = i_14;
      {
        ATerm d_3 (ATerm t)
        {
          ATerm o_14 = t;
          int v_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(v_14);
            }
          else
            {
              t = o_14;
              {
                ATerm w_14 = t;
                int x_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(x_14);
                  }
                else
                  {
                    t = w_14;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = fetch_1_0(d_3, t);
      }
    }
  t = e_77(t);
  return(t);
}
ATerm map_1_0 (ATerm o_82 (ATerm), ATerm t)
{
  ATerm m_13 (ATerm t)
  {
    ATerm a_15 = t;
    int d_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(d_15);
      }
    else
      {
        t = a_15;
        t = Cons_2_0(o_82, m_13, t);
      }
    return(t);
  }
  t = m_13(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm o_13 = NULL,p_13 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_13 = ATgetFirst((ATermList) t);
      p_13 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_13 = NULL,v_13 = NULL;
        t = p_13;
        t = g_0(t);
        u_13 = t;
        t = o_13;
        t = e_0(t);
        v_13 = t;
        t = p_13;
        {
          ATerm e_3 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(u_13), v_13);
            return(t);
          }
          t = reverse_acc_2_0(e_0, e_3, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_t_4;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm l_75 (ATerm), ATerm t)
{
  ATerm w_13 = NULL,x_13 = NULL,y_13 = NULL,z_13 = NULL;
  z_13 = t;
  if(match_cons(t, sym_Program_1))
    {
      x_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_13);
  w_13 = t;
  t = x_13;
  t = l_75(t);
  y_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, y_13), w_13);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm e_15 = t;
  int g_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm h_15 = t;
        int i_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_9 = NULL;
            t = eval_config_0_0(t);
            i_9 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), i_9);
            t = i_9;
            ;
            LocalPopChoice(i_15);
          }
        else
          {
            t = h_15;
          }
      }
      ;
      LocalPopChoice(g_15);
    }
  else
    {
      t = e_15;
      {
        ATerm f_3 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(f_3, t);
      }
    }
  t = term_j_15;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  {
    ATerm g_3 (ATerm t)
    {
      t = (ATerm) ATempty;
      return(t);
    }
    t = reverse_acc_2_0(_id, g_3, t);
    {
      ATerm h_3 (ATerm t)
      {
        ATerm c_14 = NULL;
        c_14 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, c_14), term_l_15);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(h_3, t);
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm m_75 (ATerm), ATerm t)
{
  ATerm d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL;
  g_14 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      e_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_14);
  d_14 = t;
  t = e_14;
  t = m_75(t);
  f_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, f_14), d_14);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm k_14 = NULL,l_14 = NULL;
  k_14 = t;
  {
    ATerm m_15 = t;
    int n_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = k_14;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm p_15 = ATgetFirst((ATermList) t);
                ATerm r_15 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_14;
          }
        ;
        LocalPopChoice(n_15);
      }
    else
      {
        t = m_15;
        t = (ATerm) ATinsert(ATempty, k_14);
      }
    l_14 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), l_14);
    t = k_14;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm u_15 = t;
    int v_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_10 = NULL;
        t = eval_config_0_0(t);
        d_10 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), d_10);
        t = d_10;
        ;
        LocalPopChoice(v_15);
      }
    else
      {
        t = u_15;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm w_15 = t;
  int x_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_3 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm j_3 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_g_16;
        return(t);
      }
      ATerm o_3 (ATerm t)
      {
        t = term_h_16;
        return(t);
      }
      t = Option_3_0(i_3, j_3, o_3, t);
      ;
      LocalPopChoice(x_15);
    }
  else
    {
      t = w_15;
      {
        ATerm p_3 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm q_3 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_i_16;
          return(t);
        }
        ATerm s_3 (ATerm t)
        {
          t = term_j_16;
          return(t);
        }
        t = Option_3_0(p_3, q_3, s_3, t);
      }
    }
  return(t);
}
ATerm Cons_2_0 (ATerm x_62 (ATerm), ATerm y_62 (ATerm), ATerm t)
{
  ATerm p_14 = NULL,q_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL,u_14 = NULL;
  u_14 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_14 = ATgetFirst((ATermList) t);
      r_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_14);
  p_14 = t;
  t = q_14;
  t = x_62(t);
  s_14 = t;
  t = r_14;
  t = y_62(t);
  t_14 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(t_14), s_14), p_14);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm c_95 (ATerm), ATerm t)
{
  ATerm y_14 = NULL;
  y_14 = t;
  {
    ATerm k_16 = t;
    int l_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_16;
        t = c_95(t);
        ;
        LocalPopChoice(l_16);
      }
    else
      {
        t = k_16;
      }
    t = y_14;
    {
      ATerm t_3 (ATerm t)
      {
        ATerm z_14 = NULL;
        z_14 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), z_14);
        t = (ATerm) ATmakeAppl(sym_Program_1, z_14);
        return(t);
      }
      ATerm v_3 (ATerm t)
      {
        ATerm n_16 = t;
        int o_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_16 = t;
            int q_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(q_16);
              }
            else
              {
                t = p_16;
                t = c_95(t);
                t = Cons_2_0(_id, v_3, t);
              }
            ;
            LocalPopChoice(o_16);
          }
        else
          {
            t = n_16;
            {
              ATerm b_15 = NULL,c_15 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  b_15 = ATgetFirst((ATermList) t);
                  c_15 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(c_15), (ATerm) ATmakeAppl(sym_Undefined_1, b_15));
            }
          }
        return(t);
      }
      t = Cons_2_0(t_3, v_3, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm b_95 (ATerm), ATerm t)
{
  ATerm o_15 = NULL,q_15 = NULL,s_15 = NULL;
  o_15 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = o_15;
  {
    ATerm w_3 (ATerm t)
    {
      ATerm r_16 = t;
      int s_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_95(t);
          ;
          LocalPopChoice(s_16);
        }
      else
        {
          t = r_16;
          {
            ATerm t_16 = t;
            int u_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_3 (ATerm t)
                {
                  ATerm t_15 = NULL;
                  t_15 = t;
                  if(match_string(t, "--help"))
                    {
                      t = t_15;
                    }
                  else
                    {
                      if(match_string(t, "-h"))
                        {
                          t = t_15;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
                            _fail(t);
                          t = t_15;
                        }
                    }
                  return(t);
                }
                ATerm y_3 (ATerm t)
                {
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                  t = term_v_16;
                  return(t);
                }
                ATerm z_3 (ATerm t)
                {
                  t = term_w_16;
                  return(t);
                }
                t = Option_3_0(x_3, y_3, z_3, t);
                ;
                LocalPopChoice(u_16);
              }
            else
              {
                t = t_16;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(w_3, t);
    {
      ATerm x_16 = t;
      int y_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_15 = NULL;
          y_15 = t;
          {
            ATerm z_16 = t;
            int a_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = y_15;
                {
                  ATerm b_17 = t;
                  int c_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm d_17 = t;
                        int e_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm s_11 = NULL;
                            t = eval_config_0_0(t);
                            s_11 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), s_11);
                            t = s_11;
                            ;
                            LocalPopChoice(e_17);
                          }
                        else
                          {
                            t = d_17;
                          }
                      }
                      ;
                      LocalPopChoice(c_17);
                    }
                  else
                    {
                      t = b_17;
                      {
                        ATerm b_4 (ATerm t)
                        {
                          if(!(match_cons(t, sym_Help_0)))
                            _fail(t);
                          return(t);
                        }
                        t = fetch_1_0(b_4, t);
                      }
                    }
                  t = y_15;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(a_17);
              }
            else
              {
                t = z_16;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm f_17 = t;
                  int g_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm s_13 = NULL;
                      t = eval_config_0_0(t);
                      s_13 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), s_13);
                      t = s_13;
                      ;
                      LocalPopChoice(g_17);
                    }
                  else
                    {
                      t = f_17;
                    }
                  t = y_15;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(y_16);
        }
      else
        {
          t = x_16;
          {
            ATerm h_17 = t;
            int i_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_4 (ATerm t)
                {
                  ATerm d_4 (ATerm t)
                  {
                    if(((q_15 != NULL) && (q_15 != t)))
                      _fail(t);
                    else
                      q_15 = t;
                    return(t);
                  }
                  t = Undefined_1_0(d_4, t);
                  return(t);
                }
                t = fetch_1_0(c_4, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(q_15)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_a_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_15)), term_j_17));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(i_17);
              }
            else
              {
                t = h_17;
              }
          }
        }
      s_15 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = s_15;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm g_77 (ATerm), ATerm h_77 (ATerm), ATerm i_77 (ATerm), ATerm j_77 (ATerm), ATerm t)
{
  ATerm b_16 = NULL;
  t = parse_options_1_0(g_77, t);
  b_16 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), b_16);
  t = b_16;
  t = i_77(t);
  {
    ATerm k_17 = t;
    int l_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(h_77, t);
        ;
        LocalPopChoice(l_17);
      }
    else
      {
        t = k_17;
        {
          ATerm m_17 = t;
          int n_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_77(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(n_17);
            }
          else
            {
              t = m_17;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm p_76 (ATerm), ATerm q_76 (ATerm), ATerm r_76 (ATerm), ATerm t)
{
  ATerm e_4 (ATerm t)
  {
    ATerm o_17 = t;
    int p_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_76(t);
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
              t = input_option_0_0(t);
              ;
              LocalPopChoice(r_17);
            }
          else
            {
              t = q_17;
              {
                ATerm s_17 = t;
                int t_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(t_17);
                  }
                else
                  {
                    t = s_17;
                    {
                      ATerm u_17 = t;
                      int v_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm i_4 (ATerm t)
                          {
                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
                              _fail(t);
                            return(t);
                          }
                          ATerm k_4 (ATerm t)
                          {
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                            t = term_w_17;
                            return(t);
                          }
                          ATerm l_4 (ATerm t)
                          {
                            t = term_x_17;
                            return(t);
                          }
                          t = Option_3_0(i_4, k_4, l_4, t);
                          ;
                          LocalPopChoice(v_17);
                        }
                      else
                        {
                          t = u_17;
                          {
                            ATerm y_17 = t;
                            int z_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(z_17);
                              }
                            else
                              {
                                t = y_17;
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
  ATerm f_4 (ATerm t)
  {
    ATerm m_4 (ATerm t)
    {
      ATerm c_16 = NULL,d_16 = NULL;
      c_16 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm a_18 = t;
        int b_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_15 = NULL;
            t = eval_config_0_0(t);
            f_15 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), f_15);
            t = f_15;
            ;
            LocalPopChoice(b_18);
          }
        else
          {
            t = a_18;
          }
        d_16 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, d_16));
        t = c_16;
      }
      return(t);
    }
    t = if_verbose2_1_0(m_4, t);
    return(t);
  }
  ATerm g_4 (ATerm t)
  {
    ATerm e_16 = NULL,f_16 = NULL,k_15 = NULL;
    e_16 = t;
    {
      ATerm c_18 = t;
      int d_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_4 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((f_16 != NULL) && (f_16 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  f_16 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(p_4, t);
          ;
          LocalPopChoice(d_18);
        }
      else
        {
          t = c_18;
          t = term_e_18;
          f_16 = t;
        }
      t = not_null(f_16);
      t = ReadFromFile_0_0(t);
      k_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_16, k_15);
      t = apply_strategy_1_0(p_76, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(e_4, r_76, f_4, g_4, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm s_4 (ATerm t)
  {
    t = _2_0(_id, tg_to_format_checker_0_0, t);
    return(t);
  }
  t = iowrap_3_0(s_4, _fail, default_usage_0_0, t);
  return(t);
}
