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
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_F__OK_0;
Symbol sym_R__OK_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Undefined_0;
Symbol sym_Scopes_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
Symbol sym_FILE_1;
Symbol sym_TempFiles_0;
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
  sym_Verbose_1 = ATmakeSymbol("Verbose", 1, ATfalse);
  ATprotectSymbol(sym_Verbose_1);
  sym_Version_0 = ATmakeSymbol("Version", 0, ATfalse);
  ATprotectSymbol(sym_Version_0);
  sym_Output_1 = ATmakeSymbol("Output", 1, ATfalse);
  ATprotectSymbol(sym_Output_1);
  sym_Binary_0 = ATmakeSymbol("Binary", 0, ATfalse);
  ATprotectSymbol(sym_Binary_0);
  sym_Statistics_0 = ATmakeSymbol("Statistics", 0, ATfalse);
  ATprotectSymbol(sym_Statistics_0);
  sym_Help_0 = ATmakeSymbol("Help", 0, ATfalse);
  ATprotectSymbol(sym_Help_0);
  sym_F__OK_0 = ATmakeSymbol("F_OK", 0, ATfalse);
  ATprotectSymbol(sym_F__OK_0);
  sym_R__OK_0 = ATmakeSymbol("R_OK", 0, ATfalse);
  ATprotectSymbol(sym_R__OK_0);
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
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
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
  sym_Tool_1 = ATmakeSymbol("Tool", 1, ATfalse);
  ATprotectSymbol(sym_Tool_1);
  sym_Repository_0 = ATmakeSymbol("Repository", 0, ATfalse);
  ATprotectSymbol(sym_Repository_0);
  sym_Import_0 = ATmakeSymbol("Import", 0, ATfalse);
  ATprotectSymbol(sym_Import_0);
  sym_Imported_1 = ATmakeSymbol("Imported", 1, ATfalse);
  ATprotectSymbol(sym_Imported_1);
  sym_XTC_0 = ATmakeSymbol("XTC", 0, ATfalse);
  ATprotectSymbol(sym_XTC_0);
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_d_19;
ATerm term_y_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_q_17;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_m_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_f_16;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_y_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_u_13;
ATerm term_n_13;
ATerm term_u_12;
ATerm term_g_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_t_10;
ATerm term_m_10;
ATerm term_j_10;
ATerm term_g_10;
ATerm term_w_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_m_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_c_9;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_p_6;
ATerm term_o_6;
void init_constant_terms (void)
{
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_14);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym__3, term_v_17, term_w_17, term_n_15);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("boxenv.sty", 0, ATtrue));
}
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm r_90 (ATerm), ATerm);
ATerm xtc_find_version_loc_0_0 (ATerm);
ATerm filter_1_0 (ATerm i_77 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm c_79 (ATerm), ATerm);
ATerm xtc_import_0_0 (ATerm);
ATerm say_1_0 (ATerm d_81 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm q_90 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm s_90 (ATerm), ATerm);
ATerm HdMember_p__2_0 (ATerm k_73 (ATerm), ATerm l_73 (ATerm), ATerm);
ATerm union_1_0 (ATerm g_73 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm h_77 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_find_file_0_0 (ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm b_77 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm a_68 (ATerm), ATerm b_68 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm a_77 (ATerm), ATerm);
ATerm xtc_temp_files_1_0 (ATerm w_91 (ATerm), ATerm);
ATerm xtc_output_1_0 (ATerm y_91 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm output_options_0_0 (ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm t_75 (ATerm), ATerm u_75 (ATerm), ATerm);
ATerm crush_2_0 (ATerm r_73 (ATerm), ATerm s_73 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm n_90 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm t_63 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm u_61 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm v_61 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm n_69 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm r_82 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm t_69 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm _2_0 (ATerm m_55 (ATerm), ATerm n_55 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm debug_1_0 (ATerm z_80 (ATerm), ATerm);
ATerm map_1_0 (ATerm d_69 (ATerm), ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm try_1_0 (ATerm l_67 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm w_83 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm v_56 (ATerm), ATerm w_56 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm u_83 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm t_83 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm v_63 (ATerm), ATerm w_63 (ATerm), ATerm x_63 (ATerm), ATerm y_63 (ATerm), ATerm);
ATerm option_wrap_2_0 (ATerm z_63 (ATerm), ATerm a_64 (ATerm), ATerm);
ATerm io_gen_latex_boxstyle_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm y_0 = NULL;
  y_0 = t;
  t = SSL_table_keys(y_0);
  {
    ATerm c_0 (ATerm t)
    {
      ATerm z_0 = NULL,a_1 = NULL;
      z_0 = t;
      t = SSL_table_get(y_0, z_0);
      a_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_0, a_1);
      return(t);
    }
    t = map_1_0(c_0, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm r_90 (ATerm), ATerm t)
{
  ATerm l_0 (ATerm t)
  {
    ATerm b_1 = NULL,h_1 = NULL;
    b_1 = t;
    t = term_o_6;
    t = get_config_0_0(t);
    h_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_1, term_p_6);
    t = geq_0_0(t);
    t = b_1;
    t = r_90(t);
    return(t);
  }
  t = try_1_0(l_0, t);
  return(t);
}
ATerm xtc_find_version_loc_0_0 (ATerm t)
{
  ATerm s_1 = NULL,t_1 = NULL,u_1 = NULL;
  if(match_cons(t, sym__2))
    {
      s_1 = ATgetArgument(t, 0);
      t_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, s_1));
  {
    ATerm m_0 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          if((t_1 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          u_1 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1_0(m_0, t);
    t = not_null(u_1);
  }
  return(t);
}
ATerm filter_1_0 (ATerm i_77 (ATerm), ATerm t)
{
  ATerm q_6 = t;
  int r_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(r_6);
    }
  else
    {
      t = q_6;
      {
        ATerm s_6 = t;
        int y_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_0 (ATerm t)
            {
              t = filter_1_0(i_77, t);
              return(t);
            }
            t = Cons_2_0(i_77, n_0, t);
            ;
            LocalPopChoice(y_6);
          }
        else
          {
            t = s_6;
            {
              ATerm d_2 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm a_7 = ATgetFirst((ATermList) t);
                  d_2 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = d_2;
              t = filter_1_0(i_77, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm c_79 (ATerm), ATerm t)
{
  ATerm f_2 (ATerm t)
  {
    ATerm o_0 (ATerm t)
    {
      t = c_79(t);
      t = f_2(t);
      return(t);
    }
    t = try_1_0(o_0, t);
    return(t);
  }
  t = f_2(t);
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm g_2 = NULL;
  g_2 = t;
  {
    ATerm p_0 (ATerm t)
    {
      t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
      t = filter_1_0(xtc_read_0_0, t);
      {
        ATerm b_7 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = b_7;
          }
      }
      return(t);
    }
    t = repeat_1_0(p_0, t);
    t = g_2;
  }
  return(t);
}
ATerm say_1_0 (ATerm d_81 (ATerm), ATerm t)
{
  ATerm j_2 = NULL,e_0 = NULL;
  j_2 = t;
  t = d_81(t);
  e_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, e_0));
  t = j_2;
  return(t);
}
ATerm if_verbose4_1_0 (ATerm q_90 (ATerm), ATerm t)
{
  ATerm q_0 (ATerm t)
  {
    ATerm k_2 = NULL,l_2 = NULL;
    k_2 = t;
    t = term_o_6;
    t = get_config_0_0(t);
    l_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_2, term_c_7);
    t = geq_0_0(t);
    t = k_2;
    t = q_90(t);
    return(t);
  }
  t = try_1_0(q_0, t);
  return(t);
}
ATerm if_verbose6_1_0 (ATerm s_90 (ATerm), ATerm t)
{
  ATerm r_0 (ATerm t)
  {
    ATerm n_2 = NULL,o_2 = NULL;
    n_2 = t;
    t = term_o_6;
    t = get_config_0_0(t);
    o_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_2, term_d_7);
    t = geq_0_0(t);
    t = n_2;
    t = s_90(t);
    return(t);
  }
  t = try_1_0(r_0, t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm k_73 (ATerm), ATerm l_73 (ATerm), ATerm t)
{
  ATerm w_2 = NULL,x_2 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_2 = ATgetFirst((ATermList) t);
      x_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = l_73(t);
  {
    ATerm s_0 (ATerm t)
    {
      ATerm y_2 = NULL;
      y_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_2, y_2);
      t = k_73(t);
      return(t);
    }
    t = fetch_1_0(s_0, t);
    t = x_2;
  }
  return(t);
}
ATerm union_1_0 (ATerm g_73 (ATerm), ATerm t)
{
  ATerm z_2 = NULL,b_3 = NULL;
  if(match_cons(t, sym__2))
    {
      b_3 = ATgetArgument(t, 0);
      z_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_3;
  {
    ATerm e_3 (ATerm t)
    {
      ATerm e_7 = t;
      int f_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = z_2;
          ;
          LocalPopChoice(f_7);
        }
      else
        {
          t = e_7;
          {
            ATerm g_7 = t;
            int h_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_0 (ATerm t)
                {
                  t = z_2;
                  return(t);
                }
                t = HdMember_p__2_0(g_73, t_0, t);
                t = e_3(t);
                ;
                LocalPopChoice(h_7);
              }
            else
              {
                t = g_7;
                t = Cons_2_0(_id, e_3, t);
              }
          }
        }
      return(t);
    }
    t = e_3(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  ATerm u_0 (ATerm t)
  {
    ATerm f_3 = NULL;
    if(match_cons(t, sym__2))
      {
        f_3 = ATgetArgument(t, 0);
        if((f_3 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = union_1_0(u_0, t);
  return(t);
}
ATerm table_append_0_0 (ATerm t)
{
  ATerm j_3 = NULL,k_3 = NULL,l_3 = NULL,n_3 = NULL,o_3 = NULL;
  if(match_cons(t, sym__3))
    {
      j_3 = ATgetArgument(t, 0);
      k_3 = ATgetArgument(t, 1);
      l_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_3, k_3);
  {
    ATerm i_7 = t;
    int j_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_7 = ATgetArgument(t, 0);
            ATerm l_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(j_3, k_3);
        ;
        LocalPopChoice(j_7);
      }
    else
      {
        t = i_7;
        t = (ATerm) ATempty;
      }
    n_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_3, l_3);
    t = union_0_0(t);
    o_3 = t;
    t = SSL_table_put(j_3, k_3, o_3);
    t = (ATerm) ATmakeAppl(sym__3, j_3, k_3, l_3);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm h_77 (ATerm), ATerm t)
{
  ATerm p_3 = NULL,q_3 = NULL;
  if(match_cons(t, sym__2))
    {
      q_3 = ATgetArgument(t, 0);
      p_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_3;
  {
    ATerm v_0 (ATerm t)
    {
      ATerm r_3 = NULL,s_3 = NULL;
      if(match_cons(t, sym__2))
        {
          r_3 = ATgetArgument(t, 0);
          s_3 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, q_3, r_3, s_3);
      t = h_77(t);
      return(t);
    }
    t = map_1_0(v_0, t);
  }
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm a_5 (ATerm o_4, ATerm t)
  {
    t = SSL_fclose(o_4);
    return(t);
  }
  ATerm v_4 = NULL,w_4 = NULL;
  w_4 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_4 = ATgetArgument(t, 0);
      {
        ATerm o_7 = t;
        int p_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(v_4);
            ;
            LocalPopChoice(p_7);
          }
        else
          {
            t = o_7;
            t = a_5(w_4, t);
          }
      }
    }
  else
    {
      t = a_5(w_4, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_5 = NULL;
  t = SSL_stdin_stream();
  e_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_5);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_5 = NULL;
  t = SSL_stdout_stream();
  f_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_5);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm g_5 = NULL;
  t = SSL_stderr_stream();
  g_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_5);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm s_5 = NULL;
  s_5 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = s_5;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = s_5;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = s_5;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_7 = ATgetArgument(t, 0);
      ATerm r_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_7 = t;
    int w_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_1 = NULL,k_1 = NULL;
        j_1 = t;
        t = SSL_explode_term(j_1);
        if(match_cons(t, sym__2))
          {
            ATerm x_7 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) x_7) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm y_7 = ATgetArgument(t, 1);
              if(((ATgetType(y_7) == AT_LIST) && !(ATisEmpty(y_7))))
                {
                  k_1 = ATgetFirst((ATermList) y_7);
                  {
                    ATerm z_7 = (ATerm) ATgetNext((ATermList) y_7);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = k_1;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(w_7);
      }
    else
      {
        t = s_7;
        {
          ATerm a_8 = t;
          int g_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_5 = NULL,y_5 = NULL,z_5 = NULL;
              ATerm w_0 (ATerm t)
              {
                ATerm a_6 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    a_6 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = a_6;
                return(t);
              }
              t = _2_0(w_0, _id, t);
              if(match_cons(t, sym__2))
                {
                  x_5 = ATgetArgument(t, 0);
                  y_5 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(x_5, y_5);
              z_5 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, z_5);
              ;
              LocalPopChoice(g_8);
            }
          else
            {
              t = a_8;
              {
                ATerm b_6 = NULL,c_6 = NULL,g_6 = NULL;
                ATerm x_0 (ATerm t)
                {
                  ATerm h_6 = NULL;
                  h_6 = t;
                  t = SSL_is_string(h_6);
                  return(t);
                }
                t = _2_0(x_0, _id, t);
                if(match_cons(t, sym__2))
                  {
                    b_6 = ATgetArgument(t, 0);
                    c_6 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(b_6, c_6);
                g_6 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, g_6);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm j_6 = NULL,k_6 = NULL,l_6 = NULL;
  ATerm h_8 = t;
  int k_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_6 = NULL;
      m_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_6, term_m_8);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(k_8);
    }
  else
    {
      t = h_8;
      {
        ATerm c_1 (ATerm t)
        {
          t = term_n_8;
          return(t);
        }
        t = debug_1_0(c_1, t);
        _fail(t);
      }
    }
  j_6 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(l_6);
  k_6 = t;
  t = j_6;
  t = fclose_0_0(t);
  t = k_6;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm o_8 = t;
  int p_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_1 = NULL;
      m_1 = t;
      t = SSL_access(m_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
      LocalPopChoice(p_8);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = o_8;
      {
        ATerm t_8 = t;
        int x_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_9 = t;
            if((PushChoice() == 0))
              {
                ATerm o_1 = NULL;
                o_1 = t;
                t = SSL_access(o_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
                PopChoice();
                _fail(t);
              }
            else
              {
                t = b_9;
              }
            {
              ATerm d_1 (ATerm t)
              {
                t = term_c_9;
                return(t);
              }
              t = debug_1_0(d_1, t);
            }
            ;
            LocalPopChoice(x_8);
          }
        else
          {
            t = t_8;
            {
              ATerm e_1 (ATerm t)
              {
                t = term_i_9;
                return(t);
              }
              t = debug_1_0(e_1, t);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm t_6 = NULL,u_6 = NULL,v_6 = NULL;
  t_6 = t;
  {
    ATerm f_1 (ATerm t)
    {
      ATerm g_1 (ATerm t)
      {
        t = term_j_9;
        return(t);
      }
      t = debug_1_0(g_1, t);
      return(t);
    }
    t = if_verbose5_1_0(f_1, t);
    {
      ATerm k_9 = t;
      if((PushChoice() == 0))
        {
          t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, t_6));
          PopChoice();
          _fail(t);
        }
      else
        {
          t = k_9;
        }
      u_6 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, t_6));
      t = u_6;
      {
        ATerm i_1 (ATerm t)
        {
          ATerm l_1 (ATerm t)
          {
            t = term_m_9;
            return(t);
          }
          t = debug_1_0(l_1, t);
          return(t);
        }
        t = if_verbose4_1_0(i_1, t);
        t = read_repository_file_0_0(t);
        {
          ATerm n_1 (ATerm t)
          {
            ATerm p_1 (ATerm t)
            {
              t = term_s_9;
              return(t);
            }
            t = say_1_0(p_1, t);
            return(t);
          }
          t = if_verbose6_1_0(n_1, t);
          v_6 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_t_9, v_6);
          t = table_putlist_1_0(table_append_0_0, t);
          {
            ATerm q_1 (ATerm t)
            {
              ATerm r_1 (ATerm t)
              {
                t = term_w_9;
                return(t);
              }
              t = say_1_0(r_1, t);
              return(t);
            }
            t = if_verbose6_1_0(q_1, t);
            t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, t_6), (ATerm) ATempty);
            t = (ATerm) ATmakeAppl(sym__3, term_t_9, (ATerm)ATmakeAppl(sym_Imported_1, t_6), (ATerm) ATempty);
            {
              ATerm v_1 (ATerm t)
              {
                ATerm w_1 (ATerm t)
                {
                  t = term_s_9;
                  return(t);
                }
                t = say_1_0(w_1, t);
                return(t);
              }
              t = if_verbose4_1_0(v_1, t);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm x_9 = t;
  int y_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_10;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(y_9);
    }
  else
    {
      t = x_9;
      {
        ATerm h_10 = t;
        int i_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_getenv((ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue)));
            ;
            LocalPopChoice(i_10);
          }
        else
          {
            t = h_10;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm w_6 = NULL;
  ATerm z_1 (ATerm t)
  {
    ATerm a_2 (ATerm t)
    {
      t = term_j_10;
      return(t);
    }
    t = debug_1_0(a_2, t);
    return(t);
  }
  t = if_verbose5_1_0(z_1, t);
  w_6 = t;
  {
    ATerm k_10 = t;
    int l_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Repository_0));
        ;
        LocalPopChoice(l_10);
      }
    else
      {
        t = k_10;
        t = xtc_location_0_0(t);
        t = xtc_read_0_0(t);
        t = xtc_import_0_0(t);
      }
    t = w_6;
    {
      ATerm b_2 (ATerm t)
      {
        ATerm c_2 (ATerm t)
        {
          t = term_m_10;
          return(t);
        }
        t = debug_1_0(c_2, t);
        return(t);
      }
      t = if_verbose5_1_0(b_2, t);
    }
  }
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm q_10 = t;
  int r_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_2 (ATerm t)
      {
        ATerm h_2 (ATerm t)
        {
          t = term_t_10;
          return(t);
        }
        t = debug_1_0(h_2, t);
        return(t);
      }
      t = if_verbose5_1_0(e_2, t);
      t = xtc_load_0_0(t);
      {
        ATerm u_10 = t;
        int w_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_find_version_loc_0_0(t);
            ;
            LocalPopChoice(w_10);
          }
        else
          {
            t = u_10;
            {
              ATerm x_1 = NULL,y_1 = NULL;
              x_1 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, x_1));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm x_10 = ATgetFirst((ATermList) t);
                  if(match_cons(x_10, sym__2))
                    {
                      ATerm b_11 = ATgetArgument(x_10, 0);
                      y_1 = ATgetArgument(x_10, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm a_11 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = y_1;
            }
          }
        {
          ATerm i_2 (ATerm t)
          {
            ATerm m_2 (ATerm t)
            {
              t = term_t_10;
              return(t);
            }
            t = debug_1_0(m_2, t);
            return(t);
          }
          t = if_verbose5_1_0(i_2, t);
        }
      }
      ;
      LocalPopChoice(r_10);
    }
  else
    {
      t = q_10;
      {
        ATerm x_6 = NULL;
        x_6 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), x_6), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_11), x_6), term_c_11);
        {
          ATerm p_2 (ATerm t)
          {
            t = term_t_9;
            t = table_getlist_0_0(t);
            {
              ATerm q_2 (ATerm t)
              {
                t = term_g_11;
                return(t);
              }
              t = debug_1_0(q_2, t);
            }
            return(t);
          }
          t = if_verbose5_1_0(p_2, t);
          _fail(t);
        }
      }
    }
  return(t);
}
ATerm xtc_find_file_0_0 (ATerm t)
{
  ATerm z_6 = NULL;
  t = xtc_find_0_0(t);
  z_6 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, z_6);
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm m_7 = NULL,n_7 = NULL;
  m_7 = t;
  if(match_cons(t, sym_FILE_1))
    {
      n_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm h_11 = t;
    int i_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_2 = NULL;
        t = m_7;
        t = k_0(t);
        s_2 = t;
        {
          ATerm p_11 = t;
          int q_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(q_11);
            }
          else
            {
              t = p_11;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(n_7, s_2);
          t = (ATerm) ATmakeAppl(sym_FILE_1, n_7);
        }
        ;
        LocalPopChoice(i_11);
      }
    else
      {
        t = h_11;
        {
          ATerm r_11 = t;
          int x_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_3 = NULL;
              t = m_7;
              t = k_0(t);
              d_3 = t;
              {
                ATerm y_11 = t;
                if((PushChoice() == 0))
                  {
                    ATerm z_11 = t;
                    int b_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(b_12);
                      }
                    else
                      {
                        t = z_11;
                        {
                          ATerm e_12 = t;
                          int f_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(f_12);
                            }
                          else
                            {
                              t = e_12;
                              {
                                ATerm h_3 = NULL;
                                h_3 = t;
                                if((n_7 != t))
                                  {
                                    _fail(t);
                                  }
                                t = h_3;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = y_11;
                  }
                t = SSL_copy(n_7, d_3);
                t = (ATerm) ATmakeAppl(sym_FILE_1, n_7);
              }
              ;
              LocalPopChoice(x_11);
            }
          else
            {
              t = r_11;
              t = m_7;
              t = k_0(t);
              if((n_7 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, n_7);
            }
        }
      }
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm t_7 = NULL,u_7 = NULL,v_7 = NULL;
  if(match_cons(t, sym__2))
    {
      t_7 = ATgetArgument(t, 0);
      u_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_12 = t;
    int h_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_3 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm i_12 = ATgetArgument(t, 0);
            ATerm j_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(t_7, u_7);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm k_12 = ATgetFirst((ATermList) t);
            u_3 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = u_3;
        ;
        LocalPopChoice(h_12);
      }
    else
      {
        t = g_12;
        t = (ATerm) ATempty;
      }
    v_7 = t;
    t = SSL_table_put(t_7, u_7, v_7);
    t = (ATerm) ATmakeAppl(sym__2, t_7, u_7);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm b_77 (ATerm), ATerm t)
{
  ATerm b_8 = NULL,c_8 = NULL,d_8 = NULL,e_8 = NULL;
  b_8 = t;
  t = b_77(t);
  c_8 = t;
  {
    ATerm m_12 = t;
    int o_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(c_8, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(o_12);
      }
    else
      {
        t = m_12;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_8 = ATgetFirst((ATermList) t);
        d_8 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(c_8, (ATerm)ATmakeAppl(sym_Scopes_0), d_8);
    t = e_8;
    {
      ATerm r_2 (ATerm t)
      {
        ATerm f_8 = NULL;
        f_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_8, f_8);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(r_2, t);
      t = b_8;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm a_68 (ATerm), ATerm b_68 (ATerm), ATerm t)
{
  ATerm p_12 = t;
  int q_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_68(t);
      t = b_68(t);
      ;
      LocalPopChoice(q_12);
    }
  else
    {
      t = p_12;
      t = b_68(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm a_77 (ATerm), ATerm t)
{
  ATerm i_8 = NULL,j_8 = NULL,l_8 = NULL;
  i_8 = t;
  t = a_77(t);
  j_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_8, term_u_12);
  {
    ATerm d_13 = t;
    int e_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_13 = ATgetArgument(t, 0);
            ATerm m_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(j_8, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(e_13);
      }
    else
      {
        t = d_13;
        t = (ATerm) ATempty;
      }
    l_8 = t;
    t = SSL_table_put(j_8, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(l_8), (ATerm) ATempty));
    t = i_8;
  }
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm w_91 (ATerm), ATerm t)
{
  ATerm q_8 = NULL;
  ATerm t_2 (ATerm t)
  {
    t = term_n_13;
    return(t);
  }
  t = begin_scope_1_0(t_2, t);
  {
    ATerm u_2 (ATerm t)
    {
      ATerm r_8 = NULL;
      r_8 = t;
      {
        ATerm o_13 = t;
        int p_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(p_13);
          }
        else
          {
            t = o_13;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_8 = ATgetFirst((ATermList) t);
            {
              ATerm q_13 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = q_8;
        {
          ATerm v_2 (ATerm t)
          {
            ATerm a_3 (ATerm t)
            {
              ATerm s_8 = NULL;
              s_8 = t;
              t = SSL_remove(s_8);
              return(t);
            }
            t = try_1_0(a_3, t);
            return(t);
          }
          t = map_1_0(v_2, t);
          t = r_8;
          {
            ATerm c_3 (ATerm t)
            {
              t = term_n_13;
              return(t);
            }
            t = end_scope_1_0(c_3, t);
          }
        }
      }
      return(t);
    }
    t = restore_always_2_0(w_91, u_2, t);
  }
  return(t);
}
ATerm xtc_output_1_0 (ATerm y_91 (ATerm), ATerm t)
{
  ATerm g_3 (ATerm t)
  {
    t = y_91(t);
    {
      ATerm i_3 (ATerm t)
      {
        ATerm s_13 = t;
        int t_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_u_13;
            t = get_config_0_0(t);
            ;
            LocalPopChoice(t_13);
          }
        else
          {
            t = s_13;
            t = term_y_13;
          }
        return(t);
      }
      t = copy_to_1_0(i_3, t);
    }
    return(t);
  }
  t = xtc_temp_files_1_0(g_3, t);
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm m_3 (ATerm t)
  {
    ATerm u_8 = NULL;
    u_8 = t;
    if(match_string(t, "-k"))
      {
        t = u_8;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = u_8;
      }
    return(t);
  }
  ATerm t_3 (ATerm t)
  {
    ATerm v_8 = NULL,w_8 = NULL;
    v_8 = t;
    t = SSL_string_to_int(v_8);
    w_8 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), w_8);
    t = v_8;
    return(t);
  }
  ATerm v_3 (ATerm t)
  {
    t = term_z_13;
    return(t);
  }
  t = ArgOption_3_0(m_3, t_3, v_3, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm a_14 = t;
  int d_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_3 (ATerm t)
      {
        ATerm y_8 = NULL;
        y_8 = t;
        if(match_string(t, "-S"))
          {
            t = y_8;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = y_8;
          }
        return(t);
      }
      ATerm x_3 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_f_14;
        return(t);
      }
      ATerm y_3 (ATerm t)
      {
        t = term_g_14;
        return(t);
      }
      t = Option_3_0(w_3, x_3, y_3, t);
      ;
      LocalPopChoice(d_14);
    }
  else
    {
      t = a_14;
      {
        ATerm j_14 = t;
        int k_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_3 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm a_4 (ATerm t)
            {
              ATerm z_8 = NULL,a_9 = NULL;
              z_8 = t;
              t = SSL_string_to_int(z_8);
              a_9 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), a_9);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, z_8);
              return(t);
            }
            ATerm b_4 (ATerm t)
            {
              t = term_p_14;
              return(t);
            }
            t = ArgOption_3_0(z_3, a_4, b_4, t);
            ;
            LocalPopChoice(k_14);
          }
        else
          {
            t = j_14;
            {
              ATerm c_4 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm d_4 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_q_14;
                return(t);
              }
              ATerm e_4 (ATerm t)
              {
                t = term_r_14;
                return(t);
              }
              t = Option_3_0(c_4, d_4, e_4, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm s_14 = t;
  int u_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(u_14);
    }
  else
    {
      t = s_14;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm d_9 = NULL,e_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL;
  d_9 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = d_9;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm l_9 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_9 = ATgetFirst((ATermList) t);
          f_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_9;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_9 = ATgetFirst((ATermList) t);
          h_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_9;
      t = h_0(t);
      t = g_9;
      t = i_0(t);
      l_9 = t;
      t = (ATerm) ATinsert(CheckATermList(h_9), l_9);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm f_4 (ATerm t)
  {
    ATerm n_9 = NULL;
    n_9 = t;
    if(match_string(t, "-o"))
      {
        t = n_9;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = n_9;
      }
    return(t);
  }
  ATerm g_4 (ATerm t)
  {
    ATerm o_9 = NULL;
    o_9 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), o_9);
    t = (ATerm) ATmakeAppl(sym_Output_1, o_9);
    return(t);
  }
  ATerm h_4 (ATerm t)
  {
    t = term_y_14;
    return(t);
  }
  t = ArgOption_3_0(f_4, g_4, h_4, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm z_14 = t;
  int b_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(b_15);
    }
  else
    {
      t = z_14;
      {
        ATerm i_4 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm j_4 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_j_15;
          return(t);
        }
        ATerm k_4 (ATerm t)
        {
          t = term_k_15;
          return(t);
        }
        t = Option_3_0(i_4, j_4, k_4, t);
      }
    }
  return(t);
}
ATerm output_options_0_0 (ATerm t)
{
  ATerm l_15 = t;
  int m_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = aterm_output_option_0_0(t);
      ;
      LocalPopChoice(m_15);
    }
  else
    {
      t = l_15;
      t = general_options_0_0(t);
    }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm p_9 = NULL,q_9 = NULL;
  p_9 = t;
  t = term_n_15;
  t = whoami_0_0(t);
  q_9 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), q_9), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = p_9;
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm r_9 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_15;
  t = whoami_0_0(t);
  r_9 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), r_9));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_o_15;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm t_75 (ATerm), ATerm u_75 (ATerm), ATerm t)
{
  ATerm r_15 = t;
  int u_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = t_75(t);
      ;
      LocalPopChoice(u_15);
    }
  else
    {
      t = r_15;
      {
        ATerm u_9 = NULL,v_9 = NULL,z_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_9 = ATgetFirst((ATermList) t);
            v_9 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_9;
        t = foldr_2_0(t_75, u_75, t);
        z_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_9, z_9);
        t = u_75(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm r_73 (ATerm), ATerm s_73 (ATerm), ATerm t)
{
  ATerm a_10 = NULL,b_10 = NULL;
  a_10 = t;
  t = SSL_explode_term(a_10);
  if(match_cons(t, sym__2))
    {
      ATerm v_15 = ATgetArgument(t, 0);
      b_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_10;
  t = foldr_2_0(r_73, s_73, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm c_10 = NULL;
  t = times_0_0(t);
  {
    ATerm l_4 (ATerm t)
    {
      t = term_e_14;
      return(t);
    }
    ATerm m_4 (ATerm t)
    {
      ATerm d_10 = NULL,e_10 = NULL;
      if(match_cons(t, sym__2))
        {
          d_10 = ATgetArgument(t, 0);
          e_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm w_15 = t;
        int x_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(d_10, e_10);
            ;
            LocalPopChoice(x_15);
          }
        else
          {
            t = w_15;
            t = SSL_addr(d_10, e_10);
          }
      }
      return(t);
    }
    t = crush_2_0(l_4, m_4, t);
    c_10 = t;
    t = SSL_TicksToSeconds(c_10);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm n_10 = NULL,o_10 = NULL,p_10 = NULL;
  n_10 = t;
  if(match_cons(t, sym__2))
    {
      o_10 = ATgetArgument(t, 0);
      p_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_15 = t;
    int c_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_10;
        if((o_10 != t))
          {
            _fail(t);
          }
        t = n_10;
        ;
        LocalPopChoice(c_16);
      }
    else
      {
        t = y_15;
        t = n_10;
        {
          ATerm d_16 = t;
          int e_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(o_10, p_10);
              ;
              LocalPopChoice(e_16);
            }
          else
            {
              t = d_16;
              t = SSL_gtr(o_10, p_10);
            }
          t = (ATerm) ATmakeAppl(sym__2, o_10, p_10);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm n_90 (ATerm), ATerm t)
{
  ATerm n_4 (ATerm t)
  {
    ATerm s_10 = NULL,v_10 = NULL;
    s_10 = t;
    t = term_o_6;
    t = get_config_0_0(t);
    v_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_10, term_f_16);
    t = geq_0_0(t);
    t = s_10;
    t = n_90(t);
    return(t);
  }
  t = try_1_0(n_4, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm p_4 (ATerm t)
  {
    ATerm y_10 = NULL,z_10 = NULL;
    t = run_time_0_0(t);
    y_10 = t;
    t = term_n_15;
    t = whoami_0_0(t);
    z_10 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), y_10), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), z_10));
    t = (ATerm) ATmakeAppl(sym__2, term_h_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_16), y_10), term_i_16), z_10));
    return(t);
  }
  t = if_verbose1_1_0(p_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm t_63 (ATerm), ATerm t)
{
  ATerm k_16 = t;
  int l_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_16;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(l_16);
    }
  else
    {
      t = k_16;
      {
        ATerm q_4 (ATerm t)
        {
          ATerm n_16 = t;
          int o_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(o_16);
            }
          else
            {
              t = n_16;
              {
                ATerm p_16 = t;
                int q_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(q_16);
                  }
                else
                  {
                    t = p_16;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(q_4, t);
      }
    }
  t = t_63(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm e_11 = NULL,f_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_11 = ATgetFirst((ATermList) t);
      f_11 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_11 = NULL,k_11 = NULL;
        t = f_11;
        t = g_0(t);
        j_11 = t;
        t = e_11;
        t = f_0(t);
        k_11 = t;
        t = f_11;
        {
          ATerm r_4 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(j_11), k_11);
            return(t);
          }
          t = reverse_acc_2_0(f_0, r_4, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_n_15;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm s_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, s_4, t);
  return(t);
}
ATerm Program_1_0 (ATerm u_61 (ATerm), ATerm t)
{
  ATerm l_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL;
  o_11 = t;
  if(match_cons(t, sym_Program_1))
    {
      m_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_11);
  l_11 = t;
  t = m_11;
  t = u_61(t);
  n_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, n_11), l_11);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm r_16 = t;
  int s_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_15;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(s_16);
    }
  else
    {
      t = r_16;
      {
        ATerm t_4 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(t_4, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_t_16;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm u_4 (ATerm t)
    {
      ATerm s_11 = NULL;
      s_11 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, s_11), term_u_16);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(u_4, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm v_61 (ATerm), ATerm t)
{
  ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL;
  w_11 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      u_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_11);
  t_11 = t;
  t = u_11;
  t = v_61(t);
  v_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, v_11), t_11);
  return(t);
}
ATerm fetch_1_0 (ATerm n_69 (ATerm), ATerm t)
{
  ATerm a_12 (ATerm t)
  {
    ATerm v_16 = t;
    int w_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(n_69, _id, t);
        ;
        LocalPopChoice(w_16);
      }
    else
      {
        t = v_16;
        t = Cons_2_0(_id, a_12, t);
      }
    return(t);
  }
  t = a_12(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm r_82 (ATerm), ATerm t)
{
  t = fetch_1_0(r_82, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm c_12 = NULL,d_12 = NULL;
  c_12 = t;
  {
    ATerm x_16 = t;
    int y_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = c_12;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm z_16 = ATgetFirst((ATermList) t);
                ATerm a_17 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = c_12;
          }
        ;
        LocalPopChoice(y_16);
      }
    else
      {
        t = x_16;
        t = (ATerm) ATinsert(ATempty, c_12);
      }
    d_12 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), d_12);
    t = c_12;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_o_15;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm b_17 = t;
  int c_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(c_17);
    }
  else
    {
      t = b_17;
      {
        ATerm l_12 = NULL,n_12 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_12 = ATgetFirst((ATermList) t);
            n_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = l_12;
        {
          ATerm x_4 (ATerm t)
          {
            t = n_12;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(x_4, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm r_12 = NULL,s_12 = NULL;
  r_12 = t;
  t = SSL_explode_term(r_12);
  if(match_cons(t, sym__2))
    {
      ATerm d_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      s_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_12;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm t_69 (ATerm), ATerm t)
{
  ATerm t_12 (ATerm t)
  {
    ATerm e_17 = t;
    int f_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, t_12, t);
        ;
        LocalPopChoice(f_17);
      }
    else
      {
        t = e_17;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = t_69(t);
      }
    return(t);
  }
  t = t_12(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm v_12 = NULL,w_12 = NULL;
  if(match_cons(t, sym__2))
    {
      w_12 = ATgetArgument(t, 0);
      v_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_12;
  {
    ATerm y_4 (ATerm t)
    {
      t = v_12;
      return(t);
    }
    t = at_end_1_0(y_4, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm g_17 = t;
  int h_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(h_17);
    }
  else
    {
      t = g_17;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm _2_0 (ATerm m_55 (ATerm), ATerm n_55 (ATerm), ATerm t)
{
  ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL;
  c_13 = t;
  if(match_cons(t, sym__2))
    {
      y_12 = ATgetArgument(t, 0);
      z_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_13);
  x_12 = t;
  t = y_12;
  t = m_55(t);
  a_13 = t;
  t = z_12;
  t = n_55(t);
  b_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, a_13, b_13), x_12);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm g_13 = NULL;
  ATerm z_4 (ATerm t)
  {
    ATerm h_13 = NULL;
    h_13 = t;
    t = SSL_explode_string(h_13);
    return(t);
  }
  ATerm b_5 (ATerm t)
  {
    ATerm i_13 = NULL;
    i_13 = t;
    t = SSL_explode_string(i_13);
    return(t);
  }
  t = _2_0(z_4, b_5, t);
  t = conc_0_0(t);
  g_13 = t;
  t = SSL_implode_string(g_13);
  return(t);
}
ATerm debug_1_0 (ATerm z_80 (ATerm), ATerm t)
{
  ATerm j_13 = NULL,k_13 = NULL;
  j_13 = t;
  t = z_80(t);
  k_13 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, j_13), k_13));
  t = j_13;
  return(t);
}
ATerm map_1_0 (ATerm d_69 (ATerm), ATerm t)
{
  ATerm l_13 (ATerm t)
  {
    ATerm i_17 = t;
    int j_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(j_17);
      }
    else
      {
        t = i_17;
        t = Cons_2_0(d_69, l_13, t);
      }
    return(t);
  }
  t = l_13(t);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm k_17 = t;
  int l_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_13 = NULL;
      r_13 = t;
      t = SSL_is_string(r_13);
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
            ATerm c_5 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(c_5, t);
            ;
            LocalPopChoice(n_17);
          }
        else
          {
            t = m_17;
            {
              ATerm v_13 = NULL,w_13 = NULL,x_13 = NULL;
              v_13 = t;
              if(match_cons(t, sym_Path_1))
                {
                  w_13 = ATgetArgument(t, 0);
                  t = w_13;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      w_13 = ATgetArgument(t, 0);
                      t = w_13;
                      {
                        ATerm o_17 = t;
                        int p_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(p_17);
                          }
                        else
                          {
                            t = o_17;
                            {
                              ATerm d_5 (ATerm t)
                              {
                                t = term_q_17;
                                return(t);
                              }
                              t = debug_1_0(d_5, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm b_14 = NULL,c_14 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          w_13 = ATgetArgument(t, 0);
                          x_13 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = w_13;
                      t = eval_config_0_0(t);
                      b_14 = t;
                      t = x_13;
                      t = eval_config_0_0(t);
                      c_14 = t;
                      t = (ATerm) ATmakeAppl(sym__2, b_14, c_14);
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
  ATerm h_14 = NULL;
  h_14 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), h_14);
  {
    ATerm h_5 (ATerm t)
    {
      ATerm i_14 = NULL;
      t = eval_config_0_0(t);
      i_14 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), h_14, i_14);
      t = i_14;
      return(t);
    }
    t = try_1_0(h_5, t);
  }
  return(t);
}
ATerm try_1_0 (ATerm l_67 (ATerm), ATerm t)
{
  ATerm r_17 = t;
  int s_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_67(t);
      ;
      LocalPopChoice(s_17);
    }
  else
    {
      t = r_17;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm t_17 = t;
  int u_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_5 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm j_5 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_x_17;
        return(t);
      }
      ATerm k_5 (ATerm t)
      {
        t = term_y_17;
        return(t);
      }
      t = Option_3_0(i_5, j_5, k_5, t);
      ;
      LocalPopChoice(u_17);
    }
  else
    {
      t = t_17;
      {
        ATerm l_5 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm m_5 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_z_17;
          return(t);
        }
        ATerm n_5 (ATerm t)
        {
          t = term_a_18;
          return(t);
        }
        t = Option_3_0(l_5, m_5, n_5, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm l_14 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL;
  if(match_cons(t, sym__3))
    {
      l_14 = ATgetArgument(t, 0);
      m_14 = ATgetArgument(t, 1);
      n_14 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_14, m_14);
  {
    ATerm b_18 = t;
    int c_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_18 = ATgetArgument(t, 0);
            ATerm e_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(l_14, m_14);
        ;
        LocalPopChoice(c_18);
      }
    else
      {
        t = b_18;
        t = (ATerm) ATempty;
      }
    o_14 = t;
    t = SSL_table_put(l_14, m_14, (ATerm) ATinsert(CheckATermList(o_14), n_14));
    t = (ATerm) ATmakeAppl(sym__3, l_14, m_14, n_14);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm w_83 (ATerm), ATerm t)
{
  ATerm t_14 = NULL;
  t = term_n_15;
  t = w_83(t);
  t_14 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_f_18, term_g_18, t_14);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm v_14 = NULL,w_14 = NULL,x_14 = NULL;
  v_14 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = v_14;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm a_15 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_14 = ATgetFirst((ATermList) t);
          x_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_14;
      t = a_0(t);
      t = term_n_15;
      t = b_0(t);
      a_15 = t;
      t = (ATerm) ATinsert(CheckATermList(x_14), a_15);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm o_5 (ATerm t)
  {
    ATerm c_15 = NULL;
    c_15 = t;
    if(match_string(t, "--help"))
      {
        t = c_15;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = c_15;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = c_15;
          }
      }
    return(t);
  }
  ATerm p_5 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_h_18;
    return(t);
  }
  ATerm q_5 (ATerm t)
  {
    t = term_i_18;
    return(t);
  }
  t = Option_3_0(o_5, p_5, q_5, t);
  return(t);
}
ATerm Cons_2_0 (ATerm v_56 (ATerm), ATerm w_56 (ATerm), ATerm t)
{
  ATerm d_15 = NULL,e_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL;
  i_15 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_15 = ATgetFirst((ATermList) t);
      f_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_15);
  d_15 = t;
  t = e_15;
  t = v_56(t);
  g_15 = t;
  t = f_15;
  t = w_56(t);
  h_15 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(h_15), g_15), d_15);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm u_83 (ATerm), ATerm t)
{
  ATerm p_15 = NULL;
  p_15 = t;
  {
    ATerm r_5 (ATerm t)
    {
      t = term_j_18;
      t = u_83(t);
      return(t);
    }
    t = try_1_0(r_5, t);
    t = p_15;
    {
      ATerm t_5 (ATerm t)
      {
        ATerm q_15 = NULL;
        q_15 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), q_15);
        t = (ATerm) ATmakeAppl(sym_Program_1, q_15);
        return(t);
      }
      ATerm u_5 (ATerm t)
      {
        ATerm k_18 = t;
        int l_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_18 = t;
            int n_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(n_18);
              }
            else
              {
                t = m_18;
                t = u_83(t);
                t = Cons_2_0(_id, u_5, t);
              }
            ;
            LocalPopChoice(l_18);
          }
        else
          {
            t = k_18;
            {
              ATerm s_15 = NULL,t_15 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  s_15 = ATgetFirst((ATermList) t);
                  t_15 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(t_15), (ATerm) ATmakeAppl(sym_Undefined_1, s_15));
            }
          }
        return(t);
      }
      t = Cons_2_0(t_5, u_5, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm t_83 (ATerm), ATerm t)
{
  ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL;
  z_15 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = z_15;
  {
    ATerm v_5 (ATerm t)
    {
      ATerm o_18 = t;
      int p_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_83(t);
          ;
          LocalPopChoice(p_18);
        }
      else
        {
          t = o_18;
          {
            ATerm q_18 = t;
            int r_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(r_18);
              }
            else
              {
                t = q_18;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(v_5, t);
    {
      ATerm w_5 (ATerm t)
      {
        ATerm s_18 = t;
        int t_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_16 = NULL;
            g_16 = t;
            {
              ATerm u_18 = t;
              int v_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_16;
                  {
                    ATerm w_18 = t;
                    int x_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_m_16;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(x_18);
                      }
                    else
                      {
                        t = w_18;
                        {
                          ATerm d_6 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(d_6, t);
                        }
                      }
                    t = g_16;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(v_18);
                }
              else
                {
                  t = u_18;
                  t = term_w_17;
                  t = get_config_0_0(t);
                  t = g_16;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(t_18);
          }
        else
          {
            t = s_18;
            {
              ATerm e_6 (ATerm t)
              {
                ATerm f_6 (ATerm t)
                {
                  a_16 = t;
                  return(t);
                }
                t = Undefined_1_0(f_6, t);
                return(t);
              }
              t = option_defined_1_0(e_6, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(a_16)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_h_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_16)), term_y_18));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(w_5, t);
      b_16 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = b_16;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm v_63 (ATerm), ATerm w_63 (ATerm), ATerm x_63 (ATerm), ATerm y_63 (ATerm), ATerm t)
{
  ATerm f_10 = NULL;
  t = parse_options_1_0(v_63, t);
  f_10 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), f_10);
  t = f_10;
  t = x_63(t);
  {
    ATerm z_18 = t;
    int a_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(w_63, t);
        ;
        LocalPopChoice(a_19);
      }
    else
      {
        t = z_18;
        {
          ATerm b_19 = t;
          int c_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_63(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(c_19);
            }
          else
            {
              t = b_19;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm option_wrap_2_0 (ATerm z_63 (ATerm), ATerm a_64 (ATerm), ATerm t)
{
  t = option_wrap_4_0(z_63, default_usage_0_0, _id, a_64, t);
  return(t);
}
ATerm io_gen_latex_boxstyle_0_0 (ATerm t)
{
  ATerm i_6 (ATerm t)
  {
    ATerm n_6 (ATerm t)
    {
      t = term_d_19;
      t = xtc_find_file_0_0(t);
      return(t);
    }
    t = xtc_output_1_0(n_6, t);
    return(t);
  }
  t = option_wrap_2_0(output_options_0_0, i_6, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_gen_latex_boxstyle_0_0(t);
  return(t);
}
