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
Symbol sym_Anno_2;
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
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
ATerm term_l_14;
ATerm term_e_14;
ATerm term_x_12;
ATerm term_t_12;
ATerm term_q_12;
ATerm term_y_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_y_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_p_9;
ATerm term_k_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_o_8;
ATerm term_l_8;
ATerm term_b_8;
ATerm term_w_7;
ATerm term_i_7;
ATerm term_t_6;
ATerm term_l_6;
ATerm term_j_6;
ATerm term_i_6;
ATerm term_v_5;
ATerm term_m_5;
ATerm term_l_5;
ATerm term_k_5;
ATerm term_d_5;
ATerm term_b_5;
ATerm term_m_4;
ATerm term_h_4;
ATerm term_g_4;
ATerm term_e_4;
void init_constant_terms (void)
{
  ATprotect(&(term_e_4));
  term_e_4 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_4));
  term_g_4 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_4));
  term_h_4 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_m_4));
  term_m_4 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_b_5));
  term_b_5 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_d_5));
  term_d_5 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_5));
  term_k_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_5));
  term_l_5 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_m_5));
  term_m_5 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym__2, term_k_5, term_v_5);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_v_5);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym__2, term_y_9, term_z_9);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym__2, term_m_10, term_z_9);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym__2, term_u_10, term_z_9);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym__2, term_s_11, term_u_11);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym__3, term_s_11, term_u_11, (ATerm) ATempty);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm foldr_3 (ATerm, ATerm b_60 (ATerm), ATerm c_60 (ATerm), ATerm d_60 (ATerm));
ATerm crush_3 (ATerm, ATerm t_61 (ATerm), ATerm u_61 (ATerm), ATerm v_61 (ATerm));
ATerm term_size_0 (ATerm);
ATerm _2 (ATerm, ATerm c_42 (ATerm), ATerm d_42 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm c_56 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm m_53 (ATerm));
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm z_59 (ATerm), ATerm a_60 (ATerm));
ATerm crush_2 (ATerm, ATerm r_61 (ATerm), ATerm s_61 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm l_53 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm m_55 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm n_58 (ATerm), ATerm o_58 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm k_55 (ATerm));
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
ATerm long_description_1 (ATerm, ATerm l_52 (ATerm));
ATerm map_1 (ATerm, ATerm o_65 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm f_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm k_52 (ATerm));
ATerm Program_1 (ATerm, ATerm q_43 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm r_43 (ATerm));
ATerm fetch_1 (ATerm, ATerm x_65 (ATerm));
ATerm option_defined_1 (ATerm, ATerm j_53 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm i_74 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm p_52 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm k_48 (ATerm), ATerm l_48 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm n_52 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm m_52 (ATerm));
ATerm iowrap_4 (ATerm, ATerm y_54 (ATerm), ATerm z_54 (ATerm), ATerm a_55 (ATerm), ATerm b_55 (ATerm));
ATerm iowrap_3 (ATerm, ATerm s_54 (ATerm), ATerm t_54 (ATerm), ATerm u_54 (ATerm));
ATerm iowrap_2 (ATerm, ATerm q_54 (ATerm), ATerm r_54 (ATerm));
ATerm iowrap_1 (ATerm, ATerm n_54 (ATerm));
ATerm main_0 (ATerm);
ATerm foldr_3 (ATerm t, ATerm b_60 (ATerm), ATerm c_60 (ATerm), ATerm d_60 (ATerm))
{
  ATerm t_3 = t;
  int y_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = b_60(t);
      LocalPopChoice(y_3);
    }
  else
    {
      t = t_3;
      {
        ATerm g_1 = NULL,h_1 = NULL,s_1 = NULL;
        g_1 = t;
        f_1 :
        if(((ATgetType(g_1) == AT_LIST) && ((ATermList) g_1 != ATempty)))
          {
            h_1 = ATgetFirst((ATermList) g_1);
            s_1 = (ATerm) ATgetNext((ATermList) g_1);
            {
              ATerm y_1 = NULL,a_2 = NULL;
              ATerm z_3;
              z_3 = t;
              {
                ATerm z_1 = NULL;
                t = not_null(h_1);
                {
                  t = d_60(t);
                  {
                    z_1 = t;
                    if(((y_1 != NULL) && (y_1 != z_1)))
                      _fail(z_1);
                    else
                      y_1 = z_1;
                  }
                }
              }
              t = z_3;
              {
                ATerm b_2 = NULL;
                t = not_null(s_1);
                {
                  t = foldr_3(t, b_60, c_60, d_60);
                  {
                    b_2 = t;
                    if(((a_2 != NULL) && (a_2 != b_2)))
                      _fail(b_2);
                    else
                      a_2 = b_2;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(y_1), not_null(a_2));
                  t = c_60(t);
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
ATerm crush_3 (ATerm t, ATerm t_61 (ATerm), ATerm u_61 (ATerm), ATerm v_61 (ATerm))
{
  ATerm j_2 = NULL;
  ATerm l_2 = NULL;
  j_2 = t;
  {
    ATerm m_2 = NULL;
    ATerm o_2 = NULL,p_2 = NULL,q_2 = NULL;
    t = not_null(j_2);
    {
      m_2 = t;
      {
        t = SSL_explode_term(not_null(m_2));
        {
          o_2 = t;
          i_2 :
          if(match_cons(o_2, sym__2))
            {
              p_2 = ATgetArgument(o_2, 0);
              q_2 = ATgetArgument(o_2, 1);
              if(((l_2 != NULL) && (l_2 != q_2)))
                _fail(q_2);
              else
                l_2 = q_2;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(l_2);
      t = foldr_3(t, t_61, u_61, v_61);
    }
  }
  return(t);
}
ATerm term_size_0 (ATerm t)
{
  ATerm c_0 (ATerm t)
  {
    t = term_e_4;
    return(t);
  }
  t = crush_3(t, c_0, add_0, term_size_0);
  return(t);
}
ATerm _2 (ATerm t, ATerm c_42 (ATerm), ATerm d_42 (ATerm))
{
  ATerm a_3 = NULL,b_3 = NULL,c_3 = NULL;
  a_3 = t;
  z_2 :
  if(match_cons(a_3, sym__2))
    {
      b_3 = ATgetArgument(a_3, 0);
      c_3 = ATgetArgument(a_3, 1);
      {
        ATerm g_3 = NULL,i_3 = NULL;
        ATerm h_3 = NULL;
        t = SSLgetAnnotations(not_null(a_3));
        {
          h_3 = t;
          if(((g_3 != NULL) && (g_3 != h_3)))
            _fail(h_3);
          else
            g_3 = h_3;
        }
        {
          t = not_null(b_3);
          {
            ATerm k_3 = NULL;
            t = c_42(t);
            {
              i_3 = t;
              {
                t = not_null(c_3);
                {
                  ATerm m_3 = NULL;
                  t = d_42(t);
                  {
                    k_3 = t;
                    {
                      ATerm n_3 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(i_3), not_null(k_3)), not_null(g_3));
                      {
                        n_3 = t;
                        if(((m_3 != NULL) && (m_3 != n_3)))
                          _fail(n_3);
                        else
                          m_3 = n_3;
                      }
                      t = not_null(m_3);
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
  ATerm v_3 = NULL;
  ATerm f_4;
  f_4 = t;
  {
    ATerm d_0 (ATerm t)
    {
      ATerm w_3 = NULL,x_3 = NULL;
      w_3 = t;
      u_3 :
      if(match_cons(w_3, sym_Program_1))
        {
          x_3 = ATgetArgument(w_3, 0);
          if(((v_3 != NULL) && (v_3 != x_3)))
            _fail(x_3);
          else
            v_3 = x_3;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, d_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_4, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_4), not_null(v_3)), term_h_4));
      {
        t = printnl_0(t);
        {
          t = term_e_4;
          t = exit_0(t);
        }
      }
    }
  }
  t = f_4;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm b_4 = NULL,c_4 = NULL,d_4 = NULL;
  b_4 = t;
  a_4 :
  if(match_cons(b_4, sym__2))
    {
      c_4 = ATgetArgument(b_4, 0);
      d_4 = ATgetArgument(b_4, 1);
      {
        ATerm n_4;
        n_4 = t;
        t = SSL_printnl(not_null(c_4), not_null(d_4));
        t = n_4;
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
  ATerm j_4 = NULL,k_4 = NULL,l_4 = NULL;
  j_4 = t;
  i_4 :
  if(match_cons(j_4, sym__2))
    {
      k_4 = ATgetArgument(j_4, 0);
      l_4 = ATgetArgument(j_4, 1);
      {
        t = not_null(k_4);
        {
          ATerm g_0 (ATerm t)
          {
            t = not_null(l_4);
            return(t);
          }
          t = at_end_1(t, g_0);
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
ATerm debug_1 (ATerm t, ATerm c_56 (ATerm))
{
  ATerm o_4;
  o_4 = t;
  {
    ATerm r_4 = NULL,t_4 = NULL;
    ATerm p_4;
    p_4 = t;
    {
      ATerm s_4 = NULL;
      t = c_56(t);
      {
        s_4 = t;
        if(((r_4 != NULL) && (r_4 != s_4)))
          _fail(s_4);
        else
          r_4 = s_4;
      }
    }
    t = p_4;
    {
      ATerm u_4 = NULL;
      u_4 = t;
      if(((t_4 != NULL) && (t_4 != u_4)))
        _fail(u_4);
      else
        t_4 = u_4;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_4)), not_null(r_4)));
        t = printnl_0(t);
      }
    }
  }
  t = o_4;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm y_4 = NULL;
  y_4 = t;
  t = SSL_is_string(not_null(y_4));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm q_4 = t;
  int v_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(v_4);
    }
  else
    {
      t = q_4;
      {
        ATerm w_4 = t;
        int x_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, h_0);
            LocalPopChoice(x_4);
          }
        else
          {
            t = w_4;
            {
              ATerm h_5 = NULL,i_5 = NULL,j_5 = NULL;
              h_5 = t;
              g_5 :
              if(match_cons(h_5, sym_Path_1))
                {
                  i_5 = ATgetArgument(h_5, 0);
                  t = not_null(i_5);
                }
              else
                {
                  if(match_cons(h_5, sym_Var_1))
                    {
                      i_5 = ATgetArgument(h_5, 0);
                      {
                        t = not_null(i_5);
                        {
                          ATerm z_4 = t;
                          int a_5 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(a_5);
                            }
                          else
                            {
                              t = z_4;
                              {
                                ATerm m_0 (ATerm t)
                                {
                                  t = term_b_5;
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
                      if(match_cons(h_5, sym_Prefix_2))
                        {
                          i_5 = ATgetArgument(h_5, 0);
                          j_5 = ATgetArgument(h_5, 1);
                          {
                            ATerm o_5 = NULL,q_5 = NULL;
                            ATerm c_5;
                            c_5 = t;
                            {
                              ATerm p_5 = NULL;
                              t = not_null(i_5);
                              {
                                t = eval_config_0(t);
                                {
                                  p_5 = t;
                                  if(((o_5 != NULL) && (o_5 != p_5)))
                                    _fail(p_5);
                                  else
                                    o_5 = p_5;
                                }
                              }
                            }
                            t = c_5;
                            {
                              ATerm r_5 = NULL;
                              t = not_null(j_5);
                              {
                                t = eval_config_0(t);
                                {
                                  r_5 = t;
                                  if(((q_5 != NULL) && (q_5 != r_5)))
                                    _fail(r_5);
                                  else
                                    q_5 = r_5;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(o_5), not_null(q_5));
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
  ATerm z_5 = NULL;
  z_5 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_d_5, not_null(z_5));
    {
      t = table_get_0(t);
      {
        ATerm n_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm e_5;
            e_5 = t;
            {
              ATerm b_6 = NULL;
              ATerm c_6 = NULL;
              c_6 = t;
              if(((b_6 != NULL) && (b_6 != c_6)))
                _fail(c_6);
              else
                b_6 = c_6;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_d_5, not_null(z_5), not_null(b_6));
                t = table_put_0(t);
              }
            }
            t = e_5;
          }
          return(t);
        }
        t = try_1(t, n_0);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm m_53 (ATerm))
{
  ATerm o_0 (ATerm t)
  {
    ATerm f_5;
    f_5 = t;
    {
      ATerm g_6 = NULL;
      ATerm h_6 = NULL;
      t = term_k_5;
      {
        t = get_config_0(t);
        {
          h_6 = t;
          if(((g_6 != NULL) && (g_6 != h_6)))
            _fail(h_6);
          else
            g_6 = h_6;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_6), term_l_5);
        t = geq_0(t);
      }
    }
    t = f_5;
    t = m_53(t);
    return(t);
  }
  t = try_1(t, o_0);
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_g_4, (ATerm) ATinsert(ATempty, term_m_5));
  {
    t = printnl_0(t);
    {
      t = term_e_4;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm k_6 = NULL;
  k_6 = t;
  t = SSL_TicksToSeconds(not_null(k_6));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm p_6 = NULL,q_6 = NULL,r_6 = NULL;
  p_6 = t;
  o_6 :
  if(match_cons(p_6, sym__2))
    {
      q_6 = ATgetArgument(p_6, 0);
      r_6 = ATgetArgument(p_6, 1);
      {
        ATerm n_5 = t;
        int s_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(q_6), not_null(r_6));
            LocalPopChoice(s_5);
          }
        else
          {
            t = n_5;
            t = SSL_addr(not_null(q_6), not_null(r_6));
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
  ATerm t_5 = t;
  int u_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = z_59(t);
      LocalPopChoice(u_5);
    }
  else
    {
      t = t_5;
      {
        ATerm y_6 = NULL,z_6 = NULL,a_7 = NULL;
        y_6 = t;
        x_6 :
        if(((ATgetType(y_6) == AT_LIST) && ((ATermList) y_6 != ATempty)))
          {
            z_6 = ATgetFirst((ATermList) y_6);
            a_7 = (ATerm) ATgetNext((ATermList) y_6);
            {
              ATerm d_7 = NULL;
              ATerm e_7 = NULL;
              t = not_null(a_7);
              {
                t = foldr_2(t, z_59, a_60);
                {
                  e_7 = t;
                  if(((d_7 != NULL) && (d_7 != e_7)))
                    _fail(e_7);
                  else
                    d_7 = e_7;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(z_6), not_null(d_7));
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
  ATerm l_7 = NULL;
  ATerm n_7 = NULL;
  l_7 = t;
  {
    ATerm o_7 = NULL;
    ATerm q_7 = NULL,r_7 = NULL,s_7 = NULL;
    t = not_null(l_7);
    {
      o_7 = t;
      {
        t = SSL_explode_term(not_null(o_7));
        {
          q_7 = t;
          k_7 :
          if(match_cons(q_7, sym__2))
            {
              r_7 = ATgetArgument(q_7, 0);
              s_7 = ATgetArgument(q_7, 1);
              if(((n_7 != NULL) && (n_7 != s_7)))
                _fail(s_7);
              else
                n_7 = s_7;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(n_7);
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
    ATerm p_0 (ATerm t)
    {
      t = term_v_5;
      return(t);
    }
    t = crush_2(t, p_0, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm y_7 = NULL,z_7 = NULL,a_8 = NULL;
  y_7 = t;
  x_7 :
  if(match_cons(y_7, sym__2))
    {
      z_7 = ATgetArgument(y_7, 0);
      a_8 = ATgetArgument(y_7, 1);
      {
        ATerm w_5;
        w_5 = t;
        {
          ATerm x_5 = t;
          int y_5 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(z_7), not_null(a_8));
              LocalPopChoice(y_5);
            }
          else
            {
              t = x_5;
              t = SSL_gtr(not_null(z_7), not_null(a_8));
            }
        }
        t = w_5;
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
  ATerm g_8 = NULL;
  ATerm a_6 = t;
  int d_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_8 = NULL,i_8 = NULL,j_8 = NULL;
      h_8 = t;
      f_8 :
      if(match_cons(h_8, sym__2))
        {
          i_8 = ATgetArgument(h_8, 0);
          j_8 = ATgetArgument(h_8, 1);
          {
            if(((g_8 != NULL) && (g_8 != i_8)))
              _fail(i_8);
            else
              g_8 = i_8;
            if(((g_8 != NULL) && (g_8 != j_8)))
              _fail(j_8);
            else
              g_8 = j_8;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(d_6);
    }
  else
    {
      t = a_6;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm l_53 (ATerm))
{
  ATerm q_0 (ATerm t)
  {
    ATerm e_6;
    e_6 = t;
    {
      ATerm m_8 = NULL;
      ATerm n_8 = NULL;
      t = term_k_5;
      {
        t = get_config_0(t);
        {
          n_8 = t;
          if(((m_8 != NULL) && (m_8 != n_8)))
            _fail(n_8);
          else
            m_8 = n_8;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_8), term_e_4);
        t = geq_0(t);
      }
    }
    t = e_6;
    t = l_53(t);
    return(t);
  }
  t = try_1(t, q_0);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm r_0 (ATerm t)
  {
    ATerm r_8 = NULL,t_8 = NULL;
    ATerm f_6;
    f_6 = t;
    {
      ATerm s_8 = NULL;
      t = run_time_0(t);
      {
        s_8 = t;
        if(((r_8 != NULL) && (r_8 != s_8)))
          _fail(s_8);
        else
          r_8 = s_8;
      }
    }
    t = f_6;
    {
      ATerm u_8 = NULL;
      t = term_i_6;
      {
        t = get_config_0(t);
        {
          u_8 = t;
          if(((t_8 != NULL) && (t_8 != u_8)))
            _fail(u_8);
          else
            t_8 = u_8;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_6), not_null(r_8)), term_j_6), not_null(t_8)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, r_0);
  {
    t = term_v_5;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm z_8 = NULL,a_9 = NULL,b_9 = NULL;
  z_8 = t;
  y_8 :
  if(match_cons(z_8, sym__2))
    {
      a_9 = ATgetArgument(z_8, 0);
      b_9 = ATgetArgument(z_8, 1);
      t = SSL_WriteToTextFile(not_null(a_9), not_null(b_9));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm h_9 = NULL,i_9 = NULL,j_9 = NULL;
  h_9 = t;
  g_9 :
  if(match_cons(h_9, sym__2))
    {
      i_9 = ATgetArgument(h_9, 0);
      j_9 = ATgetArgument(h_9, 1);
      t = SSL_WriteToBinaryFile(not_null(i_9), not_null(j_9));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm r_9 = NULL;
  ATerm m_6;
  m_6 = t;
  {
    ATerm s_0 (ATerm t)
    {
      ATerm n_6 = t;
      int s_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_0 (ATerm t)
          {
            ATerm s_9 = NULL,t_9 = NULL;
            s_9 = t;
            o_9 :
            if(match_cons(s_9, sym_Output_1))
              {
                t_9 = ATgetArgument(s_9, 0);
                if(((r_9 != NULL) && (r_9 != t_9)))
                  _fail(t_9);
                else
                  r_9 = t_9;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, t_0);
          LocalPopChoice(s_6);
        }
      else
        {
          t = n_6;
          {
            ATerm u_9 = NULL;
            t = term_t_6;
            {
              u_9 = t;
              if(((r_9 != NULL) && (r_9 != u_9)))
                _fail(u_9);
              else
                r_9 = u_9;
            }
          }
        }
      return(t);
    }
    t = _2(t, s_0, _id);
  }
  t = m_6;
  {
    ATerm u_0 (ATerm t)
    {
      ATerm v_0 (ATerm t)
      {
        t = not_null(r_9);
        return(t);
      }
      t = split_2(t, v_0, _id);
      return(t);
    }
    t = _2(t, _id, u_0);
    {
      ATerm u_6 = t;
      int v_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_0 (ATerm t)
          {
            ATerm x_0 (ATerm t)
            {
              ATerm v_9 = NULL;
              v_9 = t;
              q_9 :
              if(!(match_cons(v_9, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, x_0);
            return(t);
          }
          t = _2(t, w_0, WriteToBinaryFile_0);
          LocalPopChoice(v_6);
        }
      else
        {
          t = u_6;
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
ATerm apply_strategy_1 (ATerm t, ATerm m_55 (ATerm))
{
  ATerm b_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL;
  ATerm w_6;
  w_6 = t;
  t = dtime_0(t);
  t = w_6;
  {
    t = m_55(t);
    {
      ATerm b_7;
      b_7 = t;
      {
        ATerm c_10 = NULL;
        t = dtime_0(t);
        {
          c_10 = t;
          if(((b_10 != NULL) && (b_10 != c_10)))
            _fail(c_10);
          else
            b_10 = c_10;
        }
      }
      t = b_7;
      {
        d_10 = t;
        a_10 :
        if(match_cons(d_10, sym__2))
          {
            e_10 = ATgetArgument(d_10, 0);
            f_10 = ATgetArgument(d_10, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(e_10)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(b_10))), not_null(f_10));
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
  ATerm l_10 = NULL;
  l_10 = t;
  t = SSL_ReadFromFile(not_null(l_10));
  return(t);
}
ATerm split_2 (ATerm t, ATerm n_58 (ATerm), ATerm o_58 (ATerm))
{
  ATerm q_10 = NULL,s_10 = NULL;
  ATerm c_7;
  c_7 = t;
  {
    ATerm r_10 = NULL;
    t = n_58(t);
    {
      r_10 = t;
      if(((q_10 != NULL) && (q_10 != r_10)))
        _fail(r_10);
      else
        q_10 = r_10;
    }
  }
  t = c_7;
  {
    ATerm t_10 = NULL;
    t = o_58(t);
    {
      t_10 = t;
      if(((s_10 != NULL) && (s_10 != t_10)))
        _fail(t_10);
      else
        s_10 = t_10;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_10), not_null(s_10));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm z_10 = NULL;
  ATerm f_7;
  f_7 = t;
  {
    ATerm g_7 = t;
    int h_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_0 (ATerm t)
        {
          ATerm a_11 = NULL,b_11 = NULL;
          a_11 = t;
          x_10 :
          if(match_cons(a_11, sym_Input_1))
            {
              b_11 = ATgetArgument(a_11, 0);
              if(((z_10 != NULL) && (z_10 != b_11)))
                _fail(b_11);
              else
                z_10 = b_11;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, y_0);
        LocalPopChoice(h_7);
      }
    else
      {
        t = g_7;
        {
          ATerm c_11 = NULL;
          t = term_i_7;
          {
            c_11 = t;
            if(((z_10 != NULL) && (z_10 != c_11)))
              _fail(c_11);
            else
              z_10 = c_11;
          }
        }
      }
  }
  t = f_7;
  {
    ATerm z_0 (ATerm t)
    {
      t = not_null(z_10);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, z_0);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm j_11 = NULL;
  j_11 = t;
  i_11 :
  if(match_cons(j_11, sym_Version_0))
    {
      ATerm l_11 = NULL,n_11 = NULL;
      ATerm j_7;
      j_7 = t;
      {
        ATerm m_11 = NULL;
        t = SSLgetAnnotations(not_null(j_11));
        {
          m_11 = t;
          if(((l_11 != NULL) && (l_11 != m_11)))
            _fail(m_11);
          else
            l_11 = m_11;
        }
      }
      t = j_7;
      {
        ATerm o_11 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(l_11));
        {
          o_11 = t;
          if(((n_11 != NULL) && (n_11 != o_11)))
            _fail(o_11);
          else
            n_11 = o_11;
        }
        t = not_null(n_11);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm k_55 (ATerm))
{
  ATerm a_1 (ATerm t)
  {
    ATerm m_7 = t;
    int p_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(p_7);
      }
    else
      {
        t = m_7;
        {
          ATerm t_7 = t;
          int u_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(u_7);
            }
          else
            {
              t = t_7;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, a_1);
  t = k_55(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm t_11 = NULL;
  t_11 = t;
  t = SSL_table_create(not_null(t_11));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm x_11 = NULL;
  x_11 = t;
  {
    ATerm v_7;
    v_7 = t;
    {
      t = term_w_7;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_w_7, term_b_8, not_null(x_11));
          t = table_put_0(t);
        }
      }
    }
    t = v_7;
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm b_12 = NULL;
  b_12 = t;
  t = SSL_string_to_int(not_null(b_12));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL;
  j_12 = t;
  h_12 :
  if(match_string(j_12, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(j_12) == AT_LIST) && ((ATermList) j_12 != ATempty)))
        {
          k_12 = ATgetFirst((ATermList) j_12);
          l_12 = (ATerm) ATgetNext((ATermList) j_12);
          i_12 :
          if(((ATgetType(l_12) == AT_LIST) && ((ATermList) l_12 != ATempty)))
            {
              m_12 = ATgetFirst((ATermList) l_12);
              n_12 = (ATerm) ATgetNext((ATermList) l_12);
              {
                ATerm r_12 = NULL;
                ATerm c_8;
                c_8 = t;
                {
                  t = not_null(k_12);
                  t = j_0(t);
                }
                t = c_8;
                {
                  ATerm s_12 = NULL;
                  t = not_null(m_12);
                  {
                    t = k_0(t);
                    {
                      s_12 = t;
                      if(((r_12 != NULL) && (r_12 != s_12)))
                        _fail(s_12);
                      else
                        r_12 = s_12;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(n_12)), not_null(r_12));
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
  ATerm d_8 = t;
  int e_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_1 (ATerm t)
      {
        ATerm j_13 = NULL;
        j_13 = t;
        w_12 :
        if(!(match_string(j_13, "-i")))
          {
            if(!(match_string(j_13, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm c_1 (ATerm t)
      {
        ATerm m_13 = NULL;
        ATerm k_8;
        k_8 = t;
        {
          ATerm k_13 = NULL;
          ATerm l_13 = NULL;
          l_13 = t;
          if(((k_13 != NULL) && (k_13 != l_13)))
            _fail(l_13);
          else
            k_13 = l_13;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_l_8, not_null(k_13));
            t = set_config_0(t);
          }
        }
        t = k_8;
        {
          ATerm n_13 = NULL;
          n_13 = t;
          if(((m_13 != NULL) && (m_13 != n_13)))
            _fail(n_13);
          else
            m_13 = n_13;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(m_13));
        }
        return(t);
      }
      ATerm d_1 (ATerm t)
      {
        t = term_o_8;
        return(t);
      }
      t = ArgOption_3(t, b_1, c_1, d_1);
      LocalPopChoice(e_8);
    }
  else
    {
      t = d_8;
      {
        ATerm p_8 = t;
        int q_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_1 (ATerm t)
            {
              ATerm o_13 = NULL;
              o_13 = t;
              z_12 :
              if(!(match_string(o_13, "-o")))
                {
                  if(!(match_string(o_13, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm i_1 (ATerm t)
            {
              ATerm r_13 = NULL;
              ATerm v_8;
              v_8 = t;
              {
                ATerm p_13 = NULL;
                ATerm q_13 = NULL;
                q_13 = t;
                if(((p_13 != NULL) && (p_13 != q_13)))
                  _fail(q_13);
                else
                  p_13 = q_13;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_w_8, not_null(p_13));
                  t = set_config_0(t);
                }
              }
              t = v_8;
              {
                ATerm s_13 = NULL;
                s_13 = t;
                if(((r_13 != NULL) && (r_13 != s_13)))
                  _fail(s_13);
                else
                  r_13 = s_13;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(r_13));
              }
              return(t);
            }
            ATerm j_1 (ATerm t)
            {
              t = term_x_8;
              return(t);
            }
            t = ArgOption_3(t, e_1, i_1, j_1);
            LocalPopChoice(q_8);
          }
        else
          {
            t = p_8;
            {
              ATerm c_9 = t;
              int d_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_1 (ATerm t)
                  {
                    ATerm t_13 = NULL;
                    t_13 = t;
                    c_13 :
                    if(!(match_string(t_13, "-S")))
                      {
                        if(!(match_string(t_13, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm l_1 (ATerm t)
                  {
                    t = term_e_9;
                    t = set_config_0(t);
                    t = term_f_9;
                    return(t);
                  }
                  ATerm m_1 (ATerm t)
                  {
                    t = term_k_9;
                    return(t);
                  }
                  t = Option_3(t, k_1, l_1, m_1);
                  LocalPopChoice(d_9);
                }
              else
                {
                  t = c_9;
                  {
                    ATerm l_9 = t;
                    int m_9 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm n_1 (ATerm t)
                        {
                          ATerm u_13 = NULL;
                          u_13 = t;
                          d_13 :
                          if(!(match_string(u_13, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm o_1 (ATerm t)
                        {
                          ATerm x_13 = NULL;
                          ATerm n_9;
                          n_9 = t;
                          {
                            ATerm v_13 = NULL;
                            ATerm w_13 = NULL;
                            t = string_to_int_0(t);
                            {
                              w_13 = t;
                              if(((v_13 != NULL) && (v_13 != w_13)))
                                _fail(w_13);
                              else
                                v_13 = w_13;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_k_5, not_null(v_13));
                              t = set_config_0(t);
                            }
                          }
                          t = n_9;
                          {
                            ATerm y_13 = NULL;
                            y_13 = t;
                            if(((x_13 != NULL) && (x_13 != y_13)))
                              _fail(y_13);
                            else
                              x_13 = y_13;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(x_13));
                          }
                          return(t);
                        }
                        ATerm p_1 (ATerm t)
                        {
                          t = term_p_9;
                          return(t);
                        }
                        t = ArgOption_3(t, n_1, o_1, p_1);
                        LocalPopChoice(m_9);
                      }
                    else
                      {
                        t = l_9;
                        {
                          ATerm w_9 = t;
                          int x_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm q_1 (ATerm t)
                              {
                                ATerm z_13 = NULL;
                                z_13 = t;
                                g_13 :
                                if(!(match_string(z_13, "-v")))
                                  {
                                    if(!(match_string(z_13, "--version")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm r_1 (ATerm t)
                              {
                                t = term_g_10;
                                t = set_config_0(t);
                                t = term_h_10;
                                return(t);
                              }
                              ATerm t_1 (ATerm t)
                              {
                                t = term_i_10;
                                return(t);
                              }
                              t = Option_3(t, q_1, r_1, t_1);
                              LocalPopChoice(x_9);
                            }
                          else
                            {
                              t = w_9;
                              {
                                ATerm j_10 = t;
                                int k_10 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm u_1 (ATerm t)
                                    {
                                      ATerm a_14 = NULL;
                                      a_14 = t;
                                      h_13 :
                                      if(!(match_string(a_14, "-b")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm v_1 (ATerm t)
                                    {
                                      t = term_n_10;
                                      t = set_config_0(t);
                                      t = term_o_10;
                                      return(t);
                                    }
                                    ATerm w_1 (ATerm t)
                                    {
                                      t = term_p_10;
                                      return(t);
                                    }
                                    t = Option_3(t, u_1, v_1, w_1);
                                    LocalPopChoice(k_10);
                                  }
                                else
                                  {
                                    t = j_10;
                                    {
                                      ATerm x_1 (ATerm t)
                                      {
                                        ATerm b_14 = NULL;
                                        b_14 = t;
                                        i_13 :
                                        if(!(match_string(b_14, "-s")))
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      ATerm c_2 (ATerm t)
                                      {
                                        t = term_v_10;
                                        t = set_config_0(t);
                                        t = term_w_10;
                                        return(t);
                                      }
                                      ATerm d_2 (ATerm t)
                                      {
                                        t = term_y_10;
                                        return(t);
                                      }
                                      t = Option_3(t, x_1, c_2, d_2);
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
  ATerm j_14 = NULL;
  j_14 = t;
  t = SSL_table_destroy(not_null(j_14));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm n_14 = NULL;
  n_14 = t;
  t = SSL_exit(not_null(n_14));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm r_14 = NULL;
  r_14 = t;
  t = SSL_implode_string(not_null(r_14));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm d_66 (ATerm))
{
  ATerm u_14 (ATerm t)
  {
    ATerm d_11 = t;
    int e_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, u_14);
        LocalPopChoice(e_11);
      }
    else
      {
        t = d_11;
        {
          t = Nil_0(t);
          t = d_66(t);
        }
      }
    return(t);
  }
  t = u_14(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm f_11 = t;
  int g_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(g_11);
    }
  else
    {
      t = f_11;
      {
        ATerm x_14 = NULL,y_14 = NULL,z_14 = NULL;
        x_14 = t;
        w_14 :
        if(((ATgetType(x_14) == AT_LIST) && ((ATermList) x_14 != ATempty)))
          {
            y_14 = ATgetFirst((ATermList) x_14);
            z_14 = (ATerm) ATgetNext((ATermList) x_14);
            {
              t = not_null(y_14);
              {
                ATerm e_2 (ATerm t)
                {
                  t = not_null(z_14);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, e_2);
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
  ATerm f_15 = NULL;
  f_15 = t;
  t = SSL_explode_string(not_null(f_15));
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
ATerm long_description_1 (ATerm t, ATerm l_52 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm o_65 (ATerm))
{
  ATerm i_15 (ATerm t)
  {
    ATerm h_11 = t;
    int k_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(k_11);
      }
    else
      {
        t = h_11;
        t = Cons_2(t, o_65, i_15);
      }
    return(t);
  }
  t = i_15(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm f_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm p_15 = NULL,q_15 = NULL,r_15 = NULL;
  r_15 = t;
  o_15 :
  if(((ATgetType(r_15) == AT_LIST) && ((ATermList) r_15 != ATempty)))
    {
      p_15 = ATgetFirst((ATermList) r_15);
      q_15 = (ATerm) ATgetNext((ATermList) r_15);
      {
        ATerm u_15 = NULL;
        t = not_null(q_15);
        {
          ATerm p_11;
          p_11 = t;
          {
            ATerm v_15 = NULL,x_15 = NULL,z_15 = NULL;
            ATerm q_11;
            q_11 = t;
            {
              ATerm w_15 = NULL;
              t = i_0(t);
              {
                w_15 = t;
                if(((v_15 != NULL) && (v_15 != w_15)))
                  _fail(w_15);
                else
                  v_15 = w_15;
              }
            }
            t = q_11;
            {
              ATerm y_15 = NULL;
              t = not_null(p_15);
              {
                t = f_0(t);
                {
                  y_15 = t;
                  if(((x_15 != NULL) && (x_15 != y_15)))
                    _fail(y_15);
                  else
                    x_15 = y_15;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(v_15)), not_null(x_15));
                {
                  z_15 = t;
                  if(((u_15 != NULL) && (u_15 != z_15)))
                    _fail(z_15);
                  else
                    u_15 = z_15;
                }
              }
            }
          }
          t = p_11;
          {
            ATerm f_2 (ATerm t)
            {
              t = not_null(u_15);
              return(t);
            }
            t = reverse_acc_2(t, f_0, f_2);
          }
        }
      }
    }
  else
    {
      if(((ATermList) r_15 == ATempty))
        {
          {
            t = term_z_9;
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
ATerm short_description_1 (ATerm t, ATerm k_52 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm q_43 (ATerm))
{
  ATerm k_16 = NULL,l_16 = NULL;
  k_16 = t;
  j_16 :
  if(match_cons(k_16, sym_Program_1))
    {
      l_16 = ATgetArgument(k_16, 0);
      {
        ATerm o_16 = NULL,q_16 = NULL;
        ATerm p_16 = NULL;
        t = SSLgetAnnotations(not_null(k_16));
        {
          p_16 = t;
          if(((o_16 != NULL) && (o_16 != p_16)))
            _fail(p_16);
          else
            o_16 = p_16;
        }
        {
          t = not_null(l_16);
          {
            ATerm s_16 = NULL;
            t = q_43(t);
            {
              q_16 = t;
              {
                ATerm t_16 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(q_16)), not_null(o_16));
                {
                  t_16 = t;
                  if(((s_16 != NULL) && (s_16 != t_16)))
                    _fail(t_16);
                  else
                    s_16 = t_16;
                }
                t = not_null(s_16);
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
  ATerm c_17 = NULL;
  ATerm h_2 (ATerm t)
  {
    ATerm k_2 (ATerm t)
    {
      ATerm d_17 = NULL;
      d_17 = t;
      if(((c_17 != NULL) && (c_17 != d_17)))
        _fail(d_17);
      else
        c_17 = d_17;
      return(t);
    }
    t = Program_1(t, k_2);
    return(t);
  }
  t = option_defined_1(t, h_2);
  {
    ATerm n_2 (ATerm t)
    {
      ATerm e_17 = NULL;
      ATerm f_17 = NULL;
      t = term_z_9;
      {
        ATerm r_2 (ATerm t)
        {
          t = not_null(c_17);
          return(t);
        }
        t = short_description_1(t, r_2);
        {
          t = concat_strings_0(t);
          {
            f_17 = t;
            if(((e_17 != NULL) && (e_17 != f_17)))
              _fail(f_17);
            else
              e_17 = f_17;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_4, (ATerm) ATinsert(ATempty, not_null(e_17)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, n_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_4, (ATerm) ATinsert(ATempty, term_r_11));
      {
        t = printnl_0(t);
        {
          t = term_v_11;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm s_2 (ATerm t)
                {
                  ATerm g_17 = NULL;
                  g_17 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_g_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_17)), term_w_11));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, s_2);
                {
                  ATerm t_2 (ATerm t)
                  {
                    ATerm i_17 = NULL;
                    ATerm j_17 = NULL;
                    t = term_z_9;
                    {
                      ATerm u_2 (ATerm t)
                      {
                        t = not_null(c_17);
                        return(t);
                      }
                      t = long_description_1(t, u_2);
                      {
                        t = concat_strings_0(t);
                        {
                          j_17 = t;
                          if(((i_17 != NULL) && (i_17 != j_17)))
                            _fail(j_17);
                          else
                            i_17 = j_17;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_g_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_17)), term_y_11));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, t_2);
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
ATerm Undefined_1 (ATerm t, ATerm r_43 (ATerm))
{
  ATerm a_18 = NULL,b_18 = NULL;
  a_18 = t;
  z_17 :
  if(match_cons(a_18, sym_Undefined_1))
    {
      b_18 = ATgetArgument(a_18, 0);
      {
        ATerm e_18 = NULL,g_18 = NULL;
        ATerm f_18 = NULL;
        t = SSLgetAnnotations(not_null(a_18));
        {
          f_18 = t;
          if(((e_18 != NULL) && (e_18 != f_18)))
            _fail(f_18);
          else
            e_18 = f_18;
        }
        {
          t = not_null(b_18);
          {
            ATerm i_18 = NULL;
            t = r_43(t);
            {
              g_18 = t;
              {
                ATerm j_18 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(g_18)), not_null(e_18));
                {
                  j_18 = t;
                  if(((i_18 != NULL) && (i_18 != j_18)))
                    _fail(j_18);
                  else
                    i_18 = j_18;
                }
                t = not_null(i_18);
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
  ATerm r_18 (ATerm t)
  {
    ATerm z_11 = t;
    int a_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, x_65, _id);
        LocalPopChoice(a_12);
      }
    else
      {
        t = z_11;
        t = Cons_2(t, _id, r_18);
      }
    return(t);
  }
  t = r_18(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm j_53 (ATerm))
{
  t = fetch_1(t, j_53);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm w_18 = NULL;
  w_18 = t;
  v_18 :
  if(match_cons(w_18, sym_Help_0))
    {
      ATerm y_18 = NULL,a_19 = NULL;
      ATerm c_12;
      c_12 = t;
      {
        ATerm z_18 = NULL;
        t = SSLgetAnnotations(not_null(w_18));
        {
          z_18 = t;
          if(((y_18 != NULL) && (y_18 != z_18)))
            _fail(z_18);
          else
            y_18 = z_18;
        }
      }
      t = c_12;
      {
        ATerm b_19 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(y_18));
        {
          b_19 = t;
          if(((a_19 != NULL) && (a_19 != b_19)))
            _fail(b_19);
          else
            a_19 = b_19;
        }
        t = not_null(a_19);
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
  ATerm d_12 = t;
  int e_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_74(t);
      LocalPopChoice(e_12);
    }
  else
    {
      t = d_12;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm i_19 = NULL,j_19 = NULL,k_19 = NULL;
  i_19 = t;
  g_19 :
  if(match_cons(i_19, sym__2))
    {
      j_19 = ATgetArgument(i_19, 0);
      k_19 = ATgetArgument(i_19, 1);
      t = SSL_table_get(not_null(j_19), not_null(k_19));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm r_19 = NULL,s_19 = NULL,t_19 = NULL,u_19 = NULL;
  r_19 = t;
  q_19 :
  if(match_cons(r_19, sym__3))
    {
      s_19 = ATgetArgument(r_19, 0);
      t_19 = ATgetArgument(r_19, 1);
      u_19 = ATgetArgument(r_19, 2);
      {
        ATerm f_12;
        f_12 = t;
        {
          ATerm y_19 = NULL;
          ATerm z_19 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_19), not_null(t_19));
          {
            ATerm g_12 = t;
            int o_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(o_12);
              }
            else
              {
                t = g_12;
                t = (ATerm) ATempty;
              }
            {
              z_19 = t;
              if(((y_19 != NULL) && (y_19 != z_19)))
                _fail(z_19);
              else
                y_19 = z_19;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(s_19), not_null(t_19), (ATerm) ATinsert(CheckATermList(not_null(y_19)), not_null(u_19)));
            t = table_put_0(t);
          }
        }
        t = f_12;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm p_52 (ATerm))
{
  ATerm d_20 = NULL;
  ATerm e_20 = NULL;
  t = term_z_9;
  {
    t = p_52(t);
    {
      e_20 = t;
      if(((d_20 != NULL) && (d_20 != e_20)))
        _fail(e_20);
      else
        d_20 = e_20;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_s_11, term_u_11, not_null(d_20));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm k_20 = NULL,l_20 = NULL,m_20 = NULL;
  k_20 = t;
  j_20 :
  if(match_string(k_20, "register-usage-info"))
    {
      t = register_usage_1(t, e_0);
    }
  else
    {
      if(((ATgetType(k_20) == AT_LIST) && ((ATermList) k_20 != ATempty)))
        {
          l_20 = ATgetFirst((ATermList) k_20);
          m_20 = (ATerm) ATgetNext((ATermList) k_20);
          {
            ATerm p_20 = NULL;
            ATerm p_12;
            p_12 = t;
            {
              t = not_null(l_20);
              t = a_0(t);
            }
            t = p_12;
            {
              ATerm q_20 = NULL;
              t = term_z_9;
              {
                t = b_0(t);
                {
                  q_20 = t;
                  if(((p_20 != NULL) && (p_20 != q_20)))
                    _fail(q_20);
                  else
                    p_20 = q_20;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(m_20)), not_null(p_20));
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
  ATerm v_2 (ATerm t)
  {
    ATerm d_21 = NULL;
    d_21 = t;
    c_21 :
    if(!(match_string(d_21, "--help")))
      {
        if(!(match_string(d_21, "-h")))
          {
            if(!(match_string(d_21, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm w_2 (ATerm t)
  {
    t = term_q_12;
    return(t);
  }
  ATerm x_2 (ATerm t)
  {
    t = term_t_12;
    return(t);
  }
  t = Option_3(t, v_2, w_2, x_2);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm i_21 = NULL,j_21 = NULL,k_21 = NULL;
  i_21 = t;
  f_21 :
  if(((ATgetType(i_21) == AT_LIST) && ((ATermList) i_21 != ATempty)))
    {
      j_21 = ATgetFirst((ATermList) i_21);
      k_21 = (ATerm) ATgetNext((ATermList) i_21);
      t = (ATerm) ATinsert(CheckATermList(not_null(k_21)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(j_21)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm k_48 (ATerm), ATerm l_48 (ATerm))
{
  ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL;
  w_21 = t;
  v_21 :
  if(((ATgetType(w_21) == AT_LIST) && ((ATermList) w_21 != ATempty)))
    {
      x_21 = ATgetFirst((ATermList) w_21);
      y_21 = (ATerm) ATgetNext((ATermList) w_21);
      {
        ATerm o_22 = NULL,q_22 = NULL;
        ATerm p_22 = NULL;
        t = SSLgetAnnotations(not_null(w_21));
        {
          p_22 = t;
          if(((o_22 != NULL) && (o_22 != p_22)))
            _fail(p_22);
          else
            o_22 = p_22;
        }
        {
          t = not_null(x_21);
          {
            ATerm s_22 = NULL;
            t = k_48(t);
            {
              q_22 = t;
              {
                t = not_null(y_21);
                {
                  ATerm u_22 = NULL;
                  t = l_48(t);
                  {
                    s_22 = t;
                    {
                      ATerm v_22 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(s_22)), not_null(q_22)), not_null(o_22));
                      {
                        v_22 = t;
                        if(((u_22 != NULL) && (u_22 != v_22)))
                          _fail(v_22);
                        else
                          u_22 = v_22;
                      }
                      t = not_null(u_22);
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
  ATerm g_23 = NULL;
  g_23 = t;
  f_23 :
  if(((ATermList) g_23 == ATempty))
    {
      {
        ATerm i_23 = NULL,k_23 = NULL;
        ATerm u_12;
        u_12 = t;
        {
          ATerm j_23 = NULL;
          t = SSLgetAnnotations(not_null(g_23));
          {
            j_23 = t;
            if(((i_23 != NULL) && (i_23 != j_23)))
              _fail(j_23);
            else
              i_23 = j_23;
          }
        }
        t = u_12;
        {
          ATerm l_23 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(i_23));
          {
            l_23 = t;
            if(((k_23 != NULL) && (k_23 != l_23)))
              _fail(l_23);
            else
              k_23 = l_23;
          }
          t = not_null(k_23);
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
  ATerm r_23 = NULL,s_23 = NULL,t_23 = NULL;
  r_23 = t;
  q_23 :
  if(match_cons(r_23, sym__2))
    {
      s_23 = ATgetArgument(r_23, 0);
      t_23 = ATgetArgument(r_23, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_d_5, not_null(s_23), not_null(t_23));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm n_52 (ATerm))
{
  ATerm v_12;
  v_12 = t;
  {
    ATerm y_2 (ATerm t)
    {
      t = term_x_12;
      t = n_52(t);
      return(t);
    }
    t = try_1(t, y_2);
  }
  t = v_12;
  {
    ATerm d_3 (ATerm t)
    {
      ATerm b_24 = NULL;
      ATerm y_12;
      y_12 = t;
      {
        ATerm z_23 = NULL;
        ATerm a_24 = NULL;
        a_24 = t;
        if(((z_23 != NULL) && (z_23 != a_24)))
          _fail(a_24);
        else
          z_23 = a_24;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_i_6, not_null(z_23));
          t = set_config_0(t);
        }
      }
      t = y_12;
      {
        ATerm c_24 = NULL;
        c_24 = t;
        if(((b_24 != NULL) && (b_24 != c_24)))
          _fail(c_24);
        else
          b_24 = c_24;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(b_24));
      }
      return(t);
    }
    ATerm e_3 (ATerm t)
    {
      ATerm a_13 = t;
      int b_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_13 = t;
          int f_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(f_13);
            }
          else
            {
              t = e_13;
              {
                t = n_52(t);
                t = Cons_2(t, _id, e_3);
              }
            }
          LocalPopChoice(b_13);
        }
      else
        {
          t = a_13;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, d_3, e_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm i_24 = NULL,j_24 = NULL,k_24 = NULL;
  ATerm c_14;
  c_14 = t;
  {
    ATerm l_24 = NULL,m_24 = NULL,n_24 = NULL,o_24 = NULL;
    l_24 = t;
    h_24 :
    if(match_cons(l_24, sym__3))
      {
        m_24 = ATgetArgument(l_24, 0);
        n_24 = ATgetArgument(l_24, 1);
        o_24 = ATgetArgument(l_24, 2);
        {
          if(((i_24 != NULL) && (i_24 != m_24)))
            _fail(m_24);
          else
            i_24 = m_24;
          {
            if(((j_24 != NULL) && (j_24 != n_24)))
              _fail(n_24);
            else
              j_24 = n_24;
            {
              if(((k_24 != NULL) && (k_24 != o_24)))
                _fail(o_24);
              else
                k_24 = o_24;
              t = SSL_table_put(not_null(i_24), not_null(j_24), not_null(k_24));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = c_14;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm m_52 (ATerm))
{
  ATerm r_24 = NULL;
  ATerm d_14;
  d_14 = t;
  {
    t = term_e_14;
    t = table_put_0(t);
  }
  t = d_14;
  {
    ATerm f_3 (ATerm t)
    {
      ATerm f_14 = t;
      int g_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_52(t);
          LocalPopChoice(g_14);
        }
      else
        {
          t = f_14;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, f_3);
    {
      ATerm j_3 (ATerm t)
      {
        ATerm h_14 = t;
        int i_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_v_5;
                t = exit_0(t);
              }
            }
            LocalPopChoice(i_14);
          }
        else
          {
            t = h_14;
            {
              ATerm l_3 (ATerm t)
              {
                ATerm o_3 (ATerm t)
                {
                  ATerm s_24 = NULL;
                  s_24 = t;
                  if(((r_24 != NULL) && (r_24 != s_24)))
                    _fail(s_24);
                  else
                    r_24 = s_24;
                  return(t);
                }
                t = Undefined_1(t, o_3);
                return(t);
              }
              t = option_defined_1(t, l_3);
              {
                ATerm k_14;
                k_14 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_g_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_24)), term_l_14));
                  t = printnl_0(t);
                }
                t = k_14;
                {
                  t = system_usage_0(t);
                  {
                    t = term_e_4;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, j_3);
      {
        ATerm m_14;
        m_14 = t;
        {
          t = term_s_11;
          t = table_destroy_0(t);
        }
        t = m_14;
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm y_54 (ATerm), ATerm z_54 (ATerm), ATerm a_55 (ATerm), ATerm b_55 (ATerm))
{
  ATerm p_3 (ATerm t)
  {
    ATerm o_14 = t;
    int p_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_54(t);
        LocalPopChoice(p_14);
      }
    else
      {
        t = o_14;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, p_3);
  {
    t = store_options_0(t);
    {
      t = b_55(t);
      {
        ATerm q_14 = t;
        int s_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, a_55);
            LocalPopChoice(s_14);
          }
        else
          {
            t = q_14;
            {
              ATerm t_14 = t;
              int v_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = input_file_0(t);
                  {
                    t = apply_strategy_1(t, y_54);
                    {
                      t = output_file_0(t);
                      t = report_success_0(t);
                    }
                  }
                  LocalPopChoice(v_14);
                }
              else
                {
                  t = t_14;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm s_54 (ATerm), ATerm t_54 (ATerm), ATerm u_54 (ATerm))
{
  ATerm q_3 (ATerm t)
  {
    ATerm r_3 (ATerm t)
    {
      ATerm a_15;
      a_15 = t;
      {
        ATerm v_24 = NULL;
        ATerm w_24 = NULL;
        t = term_i_6;
        {
          t = get_config_0(t);
          {
            w_24 = t;
            if(((v_24 != NULL) && (v_24 != w_24)))
              _fail(w_24);
            else
              v_24 = w_24;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_g_4, (ATerm) ATinsert(ATempty, not_null(v_24)));
          t = printnl_0(t);
        }
      }
      t = a_15;
      return(t);
    }
    t = if_verbose2_1(t, r_3);
    return(t);
  }
  t = iowrap_4(t, s_54, t_54, u_54, q_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm q_54 (ATerm), ATerm r_54 (ATerm))
{
  t = iowrap_3(t, q_54, r_54, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm n_54 (ATerm))
{
  ATerm s_3 (ATerm t)
  {
    t = _2(t, _id, n_54);
    return(t);
  }
  t = iowrap_2(t, s_3, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, term_size_0);
  return(t);
}
