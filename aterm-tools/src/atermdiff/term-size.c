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
Symbol sym_Anno_2;
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
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
  init_constant_terms();
}
ATerm term_h_16;
ATerm term_u_15;
ATerm term_f_15;
ATerm term_w_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_m_14;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_r_11;
ATerm term_k_10;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_i_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_d_8;
ATerm term_v_7;
ATerm term_u_7;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_l_6;
ATerm term_c_6;
ATerm term_b_6;
ATerm term_p_5;
ATerm term_m_5;
ATerm term_x_3;
ATerm term_w_3;
ATerm term_v_3;
ATerm term_t_3;
void init_constant_terms (void)
{
  ATprotect(&(term_t_3));
  term_t_3 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_v_3));
  term_v_3 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_3));
  term_w_3 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_x_3));
  term_x_3 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_m_5));
  term_m_5 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(sym__2, term_z_6, term_e_7);
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(sym__2, term_b_6, term_q_7);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(sym_Verbose_1, term_q_7);
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(sym__2, term_i_8, term_e_7);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(sym__2, term_i_9, term_e_7);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym__2, term_k_13, term_n_13);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym__2, term_m_14, term_e_7);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym__3, term_k_13, term_n_13, (ATerm) ATempty);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm foldr_3 (ATerm, ATerm d_66 (ATerm), ATerm e_66 (ATerm), ATerm f_66 (ATerm));
ATerm crush_3 (ATerm, ATerm b_65 (ATerm), ATerm c_65 (ATerm), ATerm d_65 (ATerm));
ATerm term_size_0 (ATerm);
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
ATerm debug_1 (ATerm, ATerm l_70 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm i_73 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm p_71 (ATerm));
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
ATerm if_verbose1_1 (ATerm, ATerm h_73 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm n_71 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm l_75 (ATerm));
ATerm map_1 (ATerm, ATerm n_59 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm k_75 (ATerm));
ATerm Program_1 (ATerm, ATerm l_51 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm m_70 (ATerm));
ATerm Undefined_1 (ATerm, ATerm m_51 (ATerm));
ATerm fetch_1 (ATerm, ATerm w_59 (ATerm));
ATerm option_defined_1 (ATerm, ATerm k_74 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm w_51 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm p_75 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm r_46 (ATerm), ATerm s_46 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm n_75 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm m_75 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm t_71 (ATerm), ATerm u_71 (ATerm), ATerm v_71 (ATerm), ATerm w_71 (ATerm));
ATerm iowrap_4 (ATerm, ATerm k_72 (ATerm), ATerm l_72 (ATerm), ATerm m_72 (ATerm), ATerm n_72 (ATerm));
ATerm iowrap_3 (ATerm, ATerm e_72 (ATerm), ATerm f_72 (ATerm), ATerm g_72 (ATerm));
ATerm iowrap_2 (ATerm, ATerm c_72 (ATerm), ATerm d_72 (ATerm));
ATerm iowrap_1 (ATerm, ATerm z_71 (ATerm));
ATerm main_0 (ATerm);
ATerm foldr_3 (ATerm t, ATerm d_66 (ATerm), ATerm e_66 (ATerm), ATerm f_66 (ATerm))
{
  ATerm n_3 = t;
  int p_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = d_66(t);
      LocalPopChoice(p_3);
    }
  else
    {
      t = n_3;
      {
        ATerm s_1 = NULL,t_1 = NULL,u_1 = NULL;
        s_1 = t;
        g_1 :
        if(((ATgetType(s_1) == AT_LIST) && !(ATisEmpty(s_1))))
          {
            t_1 = ATgetFirst((ATermList) s_1);
            u_1 = (ATerm) ATgetNext((ATermList) s_1);
            {
              ATerm b_2 = NULL,d_2 = NULL;
              ATerm s_3;
              s_3 = t;
              {
                ATerm c_2 = NULL;
                t = not_null(t_1);
                {
                  t = f_66(t);
                  {
                    c_2 = t;
                    if(((b_2 != NULL) && (b_2 != c_2)))
                      _fail(c_2);
                    else
                      b_2 = c_2;
                  }
                }
              }
              t = s_3;
              {
                ATerm e_2 = NULL;
                t = not_null(u_1);
                {
                  t = foldr_3(t, d_66, e_66, f_66);
                  {
                    e_2 = t;
                    if(((d_2 != NULL) && (d_2 != e_2)))
                      _fail(e_2);
                    else
                      d_2 = e_2;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(b_2), not_null(d_2));
                  t = e_66(t);
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
  return(t);
}
ATerm crush_3 (ATerm t, ATerm b_65 (ATerm), ATerm c_65 (ATerm), ATerm d_65 (ATerm))
{
  ATerm n_2 = NULL;
  ATerm p_2 = NULL;
  n_2 = t;
  {
    ATerm q_2 = NULL;
    ATerm s_2 = NULL,t_2 = NULL,u_2 = NULL;
    t = not_null(n_2);
    {
      q_2 = t;
      {
        t = SSL_explode_term(not_null(q_2));
        {
          s_2 = t;
          m_2 :
          if(match_cons(s_2, sym__2))
            {
              t_2 = ATgetArgument(s_2, 0);
              u_2 = ATgetArgument(s_2, 1);
              if(((p_2 != NULL) && (p_2 != u_2)))
                _fail(u_2);
              else
                p_2 = u_2;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(p_2);
      t = foldr_3(t, b_65, c_65, d_65);
    }
  }
  return(t);
}
ATerm term_size_0 (ATerm t)
{
  ATerm b_0 (ATerm t)
  {
    t = term_t_3;
    return(t);
  }
  t = crush_3(t, b_0, add_0, term_size_0);
  return(t);
}
ATerm _2 (ATerm t, ATerm i_45 (ATerm), ATerm j_45 (ATerm))
{
  ATerm e_3 = NULL,f_3 = NULL,g_3 = NULL;
  e_3 = t;
  d_3 :
  if(match_cons(e_3, sym__2))
    {
      f_3 = ATgetArgument(e_3, 0);
      g_3 = ATgetArgument(e_3, 1);
      {
        ATerm k_3 = NULL,m_3 = NULL;
        ATerm l_3 = NULL;
        t = SSLgetAnnotations(not_null(e_3));
        {
          l_3 = t;
          if(((k_3 != NULL) && (k_3 != l_3)))
            _fail(l_3);
          else
            k_3 = l_3;
        }
        {
          t = not_null(f_3);
          {
            ATerm o_3 = NULL;
            t = i_45(t);
            {
              m_3 = t;
              {
                t = not_null(g_3);
                {
                  ATerm q_3 = NULL;
                  t = j_45(t);
                  {
                    o_3 = t;
                    {
                      ATerm r_3 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(m_3), not_null(o_3)), not_null(k_3));
                      {
                        r_3 = t;
                        if(((q_3 != NULL) && (q_3 != r_3)))
                          _fail(r_3);
                        else
                          q_3 = r_3;
                      }
                      t = not_null(q_3);
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
  ATerm z_3 = NULL;
  ATerm u_3;
  u_3 = t;
  {
    ATerm c_0 (ATerm t)
    {
      ATerm a_4 = NULL,b_4 = NULL;
      a_4 = t;
      y_3 :
      if(match_cons(a_4, sym_Program_1))
        {
          b_4 = ATgetArgument(a_4, 0);
          if(((z_3 != NULL) && (z_3 != b_4)))
            _fail(b_4);
          else
            z_3 = b_4;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, c_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_3, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_3), not_null(z_3)), term_w_3));
      {
        t = printnl_0(t);
        {
          t = term_t_3;
          t = exit_0(t);
        }
      }
    }
  }
  t = u_3;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm f_4 = NULL,g_4 = NULL,h_4 = NULL;
  f_4 = t;
  e_4 :
  if(match_cons(f_4, sym__2))
    {
      g_4 = ATgetArgument(f_4, 0);
      h_4 = ATgetArgument(f_4, 1);
      {
        ATerm c_4;
        c_4 = t;
        t = SSL_printnl(not_null(g_4), not_null(h_4));
        t = c_4;
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
  ATerm m_4 = NULL;
  m_4 = t;
  t = SSL_implode_string(not_null(m_4));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm d_4 = t;
  int i_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(i_4);
    }
  else
    {
      t = d_4;
      {
        ATerm r_4 = NULL,s_4 = NULL,t_4 = NULL;
        r_4 = t;
        q_4 :
        if(((ATgetType(r_4) == AT_LIST) && !(ATisEmpty(r_4))))
          {
            s_4 = ATgetFirst((ATermList) r_4);
            t_4 = (ATerm) ATgetNext((ATermList) r_4);
            {
              t = not_null(s_4);
              {
                ATerm e_0 (ATerm t)
                {
                  t = not_null(t_4);
                  t = concat_0(t);
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
      }
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm d_5 = NULL;
  ATerm f_5 = NULL;
  d_5 = t;
  {
    ATerm g_5 = NULL;
    ATerm i_5 = NULL,j_5 = NULL,k_5 = NULL;
    t = not_null(d_5);
    {
      g_5 = t;
      {
        t = SSL_explode_term(not_null(g_5));
        {
          i_5 = t;
          b_5 :
          if(match_cons(i_5, sym__2))
            {
              j_5 = ATgetArgument(i_5, 0);
              k_5 = ATgetArgument(i_5, 1);
              c_5 :
              if(match_string(j_5, ""))
                {
                  if(((f_5 != NULL) && (f_5 != k_5)))
                    _fail(k_5);
                  else
                    f_5 = k_5;
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
      t = not_null(f_5);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm c_60 (ATerm))
{
  ATerm o_5 (ATerm t)
  {
    ATerm j_4 = t;
    int k_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, o_5);
        LocalPopChoice(k_4);
      }
    else
      {
        t = j_4;
        {
          t = Nil_0(t);
          t = c_60(t);
        }
      }
    return(t);
  }
  t = o_5(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm r_5 = NULL,s_5 = NULL,t_5 = NULL;
  r_5 = t;
  q_5 :
  if(match_cons(r_5, sym__2))
    {
      s_5 = ATgetArgument(r_5, 0);
      t_5 = ATgetArgument(r_5, 1);
      {
        t = not_null(s_5);
        {
          ATerm f_0 (ATerm t)
          {
            t = not_null(t_5);
            return(t);
          }
          t = at_end_1(t, f_0);
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
  ATerm l_4 = t;
  int n_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(n_4);
    }
  else
    {
      t = l_4;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm y_5 = NULL;
  y_5 = t;
  t = SSL_explode_string(not_null(y_5));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm o_4 = t;
    int p_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(p_4);
      }
    else
      {
        t = o_4;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm l_70 (ATerm))
{
  ATerm u_4;
  u_4 = t;
  {
    ATerm d_6 = NULL,f_6 = NULL;
    ATerm v_4;
    v_4 = t;
    {
      ATerm e_6 = NULL;
      t = l_70(t);
      {
        e_6 = t;
        if(((d_6 != NULL) && (d_6 != e_6)))
          _fail(e_6);
        else
          d_6 = e_6;
      }
    }
    t = v_4;
    {
      ATerm g_6 = NULL;
      g_6 = t;
      if(((f_6 != NULL) && (f_6 != g_6)))
        _fail(g_6);
      else
        f_6 = g_6;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_6)), not_null(d_6)));
        t = printnl_0(t);
      }
    }
  }
  t = u_4;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm k_6 = NULL;
  k_6 = t;
  t = SSL_is_string(not_null(k_6));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm w_4 = t;
  int x_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(x_4);
    }
  else
    {
      t = w_4;
      {
        ATerm y_4 = t;
        int z_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_0 (ATerm t)
            {
              ATerm a_5 = t;
              int e_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(e_5);
                }
              else
                {
                  t = a_5;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, m_0);
            LocalPopChoice(z_4);
          }
        else
          {
            t = y_4;
            {
              ATerm t_6 = NULL,u_6 = NULL,v_6 = NULL;
              t_6 = t;
              s_6 :
              if(match_cons(t_6, sym_Path_1))
                {
                  u_6 = ATgetArgument(t_6, 0);
                  t = not_null(u_6);
                }
              else
                {
                  if(match_cons(t_6, sym_Var_1))
                    {
                      u_6 = ATgetArgument(t_6, 0);
                      {
                        t = not_null(u_6);
                        {
                          ATerm h_5 = t;
                          int l_5 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(l_5);
                            }
                          else
                            {
                              t = h_5;
                              {
                                ATerm n_0 (ATerm t)
                                {
                                  t = term_m_5;
                                  return(t);
                                }
                                t = debug_1(t, n_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t_6, sym_Prefix_2))
                        {
                          u_6 = ATgetArgument(t_6, 0);
                          v_6 = ATgetArgument(t_6, 1);
                          {
                            ATerm a_7 = NULL,c_7 = NULL;
                            ATerm n_5;
                            n_5 = t;
                            {
                              ATerm b_7 = NULL;
                              t = not_null(u_6);
                              {
                                t = eval_config_0(t);
                                {
                                  b_7 = t;
                                  if(((a_7 != NULL) && (a_7 != b_7)))
                                    _fail(b_7);
                                  else
                                    a_7 = b_7;
                                }
                              }
                            }
                            t = n_5;
                            {
                              ATerm d_7 = NULL;
                              t = not_null(v_6);
                              {
                                t = eval_config_0(t);
                                {
                                  d_7 = t;
                                  if(((c_7 != NULL) && (c_7 != d_7)))
                                    _fail(d_7);
                                  else
                                    c_7 = d_7;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(a_7), not_null(c_7));
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
  ATerm l_7 = NULL;
  l_7 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_p_5, not_null(l_7));
    {
      t = table_get_0(t);
      {
        ATerm u_5 = t;
        int v_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm w_5;
              w_5 = t;
              {
                ATerm n_7 = NULL;
                ATerm o_7 = NULL;
                o_7 = t;
                if(((n_7 != NULL) && (n_7 != o_7)))
                  _fail(o_7);
                else
                  n_7 = o_7;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_p_5, not_null(l_7), not_null(n_7));
                  t = table_put_0(t);
                }
              }
              t = w_5;
            }
            LocalPopChoice(v_5);
          }
        else
          {
            t = u_5;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm i_73 (ATerm))
{
  ATerm x_5 = t;
  int z_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_6;
      a_6 = t;
      {
        ATerm s_7 = NULL;
        ATerm t_7 = NULL;
        t = term_b_6;
        {
          t = get_config_0(t);
          {
            t_7 = t;
            if(((s_7 != NULL) && (s_7 != t_7)))
              _fail(t_7);
            else
              s_7 = t_7;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_7), term_c_6);
          t = geq_0(t);
        }
      }
      t = a_6;
      t = i_73(t);
      LocalPopChoice(z_5);
    }
  else
    {
      t = x_5;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm x_7 = NULL,y_7 = NULL,z_7 = NULL;
  x_7 = t;
  w_7 :
  if(match_cons(x_7, sym__2))
    {
      y_7 = ATgetArgument(x_7, 0);
      z_7 = ATgetArgument(x_7, 1);
      t = SSL_WriteToTextFile(not_null(y_7), not_null(z_7));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm f_8 = NULL,g_8 = NULL,h_8 = NULL;
  f_8 = t;
  e_8 :
  if(match_cons(f_8, sym__2))
    {
      g_8 = ATgetArgument(f_8, 0);
      h_8 = ATgetArgument(f_8, 1);
      t = SSL_WriteToBinaryFile(not_null(g_8), not_null(h_8));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm p_8 = NULL;
  ATerm h_6;
  h_6 = t;
  {
    ATerm o_0 (ATerm t)
    {
      ATerm i_6 = t;
      int j_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_0 (ATerm t)
          {
            ATerm q_8 = NULL,r_8 = NULL;
            q_8 = t;
            m_8 :
            if(match_cons(q_8, sym_Output_1))
              {
                r_8 = ATgetArgument(q_8, 0);
                if(((p_8 != NULL) && (p_8 != r_8)))
                  _fail(r_8);
                else
                  p_8 = r_8;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, p_0);
          LocalPopChoice(j_6);
        }
      else
        {
          t = i_6;
          {
            ATerm s_8 = NULL;
            t = term_l_6;
            {
              s_8 = t;
              if(((p_8 != NULL) && (p_8 != s_8)))
                _fail(s_8);
              else
                p_8 = s_8;
            }
          }
        }
      return(t);
    }
    t = _2(t, o_0, _id);
  }
  t = h_6;
  {
    ATerm q_0 (ATerm t)
    {
      ATerm r_0 (ATerm t)
      {
        t = not_null(p_8);
        return(t);
      }
      t = split_2(t, r_0, _id);
      return(t);
    }
    t = _2(t, _id, q_0);
    {
      ATerm m_6 = t;
      int n_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_0 (ATerm t)
          {
            ATerm t_0 (ATerm t)
            {
              ATerm t_8 = NULL;
              t_8 = t;
              o_8 :
              if(!(match_cons(t_8, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, t_0);
            return(t);
          }
          t = _2(t, s_0, WriteToBinaryFile_0);
          LocalPopChoice(n_6);
        }
      else
        {
          t = m_6;
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
ATerm apply_strategy_1 (ATerm t, ATerm p_71 (ATerm))
{
  ATerm z_8 = NULL,b_9 = NULL,c_9 = NULL,d_9 = NULL;
  ATerm o_6;
  o_6 = t;
  t = dtime_0(t);
  t = o_6;
  {
    t = p_71(t);
    {
      ATerm p_6;
      p_6 = t;
      {
        ATerm a_9 = NULL;
        t = dtime_0(t);
        {
          a_9 = t;
          if(((z_8 != NULL) && (z_8 != a_9)))
            _fail(a_9);
          else
            z_8 = a_9;
        }
      }
      t = p_6;
      {
        b_9 = t;
        y_8 :
        if(match_cons(b_9, sym__2))
          {
            c_9 = ATgetArgument(b_9, 0);
            d_9 = ATgetArgument(b_9, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(c_9)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(z_8))), not_null(d_9));
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
  ATerm j_9 = NULL;
  j_9 = t;
  t = SSL_ReadFromFile(not_null(j_9));
  return(t);
}
ATerm split_2 (ATerm t, ATerm q_67 (ATerm), ATerm r_67 (ATerm))
{
  ATerm o_9 = NULL,q_9 = NULL;
  ATerm q_6;
  q_6 = t;
  {
    ATerm p_9 = NULL;
    t = q_67(t);
    {
      p_9 = t;
      if(((o_9 != NULL) && (o_9 != p_9)))
        _fail(p_9);
      else
        o_9 = p_9;
    }
  }
  t = q_6;
  {
    ATerm r_9 = NULL;
    t = r_67(t);
    {
      r_9 = t;
      if(((q_9 != NULL) && (q_9 != r_9)))
        _fail(r_9);
      else
        q_9 = r_9;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_9), not_null(q_9));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm x_9 = NULL;
  ATerm r_6;
  r_6 = t;
  {
    ATerm w_6 = t;
    int x_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_0 (ATerm t)
        {
          ATerm y_9 = NULL,z_9 = NULL;
          y_9 = t;
          v_9 :
          if(match_cons(y_9, sym_Input_1))
            {
              z_9 = ATgetArgument(y_9, 0);
              if(((x_9 != NULL) && (x_9 != z_9)))
                _fail(z_9);
              else
                x_9 = z_9;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, u_0);
        LocalPopChoice(x_6);
      }
    else
      {
        t = w_6;
        {
          ATerm a_10 = NULL;
          t = term_y_6;
          {
            a_10 = t;
            if(((x_9 != NULL) && (x_9 != a_10)))
              _fail(a_10);
            else
              x_9 = a_10;
          }
        }
      }
  }
  t = r_6;
  {
    ATerm v_0 (ATerm t)
    {
      t = not_null(x_9);
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
    ATerm e_10 = NULL;
    e_10 = t;
    d_10 :
    if(!(match_string(e_10, "-v")))
      {
        if(!(match_string(e_10, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm x_0 (ATerm t)
  {
    t = term_f_7;
    t = set_config_0(t);
    t = term_g_7;
    return(t);
  }
  ATerm y_0 (ATerm t)
  {
    t = term_h_7;
    return(t);
  }
  t = Option_3(t, w_0, x_0, y_0);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm z_0 (ATerm t)
  {
    ATerm h_10 = NULL;
    h_10 = t;
    f_10 :
    if(!(match_string(h_10, "-k")))
      {
        if(!(match_string(h_10, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm a_1 (ATerm t)
  {
    ATerm i_7;
    i_7 = t;
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
        t = (ATerm) ATmakeAppl(sym__2, term_j_7, not_null(i_10));
        t = set_config_0(t);
      }
    }
    t = i_7;
    return(t);
  }
  ATerm b_1 (ATerm t)
  {
    t = term_k_7;
    return(t);
  }
  t = ArgOption_3(t, z_0, a_1, b_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm m_10 = NULL;
  m_10 = t;
  t = SSL_string_to_int(not_null(m_10));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm m_7 = t;
  int p_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_1 (ATerm t)
      {
        ATerm u_10 = NULL;
        u_10 = t;
        p_10 :
        if(!(match_string(u_10, "-S")))
          {
            if(!(match_string(u_10, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm d_1 (ATerm t)
      {
        t = term_r_7;
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
      LocalPopChoice(p_7);
    }
  else
    {
      t = m_7;
      {
        ATerm a_8 = t;
        int b_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_1 (ATerm t)
            {
              ATerm v_10 = NULL;
              v_10 = t;
              q_10 :
              if(!(match_string(v_10, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm h_1 (ATerm t)
            {
              ATerm y_10 = NULL;
              ATerm c_8;
              c_8 = t;
              {
                ATerm w_10 = NULL;
                ATerm x_10 = NULL;
                t = string_to_int_0(t);
                {
                  x_10 = t;
                  if(((w_10 != NULL) && (w_10 != x_10)))
                    _fail(x_10);
                  else
                    w_10 = x_10;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_b_6, not_null(w_10));
                  t = set_config_0(t);
                }
              }
              t = c_8;
              {
                ATerm z_10 = NULL;
                z_10 = t;
                if(((y_10 != NULL) && (y_10 != z_10)))
                  _fail(z_10);
                else
                  y_10 = z_10;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(y_10));
              }
              return(t);
            }
            ATerm i_1 (ATerm t)
            {
              t = term_d_8;
              return(t);
            }
            t = ArgOption_3(t, f_1, h_1, i_1);
            LocalPopChoice(b_8);
          }
        else
          {
            t = a_8;
            {
              ATerm j_1 (ATerm t)
              {
                ATerm a_11 = NULL;
                a_11 = t;
                t_10 :
                if(!(match_string(a_11, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm k_1 (ATerm t)
              {
                t = term_j_8;
                t = set_config_0(t);
                t = term_k_8;
                return(t);
              }
              ATerm l_1 (ATerm t)
              {
                t = term_l_8;
                return(t);
              }
              t = Option_3(t, j_1, k_1, l_1);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm n_8 = t;
  int u_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(u_8);
    }
  else
    {
      t = n_8;
      {
        ATerm v_8 = t;
        int w_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(w_8);
          }
        else
          {
            t = v_8;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm m_1 (ATerm t)
  {
    ATerm g_11 = NULL;
    g_11 = t;
    d_11 :
    if(!(match_string(g_11, "-o")))
      {
        if(!(match_string(g_11, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm n_1 (ATerm t)
  {
    ATerm j_11 = NULL;
    ATerm x_8;
    x_8 = t;
    {
      ATerm h_11 = NULL;
      ATerm i_11 = NULL;
      i_11 = t;
      if(((h_11 != NULL) && (h_11 != i_11)))
        _fail(i_11);
      else
        h_11 = i_11;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_9, not_null(h_11));
        t = set_config_0(t);
      }
    }
    t = x_8;
    {
      ATerm k_11 = NULL;
      k_11 = t;
      if(((j_11 != NULL) && (j_11 != k_11)))
        _fail(k_11);
      else
        j_11 = k_11;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(j_11));
    }
    return(t);
  }
  ATerm o_1 (ATerm t)
  {
    t = term_f_9;
    return(t);
  }
  t = ArgOption_3(t, m_1, n_1, o_1);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm g_9 = t;
  int h_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(h_9);
    }
  else
    {
      t = g_9;
      {
        ATerm p_1 (ATerm t)
        {
          ATerm o_11 = NULL;
          o_11 = t;
          n_11 :
          if(!(match_string(o_11, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm q_1 (ATerm t)
        {
          t = term_k_9;
          t = set_config_0(t);
          t = term_l_9;
          return(t);
        }
        ATerm r_1 (ATerm t)
        {
          t = term_m_9;
          return(t);
        }
        t = Option_3(t, p_1, q_1, r_1);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL;
  u_11 = t;
  s_11 :
  if(match_string(u_11, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(u_11) == AT_LIST) && !(ATisEmpty(u_11))))
        {
          v_11 = ATgetFirst((ATermList) u_11);
          w_11 = (ATerm) ATgetNext((ATermList) u_11);
          t_11 :
          if(((ATgetType(w_11) == AT_LIST) && !(ATisEmpty(w_11))))
            {
              x_11 = ATgetFirst((ATermList) w_11);
              y_11 = (ATerm) ATgetNext((ATermList) w_11);
              {
                ATerm c_12 = NULL;
                ATerm n_9;
                n_9 = t;
                {
                  t = not_null(v_11);
                  t = j_0(t);
                }
                t = n_9;
                {
                  ATerm d_12 = NULL;
                  t = not_null(x_11);
                  {
                    t = k_0(t);
                    {
                      d_12 = t;
                      if(((c_12 != NULL) && (c_12 != d_12)))
                        _fail(d_12);
                      else
                        c_12 = d_12;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(y_11)), not_null(c_12));
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
  ATerm v_1 (ATerm t)
  {
    ATerm k_12 = NULL;
    k_12 = t;
    h_12 :
    if(!(match_string(k_12, "-i")))
      {
        if(!(match_string(k_12, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm w_1 (ATerm t)
  {
    ATerm n_12 = NULL;
    ATerm s_9;
    s_9 = t;
    {
      ATerm l_12 = NULL;
      ATerm m_12 = NULL;
      m_12 = t;
      if(((l_12 != NULL) && (l_12 != m_12)))
        _fail(m_12);
      else
        l_12 = m_12;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_9, not_null(l_12));
        t = set_config_0(t);
      }
    }
    t = s_9;
    {
      ATerm o_12 = NULL;
      o_12 = t;
      if(((n_12 != NULL) && (n_12 != o_12)))
        _fail(o_12);
      else
        n_12 = o_12;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(n_12));
    }
    return(t);
  }
  ATerm x_1 (ATerm t)
  {
    t = term_u_9;
    return(t);
  }
  t = ArgOption_3(t, v_1, w_1, x_1);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm w_9 = t;
  int b_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(b_10);
    }
  else
    {
      t = w_9;
      {
        ATerm c_10 = t;
        int g_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(g_10);
          }
        else
          {
            t = c_10;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_v_3, (ATerm) ATinsert(ATempty, term_k_10));
  {
    t = printnl_0(t);
    {
      t = term_t_3;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm s_12 = NULL;
  s_12 = t;
  t = SSL_TicksToSeconds(not_null(s_12));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL;
  x_12 = t;
  w_12 :
  if(match_cons(x_12, sym__2))
    {
      y_12 = ATgetArgument(x_12, 0);
      z_12 = ATgetArgument(x_12, 1);
      {
        ATerm l_10 = t;
        int n_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(y_12), not_null(z_12));
            LocalPopChoice(n_10);
          }
        else
          {
            t = l_10;
            t = SSL_addr(not_null(y_12), not_null(z_12));
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
  ATerm o_10 = t;
  int r_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = b_66(t);
      LocalPopChoice(r_10);
    }
  else
    {
      t = o_10;
      {
        ATerm g_13 = NULL,h_13 = NULL,i_13 = NULL;
        g_13 = t;
        f_13 :
        if(((ATgetType(g_13) == AT_LIST) && !(ATisEmpty(g_13))))
          {
            h_13 = ATgetFirst((ATermList) g_13);
            i_13 = (ATerm) ATgetNext((ATermList) g_13);
            {
              ATerm l_13 = NULL;
              ATerm m_13 = NULL;
              t = not_null(i_13);
              {
                t = foldr_2(t, b_66, c_66);
                {
                  m_13 = t;
                  if(((l_13 != NULL) && (l_13 != m_13)))
                    _fail(m_13);
                  else
                    l_13 = m_13;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(h_13), not_null(l_13));
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
  ATerm t_13 = NULL;
  ATerm v_13 = NULL;
  t_13 = t;
  {
    ATerm w_13 = NULL;
    ATerm y_13 = NULL,z_13 = NULL,a_14 = NULL;
    t = not_null(t_13);
    {
      w_13 = t;
      {
        t = SSL_explode_term(not_null(w_13));
        {
          y_13 = t;
          s_13 :
          if(match_cons(y_13, sym__2))
            {
              z_13 = ATgetArgument(y_13, 0);
              a_14 = ATgetArgument(y_13, 1);
              if(((v_13 != NULL) && (v_13 != a_14)))
                _fail(a_14);
              else
                v_13 = a_14;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(v_13);
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
    ATerm y_1 (ATerm t)
    {
      t = term_q_7;
      return(t);
    }
    t = crush_2(t, y_1, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm g_14 = NULL,h_14 = NULL,i_14 = NULL;
  g_14 = t;
  f_14 :
  if(match_cons(g_14, sym__2))
    {
      h_14 = ATgetArgument(g_14, 0);
      i_14 = ATgetArgument(g_14, 1);
      {
        ATerm s_10;
        s_10 = t;
        {
          ATerm b_11 = t;
          int c_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(h_14), not_null(i_14));
              LocalPopChoice(c_11);
            }
          else
            {
              t = b_11;
              t = SSL_gtr(not_null(h_14), not_null(i_14));
            }
        }
        t = s_10;
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
  ATerm o_14 = NULL;
  ATerm e_11 = t;
  int f_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_14 = NULL,q_14 = NULL,r_14 = NULL;
      p_14 = t;
      n_14 :
      if(match_cons(p_14, sym__2))
        {
          q_14 = ATgetArgument(p_14, 0);
          r_14 = ATgetArgument(p_14, 1);
          {
            if(((o_14 != NULL) && (o_14 != q_14)))
              _fail(q_14);
            else
              o_14 = q_14;
            if(((o_14 != NULL) && (o_14 != r_14)))
              _fail(r_14);
            else
              o_14 = r_14;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(f_11);
    }
  else
    {
      t = e_11;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm h_73 (ATerm))
{
  ATerm l_11 = t;
  int m_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_11;
      p_11 = t;
      {
        ATerm u_14 = NULL;
        ATerm v_14 = NULL;
        t = term_b_6;
        {
          t = get_config_0(t);
          {
            v_14 = t;
            if(((u_14 != NULL) && (u_14 != v_14)))
              _fail(v_14);
            else
              u_14 = v_14;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_14), term_t_3);
          t = geq_0(t);
        }
      }
      t = p_11;
      t = h_73(t);
      LocalPopChoice(m_11);
    }
  else
    {
      t = l_11;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm z_1 (ATerm t)
  {
    ATerm z_14 = NULL,b_15 = NULL;
    ATerm q_11;
    q_11 = t;
    {
      ATerm a_15 = NULL;
      t = run_time_0(t);
      {
        a_15 = t;
        if(((z_14 != NULL) && (z_14 != a_15)))
          _fail(a_15);
        else
          z_14 = a_15;
      }
    }
    t = q_11;
    {
      ATerm c_15 = NULL;
      t = term_r_11;
      {
        t = get_config_0(t);
        {
          c_15 = t;
          if(((b_15 != NULL) && (b_15 != c_15)))
            _fail(c_15);
          else
            b_15 = c_15;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_12), not_null(z_14)), term_z_11), not_null(b_15)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, z_1);
  {
    t = term_q_7;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm j_15 = NULL;
  j_15 = t;
  i_15 :
  if(match_cons(j_15, sym_Version_0))
    {
      ATerm l_15 = NULL,n_15 = NULL;
      ATerm b_12;
      b_12 = t;
      {
        ATerm m_15 = NULL;
        t = SSLgetAnnotations(not_null(j_15));
        {
          m_15 = t;
          if(((l_15 != NULL) && (l_15 != m_15)))
            _fail(m_15);
          else
            l_15 = m_15;
        }
      }
      t = b_12;
      {
        ATerm o_15 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(l_15));
        {
          o_15 = t;
          if(((n_15 != NULL) && (n_15 != o_15)))
            _fail(o_15);
          else
            n_15 = o_15;
        }
        t = not_null(n_15);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm n_71 (ATerm))
{
  ATerm a_2 (ATerm t)
  {
    ATerm e_12 = t;
    int f_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(f_12);
      }
    else
      {
        t = e_12;
        {
          ATerm g_12 = t;
          int i_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(i_12);
            }
          else
            {
              t = g_12;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, a_2);
  t = n_71(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm t_15 = NULL;
  t_15 = t;
  t = SSL_table_create(not_null(t_15));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm x_15 = NULL;
  x_15 = t;
  {
    ATerm j_12;
    j_12 = t;
    {
      t = term_p_12;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_p_12, term_q_12, not_null(x_15));
          t = table_put_0(t);
        }
      }
    }
    t = j_12;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm b_16 = NULL;
  b_16 = t;
  t = SSL_table_destroy(not_null(b_16));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm f_16 = NULL;
  f_16 = t;
  t = SSL_exit(not_null(f_16));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm j_16 = NULL,k_16 = NULL,l_16 = NULL;
  j_16 = t;
  i_16 :
  if(((ATgetType(j_16) == AT_LIST) && ATisEmpty(j_16)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(j_16) == AT_LIST) && !(ATisEmpty(j_16))))
        {
          k_16 = ATgetFirst((ATermList) j_16);
          l_16 = (ATerm) ATgetNext((ATermList) j_16);
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
  ATerm r_12;
  r_12 = t;
  {
    ATerm o_16 = NULL;
    ATerm r_16 = NULL;
    ATerm t_12 = t;
    int u_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(u_12);
      }
    else
      {
        t = t_12;
        {
          ATerm p_16 = NULL;
          ATerm q_16 = NULL;
          q_16 = t;
          if(((p_16 != NULL) && (p_16 != q_16)))
            _fail(q_16);
          else
            p_16 = q_16;
          t = (ATerm) ATinsert(ATempty, not_null(p_16));
        }
      }
    {
      r_16 = t;
      if(((o_16 != NULL) && (o_16 != r_16)))
        _fail(r_16);
      else
        o_16 = r_16;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_l_6, not_null(o_16));
      t = printnl_0(t);
    }
  }
  t = r_12;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm l_75 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm n_59 (ATerm))
{
  ATerm u_16 (ATerm t)
  {
    ATerm v_12 = t;
    int a_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(a_13);
      }
    else
      {
        t = v_12;
        t = Cons_2(t, n_59, u_16);
      }
    return(t);
  }
  t = u_16(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm b_17 = NULL,c_17 = NULL,i_17 = NULL;
  i_17 = t;
  a_17 :
  if(((ATgetType(i_17) == AT_LIST) && !(ATisEmpty(i_17))))
    {
      b_17 = ATgetFirst((ATermList) i_17);
      c_17 = (ATerm) ATgetNext((ATermList) i_17);
      {
        ATerm l_17 = NULL;
        t = not_null(c_17);
        {
          ATerm b_13;
          b_13 = t;
          {
            ATerm m_17 = NULL,o_17 = NULL,q_17 = NULL;
            ATerm c_13;
            c_13 = t;
            {
              ATerm n_17 = NULL;
              t = i_0(t);
              {
                n_17 = t;
                if(((m_17 != NULL) && (m_17 != n_17)))
                  _fail(n_17);
                else
                  m_17 = n_17;
              }
            }
            t = c_13;
            {
              ATerm p_17 = NULL;
              t = not_null(b_17);
              {
                t = h_0(t);
                {
                  p_17 = t;
                  if(((o_17 != NULL) && (o_17 != p_17)))
                    _fail(p_17);
                  else
                    o_17 = p_17;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(m_17)), not_null(o_17));
                {
                  q_17 = t;
                  if(((l_17 != NULL) && (l_17 != q_17)))
                    _fail(q_17);
                  else
                    l_17 = q_17;
                }
              }
            }
          }
          t = b_13;
          {
            ATerm f_2 (ATerm t)
            {
              t = not_null(l_17);
              return(t);
            }
            t = reverse_acc_2(t, h_0, f_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(i_17) == AT_LIST) && ATisEmpty(i_17)))
        {
          {
            t = term_e_7;
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
  ATerm g_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, g_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm k_75 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm l_51 (ATerm))
{
  ATerm e_18 = NULL,f_18 = NULL;
  e_18 = t;
  d_18 :
  if(match_cons(e_18, sym_Program_1))
    {
      f_18 = ATgetArgument(e_18, 0);
      {
        ATerm i_18 = NULL,k_18 = NULL;
        ATerm j_18 = NULL;
        t = SSLgetAnnotations(not_null(e_18));
        {
          j_18 = t;
          if(((i_18 != NULL) && (i_18 != j_18)))
            _fail(j_18);
          else
            i_18 = j_18;
        }
        {
          t = not_null(f_18);
          {
            ATerm m_18 = NULL;
            t = l_51(t);
            {
              k_18 = t;
              {
                ATerm n_18 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(k_18)), not_null(i_18));
                {
                  n_18 = t;
                  if(((m_18 != NULL) && (m_18 != n_18)))
                    _fail(n_18);
                  else
                    m_18 = n_18;
                }
                t = not_null(m_18);
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
  ATerm v_18 = NULL;
  ATerm d_13 = t;
  int e_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_18 = NULL;
      t = term_r_11;
      {
        t = get_config_0(t);
        {
          w_18 = t;
          if(((v_18 != NULL) && (v_18 != w_18)))
            _fail(w_18);
          else
            v_18 = w_18;
        }
      }
      LocalPopChoice(e_13);
    }
  else
    {
      t = d_13;
      {
        ATerm h_2 (ATerm t)
        {
          ATerm i_2 (ATerm t)
          {
            ATerm x_18 = NULL;
            x_18 = t;
            if(((v_18 != NULL) && (v_18 != x_18)))
              _fail(x_18);
            else
              v_18 = x_18;
            return(t);
          }
          t = Program_1(t, i_2);
          return(t);
        }
        t = fetch_1(t, h_2);
      }
    }
  {
    t = term_j_13;
    {
      t = echo_0(t);
      {
        t = term_o_13;
        {
          t = table_get_0(t);
          {
            ATerm j_2 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, j_2);
            {
              ATerm k_2 (ATerm t)
              {
                ATerm y_18 = NULL;
                ATerm z_18 = NULL;
                z_18 = t;
                if(((y_18 != NULL) && (y_18 != z_18)))
                  _fail(z_18);
                else
                  y_18 = z_18;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_18)), term_p_13);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, k_2);
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
  ATerm q_13;
  q_13 = t;
  {
    ATerm e_19 = NULL;
    ATerm f_19 = NULL;
    f_19 = t;
    if(((e_19 != NULL) && (e_19 != f_19)))
      _fail(f_19);
    else
      e_19 = f_19;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_3, (ATerm) ATinsert(ATempty, not_null(e_19)));
      t = printnl_0(t);
    }
  }
  t = q_13;
  return(t);
}
ATerm say_1 (ATerm t, ATerm m_70 (ATerm))
{
  ATerm r_13;
  r_13 = t;
  {
    t = m_70(t);
    t = debug_0(t);
  }
  t = r_13;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm m_51 (ATerm))
{
  ATerm m_19 = NULL,n_19 = NULL;
  m_19 = t;
  l_19 :
  if(match_cons(m_19, sym_Undefined_1))
    {
      n_19 = ATgetArgument(m_19, 0);
      {
        ATerm q_19 = NULL,s_19 = NULL;
        ATerm r_19 = NULL;
        t = SSLgetAnnotations(not_null(m_19));
        {
          r_19 = t;
          if(((q_19 != NULL) && (q_19 != r_19)))
            _fail(r_19);
          else
            q_19 = r_19;
        }
        {
          t = not_null(n_19);
          {
            ATerm u_19 = NULL;
            t = m_51(t);
            {
              s_19 = t;
              {
                ATerm v_19 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(s_19)), not_null(q_19));
                {
                  v_19 = t;
                  if(((u_19 != NULL) && (u_19 != v_19)))
                    _fail(v_19);
                  else
                    u_19 = v_19;
                }
                t = not_null(u_19);
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
  ATerm a_20 (ATerm t)
  {
    ATerm u_13 = t;
    int x_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, w_59, _id);
        LocalPopChoice(x_13);
      }
    else
      {
        t = u_13;
        t = Cons_2(t, _id, a_20);
      }
    return(t);
  }
  t = a_20(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm k_74 (ATerm))
{
  t = fetch_1(t, k_74);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm f_20 = NULL;
  f_20 = t;
  e_20 :
  if(match_cons(f_20, sym_Help_0))
    {
      ATerm h_20 = NULL,j_20 = NULL;
      ATerm b_14;
      b_14 = t;
      {
        ATerm i_20 = NULL;
        t = SSLgetAnnotations(not_null(f_20));
        {
          i_20 = t;
          if(((h_20 != NULL) && (h_20 != i_20)))
            _fail(i_20);
          else
            h_20 = i_20;
        }
      }
      t = b_14;
      {
        ATerm k_20 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(h_20));
        {
          k_20 = t;
          if(((j_20 != NULL) && (j_20 != k_20)))
            _fail(k_20);
          else
            j_20 = k_20;
        }
        t = not_null(j_20);
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
  ATerm c_14 = t;
  int d_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_51(t);
      LocalPopChoice(d_14);
    }
  else
    {
      t = c_14;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL;
  q_20 = t;
  p_20 :
  if(match_cons(q_20, sym__2))
    {
      r_20 = ATgetArgument(q_20, 0);
      s_20 = ATgetArgument(q_20, 1);
      t = SSL_table_get(not_null(r_20), not_null(s_20));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL;
  z_20 = t;
  y_20 :
  if(match_cons(z_20, sym__3))
    {
      a_21 = ATgetArgument(z_20, 0);
      b_21 = ATgetArgument(z_20, 1);
      c_21 = ATgetArgument(z_20, 2);
      {
        ATerm e_14;
        e_14 = t;
        {
          ATerm g_21 = NULL;
          ATerm h_21 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_21), not_null(b_21));
          {
            ATerm j_14 = t;
            int k_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(k_14);
              }
            else
              {
                t = j_14;
                t = (ATerm) ATempty;
              }
            {
              h_21 = t;
              if(((g_21 != NULL) && (g_21 != h_21)))
                _fail(h_21);
              else
                g_21 = h_21;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(a_21), not_null(b_21), (ATerm) ATinsert(CheckATermList(not_null(g_21)), not_null(c_21)));
            t = table_put_0(t);
          }
        }
        t = e_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm p_75 (ATerm))
{
  ATerm l_21 = NULL;
  ATerm m_21 = NULL;
  t = term_e_7;
  {
    t = p_75(t);
    {
      m_21 = t;
      if(((l_21 != NULL) && (l_21 != m_21)))
        _fail(m_21);
      else
        l_21 = m_21;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_k_13, term_n_13, not_null(l_21));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL;
  s_21 = t;
  r_21 :
  if(match_string(s_21, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(s_21) == AT_LIST) && !(ATisEmpty(s_21))))
        {
          t_21 = ATgetFirst((ATermList) s_21);
          u_21 = (ATerm) ATgetNext((ATermList) s_21);
          {
            ATerm x_21 = NULL;
            ATerm l_14;
            l_14 = t;
            {
              t = not_null(t_21);
              t = a_0(t);
            }
            t = l_14;
            {
              ATerm y_21 = NULL;
              t = term_e_7;
              {
                t = d_0(t);
                {
                  y_21 = t;
                  if(((x_21 != NULL) && (x_21 != y_21)))
                    _fail(y_21);
                  else
                    x_21 = y_21;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(u_21)), not_null(x_21));
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
  ATerm l_2 (ATerm t)
  {
    ATerm d_22 = NULL;
    d_22 = t;
    c_22 :
    if(!(match_string(d_22, "--help")))
      {
        if(!(match_string(d_22, "-h")))
          {
            if(!(match_string(d_22, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    t = term_s_14;
    {
      t = set_config_0(t);
      t = term_t_14;
    }
    return(t);
  }
  ATerm r_2 (ATerm t)
  {
    t = term_w_14;
    return(t);
  }
  t = Option_3(t, l_2, o_2, r_2);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm g_22 = NULL,h_22 = NULL,i_22 = NULL;
  g_22 = t;
  f_22 :
  if(((ATgetType(g_22) == AT_LIST) && !(ATisEmpty(g_22))))
    {
      h_22 = ATgetFirst((ATermList) g_22);
      i_22 = (ATerm) ATgetNext((ATermList) g_22);
      t = (ATerm) ATinsert(CheckATermList(not_null(i_22)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(h_22)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm r_46 (ATerm), ATerm s_46 (ATerm))
{
  ATerm u_22 = NULL,v_22 = NULL,w_22 = NULL;
  u_22 = t;
  t_22 :
  if(((ATgetType(u_22) == AT_LIST) && !(ATisEmpty(u_22))))
    {
      v_22 = ATgetFirst((ATermList) u_22);
      w_22 = (ATerm) ATgetNext((ATermList) u_22);
      {
        ATerm a_23 = NULL,c_23 = NULL;
        ATerm b_23 = NULL;
        t = SSLgetAnnotations(not_null(u_22));
        {
          b_23 = t;
          if(((a_23 != NULL) && (a_23 != b_23)))
            _fail(b_23);
          else
            a_23 = b_23;
        }
        {
          t = not_null(v_22);
          {
            ATerm e_23 = NULL;
            t = r_46(t);
            {
              c_23 = t;
              {
                t = not_null(w_22);
                {
                  ATerm g_23 = NULL;
                  t = s_46(t);
                  {
                    e_23 = t;
                    {
                      ATerm h_23 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(e_23)), not_null(c_23)), not_null(a_23));
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
  ATerm v_23 = NULL;
  v_23 = t;
  u_23 :
  if(((ATgetType(v_23) == AT_LIST) && ATisEmpty(v_23)))
    {
      {
        ATerm x_23 = NULL,z_23 = NULL;
        ATerm x_14;
        x_14 = t;
        {
          ATerm y_23 = NULL;
          t = SSLgetAnnotations(not_null(v_23));
          {
            y_23 = t;
            if(((x_23 != NULL) && (x_23 != y_23)))
              _fail(y_23);
            else
              x_23 = y_23;
          }
        }
        t = x_14;
        {
          ATerm a_24 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(x_23));
          {
            a_24 = t;
            if(((z_23 != NULL) && (z_23 != a_24)))
              _fail(a_24);
            else
              z_23 = a_24;
          }
          t = not_null(z_23);
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
  ATerm g_24 = NULL,h_24 = NULL,i_24 = NULL;
  g_24 = t;
  f_24 :
  if(match_cons(g_24, sym__2))
    {
      h_24 = ATgetArgument(g_24, 0);
      i_24 = ATgetArgument(g_24, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_p_5, not_null(h_24), not_null(i_24));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm n_75 (ATerm))
{
  ATerm y_14;
  y_14 = t;
  {
    ATerm d_15 = t;
    int e_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_15;
        t = n_75(t);
        LocalPopChoice(e_15);
      }
    else
      {
        t = d_15;
        {
        }
      }
  }
  t = y_14;
  {
    ATerm v_2 (ATerm t)
    {
      ATerm q_24 = NULL;
      ATerm g_15;
      g_15 = t;
      {
        ATerm o_24 = NULL;
        ATerm p_24 = NULL;
        p_24 = t;
        if(((o_24 != NULL) && (o_24 != p_24)))
          _fail(p_24);
        else
          o_24 = p_24;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_r_11, not_null(o_24));
          t = set_config_0(t);
        }
      }
      t = g_15;
      {
        ATerm r_24 = NULL;
        r_24 = t;
        if(((q_24 != NULL) && (q_24 != r_24)))
          _fail(r_24);
        else
          q_24 = r_24;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(q_24));
      }
      return(t);
    }
    ATerm w_2 (ATerm t)
    {
      ATerm h_15 = t;
      int k_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_15 = t;
          int q_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(q_15);
            }
          else
            {
              t = p_15;
              {
                t = n_75(t);
                t = Cons_2(t, _id, w_2);
              }
            }
          LocalPopChoice(k_15);
        }
      else
        {
          t = h_15;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, v_2, w_2);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm x_24 = NULL,y_24 = NULL,z_24 = NULL;
  ATerm r_15;
  r_15 = t;
  {
    ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL;
    a_25 = t;
    w_24 :
    if(match_cons(a_25, sym__3))
      {
        b_25 = ATgetArgument(a_25, 0);
        c_25 = ATgetArgument(a_25, 1);
        d_25 = ATgetArgument(a_25, 2);
        {
          if(((x_24 != NULL) && (x_24 != b_25)))
            _fail(b_25);
          else
            x_24 = b_25;
          {
            if(((y_24 != NULL) && (y_24 != c_25)))
              _fail(c_25);
            else
              y_24 = c_25;
            {
              if(((z_24 != NULL) && (z_24 != d_25)))
                _fail(d_25);
              else
                z_24 = d_25;
              t = SSL_table_put(not_null(x_24), not_null(y_24), not_null(z_24));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = r_15;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm m_75 (ATerm))
{
  ATerm g_25 = NULL;
  ATerm s_15;
  s_15 = t;
  {
    t = term_u_15;
    t = table_put_0(t);
  }
  t = s_15;
  {
    ATerm x_2 (ATerm t)
    {
      ATerm v_15 = t;
      int w_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_75(t);
          LocalPopChoice(w_15);
        }
      else
        {
          t = v_15;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, x_2);
    {
      ATerm y_15 = t;
      int z_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_16;
          a_16 = t;
          {
            ATerm c_16 = t;
            int d_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_m_14;
                t = get_config_0(t);
                LocalPopChoice(d_16);
              }
            else
              {
                t = c_16;
                t = fetch_1(t, Help_0);
              }
          }
          t = a_16;
          {
            t = system_usage_0(t);
            {
              t = term_q_7;
              t = exit_0(t);
            }
          }
          LocalPopChoice(z_15);
        }
      else
        {
          t = y_15;
          {
            ATerm e_16 = t;
            int g_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_2 (ATerm t)
                {
                  ATerm z_2 (ATerm t)
                  {
                    ATerm h_25 = NULL;
                    h_25 = t;
                    if(((g_25 != NULL) && (g_25 != h_25)))
                      _fail(h_25);
                    else
                      g_25 = h_25;
                    return(t);
                  }
                  t = Undefined_1(t, z_2);
                  return(t);
                }
                t = fetch_1(t, y_2);
                {
                  ATerm a_3 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_25)), term_h_16);
                    return(t);
                  }
                  t = say_1(t, a_3);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_t_3;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(g_16);
              }
            else
              {
                t = e_16;
                {
                }
              }
          }
        }
      {
        ATerm m_16;
        m_16 = t;
        {
          t = term_k_13;
          t = table_destroy_0(t);
        }
        t = m_16;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm t_71 (ATerm), ATerm u_71 (ATerm), ATerm v_71 (ATerm), ATerm w_71 (ATerm))
{
  t = parse_options_1(t, t_71);
  {
    t = store_options_0(t);
    {
      t = v_71(t);
      {
        ATerm n_16 = t;
        int s_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, u_71);
            LocalPopChoice(s_16);
          }
        else
          {
            t = n_16;
            {
              ATerm t_16 = t;
              int v_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = w_71(t);
                  t = report_success_0(t);
                  LocalPopChoice(v_16);
                }
              else
                {
                  t = t_16;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm k_72 (ATerm), ATerm l_72 (ATerm), ATerm m_72 (ATerm), ATerm n_72 (ATerm))
{
  ATerm b_3 (ATerm t)
  {
    ATerm w_16 = t;
    int x_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_72(t);
        LocalPopChoice(x_16);
      }
    else
      {
        t = w_16;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm c_3 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, k_72);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, b_3, m_72, n_72, c_3);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm e_72 (ATerm), ATerm f_72 (ATerm), ATerm g_72 (ATerm))
{
  ATerm h_3 (ATerm t)
  {
    ATerm i_3 (ATerm t)
    {
      ATerm y_16;
      y_16 = t;
      {
        ATerm k_25 = NULL;
        ATerm l_25 = NULL;
        t = term_r_11;
        {
          t = get_config_0(t);
          {
            l_25 = t;
            if(((k_25 != NULL) && (k_25 != l_25)))
              _fail(l_25);
            else
              k_25 = l_25;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_v_3, (ATerm) ATinsert(ATempty, not_null(k_25)));
          t = printnl_0(t);
        }
      }
      t = y_16;
      return(t);
    }
    t = if_verbose2_1(t, i_3);
    return(t);
  }
  t = iowrap_4(t, e_72, f_72, g_72, h_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm c_72 (ATerm), ATerm d_72 (ATerm))
{
  t = iowrap_3(t, c_72, d_72, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm z_71 (ATerm))
{
  ATerm j_3 (ATerm t)
  {
    t = _2(t, _id, z_71);
    return(t);
  }
  t = iowrap_2(t, j_3, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, term_size_0);
  return(t);
}
