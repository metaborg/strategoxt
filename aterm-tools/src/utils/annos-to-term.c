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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_None_0;
Symbol sym_Some_1;
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
Symbol sym_Anno_2;
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  init_constant_terms();
}
ATerm term_i_16;
ATerm term_o_15;
ATerm term_d_15;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_j_13;
ATerm term_g_13;
ATerm term_d_13;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_s_11;
ATerm term_n_10;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_n_9;
ATerm term_i_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_q_8;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_v_7;
ATerm term_u_7;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_c_7;
ATerm term_b_7;
ATerm term_y_6;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_u_6;
ATerm term_d_6;
ATerm term_z_5;
ATerm term_y_5;
ATerm term_m_5;
ATerm term_j_5;
ATerm term_x_3;
ATerm term_w_3;
ATerm term_v_3;
ATerm term_u_3;
void init_constant_terms (void)
{
  ATprotect(&(term_u_3));
  term_u_3 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_3));
  term_v_3 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_w_3));
  term_w_3 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_x_3));
  term_x_3 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_5));
  term_j_5 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_m_5));
  term_m_5 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(sym__2, term_v_6, term_w_6);
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(sym__2, term_y_5, term_o_7);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_7);
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(sym__2, term_h_8, term_w_6);
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(sym__2, term_f_9, term_w_6);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym__2, term_g_13, term_j_13);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym__2, term_p_14, term_w_6);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym__3, term_g_13, term_j_13, (ATerm) ATempty);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm get_annotations_0 (ATerm);
ATerm rm_annotations_0 (ATerm);
ATerm has_annotation_0 (ATerm);
ATerm catch_annos_0 (ATerm);
ATerm _2 (ATerm, ATerm i_45 (ATerm), ATerm j_45 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm c_60 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm g_70 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm d_73 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm k_71 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm q_67 (ATerm), ATerm r_67 (ATerm));
ATerm input_file_0 (ATerm);
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm b_66 (ATerm), ATerm c_66 (ATerm));
ATerm crush_2 (ATerm, ATerm z_64 (ATerm), ATerm a_65 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm c_73 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm i_71 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm g_75 (ATerm));
ATerm map_1 (ATerm, ATerm n_59 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm f_75 (ATerm));
ATerm Program_1 (ATerm, ATerm j_51 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm h_70 (ATerm));
ATerm Undefined_1 (ATerm, ATerm k_51 (ATerm));
ATerm fetch_1 (ATerm, ATerm w_59 (ATerm));
ATerm option_defined_1 (ATerm, ATerm f_74 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm w_51 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm k_75 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm r_46 (ATerm), ATerm s_46 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm i_75 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm h_75 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm o_71 (ATerm), ATerm p_71 (ATerm), ATerm q_71 (ATerm), ATerm r_71 (ATerm));
ATerm iowrap_4 (ATerm, ATerm f_72 (ATerm), ATerm g_72 (ATerm), ATerm h_72 (ATerm), ATerm i_72 (ATerm));
ATerm iowrap_3 (ATerm, ATerm z_71 (ATerm), ATerm a_72 (ATerm), ATerm b_72 (ATerm));
ATerm iowrap_2 (ATerm, ATerm x_71 (ATerm), ATerm y_71 (ATerm));
ATerm iowrap_1 (ATerm, ATerm u_71 (ATerm));
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
  ATerm t_1 = NULL;
  t_1 = t;
  t = ATremoveAnnotations(not_null(t_1));
  return(t);
}
ATerm has_annotation_0 (ATerm t)
{
  ATerm h_2;
  h_2 = t;
  {
    t = get_annotations_0(t);
    {
      ATerm h_3 = t;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = h_3;
        }
    }
  }
  t = h_2;
  return(t);
}
ATerm catch_annos_0 (ATerm t)
{
  ATerm i_3 = t;
  int j_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = has_annotation_0(t);
      LocalPopChoice(j_3);
      {
        ATerm c_2 = NULL,e_2 = NULL;
        ATerm o_3;
        o_3 = t;
        {
          ATerm d_2 = NULL;
          t = rm_annotations_0(t);
          {
            t = _all(t, catch_annos_0);
            {
              d_2 = t;
              if(((c_2 != NULL) && (c_2 != d_2)))
                _fail(d_2);
              else
                c_2 = d_2;
            }
          }
        }
        t = o_3;
        {
          ATerm g_2 = NULL;
          t = get_annotations_0(t);
          {
            g_2 = t;
            if(((e_2 != NULL) && (e_2 != g_2)))
              _fail(g_2);
            else
              e_2 = g_2;
          }
          t = (ATerm) ATmakeAppl(sym_Anno_2, not_null(c_2), not_null(e_2));
        }
      }
    }
  else
    {
      t = i_3;
      t = _all(t, catch_annos_0);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm i_45 (ATerm), ATerm j_45 (ATerm))
{
  ATerm q_2 = NULL,r_2 = NULL,s_2 = NULL;
  q_2 = t;
  p_2 :
  if(match_cons(q_2, sym__2))
    {
      r_2 = ATgetArgument(q_2, 0);
      s_2 = ATgetArgument(q_2, 1);
      {
        ATerm w_2 = NULL,y_2 = NULL;
        ATerm x_2 = NULL;
        t = SSLgetAnnotations(not_null(q_2));
        {
          x_2 = t;
          if(((w_2 != NULL) && (w_2 != x_2)))
            _fail(x_2);
          else
            w_2 = x_2;
        }
        {
          t = not_null(r_2);
          {
            ATerm a_3 = NULL;
            t = i_45(t);
            {
              y_2 = t;
              {
                t = not_null(s_2);
                {
                  ATerm c_3 = NULL;
                  t = j_45(t);
                  {
                    a_3 = t;
                    {
                      ATerm d_3 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(y_2), not_null(a_3)), not_null(w_2));
                      {
                        d_3 = t;
                        if(((c_3 != NULL) && (c_3 != d_3)))
                          _fail(d_3);
                        else
                          c_3 = d_3;
                      }
                      t = not_null(c_3);
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
  ATerm l_3 = NULL;
  ATerm p_3;
  p_3 = t;
  {
    ATerm b_0 (ATerm t)
    {
      ATerm m_3 = NULL,n_3 = NULL;
      m_3 = t;
      k_3 :
      if(match_cons(m_3, sym_Program_1))
        {
          n_3 = ATgetArgument(m_3, 0);
          if(((l_3 != NULL) && (l_3 != n_3)))
            _fail(n_3);
          else
            l_3 = n_3;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, b_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_3, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_3), not_null(l_3)), term_v_3));
      {
        t = printnl_0(t);
        {
          t = term_x_3;
          t = exit_0(t);
        }
      }
    }
  }
  t = p_3;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm r_3 = NULL,s_3 = NULL,t_3 = NULL;
  r_3 = t;
  q_3 :
  if(match_cons(r_3, sym__2))
    {
      s_3 = ATgetArgument(r_3, 0);
      t_3 = ATgetArgument(r_3, 1);
      {
        ATerm z_3;
        z_3 = t;
        t = SSL_printnl(not_null(s_3), not_null(t_3));
        t = z_3;
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
  ATerm y_3 = NULL;
  y_3 = t;
  t = SSL_implode_string(not_null(y_3));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm a_4 = t;
  int b_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(b_4);
    }
  else
    {
      t = a_4;
      {
        ATerm d_4 = NULL,e_4 = NULL,f_4 = NULL;
        d_4 = t;
        c_4 :
        if(((ATgetType(d_4) == AT_LIST) && !(ATisEmpty(d_4))))
          {
            e_4 = ATgetFirst((ATermList) d_4);
            f_4 = (ATerm) ATgetNext((ATermList) d_4);
            {
              t = not_null(e_4);
              {
                ATerm c_0 (ATerm t)
                {
                  t = not_null(f_4);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, c_0);
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
  ATerm p_4 = NULL;
  ATerm r_4 = NULL;
  p_4 = t;
  {
    ATerm s_4 = NULL;
    ATerm u_4 = NULL,v_4 = NULL,w_4 = NULL;
    t = not_null(p_4);
    {
      s_4 = t;
      {
        t = SSL_explode_term(not_null(s_4));
        {
          u_4 = t;
          n_4 :
          if(match_cons(u_4, sym__2))
            {
              v_4 = ATgetArgument(u_4, 0);
              w_4 = ATgetArgument(u_4, 1);
              o_4 :
              if(match_string(v_4, ""))
                {
                  if(((r_4 != NULL) && (r_4 != w_4)))
                    _fail(w_4);
                  else
                    r_4 = w_4;
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
      t = not_null(r_4);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm c_60 (ATerm))
{
  ATerm a_5 (ATerm t)
  {
    ATerm g_4 = t;
    int h_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, a_5);
        LocalPopChoice(h_4);
      }
    else
      {
        t = g_4;
        {
          t = Nil_0(t);
          t = c_60(t);
        }
      }
    return(t);
  }
  t = a_5(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm d_5 = NULL,e_5 = NULL,f_5 = NULL;
  d_5 = t;
  c_5 :
  if(match_cons(d_5, sym__2))
    {
      e_5 = ATgetArgument(d_5, 0);
      f_5 = ATgetArgument(d_5, 1);
      {
        t = not_null(e_5);
        {
          ATerm e_0 (ATerm t)
          {
            t = not_null(f_5);
            return(t);
          }
          t = at_end_1(t, e_0);
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
  ATerm i_4 = t;
  int j_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(j_4);
    }
  else
    {
      t = i_4;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm k_5 = NULL;
  k_5 = t;
  t = SSL_explode_string(not_null(k_5));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm k_4 = t;
    int l_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(l_4);
      }
    else
      {
        t = k_4;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm g_70 (ATerm))
{
  ATerm m_4;
  m_4 = t;
  {
    ATerm p_5 = NULL,r_5 = NULL;
    ATerm q_4;
    q_4 = t;
    {
      ATerm q_5 = NULL;
      t = g_70(t);
      {
        q_5 = t;
        if(((p_5 != NULL) && (p_5 != q_5)))
          _fail(q_5);
        else
          p_5 = q_5;
      }
    }
    t = q_4;
    {
      ATerm s_5 = NULL;
      s_5 = t;
      if(((r_5 != NULL) && (r_5 != s_5)))
        _fail(s_5);
      else
        r_5 = s_5;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_5)), not_null(p_5)));
        t = printnl_0(t);
      }
    }
  }
  t = m_4;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm w_5 = NULL;
  w_5 = t;
  t = SSL_is_string(not_null(w_5));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm t_4 = t;
  int x_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(x_4);
    }
  else
    {
      t = t_4;
      {
        ATerm y_4 = t;
        int z_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_0 (ATerm t)
            {
              ATerm b_5 = t;
              int g_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(g_5);
                }
              else
                {
                  t = b_5;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, f_0);
            LocalPopChoice(z_4);
          }
        else
          {
            t = y_4;
            {
              ATerm f_6 = NULL,g_6 = NULL,h_6 = NULL;
              f_6 = t;
              e_6 :
              if(match_cons(f_6, sym_Path_1))
                {
                  g_6 = ATgetArgument(f_6, 0);
                  t = not_null(g_6);
                }
              else
                {
                  if(match_cons(f_6, sym_Var_1))
                    {
                      g_6 = ATgetArgument(f_6, 0);
                      {
                        t = not_null(g_6);
                        {
                          ATerm h_5 = t;
                          int i_5 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(i_5);
                            }
                          else
                            {
                              t = h_5;
                              {
                                ATerm m_0 (ATerm t)
                                {
                                  t = term_j_5;
                                  return(t);
                                }
                                t = debug_1(t, m_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(f_6, sym_Prefix_2))
                        {
                          g_6 = ATgetArgument(f_6, 0);
                          h_6 = ATgetArgument(f_6, 1);
                          {
                            ATerm m_6 = NULL,o_6 = NULL;
                            ATerm l_5;
                            l_5 = t;
                            {
                              ATerm n_6 = NULL;
                              t = not_null(g_6);
                              {
                                t = eval_config_0(t);
                                {
                                  n_6 = t;
                                  if(((m_6 != NULL) && (m_6 != n_6)))
                                    _fail(n_6);
                                  else
                                    m_6 = n_6;
                                }
                              }
                            }
                            t = l_5;
                            {
                              ATerm p_6 = NULL;
                              t = not_null(h_6);
                              {
                                t = eval_config_0(t);
                                {
                                  p_6 = t;
                                  if(((o_6 != NULL) && (o_6 != p_6)))
                                    _fail(p_6);
                                  else
                                    o_6 = p_6;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(m_6), not_null(o_6));
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
  ATerm x_6 = NULL;
  x_6 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_m_5, not_null(x_6));
    {
      t = table_get_0(t);
      {
        ATerm n_5 = t;
        int o_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm t_5;
              t_5 = t;
              {
                ATerm z_6 = NULL;
                ATerm a_7 = NULL;
                a_7 = t;
                if(((z_6 != NULL) && (z_6 != a_7)))
                  _fail(a_7);
                else
                  z_6 = a_7;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_m_5, not_null(x_6), not_null(z_6));
                  t = table_put_0(t);
                }
              }
              t = t_5;
            }
            LocalPopChoice(o_5);
          }
        else
          {
            t = n_5;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm d_73 (ATerm))
{
  ATerm u_5 = t;
  int v_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_5;
      x_5 = t;
      {
        ATerm e_7 = NULL;
        ATerm f_7 = NULL;
        t = term_y_5;
        {
          t = get_config_0(t);
          {
            f_7 = t;
            if(((e_7 != NULL) && (e_7 != f_7)))
              _fail(f_7);
            else
              e_7 = f_7;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_7), term_z_5);
          t = geq_0(t);
        }
      }
      t = x_5;
      t = d_73(t);
      LocalPopChoice(v_5);
    }
  else
    {
      t = u_5;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm j_7 = NULL,k_7 = NULL,l_7 = NULL;
  j_7 = t;
  i_7 :
  if(match_cons(j_7, sym__2))
    {
      k_7 = ATgetArgument(j_7, 0);
      l_7 = ATgetArgument(j_7, 1);
      t = SSL_WriteToTextFile(not_null(k_7), not_null(l_7));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm r_7 = NULL,s_7 = NULL,t_7 = NULL;
  r_7 = t;
  q_7 :
  if(match_cons(r_7, sym__2))
    {
      s_7 = ATgetArgument(r_7, 0);
      t_7 = ATgetArgument(r_7, 1);
      t = SSL_WriteToBinaryFile(not_null(s_7), not_null(t_7));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm b_8 = NULL;
  ATerm a_6;
  a_6 = t;
  {
    ATerm n_0 (ATerm t)
    {
      ATerm b_6 = t;
      int c_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_0 (ATerm t)
          {
            ATerm c_8 = NULL,d_8 = NULL;
            c_8 = t;
            y_7 :
            if(match_cons(c_8, sym_Output_1))
              {
                d_8 = ATgetArgument(c_8, 0);
                if(((b_8 != NULL) && (b_8 != d_8)))
                  _fail(d_8);
                else
                  b_8 = d_8;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, o_0);
          LocalPopChoice(c_6);
        }
      else
        {
          t = b_6;
          {
            ATerm e_8 = NULL;
            t = term_d_6;
            {
              e_8 = t;
              if(((b_8 != NULL) && (b_8 != e_8)))
                _fail(e_8);
              else
                b_8 = e_8;
            }
          }
        }
      return(t);
    }
    t = _2(t, n_0, _id);
  }
  t = a_6;
  {
    ATerm p_0 (ATerm t)
    {
      ATerm r_0 (ATerm t)
      {
        t = not_null(b_8);
        return(t);
      }
      t = split_2(t, r_0, _id);
      return(t);
    }
    t = _2(t, _id, p_0);
    {
      ATerm i_6 = t;
      int j_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_0 (ATerm t)
          {
            ATerm t_0 (ATerm t)
            {
              ATerm f_8 = NULL;
              f_8 = t;
              a_8 :
              if(!(match_cons(f_8, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, t_0);
            return(t);
          }
          t = _2(t, s_0, WriteToBinaryFile_0);
          LocalPopChoice(j_6);
        }
      else
        {
          t = i_6;
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
ATerm apply_strategy_1 (ATerm t, ATerm k_71 (ATerm))
{
  ATerm l_8 = NULL,n_8 = NULL,o_8 = NULL,p_8 = NULL;
  ATerm k_6;
  k_6 = t;
  t = dtime_0(t);
  t = k_6;
  {
    t = k_71(t);
    {
      ATerm l_6;
      l_6 = t;
      {
        ATerm m_8 = NULL;
        t = dtime_0(t);
        {
          m_8 = t;
          if(((l_8 != NULL) && (l_8 != m_8)))
            _fail(m_8);
          else
            l_8 = m_8;
        }
      }
      t = l_6;
      {
        n_8 = t;
        k_8 :
        if(match_cons(n_8, sym__2))
          {
            o_8 = ATgetArgument(n_8, 0);
            p_8 = ATgetArgument(n_8, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(o_8)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(l_8))), not_null(p_8));
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
  ATerm v_8 = NULL;
  v_8 = t;
  t = SSL_ReadFromFile(not_null(v_8));
  return(t);
}
ATerm split_2 (ATerm t, ATerm q_67 (ATerm), ATerm r_67 (ATerm))
{
  ATerm a_9 = NULL,c_9 = NULL;
  ATerm q_6;
  q_6 = t;
  {
    ATerm b_9 = NULL;
    t = q_67(t);
    {
      b_9 = t;
      if(((a_9 != NULL) && (a_9 != b_9)))
        _fail(b_9);
      else
        a_9 = b_9;
    }
  }
  t = q_6;
  {
    ATerm d_9 = NULL;
    t = r_67(t);
    {
      d_9 = t;
      if(((c_9 != NULL) && (c_9 != d_9)))
        _fail(d_9);
      else
        c_9 = d_9;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_9), not_null(c_9));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm j_9 = NULL;
  ATerm r_6;
  r_6 = t;
  {
    ATerm s_6 = t;
    int t_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_0 (ATerm t)
        {
          ATerm k_9 = NULL,l_9 = NULL;
          k_9 = t;
          h_9 :
          if(match_cons(k_9, sym_Input_1))
            {
              l_9 = ATgetArgument(k_9, 0);
              if(((j_9 != NULL) && (j_9 != l_9)))
                _fail(l_9);
              else
                j_9 = l_9;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, u_0);
        LocalPopChoice(t_6);
      }
    else
      {
        t = s_6;
        {
          ATerm m_9 = NULL;
          t = term_u_6;
          {
            m_9 = t;
            if(((j_9 != NULL) && (j_9 != m_9)))
              _fail(m_9);
            else
              j_9 = m_9;
          }
        }
      }
  }
  t = r_6;
  {
    ATerm v_0 (ATerm t)
    {
      t = not_null(j_9);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, v_0);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm w_0 (ATerm t)
  {
    ATerm q_9 = NULL;
    q_9 = t;
    p_9 :
    if(!(match_string(q_9, "-v")))
      {
        if(!(match_string(q_9, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm x_0 (ATerm t)
  {
    t = term_y_6;
    t = set_config_0(t);
    t = term_b_7;
    return(t);
  }
  ATerm y_0 (ATerm t)
  {
    t = term_c_7;
    return(t);
  }
  t = Option_3(t, w_0, x_0, y_0);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm z_0 (ATerm t)
  {
    ATerm t_9 = NULL;
    t_9 = t;
    r_9 :
    if(!(match_string(t_9, "-k")))
      {
        if(!(match_string(t_9, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm a_1 (ATerm t)
  {
    ATerm d_7;
    d_7 = t;
    {
      ATerm u_9 = NULL;
      ATerm v_9 = NULL;
      t = string_to_int_0(t);
      {
        v_9 = t;
        if(((u_9 != NULL) && (u_9 != v_9)))
          _fail(v_9);
        else
          u_9 = v_9;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_7, not_null(u_9));
        t = set_config_0(t);
      }
    }
    t = d_7;
    return(t);
  }
  ATerm b_1 (ATerm t)
  {
    t = term_h_7;
    return(t);
  }
  t = ArgOption_3(t, z_0, a_1, b_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm y_9 = NULL;
  y_9 = t;
  t = SSL_string_to_int(not_null(y_9));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm m_7 = t;
  int n_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_1 (ATerm t)
      {
        ATerm g_10 = NULL;
        g_10 = t;
        b_10 :
        if(!(match_string(g_10, "-S")))
          {
            if(!(match_string(g_10, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm d_1 (ATerm t)
      {
        t = term_p_7;
        t = set_config_0(t);
        t = term_u_7;
        return(t);
      }
      ATerm e_1 (ATerm t)
      {
        t = term_v_7;
        return(t);
      }
      t = Option_3(t, c_1, d_1, e_1);
      LocalPopChoice(n_7);
    }
  else
    {
      t = m_7;
      {
        ATerm w_7 = t;
        int x_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_1 (ATerm t)
            {
              ATerm h_10 = NULL;
              h_10 = t;
              c_10 :
              if(!(match_string(h_10, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm g_1 (ATerm t)
            {
              ATerm k_10 = NULL;
              ATerm z_7;
              z_7 = t;
              {
                ATerm i_10 = NULL;
                ATerm j_10 = NULL;
                t = string_to_int_0(t);
                {
                  j_10 = t;
                  if(((i_10 != NULL) && (i_10 != j_10)))
                    _fail(j_10);
                  else
                    i_10 = j_10;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_y_5, not_null(i_10));
                  t = set_config_0(t);
                }
              }
              t = z_7;
              {
                ATerm l_10 = NULL;
                l_10 = t;
                if(((k_10 != NULL) && (k_10 != l_10)))
                  _fail(l_10);
                else
                  k_10 = l_10;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(k_10));
              }
              return(t);
            }
            ATerm h_1 (ATerm t)
            {
              t = term_g_8;
              return(t);
            }
            t = ArgOption_3(t, f_1, g_1, h_1);
            LocalPopChoice(x_7);
          }
        else
          {
            t = w_7;
            {
              ATerm i_1 (ATerm t)
              {
                ATerm m_10 = NULL;
                m_10 = t;
                f_10 :
                if(!(match_string(m_10, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm j_1 (ATerm t)
              {
                t = term_i_8;
                t = set_config_0(t);
                t = term_j_8;
                return(t);
              }
              ATerm k_1 (ATerm t)
              {
                t = term_q_8;
                return(t);
              }
              t = Option_3(t, i_1, j_1, k_1);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm r_8 = t;
  int s_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(s_8);
    }
  else
    {
      t = r_8;
      {
        ATerm t_8 = t;
        int u_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(u_8);
          }
        else
          {
            t = t_8;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm l_1 (ATerm t)
  {
    ATerm s_10 = NULL;
    s_10 = t;
    p_10 :
    if(!(match_string(s_10, "-o")))
      {
        if(!(match_string(s_10, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm m_1 (ATerm t)
  {
    ATerm v_10 = NULL;
    ATerm w_8;
    w_8 = t;
    {
      ATerm t_10 = NULL;
      ATerm u_10 = NULL;
      u_10 = t;
      if(((t_10 != NULL) && (t_10 != u_10)))
        _fail(u_10);
      else
        t_10 = u_10;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_8, not_null(t_10));
        t = set_config_0(t);
      }
    }
    t = w_8;
    {
      ATerm w_10 = NULL;
      w_10 = t;
      if(((v_10 != NULL) && (v_10 != w_10)))
        _fail(w_10);
      else
        v_10 = w_10;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(v_10));
    }
    return(t);
  }
  ATerm n_1 (ATerm t)
  {
    t = term_y_8;
    return(t);
  }
  t = ArgOption_3(t, l_1, m_1, n_1);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm z_8 = t;
  int e_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(e_9);
    }
  else
    {
      t = z_8;
      {
        ATerm o_1 (ATerm t)
        {
          ATerm a_11 = NULL;
          a_11 = t;
          z_10 :
          if(!(match_string(a_11, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm p_1 (ATerm t)
        {
          t = term_g_9;
          t = set_config_0(t);
          t = term_i_9;
          return(t);
        }
        ATerm q_1 (ATerm t)
        {
          t = term_n_9;
          return(t);
        }
        t = Option_3(t, o_1, p_1, q_1);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm g_11 = NULL,h_11 = NULL,i_11 = NULL,j_11 = NULL,k_11 = NULL;
  g_11 = t;
  e_11 :
  if(match_string(g_11, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(g_11) == AT_LIST) && !(ATisEmpty(g_11))))
        {
          h_11 = ATgetFirst((ATermList) g_11);
          i_11 = (ATerm) ATgetNext((ATermList) g_11);
          f_11 :
          if(((ATgetType(i_11) == AT_LIST) && !(ATisEmpty(i_11))))
            {
              j_11 = ATgetFirst((ATermList) i_11);
              k_11 = (ATerm) ATgetNext((ATermList) i_11);
              {
                ATerm o_11 = NULL;
                ATerm o_9;
                o_9 = t;
                {
                  t = not_null(h_11);
                  t = j_0(t);
                }
                t = o_9;
                {
                  ATerm p_11 = NULL;
                  t = not_null(j_11);
                  {
                    t = k_0(t);
                    {
                      p_11 = t;
                      if(((o_11 != NULL) && (o_11 != p_11)))
                        _fail(p_11);
                      else
                        o_11 = p_11;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(k_11)), not_null(o_11));
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
  ATerm r_1 (ATerm t)
  {
    ATerm w_11 = NULL;
    w_11 = t;
    t_11 :
    if(!(match_string(w_11, "-i")))
      {
        if(!(match_string(w_11, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm s_1 (ATerm t)
  {
    ATerm z_11 = NULL;
    ATerm s_9;
    s_9 = t;
    {
      ATerm x_11 = NULL;
      ATerm y_11 = NULL;
      y_11 = t;
      if(((x_11 != NULL) && (x_11 != y_11)))
        _fail(y_11);
      else
        x_11 = y_11;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_9, not_null(x_11));
        t = set_config_0(t);
      }
    }
    t = s_9;
    {
      ATerm a_12 = NULL;
      a_12 = t;
      if(((z_11 != NULL) && (z_11 != a_12)))
        _fail(a_12);
      else
        z_11 = a_12;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(z_11));
    }
    return(t);
  }
  ATerm u_1 (ATerm t)
  {
    t = term_x_9;
    return(t);
  }
  t = ArgOption_3(t, r_1, s_1, u_1);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm z_9 = t;
  int a_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(a_10);
    }
  else
    {
      t = z_9;
      {
        ATerm d_10 = t;
        int e_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(e_10);
          }
        else
          {
            t = d_10;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_u_3, (ATerm) ATinsert(ATempty, term_n_10));
  {
    t = printnl_0(t);
    {
      t = term_x_3;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm e_12 = NULL;
  e_12 = t;
  t = SSL_TicksToSeconds(not_null(e_12));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL;
  j_12 = t;
  i_12 :
  if(match_cons(j_12, sym__2))
    {
      k_12 = ATgetArgument(j_12, 0);
      l_12 = ATgetArgument(j_12, 1);
      {
        ATerm o_10 = t;
        int q_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(k_12), not_null(l_12));
            LocalPopChoice(q_10);
          }
        else
          {
            t = o_10;
            t = SSL_addr(not_null(k_12), not_null(l_12));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm b_66 (ATerm), ATerm c_66 (ATerm))
{
  ATerm r_10 = t;
  int x_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = b_66(t);
      LocalPopChoice(x_10);
    }
  else
    {
      t = r_10;
      {
        ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL;
        s_12 = t;
        r_12 :
        if(((ATgetType(s_12) == AT_LIST) && !(ATisEmpty(s_12))))
          {
            t_12 = ATgetFirst((ATermList) s_12);
            u_12 = (ATerm) ATgetNext((ATermList) s_12);
            {
              ATerm x_12 = NULL;
              ATerm y_12 = NULL;
              t = not_null(u_12);
              {
                t = foldr_2(t, b_66, c_66);
                {
                  y_12 = t;
                  if(((x_12 != NULL) && (x_12 != y_12)))
                    _fail(y_12);
                  else
                    x_12 = y_12;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_12), not_null(x_12));
                t = c_66(t);
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
ATerm crush_2 (ATerm t, ATerm z_64 (ATerm), ATerm a_65 (ATerm))
{
  ATerm f_13 = NULL;
  ATerm h_13 = NULL;
  f_13 = t;
  {
    ATerm i_13 = NULL;
    ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL;
    t = not_null(f_13);
    {
      i_13 = t;
      {
        t = SSL_explode_term(not_null(i_13));
        {
          k_13 = t;
          e_13 :
          if(match_cons(k_13, sym__2))
            {
              l_13 = ATgetArgument(k_13, 0);
              m_13 = ATgetArgument(k_13, 1);
              if(((h_13 != NULL) && (h_13 != m_13)))
                _fail(m_13);
              else
                h_13 = m_13;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(h_13);
      t = foldr_2(t, z_64, a_65);
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
    ATerm v_1 (ATerm t)
    {
      t = term_o_7;
      return(t);
    }
    t = crush_2(t, v_1, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL;
  s_13 = t;
  r_13 :
  if(match_cons(s_13, sym__2))
    {
      t_13 = ATgetArgument(s_13, 0);
      u_13 = ATgetArgument(s_13, 1);
      {
        ATerm y_10;
        y_10 = t;
        {
          ATerm b_11 = t;
          int c_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(t_13), not_null(u_13));
              LocalPopChoice(c_11);
            }
          else
            {
              t = b_11;
              t = SSL_gtr(not_null(t_13), not_null(u_13));
            }
        }
        t = y_10;
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
  ATerm a_14 = NULL;
  ATerm d_11 = t;
  int l_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_14 = NULL,c_14 = NULL,d_14 = NULL;
      b_14 = t;
      z_13 :
      if(match_cons(b_14, sym__2))
        {
          c_14 = ATgetArgument(b_14, 0);
          d_14 = ATgetArgument(b_14, 1);
          {
            if(((a_14 != NULL) && (a_14 != c_14)))
              _fail(c_14);
            else
              a_14 = c_14;
            if(((a_14 != NULL) && (a_14 != d_14)))
              _fail(d_14);
            else
              a_14 = d_14;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(l_11);
    }
  else
    {
      t = d_11;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm c_73 (ATerm))
{
  ATerm m_11 = t;
  int n_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_11;
      q_11 = t;
      {
        ATerm g_14 = NULL;
        ATerm h_14 = NULL;
        t = term_y_5;
        {
          t = get_config_0(t);
          {
            h_14 = t;
            if(((g_14 != NULL) && (g_14 != h_14)))
              _fail(h_14);
            else
              g_14 = h_14;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_14), term_x_3);
          t = geq_0(t);
        }
      }
      t = q_11;
      t = c_73(t);
      LocalPopChoice(n_11);
    }
  else
    {
      t = m_11;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm w_1 (ATerm t)
  {
    ATerm l_14 = NULL,n_14 = NULL;
    ATerm r_11;
    r_11 = t;
    {
      ATerm m_14 = NULL;
      t = run_time_0(t);
      {
        m_14 = t;
        if(((l_14 != NULL) && (l_14 != m_14)))
          _fail(m_14);
        else
          l_14 = m_14;
      }
    }
    t = r_11;
    {
      ATerm o_14 = NULL;
      t = term_s_11;
      {
        t = get_config_0(t);
        {
          o_14 = t;
          if(((n_14 != NULL) && (n_14 != o_14)))
            _fail(o_14);
          else
            n_14 = o_14;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_11), not_null(l_14)), term_u_11), not_null(n_14)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, w_1);
  {
    t = term_o_7;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm v_14 = NULL;
  v_14 = t;
  u_14 :
  if(match_cons(v_14, sym_Version_0))
    {
      ATerm x_14 = NULL,z_14 = NULL;
      ATerm b_12;
      b_12 = t;
      {
        ATerm y_14 = NULL;
        t = SSLgetAnnotations(not_null(v_14));
        {
          y_14 = t;
          if(((x_14 != NULL) && (x_14 != y_14)))
            _fail(y_14);
          else
            x_14 = y_14;
        }
      }
      t = b_12;
      {
        ATerm a_15 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(x_14));
        {
          a_15 = t;
          if(((z_14 != NULL) && (z_14 != a_15)))
            _fail(a_15);
          else
            z_14 = a_15;
        }
        t = not_null(z_14);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm i_71 (ATerm))
{
  ATerm x_1 (ATerm t)
  {
    ATerm c_12 = t;
    int d_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(d_12);
      }
    else
      {
        t = c_12;
        {
          ATerm f_12 = t;
          int g_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(g_12);
            }
          else
            {
              t = f_12;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, x_1);
  t = i_71(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm f_15 = NULL;
  f_15 = t;
  t = SSL_table_create(not_null(f_15));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm j_15 = NULL;
  j_15 = t;
  {
    ATerm h_12;
    h_12 = t;
    {
      t = term_m_12;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_m_12, term_n_12, not_null(j_15));
          t = table_put_0(t);
        }
      }
    }
    t = h_12;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm n_15 = NULL;
  n_15 = t;
  t = SSL_table_destroy(not_null(n_15));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm r_15 = NULL;
  r_15 = t;
  t = SSL_exit(not_null(r_15));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL;
  v_15 = t;
  u_15 :
  if(((ATgetType(v_15) == AT_LIST) && ATisEmpty(v_15)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(v_15) == AT_LIST) && !(ATisEmpty(v_15))))
        {
          w_15 = ATgetFirst((ATermList) v_15);
          x_15 = (ATerm) ATgetNext((ATermList) v_15);
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
  ATerm o_12;
  o_12 = t;
  {
    ATerm a_16 = NULL;
    ATerm d_16 = NULL;
    ATerm p_12 = t;
    int q_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(q_12);
      }
    else
      {
        t = p_12;
        {
          ATerm b_16 = NULL;
          ATerm c_16 = NULL;
          c_16 = t;
          if(((b_16 != NULL) && (b_16 != c_16)))
            _fail(c_16);
          else
            b_16 = c_16;
          t = (ATerm) ATinsert(ATempty, not_null(b_16));
        }
      }
    {
      d_16 = t;
      if(((a_16 != NULL) && (a_16 != d_16)))
        _fail(d_16);
      else
        a_16 = d_16;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_6, not_null(a_16));
      t = printnl_0(t);
    }
  }
  t = o_12;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm g_75 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm n_59 (ATerm))
{
  ATerm g_16 (ATerm t)
  {
    ATerm v_12 = t;
    int w_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(w_12);
      }
    else
      {
        t = v_12;
        t = Cons_2(t, n_59, g_16);
      }
    return(t);
  }
  t = g_16(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm n_16 = NULL,o_16 = NULL,p_16 = NULL;
  p_16 = t;
  m_16 :
  if(((ATgetType(p_16) == AT_LIST) && !(ATisEmpty(p_16))))
    {
      n_16 = ATgetFirst((ATermList) p_16);
      o_16 = (ATerm) ATgetNext((ATermList) p_16);
      {
        ATerm s_16 = NULL;
        t = not_null(o_16);
        {
          ATerm z_12;
          z_12 = t;
          {
            ATerm t_16 = NULL,v_16 = NULL,x_16 = NULL;
            ATerm a_13;
            a_13 = t;
            {
              ATerm u_16 = NULL;
              t = i_0(t);
              {
                u_16 = t;
                if(((t_16 != NULL) && (t_16 != u_16)))
                  _fail(u_16);
                else
                  t_16 = u_16;
              }
            }
            t = a_13;
            {
              ATerm w_16 = NULL;
              t = not_null(n_16);
              {
                t = h_0(t);
                {
                  w_16 = t;
                  if(((v_16 != NULL) && (v_16 != w_16)))
                    _fail(w_16);
                  else
                    v_16 = w_16;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(t_16)), not_null(v_16));
                {
                  x_16 = t;
                  if(((s_16 != NULL) && (s_16 != x_16)))
                    _fail(x_16);
                  else
                    s_16 = x_16;
                }
              }
            }
          }
          t = z_12;
          {
            ATerm y_1 (ATerm t)
            {
              t = not_null(s_16);
              return(t);
            }
            t = reverse_acc_2(t, h_0, y_1);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(p_16) == AT_LIST) && ATisEmpty(p_16)))
        {
          {
            t = term_w_6;
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
  ATerm z_1 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, z_1);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm f_75 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm j_51 (ATerm))
{
  ATerm n_17 = NULL,o_17 = NULL;
  n_17 = t;
  m_17 :
  if(match_cons(n_17, sym_Program_1))
    {
      o_17 = ATgetArgument(n_17, 0);
      {
        ATerm r_17 = NULL,t_17 = NULL;
        ATerm s_17 = NULL;
        t = SSLgetAnnotations(not_null(n_17));
        {
          s_17 = t;
          if(((r_17 != NULL) && (r_17 != s_17)))
            _fail(s_17);
          else
            r_17 = s_17;
        }
        {
          t = not_null(o_17);
          {
            ATerm v_17 = NULL;
            t = j_51(t);
            {
              t_17 = t;
              {
                ATerm z_17 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(t_17)), not_null(r_17));
                {
                  z_17 = t;
                  if(((v_17 != NULL) && (v_17 != z_17)))
                    _fail(z_17);
                  else
                    v_17 = z_17;
                }
                t = not_null(v_17);
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
  ATerm h_18 = NULL;
  ATerm b_13 = t;
  int c_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_18 = NULL;
      t = term_s_11;
      {
        t = get_config_0(t);
        {
          i_18 = t;
          if(((h_18 != NULL) && (h_18 != i_18)))
            _fail(i_18);
          else
            h_18 = i_18;
        }
      }
      LocalPopChoice(c_13);
    }
  else
    {
      t = b_13;
      {
        ATerm a_2 (ATerm t)
        {
          ATerm b_2 (ATerm t)
          {
            ATerm j_18 = NULL;
            j_18 = t;
            if(((h_18 != NULL) && (h_18 != j_18)))
              _fail(j_18);
            else
              h_18 = j_18;
            return(t);
          }
          t = Program_1(t, b_2);
          return(t);
        }
        t = fetch_1(t, a_2);
      }
    }
  {
    t = term_d_13;
    {
      t = echo_0(t);
      {
        t = term_n_13;
        {
          t = table_get_0(t);
          {
            ATerm f_2 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, f_2);
            {
              ATerm i_2 (ATerm t)
              {
                ATerm k_18 = NULL;
                ATerm l_18 = NULL;
                l_18 = t;
                if(((k_18 != NULL) && (k_18 != l_18)))
                  _fail(l_18);
                else
                  k_18 = l_18;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_18)), term_o_13);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, i_2);
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
  ATerm p_13;
  p_13 = t;
  {
    ATerm q_18 = NULL;
    ATerm r_18 = NULL;
    r_18 = t;
    if(((q_18 != NULL) && (q_18 != r_18)))
      _fail(r_18);
    else
      q_18 = r_18;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_3, (ATerm) ATinsert(ATempty, not_null(q_18)));
      t = printnl_0(t);
    }
  }
  t = p_13;
  return(t);
}
ATerm say_1 (ATerm t, ATerm h_70 (ATerm))
{
  ATerm q_13;
  q_13 = t;
  {
    t = h_70(t);
    t = debug_0(t);
  }
  t = q_13;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm k_51 (ATerm))
{
  ATerm y_18 = NULL,z_18 = NULL;
  y_18 = t;
  x_18 :
  if(match_cons(y_18, sym_Undefined_1))
    {
      z_18 = ATgetArgument(y_18, 0);
      {
        ATerm c_19 = NULL,e_19 = NULL;
        ATerm d_19 = NULL;
        t = SSLgetAnnotations(not_null(y_18));
        {
          d_19 = t;
          if(((c_19 != NULL) && (c_19 != d_19)))
            _fail(d_19);
          else
            c_19 = d_19;
        }
        {
          t = not_null(z_18);
          {
            ATerm g_19 = NULL;
            t = k_51(t);
            {
              e_19 = t;
              {
                ATerm h_19 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(e_19)), not_null(c_19));
                {
                  h_19 = t;
                  if(((g_19 != NULL) && (g_19 != h_19)))
                    _fail(h_19);
                  else
                    g_19 = h_19;
                }
                t = not_null(g_19);
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
ATerm fetch_1 (ATerm t, ATerm w_59 (ATerm))
{
  ATerm m_19 (ATerm t)
  {
    ATerm v_13 = t;
    int w_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, w_59, _id);
        LocalPopChoice(w_13);
      }
    else
      {
        t = v_13;
        t = Cons_2(t, _id, m_19);
      }
    return(t);
  }
  t = m_19(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm f_74 (ATerm))
{
  t = fetch_1(t, f_74);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm r_19 = NULL;
  r_19 = t;
  q_19 :
  if(match_cons(r_19, sym_Help_0))
    {
      ATerm t_19 = NULL,v_19 = NULL;
      ATerm x_13;
      x_13 = t;
      {
        ATerm u_19 = NULL;
        t = SSLgetAnnotations(not_null(r_19));
        {
          u_19 = t;
          if(((t_19 != NULL) && (t_19 != u_19)))
            _fail(u_19);
          else
            t_19 = u_19;
        }
      }
      t = x_13;
      {
        ATerm w_19 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(t_19));
        {
          w_19 = t;
          if(((v_19 != NULL) && (v_19 != w_19)))
            _fail(w_19);
          else
            v_19 = w_19;
        }
        t = not_null(v_19);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm w_51 (ATerm))
{
  ATerm y_13 = t;
  int e_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_51(t);
      LocalPopChoice(e_14);
    }
  else
    {
      t = y_13;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL;
  c_20 = t;
  b_20 :
  if(match_cons(c_20, sym__2))
    {
      d_20 = ATgetArgument(c_20, 0);
      e_20 = ATgetArgument(c_20, 1);
      t = SSL_table_get(not_null(d_20), not_null(e_20));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL,o_20 = NULL;
  l_20 = t;
  k_20 :
  if(match_cons(l_20, sym__3))
    {
      m_20 = ATgetArgument(l_20, 0);
      n_20 = ATgetArgument(l_20, 1);
      o_20 = ATgetArgument(l_20, 2);
      {
        ATerm f_14;
        f_14 = t;
        {
          ATerm s_20 = NULL;
          ATerm t_20 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_20), not_null(n_20));
          {
            ATerm i_14 = t;
            int j_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(j_14);
              }
            else
              {
                t = i_14;
                t = (ATerm) ATempty;
              }
            {
              t_20 = t;
              if(((s_20 != NULL) && (s_20 != t_20)))
                _fail(t_20);
              else
                s_20 = t_20;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(m_20), not_null(n_20), (ATerm) ATinsert(CheckATermList(not_null(s_20)), not_null(o_20)));
            t = table_put_0(t);
          }
        }
        t = f_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm k_75 (ATerm))
{
  ATerm x_20 = NULL;
  ATerm y_20 = NULL;
  t = term_w_6;
  {
    t = k_75(t);
    {
      y_20 = t;
      if(((x_20 != NULL) && (x_20 != y_20)))
        _fail(y_20);
      else
        x_20 = y_20;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_g_13, term_j_13, not_null(x_20));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm e_21 = NULL,f_21 = NULL,g_21 = NULL;
  e_21 = t;
  d_21 :
  if(match_string(e_21, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(e_21) == AT_LIST) && !(ATisEmpty(e_21))))
        {
          f_21 = ATgetFirst((ATermList) e_21);
          g_21 = (ATerm) ATgetNext((ATermList) e_21);
          {
            ATerm j_21 = NULL;
            ATerm k_14;
            k_14 = t;
            {
              t = not_null(f_21);
              t = a_0(t);
            }
            t = k_14;
            {
              ATerm k_21 = NULL;
              t = term_w_6;
              {
                t = d_0(t);
                {
                  k_21 = t;
                  if(((j_21 != NULL) && (j_21 != k_21)))
                    _fail(k_21);
                  else
                    j_21 = k_21;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(g_21)), not_null(j_21));
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
  ATerm j_2 (ATerm t)
  {
    ATerm p_21 = NULL;
    p_21 = t;
    o_21 :
    if(!(match_string(p_21, "--help")))
      {
        if(!(match_string(p_21, "-h")))
          {
            if(!(match_string(p_21, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm k_2 (ATerm t)
  {
    t = term_q_14;
    {
      t = set_config_0(t);
      t = term_r_14;
    }
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    t = term_s_14;
    return(t);
  }
  t = Option_3(t, j_2, k_2, l_2);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL;
  s_21 = t;
  r_21 :
  if(((ATgetType(s_21) == AT_LIST) && !(ATisEmpty(s_21))))
    {
      t_21 = ATgetFirst((ATermList) s_21);
      u_21 = (ATerm) ATgetNext((ATermList) s_21);
      t = (ATerm) ATinsert(CheckATermList(not_null(u_21)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(t_21)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm r_46 (ATerm), ATerm s_46 (ATerm))
{
  ATerm e_22 = NULL,f_22 = NULL,g_22 = NULL;
  e_22 = t;
  d_22 :
  if(((ATgetType(e_22) == AT_LIST) && !(ATisEmpty(e_22))))
    {
      f_22 = ATgetFirst((ATermList) e_22);
      g_22 = (ATerm) ATgetNext((ATermList) e_22);
      {
        ATerm k_22 = NULL,n_22 = NULL;
        ATerm l_22 = NULL;
        t = SSLgetAnnotations(not_null(e_22));
        {
          l_22 = t;
          if(((k_22 != NULL) && (k_22 != l_22)))
            _fail(l_22);
          else
            k_22 = l_22;
        }
        {
          t = not_null(f_22);
          {
            ATerm p_22 = NULL;
            t = r_46(t);
            {
              n_22 = t;
              {
                t = not_null(g_22);
                {
                  ATerm r_22 = NULL;
                  t = s_46(t);
                  {
                    p_22 = t;
                    {
                      ATerm s_22 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(p_22)), not_null(n_22)), not_null(k_22));
                      {
                        s_22 = t;
                        if(((r_22 != NULL) && (r_22 != s_22)))
                          _fail(s_22);
                        else
                          r_22 = s_22;
                      }
                      t = not_null(r_22);
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
  ATerm c_23 = NULL;
  c_23 = t;
  b_23 :
  if(((ATgetType(c_23) == AT_LIST) && ATisEmpty(c_23)))
    {
      {
        ATerm e_23 = NULL,g_23 = NULL;
        ATerm t_14;
        t_14 = t;
        {
          ATerm f_23 = NULL;
          t = SSLgetAnnotations(not_null(c_23));
          {
            f_23 = t;
            if(((e_23 != NULL) && (e_23 != f_23)))
              _fail(f_23);
            else
              e_23 = f_23;
          }
        }
        t = t_14;
        {
          ATerm h_23 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(e_23));
          {
            h_23 = t;
            if(((g_23 != NULL) && (g_23 != h_23)))
              _fail(h_23);
            else
              g_23 = h_23;
          }
          t = not_null(g_23);
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
  ATerm p_23 = NULL,q_23 = NULL,r_23 = NULL;
  p_23 = t;
  o_23 :
  if(match_cons(p_23, sym__2))
    {
      q_23 = ATgetArgument(p_23, 0);
      r_23 = ATgetArgument(p_23, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_m_5, not_null(q_23), not_null(r_23));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm i_75 (ATerm))
{
  ATerm w_14;
  w_14 = t;
  {
    ATerm b_15 = t;
    int c_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_d_15;
        t = i_75(t);
        LocalPopChoice(c_15);
      }
    else
      {
        t = b_15;
        {
        }
      }
  }
  t = w_14;
  {
    ATerm m_2 (ATerm t)
    {
      ATerm z_23 = NULL;
      ATerm e_15;
      e_15 = t;
      {
        ATerm x_23 = NULL;
        ATerm y_23 = NULL;
        y_23 = t;
        if(((x_23 != NULL) && (x_23 != y_23)))
          _fail(y_23);
        else
          x_23 = y_23;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_s_11, not_null(x_23));
          t = set_config_0(t);
        }
      }
      t = e_15;
      {
        ATerm a_24 = NULL;
        a_24 = t;
        if(((z_23 != NULL) && (z_23 != a_24)))
          _fail(a_24);
        else
          z_23 = a_24;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(z_23));
      }
      return(t);
    }
    ATerm n_2 (ATerm t)
    {
      ATerm g_15 = t;
      int h_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_15 = t;
          int k_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(k_15);
            }
          else
            {
              t = i_15;
              {
                t = i_75(t);
                t = Cons_2(t, _id, n_2);
              }
            }
          LocalPopChoice(h_15);
        }
      else
        {
          t = g_15;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, m_2, n_2);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm g_24 = NULL,h_24 = NULL,i_24 = NULL;
  ATerm l_15;
  l_15 = t;
  {
    ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL;
    j_24 = t;
    f_24 :
    if(match_cons(j_24, sym__3))
      {
        k_24 = ATgetArgument(j_24, 0);
        l_24 = ATgetArgument(j_24, 1);
        m_24 = ATgetArgument(j_24, 2);
        {
          if(((g_24 != NULL) && (g_24 != k_24)))
            _fail(k_24);
          else
            g_24 = k_24;
          {
            if(((h_24 != NULL) && (h_24 != l_24)))
              _fail(l_24);
            else
              h_24 = l_24;
            {
              if(((i_24 != NULL) && (i_24 != m_24)))
                _fail(m_24);
              else
                i_24 = m_24;
              t = SSL_table_put(not_null(g_24), not_null(h_24), not_null(i_24));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = l_15;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm h_75 (ATerm))
{
  ATerm p_24 = NULL;
  ATerm m_15;
  m_15 = t;
  {
    t = term_o_15;
    t = table_put_0(t);
  }
  t = m_15;
  {
    ATerm o_2 (ATerm t)
    {
      ATerm p_15 = t;
      int q_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_75(t);
          LocalPopChoice(q_15);
        }
      else
        {
          t = p_15;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, o_2);
    {
      ATerm s_15 = t;
      int t_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_15;
          y_15 = t;
          {
            ATerm z_15 = t;
            int e_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_p_14;
                t = get_config_0(t);
                LocalPopChoice(e_16);
              }
            else
              {
                t = z_15;
                t = fetch_1(t, Help_0);
              }
          }
          t = y_15;
          {
            t = system_usage_0(t);
            {
              t = term_o_7;
              t = exit_0(t);
            }
          }
          LocalPopChoice(t_15);
        }
      else
        {
          t = s_15;
          {
            ATerm f_16 = t;
            int h_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_2 (ATerm t)
                {
                  ATerm u_2 (ATerm t)
                  {
                    ATerm q_24 = NULL;
                    q_24 = t;
                    if(((p_24 != NULL) && (p_24 != q_24)))
                      _fail(q_24);
                    else
                      p_24 = q_24;
                    return(t);
                  }
                  t = Undefined_1(t, u_2);
                  return(t);
                }
                t = fetch_1(t, t_2);
                {
                  ATerm v_2 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_24)), term_i_16);
                    return(t);
                  }
                  t = say_1(t, v_2);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_x_3;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(h_16);
              }
            else
              {
                t = f_16;
                {
                }
              }
          }
        }
      {
        ATerm j_16;
        j_16 = t;
        {
          t = term_g_13;
          t = table_destroy_0(t);
        }
        t = j_16;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm o_71 (ATerm), ATerm p_71 (ATerm), ATerm q_71 (ATerm), ATerm r_71 (ATerm))
{
  t = parse_options_1(t, o_71);
  {
    t = store_options_0(t);
    {
      t = q_71(t);
      {
        ATerm k_16 = t;
        int l_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, p_71);
            LocalPopChoice(l_16);
          }
        else
          {
            t = k_16;
            {
              ATerm q_16 = t;
              int r_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_71(t);
                  t = report_success_0(t);
                  LocalPopChoice(r_16);
                }
              else
                {
                  t = q_16;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm f_72 (ATerm), ATerm g_72 (ATerm), ATerm h_72 (ATerm), ATerm i_72 (ATerm))
{
  ATerm z_2 (ATerm t)
  {
    ATerm y_16 = t;
    int z_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_72(t);
        LocalPopChoice(z_16);
      }
    else
      {
        t = y_16;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm b_3 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, f_72);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, z_2, h_72, i_72, b_3);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm z_71 (ATerm), ATerm a_72 (ATerm), ATerm b_72 (ATerm))
{
  ATerm e_3 (ATerm t)
  {
    ATerm f_3 (ATerm t)
    {
      ATerm a_17;
      a_17 = t;
      {
        ATerm t_24 = NULL;
        ATerm u_24 = NULL;
        t = term_s_11;
        {
          t = get_config_0(t);
          {
            u_24 = t;
            if(((t_24 != NULL) && (t_24 != u_24)))
              _fail(u_24);
            else
              t_24 = u_24;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_u_3, (ATerm) ATinsert(ATempty, not_null(t_24)));
          t = printnl_0(t);
        }
      }
      t = a_17;
      return(t);
    }
    t = if_verbose2_1(t, f_3);
    return(t);
  }
  t = iowrap_4(t, z_71, a_72, b_72, e_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm x_71 (ATerm), ATerm y_71 (ATerm))
{
  t = iowrap_3(t, x_71, y_71, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm u_71 (ATerm))
{
  ATerm g_3 (ATerm t)
  {
    t = _2(t, _id, u_71);
    return(t);
  }
  t = iowrap_2(t, g_3, _fail);
  return(t);
}
ATerm annos_to_term_0 (ATerm t)
{
  t = iowrap_1(t, catch_annos_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, catch_annos_0);
  return(t);
}
