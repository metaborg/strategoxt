#include <srts/stratego.h>
#include <ssl/stratego-lib.h>
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
Symbol sym_Anno_2;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Scopes_0;
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
Symbol sym_Infinite_0;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_CUT_0;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
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
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
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
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
  ATprotectSymbol(sym_CUT_0);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_f_14;
ATerm term_x_13;
ATerm term_o_13;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_w_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_k_10;
ATerm term_i_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_w_9;
ATerm term_t_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_b_9;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_o_8;
ATerm term_j_8;
ATerm term_a_8;
ATerm term_x_7;
ATerm term_h_7;
ATerm term_r_6;
ATerm term_h_6;
ATerm term_g_6;
ATerm term_f_6;
ATerm term_q_5;
ATerm term_i_5;
ATerm term_h_5;
ATerm term_g_5;
ATerm term_z_4;
ATerm term_x_4;
ATerm term_i_4;
ATerm term_h_4;
ATerm term_c_4;
ATerm term_b_4;
void init_constant_terms (void)
{
  ATprotect(&(term_b_4));
  term_b_4 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_4));
  term_c_4 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_h_4));
  term_h_4 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_i_4));
  term_i_4 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_4));
  term_x_4 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_z_4));
  term_z_4 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_5));
  term_g_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_5));
  term_h_5 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_i_5));
  term_i_5 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(sym__2, term_g_5, term_q_5);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_q_5);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym__2, term_w_9, term_y_9);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym__2, term_i_10, term_y_9);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym__2, term_r_10, term_y_9);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym__2, term_m_11, term_o_11);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym__3, term_m_11, term_o_11, (ATerm) ATempty);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm get_annotations_0 (ATerm);
ATerm rm_annotations_0 (ATerm);
ATerm has_annotation_0 (ATerm);
ATerm catch_annos_0 (ATerm);
ATerm _2 (ATerm, ATerm c_42 (ATerm), ATerm d_42 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm h_56 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm r_53 (ATerm));
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm z_59 (ATerm), ATerm a_60 (ATerm));
ATerm crush_2 (ATerm, ATerm r_61 (ATerm), ATerm s_61 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm q_53 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm r_55 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm n_58 (ATerm), ATerm o_58 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm p_55 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm d_66 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm q_52 (ATerm));
ATerm map_1 (ATerm, ATerm o_65 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm f_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm p_52 (ATerm));
ATerm Program_1 (ATerm, ATerm s_43 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm t_43 (ATerm));
ATerm fetch_1 (ATerm, ATerm x_65 (ATerm));
ATerm option_defined_1 (ATerm, ATerm o_53 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm i_74 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm u_52 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm k_48 (ATerm), ATerm l_48 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm s_52 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm r_52 (ATerm));
ATerm iowrap_4 (ATerm, ATerm d_55 (ATerm), ATerm e_55 (ATerm), ATerm f_55 (ATerm), ATerm g_55 (ATerm));
ATerm iowrap_3 (ATerm, ATerm x_54 (ATerm), ATerm y_54 (ATerm), ATerm z_54 (ATerm));
ATerm iowrap_2 (ATerm, ATerm v_54 (ATerm), ATerm w_54 (ATerm));
ATerm iowrap_1 (ATerm, ATerm s_54 (ATerm));
ATerm annos_to_term_0 (ATerm);
ATerm main_0 (ATerm);
ATerm get_annotations_0 (ATerm t)
{
  ATerm q_0 = NULL;
  q_0 = t;
  t = SSLgetAnnotations(not_null(q_0));
  return(t);
}
ATerm rm_annotations_0 (ATerm t)
{
  ATerm h_1 = NULL;
  h_1 = t;
  t = ATremoveAnnotations(not_null(h_1));
  return(t);
}
ATerm has_annotation_0 (ATerm t)
{
  ATerm d_2;
  d_2 = t;
  {
    t = get_annotations_0(t);
    {
      ATerm s_3 = t;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = s_3;
        }
    }
  }
  t = d_2;
  return(t);
}
ATerm catch_annos_0 (ATerm t)
{
  ATerm t_3 = t;
  int y_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = has_annotation_0(t);
      LocalPopChoice(y_3);
      {
        ATerm z_1 = NULL,b_2 = NULL;
        ATerm z_3;
        z_3 = t;
        {
          ATerm a_2 = NULL;
          t = rm_annotations_0(t);
          {
            t = _all(t, catch_annos_0);
            {
              a_2 = t;
              if(((z_1 != NULL) && (z_1 != a_2)))
                _fail(a_2);
              else
                z_1 = a_2;
            }
          }
        }
        t = z_3;
        {
          ATerm c_2 = NULL;
          t = get_annotations_0(t);
          {
            c_2 = t;
            if(((b_2 != NULL) && (b_2 != c_2)))
              _fail(c_2);
            else
              b_2 = c_2;
          }
          t = (ATerm) ATmakeAppl(sym_Anno_2, not_null(z_1), not_null(b_2));
        }
      }
    }
  else
    {
      t = t_3;
      t = _all(t, catch_annos_0);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm c_42 (ATerm), ATerm d_42 (ATerm))
{
  ATerm m_2 = NULL,n_2 = NULL,o_2 = NULL;
  m_2 = t;
  l_2 :
  if(match_cons(m_2, sym__2))
    {
      n_2 = ATgetArgument(m_2, 0);
      o_2 = ATgetArgument(m_2, 1);
      {
        ATerm s_2 = NULL,u_2 = NULL;
        ATerm t_2 = NULL;
        t = SSLgetAnnotations(not_null(m_2));
        {
          t_2 = t;
          if(((s_2 != NULL) && (s_2 != t_2)))
            _fail(t_2);
          else
            s_2 = t_2;
        }
        {
          t = not_null(n_2);
          {
            ATerm w_2 = NULL;
            t = c_42(t);
            {
              u_2 = t;
              {
                t = not_null(o_2);
                {
                  ATerm y_2 = NULL;
                  t = d_42(t);
                  {
                    w_2 = t;
                    {
                      ATerm z_2 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(u_2), not_null(w_2)), not_null(s_2));
                      {
                        z_2 = t;
                        if(((y_2 != NULL) && (y_2 != z_2)))
                          _fail(z_2);
                        else
                          y_2 = z_2;
                      }
                      t = not_null(y_2);
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
ATerm default_usage_0 (ATerm t)
{
  ATerm h_3 = NULL;
  ATerm a_4;
  a_4 = t;
  {
    ATerm c_0 (ATerm t)
    {
      ATerm i_3 = NULL,j_3 = NULL;
      i_3 = t;
      g_3 :
      if(match_cons(i_3, sym_Program_1))
        {
          j_3 = ATgetArgument(i_3, 0);
          if(((h_3 != NULL) && (h_3 != j_3)))
            _fail(j_3);
          else
            h_3 = j_3;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, c_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_4, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_4), not_null(h_3)), term_c_4));
      {
        t = printnl_0(t);
        {
          t = term_i_4;
          t = exit_0(t);
        }
      }
    }
  }
  t = a_4;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm n_3 = NULL,o_3 = NULL,p_3 = NULL;
  n_3 = t;
  m_3 :
  if(match_cons(n_3, sym__2))
    {
      o_3 = ATgetArgument(n_3, 0);
      p_3 = ATgetArgument(n_3, 1);
      {
        ATerm j_4;
        j_4 = t;
        t = SSL_printnl(not_null(o_3), not_null(p_3));
        t = j_4;
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
  ATerm v_3 = NULL,w_3 = NULL,x_3 = NULL;
  v_3 = t;
  u_3 :
  if(match_cons(v_3, sym__2))
    {
      w_3 = ATgetArgument(v_3, 0);
      x_3 = ATgetArgument(v_3, 1);
      {
        t = not_null(w_3);
        {
          ATerm d_0 (ATerm t)
          {
            t = not_null(x_3);
            return(t);
          }
          t = at_end_1(t, d_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
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
ATerm debug_1 (ATerm t, ATerm h_56 (ATerm))
{
  ATerm l_4;
  l_4 = t;
  {
    ATerm d_4 = NULL,f_4 = NULL;
    ATerm m_4;
    m_4 = t;
    {
      ATerm e_4 = NULL;
      t = h_56(t);
      {
        e_4 = t;
        if(((d_4 != NULL) && (d_4 != e_4)))
          _fail(e_4);
        else
          d_4 = e_4;
      }
    }
    t = m_4;
    {
      ATerm g_4 = NULL;
      g_4 = t;
      if(((f_4 != NULL) && (f_4 != g_4)))
        _fail(g_4);
      else
        f_4 = g_4;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_4)), not_null(d_4)));
        t = printnl_0(t);
      }
    }
  }
  t = l_4;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm k_4 = NULL;
  k_4 = t;
  t = SSL_is_string(not_null(k_4));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm n_4 = t;
  int o_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(o_4);
    }
  else
    {
      t = n_4;
      {
        ATerm p_4 = t;
        int q_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, g_0);
            LocalPopChoice(q_4);
          }
        else
          {
            t = p_4;
            {
              ATerm t_4 = NULL,u_4 = NULL,v_4 = NULL;
              t_4 = t;
              s_4 :
              if(match_cons(t_4, sym_Path_1))
                {
                  u_4 = ATgetArgument(t_4, 0);
                  t = not_null(u_4);
                }
              else
                {
                  if(match_cons(t_4, sym_Var_1))
                    {
                      u_4 = ATgetArgument(t_4, 0);
                      {
                        t = not_null(u_4);
                        {
                          ATerm r_4 = t;
                          int w_4 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(w_4);
                            }
                          else
                            {
                              t = r_4;
                              {
                                ATerm h_0 (ATerm t)
                                {
                                  t = term_x_4;
                                  return(t);
                                }
                                t = debug_1(t, h_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t_4, sym_Prefix_2))
                        {
                          u_4 = ATgetArgument(t_4, 0);
                          v_4 = ATgetArgument(t_4, 1);
                          {
                            ATerm a_5 = NULL,c_5 = NULL;
                            ATerm y_4;
                            y_4 = t;
                            {
                              ATerm b_5 = NULL;
                              t = not_null(u_4);
                              {
                                t = eval_config_0(t);
                                {
                                  b_5 = t;
                                  if(((a_5 != NULL) && (a_5 != b_5)))
                                    _fail(b_5);
                                  else
                                    a_5 = b_5;
                                }
                              }
                            }
                            t = y_4;
                            {
                              ATerm d_5 = NULL;
                              t = not_null(v_4);
                              {
                                t = eval_config_0(t);
                                {
                                  d_5 = t;
                                  if(((c_5 != NULL) && (c_5 != d_5)))
                                    _fail(d_5);
                                  else
                                    c_5 = d_5;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(a_5), not_null(c_5));
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
  ATerm l_5 = NULL;
  l_5 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_z_4, not_null(l_5));
    {
      t = table_get_0(t);
      {
        ATerm m_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm e_5;
            e_5 = t;
            {
              ATerm n_5 = NULL;
              ATerm o_5 = NULL;
              o_5 = t;
              if(((n_5 != NULL) && (n_5 != o_5)))
                _fail(o_5);
              else
                n_5 = o_5;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_z_4, not_null(l_5), not_null(n_5));
                t = table_put_0(t);
              }
            }
            t = e_5;
          }
          return(t);
        }
        t = try_1(t, m_0);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm r_53 (ATerm))
{
  ATerm n_0 (ATerm t)
  {
    ATerm f_5;
    f_5 = t;
    {
      ATerm s_5 = NULL;
      ATerm t_5 = NULL;
      t = term_g_5;
      {
        t = get_config_0(t);
        {
          t_5 = t;
          if(((s_5 != NULL) && (s_5 != t_5)))
            _fail(t_5);
          else
            s_5 = t_5;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_5), term_h_5);
        t = geq_0(t);
      }
    }
    t = f_5;
    t = r_53(t);
    return(t);
  }
  t = try_1(t, n_0);
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_b_4, (ATerm) ATinsert(ATempty, term_i_5));
  {
    t = printnl_0(t);
    {
      t = term_i_4;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm w_5 = NULL;
  w_5 = t;
  t = SSL_TicksToSeconds(not_null(w_5));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm b_6 = NULL,c_6 = NULL,d_6 = NULL;
  b_6 = t;
  a_6 :
  if(match_cons(b_6, sym__2))
    {
      c_6 = ATgetArgument(b_6, 0);
      d_6 = ATgetArgument(b_6, 1);
      {
        ATerm j_5 = t;
        int k_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(c_6), not_null(d_6));
            LocalPopChoice(k_5);
          }
        else
          {
            t = j_5;
            t = SSL_addr(not_null(c_6), not_null(d_6));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm z_59 (ATerm), ATerm a_60 (ATerm))
{
  ATerm m_5 = t;
  int p_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = z_59(t);
      LocalPopChoice(p_5);
    }
  else
    {
      t = m_5;
      {
        ATerm k_6 = NULL,l_6 = NULL,m_6 = NULL;
        k_6 = t;
        j_6 :
        if(((ATgetType(k_6) == AT_LIST) && ((ATermList) k_6 != ATempty)))
          {
            l_6 = ATgetFirst((ATermList) k_6);
            m_6 = (ATerm) ATgetNext((ATermList) k_6);
            {
              ATerm p_6 = NULL;
              ATerm q_6 = NULL;
              t = not_null(m_6);
              {
                t = foldr_2(t, z_59, a_60);
                {
                  q_6 = t;
                  if(((p_6 != NULL) && (p_6 != q_6)))
                    _fail(q_6);
                  else
                    p_6 = q_6;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(l_6), not_null(p_6));
                t = a_60(t);
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
ATerm crush_2 (ATerm t, ATerm r_61 (ATerm), ATerm s_61 (ATerm))
{
  ATerm x_6 = NULL;
  ATerm z_6 = NULL;
  x_6 = t;
  {
    ATerm a_7 = NULL;
    ATerm c_7 = NULL,d_7 = NULL,e_7 = NULL;
    t = not_null(x_6);
    {
      a_7 = t;
      {
        t = SSL_explode_term(not_null(a_7));
        {
          c_7 = t;
          w_6 :
          if(match_cons(c_7, sym__2))
            {
              d_7 = ATgetArgument(c_7, 0);
              e_7 = ATgetArgument(c_7, 1);
              if(((z_6 != NULL) && (z_6 != e_7)))
                _fail(e_7);
              else
                z_6 = e_7;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(z_6);
      t = foldr_2(t, r_61, s_61);
    }
  }
  return(t);
}
ATerm times_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0 (ATerm t)
{
  t = times_0(t);
  {
    ATerm o_0 (ATerm t)
    {
      t = term_q_5;
      return(t);
    }
    t = crush_2(t, o_0, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm k_7 = NULL,l_7 = NULL,m_7 = NULL;
  k_7 = t;
  j_7 :
  if(match_cons(k_7, sym__2))
    {
      l_7 = ATgetArgument(k_7, 0);
      m_7 = ATgetArgument(k_7, 1);
      {
        ATerm r_5;
        r_5 = t;
        {
          ATerm u_5 = t;
          int v_5 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(l_7), not_null(m_7));
              LocalPopChoice(v_5);
            }
          else
            {
              t = u_5;
              t = SSL_gtr(not_null(l_7), not_null(m_7));
            }
        }
        t = r_5;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm geq_0 (ATerm t)
{
  ATerm s_7 = NULL;
  ATerm x_5 = t;
  int y_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_7 = NULL,u_7 = NULL,v_7 = NULL;
      t_7 = t;
      r_7 :
      if(match_cons(t_7, sym__2))
        {
          u_7 = ATgetArgument(t_7, 0);
          v_7 = ATgetArgument(t_7, 1);
          {
            if(((s_7 != NULL) && (s_7 != u_7)))
              _fail(u_7);
            else
              s_7 = u_7;
            if(((s_7 != NULL) && (s_7 != v_7)))
              _fail(v_7);
            else
              s_7 = v_7;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(y_5);
    }
  else
    {
      t = x_5;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm q_53 (ATerm))
{
  ATerm p_0 (ATerm t)
  {
    ATerm z_5;
    z_5 = t;
    {
      ATerm y_7 = NULL;
      ATerm z_7 = NULL;
      t = term_g_5;
      {
        t = get_config_0(t);
        {
          z_7 = t;
          if(((y_7 != NULL) && (y_7 != z_7)))
            _fail(z_7);
          else
            y_7 = z_7;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_7), term_i_4);
        t = geq_0(t);
      }
    }
    t = z_5;
    t = q_53(t);
    return(t);
  }
  t = try_1(t, p_0);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm r_0 (ATerm t)
  {
    ATerm d_8 = NULL,f_8 = NULL;
    ATerm e_6;
    e_6 = t;
    {
      ATerm e_8 = NULL;
      t = run_time_0(t);
      {
        e_8 = t;
        if(((d_8 != NULL) && (d_8 != e_8)))
          _fail(e_8);
        else
          d_8 = e_8;
      }
    }
    t = e_6;
    {
      ATerm g_8 = NULL;
      t = term_f_6;
      {
        t = get_config_0(t);
        {
          g_8 = t;
          if(((f_8 != NULL) && (f_8 != g_8)))
            _fail(g_8);
          else
            f_8 = g_8;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_6), not_null(d_8)), term_g_6), not_null(f_8)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, r_0);
  {
    t = term_q_5;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm l_8 = NULL,m_8 = NULL,n_8 = NULL;
  l_8 = t;
  k_8 :
  if(match_cons(l_8, sym__2))
    {
      m_8 = ATgetArgument(l_8, 0);
      n_8 = ATgetArgument(l_8, 1);
      t = SSL_WriteToTextFile(not_null(m_8), not_null(n_8));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm t_8 = NULL,u_8 = NULL,v_8 = NULL;
  t_8 = t;
  s_8 :
  if(match_cons(t_8, sym__2))
    {
      u_8 = ATgetArgument(t_8, 0);
      v_8 = ATgetArgument(t_8, 1);
      t = SSL_WriteToBinaryFile(not_null(u_8), not_null(v_8));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm d_9 = NULL;
  ATerm i_6;
  i_6 = t;
  {
    ATerm s_0 (ATerm t)
    {
      ATerm n_6 = t;
      int o_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_0 (ATerm t)
          {
            ATerm e_9 = NULL,f_9 = NULL;
            e_9 = t;
            a_9 :
            if(match_cons(e_9, sym_Output_1))
              {
                f_9 = ATgetArgument(e_9, 0);
                if(((d_9 != NULL) && (d_9 != f_9)))
                  _fail(f_9);
                else
                  d_9 = f_9;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, t_0);
          LocalPopChoice(o_6);
        }
      else
        {
          t = n_6;
          {
            ATerm g_9 = NULL;
            t = term_r_6;
            {
              g_9 = t;
              if(((d_9 != NULL) && (d_9 != g_9)))
                _fail(g_9);
              else
                d_9 = g_9;
            }
          }
        }
      return(t);
    }
    t = _2(t, s_0, _id);
  }
  t = i_6;
  {
    ATerm u_0 (ATerm t)
    {
      ATerm v_0 (ATerm t)
      {
        t = not_null(d_9);
        return(t);
      }
      t = split_2(t, v_0, _id);
      return(t);
    }
    t = _2(t, _id, u_0);
    {
      ATerm s_6 = t;
      int t_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_0 (ATerm t)
          {
            ATerm x_0 (ATerm t)
            {
              ATerm h_9 = NULL;
              h_9 = t;
              c_9 :
              if(!(match_cons(h_9, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, x_0);
            return(t);
          }
          t = _2(t, w_0, WriteToBinaryFile_0);
          LocalPopChoice(t_6);
        }
      else
        {
          t = s_6;
          t = _2(t, _id, WriteToTextFile_0);
        }
    }
  }
  return(t);
}
ATerm dtime_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1 (ATerm t, ATerm r_55 (ATerm))
{
  ATerm n_9 = NULL,p_9 = NULL,q_9 = NULL,r_9 = NULL;
  ATerm u_6;
  u_6 = t;
  t = dtime_0(t);
  t = u_6;
  {
    t = r_55(t);
    {
      ATerm v_6;
      v_6 = t;
      {
        ATerm o_9 = NULL;
        t = dtime_0(t);
        {
          o_9 = t;
          if(((n_9 != NULL) && (n_9 != o_9)))
            _fail(o_9);
          else
            n_9 = o_9;
        }
      }
      t = v_6;
      {
        p_9 = t;
        m_9 :
        if(match_cons(p_9, sym__2))
          {
            q_9 = ATgetArgument(p_9, 0);
            r_9 = ATgetArgument(p_9, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(q_9)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(n_9))), not_null(r_9));
          }
        else
          {
            _fail(t);
          }
      }
    }
  }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm x_9 = NULL;
  x_9 = t;
  t = SSL_ReadFromFile(not_null(x_9));
  return(t);
}
ATerm split_2 (ATerm t, ATerm n_58 (ATerm), ATerm o_58 (ATerm))
{
  ATerm c_10 = NULL,e_10 = NULL;
  ATerm y_6;
  y_6 = t;
  {
    ATerm d_10 = NULL;
    t = n_58(t);
    {
      d_10 = t;
      if(((c_10 != NULL) && (c_10 != d_10)))
        _fail(d_10);
      else
        c_10 = d_10;
    }
  }
  t = y_6;
  {
    ATerm f_10 = NULL;
    t = o_58(t);
    {
      f_10 = t;
      if(((e_10 != NULL) && (e_10 != f_10)))
        _fail(f_10);
      else
        e_10 = f_10;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_10), not_null(e_10));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm l_10 = NULL;
  ATerm b_7;
  b_7 = t;
  {
    ATerm f_7 = t;
    int g_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_0 (ATerm t)
        {
          ATerm m_10 = NULL,n_10 = NULL;
          m_10 = t;
          j_10 :
          if(match_cons(m_10, sym_Input_1))
            {
              n_10 = ATgetArgument(m_10, 0);
              if(((l_10 != NULL) && (l_10 != n_10)))
                _fail(n_10);
              else
                l_10 = n_10;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, y_0);
        LocalPopChoice(g_7);
      }
    else
      {
        t = f_7;
        {
          ATerm o_10 = NULL;
          t = term_h_7;
          {
            o_10 = t;
            if(((l_10 != NULL) && (l_10 != o_10)))
              _fail(o_10);
            else
              l_10 = o_10;
          }
        }
      }
  }
  t = b_7;
  {
    ATerm z_0 (ATerm t)
    {
      t = not_null(l_10);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, z_0);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm v_10 = NULL;
  v_10 = t;
  u_10 :
  if(match_cons(v_10, sym_Version_0))
    {
      ATerm x_10 = NULL,z_10 = NULL;
      ATerm i_7;
      i_7 = t;
      {
        ATerm y_10 = NULL;
        t = SSLgetAnnotations(not_null(v_10));
        {
          y_10 = t;
          if(((x_10 != NULL) && (x_10 != y_10)))
            _fail(y_10);
          else
            x_10 = y_10;
        }
      }
      t = i_7;
      {
        ATerm a_11 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(x_10));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm p_55 (ATerm))
{
  ATerm a_1 (ATerm t)
  {
    ATerm n_7 = t;
    int o_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(o_7);
      }
    else
      {
        t = n_7;
        {
          ATerm p_7 = t;
          int q_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(q_7);
            }
          else
            {
              t = p_7;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, a_1);
  t = p_55(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm f_11 = NULL;
  f_11 = t;
  t = SSL_table_create(not_null(f_11));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm j_11 = NULL;
  j_11 = t;
  {
    ATerm w_7;
    w_7 = t;
    {
      t = term_x_7;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_x_7, term_a_8, not_null(j_11));
          t = table_put_0(t);
        }
      }
    }
    t = w_7;
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm n_11 = NULL;
  n_11 = t;
  t = SSL_string_to_int(not_null(n_11));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL;
  v_11 = t;
  t_11 :
  if(match_string(v_11, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(v_11) == AT_LIST) && ((ATermList) v_11 != ATempty)))
        {
          w_11 = ATgetFirst((ATermList) v_11);
          x_11 = (ATerm) ATgetNext((ATermList) v_11);
          u_11 :
          if(((ATgetType(x_11) == AT_LIST) && ((ATermList) x_11 != ATempty)))
            {
              y_11 = ATgetFirst((ATermList) x_11);
              z_11 = (ATerm) ATgetNext((ATermList) x_11);
              {
                ATerm d_12 = NULL;
                ATerm b_8;
                b_8 = t;
                {
                  t = not_null(w_11);
                  t = j_0(t);
                }
                t = b_8;
                {
                  ATerm e_12 = NULL;
                  t = not_null(y_11);
                  {
                    t = k_0(t);
                    {
                      e_12 = t;
                      if(((d_12 != NULL) && (d_12 != e_12)))
                        _fail(e_12);
                      else
                        d_12 = e_12;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(z_11)), not_null(d_12));
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
ATerm io_options_0 (ATerm t)
{
  ATerm c_8 = t;
  int h_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_1 (ATerm t)
      {
        ATerm v_12 = NULL;
        v_12 = t;
        i_12 :
        if(!(match_string(v_12, "-i")))
          {
            if(!(match_string(v_12, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm c_1 (ATerm t)
      {
        ATerm y_12 = NULL;
        ATerm i_8;
        i_8 = t;
        {
          ATerm w_12 = NULL;
          ATerm x_12 = NULL;
          x_12 = t;
          if(((w_12 != NULL) && (w_12 != x_12)))
            _fail(x_12);
          else
            w_12 = x_12;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_j_8, not_null(w_12));
            t = set_config_0(t);
          }
        }
        t = i_8;
        {
          ATerm z_12 = NULL;
          z_12 = t;
          if(((y_12 != NULL) && (y_12 != z_12)))
            _fail(z_12);
          else
            y_12 = z_12;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(y_12));
        }
        return(t);
      }
      ATerm d_1 (ATerm t)
      {
        t = term_o_8;
        return(t);
      }
      t = ArgOption_3(t, b_1, c_1, d_1);
      LocalPopChoice(h_8);
    }
  else
    {
      t = c_8;
      {
        ATerm p_8 = t;
        int q_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_1 (ATerm t)
            {
              ATerm a_13 = NULL;
              a_13 = t;
              l_12 :
              if(!(match_string(a_13, "-o")))
                {
                  if(!(match_string(a_13, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm f_1 (ATerm t)
            {
              ATerm d_13 = NULL;
              ATerm r_8;
              r_8 = t;
              {
                ATerm b_13 = NULL;
                ATerm c_13 = NULL;
                c_13 = t;
                if(((b_13 != NULL) && (b_13 != c_13)))
                  _fail(c_13);
                else
                  b_13 = c_13;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_w_8, not_null(b_13));
                  t = set_config_0(t);
                }
              }
              t = r_8;
              {
                ATerm e_13 = NULL;
                e_13 = t;
                if(((d_13 != NULL) && (d_13 != e_13)))
                  _fail(e_13);
                else
                  d_13 = e_13;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(d_13));
              }
              return(t);
            }
            ATerm g_1 (ATerm t)
            {
              t = term_x_8;
              return(t);
            }
            t = ArgOption_3(t, e_1, f_1, g_1);
            LocalPopChoice(q_8);
          }
        else
          {
            t = p_8;
            {
              ATerm y_8 = t;
              int z_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_1 (ATerm t)
                  {
                    ATerm f_13 = NULL;
                    f_13 = t;
                    o_12 :
                    if(!(match_string(f_13, "-S")))
                      {
                        if(!(match_string(f_13, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm j_1 (ATerm t)
                  {
                    t = term_b_9;
                    t = set_config_0(t);
                    t = term_i_9;
                    return(t);
                  }
                  ATerm k_1 (ATerm t)
                  {
                    t = term_j_9;
                    return(t);
                  }
                  t = Option_3(t, i_1, j_1, k_1);
                  LocalPopChoice(z_8);
                }
              else
                {
                  t = y_8;
                  {
                    ATerm k_9 = t;
                    int l_9 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm l_1 (ATerm t)
                        {
                          ATerm g_13 = NULL;
                          g_13 = t;
                          p_12 :
                          if(!(match_string(g_13, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm m_1 (ATerm t)
                        {
                          ATerm j_13 = NULL;
                          ATerm s_9;
                          s_9 = t;
                          {
                            ATerm h_13 = NULL;
                            ATerm i_13 = NULL;
                            t = string_to_int_0(t);
                            {
                              i_13 = t;
                              if(((h_13 != NULL) && (h_13 != i_13)))
                                _fail(i_13);
                              else
                                h_13 = i_13;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_g_5, not_null(h_13));
                              t = set_config_0(t);
                            }
                          }
                          t = s_9;
                          {
                            ATerm k_13 = NULL;
                            k_13 = t;
                            if(((j_13 != NULL) && (j_13 != k_13)))
                              _fail(k_13);
                            else
                              j_13 = k_13;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(j_13));
                          }
                          return(t);
                        }
                        ATerm n_1 (ATerm t)
                        {
                          t = term_t_9;
                          return(t);
                        }
                        t = ArgOption_3(t, l_1, m_1, n_1);
                        LocalPopChoice(l_9);
                      }
                    else
                      {
                        t = k_9;
                        {
                          ATerm u_9 = t;
                          int v_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm o_1 (ATerm t)
                              {
                                ATerm l_13 = NULL;
                                l_13 = t;
                                s_12 :
                                if(!(match_string(l_13, "-v")))
                                  {
                                    if(!(match_string(l_13, "--version")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm p_1 (ATerm t)
                              {
                                t = term_z_9;
                                t = set_config_0(t);
                                t = term_a_10;
                                return(t);
                              }
                              ATerm q_1 (ATerm t)
                              {
                                t = term_b_10;
                                return(t);
                              }
                              t = Option_3(t, o_1, p_1, q_1);
                              LocalPopChoice(v_9);
                            }
                          else
                            {
                              t = u_9;
                              {
                                ATerm g_10 = t;
                                int h_10 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm r_1 (ATerm t)
                                    {
                                      ATerm m_13 = NULL;
                                      m_13 = t;
                                      t_12 :
                                      if(!(match_string(m_13, "-b")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm s_1 (ATerm t)
                                    {
                                      t = term_k_10;
                                      t = set_config_0(t);
                                      t = term_p_10;
                                      return(t);
                                    }
                                    ATerm t_1 (ATerm t)
                                    {
                                      t = term_q_10;
                                      return(t);
                                    }
                                    t = Option_3(t, r_1, s_1, t_1);
                                    LocalPopChoice(h_10);
                                  }
                                else
                                  {
                                    t = g_10;
                                    {
                                      ATerm u_1 (ATerm t)
                                      {
                                        ATerm n_13 = NULL;
                                        n_13 = t;
                                        u_12 :
                                        if(!(match_string(n_13, "-s")))
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      ATerm v_1 (ATerm t)
                                      {
                                        t = term_s_10;
                                        t = set_config_0(t);
                                        t = term_t_10;
                                        return(t);
                                      }
                                      ATerm w_1 (ATerm t)
                                      {
                                        t = term_w_10;
                                        return(t);
                                      }
                                      t = Option_3(t, u_1, v_1, w_1);
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
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm v_13 = NULL;
  v_13 = t;
  t = SSL_table_destroy(not_null(v_13));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm z_13 = NULL;
  z_13 = t;
  t = SSL_exit(not_null(z_13));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm d_14 = NULL;
  d_14 = t;
  t = SSL_implode_string(not_null(d_14));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm d_66 (ATerm))
{
  ATerm g_14 (ATerm t)
  {
    ATerm b_11 = t;
    int c_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, g_14);
        LocalPopChoice(c_11);
      }
    else
      {
        t = b_11;
        {
          t = Nil_0(t);
          t = d_66(t);
        }
      }
    return(t);
  }
  t = g_14(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm d_11 = t;
  int e_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(e_11);
    }
  else
    {
      t = d_11;
      {
        ATerm j_14 = NULL,k_14 = NULL,l_14 = NULL;
        j_14 = t;
        i_14 :
        if(((ATgetType(j_14) == AT_LIST) && ((ATermList) j_14 != ATempty)))
          {
            k_14 = ATgetFirst((ATermList) j_14);
            l_14 = (ATerm) ATgetNext((ATermList) j_14);
            {
              t = not_null(k_14);
              {
                ATerm x_1 (ATerm t)
                {
                  t = not_null(l_14);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, x_1);
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
ATerm explode_string_0 (ATerm t)
{
  ATerm r_14 = NULL;
  r_14 = t;
  t = SSL_explode_string(not_null(r_14));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  {
    t = concat_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm q_52 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm o_65 (ATerm))
{
  ATerm u_14 (ATerm t)
  {
    ATerm g_11 = t;
    int h_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(h_11);
      }
    else
      {
        t = g_11;
        t = Cons_2(t, o_65, u_14);
      }
    return(t);
  }
  t = u_14(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm f_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm c_15 = NULL,d_15 = NULL,f_15 = NULL;
  f_15 = t;
  b_15 :
  if(((ATgetType(f_15) == AT_LIST) && ((ATermList) f_15 != ATempty)))
    {
      c_15 = ATgetFirst((ATermList) f_15);
      d_15 = (ATerm) ATgetNext((ATermList) f_15);
      {
        ATerm i_15 = NULL;
        t = not_null(d_15);
        {
          ATerm i_11;
          i_11 = t;
          {
            ATerm j_15 = NULL,l_15 = NULL,n_15 = NULL;
            ATerm k_11;
            k_11 = t;
            {
              ATerm k_15 = NULL;
              t = i_0(t);
              {
                k_15 = t;
                if(((j_15 != NULL) && (j_15 != k_15)))
                  _fail(k_15);
                else
                  j_15 = k_15;
              }
            }
            t = k_11;
            {
              ATerm m_15 = NULL;
              t = not_null(c_15);
              {
                t = f_0(t);
                {
                  m_15 = t;
                  if(((l_15 != NULL) && (l_15 != m_15)))
                    _fail(m_15);
                  else
                    l_15 = m_15;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(j_15)), not_null(l_15));
                {
                  n_15 = t;
                  if(((i_15 != NULL) && (i_15 != n_15)))
                    _fail(n_15);
                  else
                    i_15 = n_15;
                }
              }
            }
          }
          t = i_11;
          {
            ATerm y_1 (ATerm t)
            {
              t = not_null(i_15);
              return(t);
            }
            t = reverse_acc_2(t, f_0, y_1);
          }
        }
      }
    }
  else
    {
      if(((ATermList) f_15 == ATempty))
        {
          {
            t = term_y_9;
            t = i_0(t);
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
  ATerm e_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, e_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm p_52 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm s_43 (ATerm))
{
  ATerm y_15 = NULL,z_15 = NULL;
  y_15 = t;
  x_15 :
  if(match_cons(y_15, sym_Program_1))
    {
      z_15 = ATgetArgument(y_15, 0);
      {
        ATerm c_16 = NULL,e_16 = NULL;
        ATerm d_16 = NULL;
        t = SSLgetAnnotations(not_null(y_15));
        {
          d_16 = t;
          if(((c_16 != NULL) && (c_16 != d_16)))
            _fail(d_16);
          else
            c_16 = d_16;
        }
        {
          t = not_null(z_15);
          {
            ATerm g_16 = NULL;
            t = s_43(t);
            {
              e_16 = t;
              {
                ATerm h_16 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(e_16)), not_null(c_16));
                {
                  h_16 = t;
                  if(((g_16 != NULL) && (g_16 != h_16)))
                    _fail(h_16);
                  else
                    g_16 = h_16;
                }
                t = not_null(g_16);
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
  ATerm q_16 = NULL;
  ATerm f_2 (ATerm t)
  {
    ATerm g_2 (ATerm t)
    {
      ATerm r_16 = NULL;
      r_16 = t;
      if(((q_16 != NULL) && (q_16 != r_16)))
        _fail(r_16);
      else
        q_16 = r_16;
      return(t);
    }
    t = Program_1(t, g_2);
    return(t);
  }
  t = option_defined_1(t, f_2);
  {
    ATerm h_2 (ATerm t)
    {
      ATerm s_16 = NULL;
      ATerm t_16 = NULL;
      t = term_y_9;
      {
        ATerm i_2 (ATerm t)
        {
          t = not_null(q_16);
          return(t);
        }
        t = short_description_1(t, i_2);
        {
          t = concat_strings_0(t);
          {
            t_16 = t;
            if(((s_16 != NULL) && (s_16 != t_16)))
              _fail(t_16);
            else
              s_16 = t_16;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_4, (ATerm) ATinsert(ATempty, not_null(s_16)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, h_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_4, (ATerm) ATinsert(ATempty, term_l_11));
      {
        t = printnl_0(t);
        {
          t = term_p_11;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm j_2 (ATerm t)
                {
                  ATerm u_16 = NULL;
                  u_16 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_b_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_16)), term_q_11));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, j_2);
                {
                  ATerm k_2 (ATerm t)
                  {
                    ATerm w_16 = NULL;
                    ATerm x_16 = NULL;
                    t = term_y_9;
                    {
                      ATerm p_2 (ATerm t)
                      {
                        t = not_null(q_16);
                        return(t);
                      }
                      t = long_description_1(t, p_2);
                      {
                        t = concat_strings_0(t);
                        {
                          x_16 = t;
                          if(((w_16 != NULL) && (w_16 != x_16)))
                            _fail(x_16);
                          else
                            w_16 = x_16;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_b_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_16)), term_r_11));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, k_2);
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
ATerm Undefined_1 (ATerm t, ATerm t_43 (ATerm))
{
  ATerm h_17 = NULL,i_17 = NULL;
  h_17 = t;
  g_17 :
  if(match_cons(h_17, sym_Undefined_1))
    {
      i_17 = ATgetArgument(h_17, 0);
      {
        ATerm l_17 = NULL,n_17 = NULL;
        ATerm m_17 = NULL;
        t = SSLgetAnnotations(not_null(h_17));
        {
          m_17 = t;
          if(((l_17 != NULL) && (l_17 != m_17)))
            _fail(m_17);
          else
            l_17 = m_17;
        }
        {
          t = not_null(i_17);
          {
            ATerm p_17 = NULL;
            t = t_43(t);
            {
              n_17 = t;
              {
                ATerm q_17 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(n_17)), not_null(l_17));
                {
                  q_17 = t;
                  if(((p_17 != NULL) && (p_17 != q_17)))
                    _fail(q_17);
                  else
                    p_17 = q_17;
                }
                t = not_null(p_17);
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
ATerm fetch_1 (ATerm t, ATerm x_65 (ATerm))
{
  ATerm v_17 (ATerm t)
  {
    ATerm s_11 = t;
    int a_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, x_65, _id);
        LocalPopChoice(a_12);
      }
    else
      {
        t = s_11;
        t = Cons_2(t, _id, v_17);
      }
    return(t);
  }
  t = v_17(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm o_53 (ATerm))
{
  t = fetch_1(t, o_53);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm a_18 = NULL;
  a_18 = t;
  z_17 :
  if(match_cons(a_18, sym_Help_0))
    {
      ATerm j_18 = NULL,l_18 = NULL;
      ATerm b_12;
      b_12 = t;
      {
        ATerm k_18 = NULL;
        t = SSLgetAnnotations(not_null(a_18));
        {
          k_18 = t;
          if(((j_18 != NULL) && (j_18 != k_18)))
            _fail(k_18);
          else
            j_18 = k_18;
        }
      }
      t = b_12;
      {
        ATerm m_18 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(j_18));
        {
          m_18 = t;
          if(((l_18 != NULL) && (l_18 != m_18)))
            _fail(m_18);
          else
            l_18 = m_18;
        }
        t = not_null(l_18);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm i_74 (ATerm))
{
  ATerm c_12 = t;
  int f_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_74(t);
      LocalPopChoice(f_12);
    }
  else
    {
      t = c_12;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm s_18 = NULL,t_18 = NULL,u_18 = NULL;
  s_18 = t;
  r_18 :
  if(match_cons(s_18, sym__2))
    {
      t_18 = ATgetArgument(s_18, 0);
      u_18 = ATgetArgument(s_18, 1);
      t = SSL_table_get(not_null(t_18), not_null(u_18));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm e_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL;
  e_19 = t;
  d_19 :
  if(match_cons(e_19, sym__3))
    {
      f_19 = ATgetArgument(e_19, 0);
      g_19 = ATgetArgument(e_19, 1);
      h_19 = ATgetArgument(e_19, 2);
      {
        ATerm g_12;
        g_12 = t;
        {
          ATerm l_19 = NULL;
          ATerm m_19 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_19), not_null(g_19));
          {
            ATerm h_12 = t;
            int j_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(j_12);
              }
            else
              {
                t = h_12;
                t = (ATerm) ATempty;
              }
            {
              m_19 = t;
              if(((l_19 != NULL) && (l_19 != m_19)))
                _fail(m_19);
              else
                l_19 = m_19;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(f_19), not_null(g_19), (ATerm) ATinsert(CheckATermList(not_null(l_19)), not_null(h_19)));
            t = table_put_0(t);
          }
        }
        t = g_12;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm u_52 (ATerm))
{
  ATerm r_19 = NULL;
  ATerm s_19 = NULL;
  t = term_y_9;
  {
    t = u_52(t);
    {
      s_19 = t;
      if(((r_19 != NULL) && (r_19 != s_19)))
        _fail(s_19);
      else
        r_19 = s_19;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_m_11, term_o_11, not_null(r_19));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm y_19 = NULL,z_19 = NULL,a_20 = NULL;
  y_19 = t;
  x_19 :
  if(match_string(y_19, "register-usage-info"))
    {
      t = register_usage_1(t, e_0);
    }
  else
    {
      if(((ATgetType(y_19) == AT_LIST) && ((ATermList) y_19 != ATempty)))
        {
          z_19 = ATgetFirst((ATermList) y_19);
          a_20 = (ATerm) ATgetNext((ATermList) y_19);
          {
            ATerm d_20 = NULL;
            ATerm k_12;
            k_12 = t;
            {
              t = not_null(z_19);
              t = a_0(t);
            }
            t = k_12;
            {
              ATerm e_20 = NULL;
              t = term_y_9;
              {
                t = b_0(t);
                {
                  e_20 = t;
                  if(((d_20 != NULL) && (d_20 != e_20)))
                    _fail(e_20);
                  else
                    d_20 = e_20;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(a_20)), not_null(d_20));
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
  ATerm q_2 (ATerm t)
  {
    ATerm j_20 = NULL;
    j_20 = t;
    i_20 :
    if(!(match_string(j_20, "--help")))
      {
        if(!(match_string(j_20, "-h")))
          {
            if(!(match_string(j_20, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm r_2 (ATerm t)
  {
    t = term_m_12;
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    t = term_n_12;
    return(t);
  }
  t = Option_3(t, q_2, r_2, v_2);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm m_20 = NULL,n_20 = NULL,o_20 = NULL;
  m_20 = t;
  l_20 :
  if(((ATgetType(m_20) == AT_LIST) && ((ATermList) m_20 != ATempty)))
    {
      n_20 = ATgetFirst((ATermList) m_20);
      o_20 = (ATerm) ATgetNext((ATermList) m_20);
      t = (ATerm) ATinsert(CheckATermList(not_null(o_20)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(n_20)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm k_48 (ATerm), ATerm l_48 (ATerm))
{
  ATerm y_20 = NULL,z_20 = NULL,a_21 = NULL;
  y_20 = t;
  x_20 :
  if(((ATgetType(y_20) == AT_LIST) && ((ATermList) y_20 != ATempty)))
    {
      z_20 = ATgetFirst((ATermList) y_20);
      a_21 = (ATerm) ATgetNext((ATermList) y_20);
      {
        ATerm m_21 = NULL,o_21 = NULL;
        ATerm n_21 = NULL;
        t = SSLgetAnnotations(not_null(y_20));
        {
          n_21 = t;
          if(((m_21 != NULL) && (m_21 != n_21)))
            _fail(n_21);
          else
            m_21 = n_21;
        }
        {
          t = not_null(z_20);
          {
            ATerm s_21 = NULL;
            t = k_48(t);
            {
              o_21 = t;
              {
                t = not_null(a_21);
                {
                  ATerm u_21 = NULL;
                  t = l_48(t);
                  {
                    s_21 = t;
                    {
                      ATerm v_21 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(s_21)), not_null(o_21)), not_null(m_21));
                      {
                        v_21 = t;
                        if(((u_21 != NULL) && (u_21 != v_21)))
                          _fail(v_21);
                        else
                          u_21 = v_21;
                      }
                      t = not_null(u_21);
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
  ATerm h_22 = NULL;
  h_22 = t;
  g_22 :
  if(((ATermList) h_22 == ATempty))
    {
      {
        ATerm p_22 = NULL,x_22 = NULL;
        ATerm q_12;
        q_12 = t;
        {
          ATerm w_22 = NULL;
          t = SSLgetAnnotations(not_null(h_22));
          {
            w_22 = t;
            if(((p_22 != NULL) && (p_22 != w_22)))
              _fail(w_22);
            else
              p_22 = w_22;
          }
        }
        t = q_12;
        {
          ATerm y_22 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(p_22));
          {
            y_22 = t;
            if(((x_22 != NULL) && (x_22 != y_22)))
              _fail(y_22);
            else
              x_22 = y_22;
          }
          t = not_null(x_22);
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
  ATerm e_23 = NULL,g_23 = NULL,h_23 = NULL;
  e_23 = t;
  d_23 :
  if(match_cons(e_23, sym__2))
    {
      g_23 = ATgetArgument(e_23, 0);
      h_23 = ATgetArgument(e_23, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_z_4, not_null(g_23), not_null(h_23));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm s_52 (ATerm))
{
  ATerm r_12;
  r_12 = t;
  {
    ATerm x_2 (ATerm t)
    {
      t = term_o_13;
      t = s_52(t);
      return(t);
    }
    t = try_1(t, x_2);
  }
  t = r_12;
  {
    ATerm a_3 (ATerm t)
    {
      ATerm p_23 = NULL;
      ATerm p_13;
      p_13 = t;
      {
        ATerm n_23 = NULL;
        ATerm o_23 = NULL;
        o_23 = t;
        if(((n_23 != NULL) && (n_23 != o_23)))
          _fail(o_23);
        else
          n_23 = o_23;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_f_6, not_null(n_23));
          t = set_config_0(t);
        }
      }
      t = p_13;
      {
        ATerm q_23 = NULL;
        q_23 = t;
        if(((p_23 != NULL) && (p_23 != q_23)))
          _fail(q_23);
        else
          p_23 = q_23;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(p_23));
      }
      return(t);
    }
    ATerm b_3 (ATerm t)
    {
      ATerm q_13 = t;
      int r_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_13 = t;
          int t_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(t_13);
            }
          else
            {
              t = s_13;
              {
                t = s_52(t);
                t = Cons_2(t, _id, b_3);
              }
            }
          LocalPopChoice(r_13);
        }
      else
        {
          t = q_13;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, a_3, b_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL;
  ATerm u_13;
  u_13 = t;
  {
    ATerm z_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL;
    z_23 = t;
    v_23 :
    if(match_cons(z_23, sym__3))
      {
        a_24 = ATgetArgument(z_23, 0);
        b_24 = ATgetArgument(z_23, 1);
        c_24 = ATgetArgument(z_23, 2);
        {
          if(((w_23 != NULL) && (w_23 != a_24)))
            _fail(a_24);
          else
            w_23 = a_24;
          {
            if(((x_23 != NULL) && (x_23 != b_24)))
              _fail(b_24);
            else
              x_23 = b_24;
            {
              if(((y_23 != NULL) && (y_23 != c_24)))
                _fail(c_24);
              else
                y_23 = c_24;
              t = SSL_table_put(not_null(w_23), not_null(x_23), not_null(y_23));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = u_13;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm r_52 (ATerm))
{
  ATerm f_24 = NULL;
  ATerm w_13;
  w_13 = t;
  {
    t = term_x_13;
    t = table_put_0(t);
  }
  t = w_13;
  {
    ATerm c_3 (ATerm t)
    {
      ATerm y_13 = t;
      int a_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_52(t);
          LocalPopChoice(a_14);
        }
      else
        {
          t = y_13;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, c_3);
    {
      ATerm d_3 (ATerm t)
      {
        ATerm b_14 = t;
        int c_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_q_5;
                t = exit_0(t);
              }
            }
            LocalPopChoice(c_14);
          }
        else
          {
            t = b_14;
            {
              ATerm e_3 (ATerm t)
              {
                ATerm f_3 (ATerm t)
                {
                  ATerm g_24 = NULL;
                  g_24 = t;
                  if(((f_24 != NULL) && (f_24 != g_24)))
                    _fail(g_24);
                  else
                    f_24 = g_24;
                  return(t);
                }
                t = Undefined_1(t, f_3);
                return(t);
              }
              t = option_defined_1(t, e_3);
              {
                ATerm e_14;
                e_14 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_b_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_24)), term_f_14));
                  t = printnl_0(t);
                }
                t = e_14;
                {
                  t = system_usage_0(t);
                  {
                    t = term_i_4;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, d_3);
      {
        ATerm h_14;
        h_14 = t;
        {
          t = term_m_11;
          t = table_destroy_0(t);
        }
        t = h_14;
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm d_55 (ATerm), ATerm e_55 (ATerm), ATerm f_55 (ATerm), ATerm g_55 (ATerm))
{
  ATerm k_3 (ATerm t)
  {
    ATerm m_14 = t;
    int n_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_55(t);
        LocalPopChoice(n_14);
      }
    else
      {
        t = m_14;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, k_3);
  {
    t = store_options_0(t);
    {
      t = g_55(t);
      {
        ATerm o_14 = t;
        int p_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, f_55);
            LocalPopChoice(p_14);
          }
        else
          {
            t = o_14;
            {
              ATerm q_14 = t;
              int s_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = input_file_0(t);
                  {
                    t = apply_strategy_1(t, d_55);
                    {
                      t = output_file_0(t);
                      t = report_success_0(t);
                    }
                  }
                  LocalPopChoice(s_14);
                }
              else
                {
                  t = q_14;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm x_54 (ATerm), ATerm y_54 (ATerm), ATerm z_54 (ATerm))
{
  ATerm l_3 (ATerm t)
  {
    ATerm q_3 (ATerm t)
    {
      ATerm t_14;
      t_14 = t;
      {
        ATerm j_24 = NULL;
        ATerm k_24 = NULL;
        t = term_f_6;
        {
          t = get_config_0(t);
          {
            k_24 = t;
            if(((j_24 != NULL) && (j_24 != k_24)))
              _fail(k_24);
            else
              j_24 = k_24;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_b_4, (ATerm) ATinsert(ATempty, not_null(j_24)));
          t = printnl_0(t);
        }
      }
      t = t_14;
      return(t);
    }
    t = if_verbose2_1(t, q_3);
    return(t);
  }
  t = iowrap_4(t, x_54, y_54, z_54, l_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm v_54 (ATerm), ATerm w_54 (ATerm))
{
  t = iowrap_3(t, v_54, w_54, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm s_54 (ATerm))
{
  ATerm r_3 (ATerm t)
  {
    t = _2(t, _id, s_54);
    return(t);
  }
  t = iowrap_2(t, r_3, _fail);
  return(t);
}
ATerm annos_to_term_0 (ATerm t)
{
  t = iowrap_1(t, catch_annos_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = annos_to_term_0(t);
  return(t);
}
