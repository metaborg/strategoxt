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
Symbol sym_S_1;
Symbol sym_C_2;
Symbol sym_FBOX_2;
Symbol sym_A_3;
Symbol sym_R_2;
Symbol sym_AL_1;
Symbol sym_AC_1;
Symbol sym_AR_1;
Symbol sym_AOPTIONS_1;
Symbol sym_ALT_2;
Symbol sym_H_2;
Symbol sym_V_2;
Symbol sym_HV_2;
Symbol sym_SOpt_2;
Symbol sym_VS_0;
Symbol sym_HS_0;
Symbol sym_IS_0;
Symbol sym_FILE_1;
Symbol sym_TempFiles_0;
Symbol sym_F__OK_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Scopes_0;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Undefined_0;
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
  sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
  ATprotectSymbol(sym_S_1);
  sym_C_2 = ATmakeSymbol("C", 2, ATfalse);
  ATprotectSymbol(sym_C_2);
  sym_FBOX_2 = ATmakeSymbol("FBOX", 2, ATfalse);
  ATprotectSymbol(sym_FBOX_2);
  sym_A_3 = ATmakeSymbol("A", 3, ATfalse);
  ATprotectSymbol(sym_A_3);
  sym_R_2 = ATmakeSymbol("R", 2, ATfalse);
  ATprotectSymbol(sym_R_2);
  sym_AL_1 = ATmakeSymbol("AL", 1, ATfalse);
  ATprotectSymbol(sym_AL_1);
  sym_AC_1 = ATmakeSymbol("AC", 1, ATfalse);
  ATprotectSymbol(sym_AC_1);
  sym_AR_1 = ATmakeSymbol("AR", 1, ATfalse);
  ATprotectSymbol(sym_AR_1);
  sym_AOPTIONS_1 = ATmakeSymbol("AOPTIONS", 1, ATfalse);
  ATprotectSymbol(sym_AOPTIONS_1);
  sym_ALT_2 = ATmakeSymbol("ALT", 2, ATfalse);
  ATprotectSymbol(sym_ALT_2);
  sym_H_2 = ATmakeSymbol("H", 2, ATfalse);
  ATprotectSymbol(sym_H_2);
  sym_V_2 = ATmakeSymbol("V", 2, ATfalse);
  ATprotectSymbol(sym_V_2);
  sym_HV_2 = ATmakeSymbol("HV", 2, ATfalse);
  ATprotectSymbol(sym_HV_2);
  sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
  ATprotectSymbol(sym_SOpt_2);
  sym_VS_0 = ATmakeSymbol("VS", 0, ATfalse);
  ATprotectSymbol(sym_VS_0);
  sym_HS_0 = ATmakeSymbol("HS", 0, ATfalse);
  ATprotectSymbol(sym_HS_0);
  sym_IS_0 = ATmakeSymbol("IS", 0, ATfalse);
  ATprotectSymbol(sym_IS_0);
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
  sym_F__OK_0 = ATmakeSymbol("F_OK", 0, ATfalse);
  ATprotectSymbol(sym_F__OK_0);
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
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
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_e_41;
ATerm term_s_40;
ATerm term_f_40;
ATerm term_e_40;
ATerm term_n_39;
ATerm term_y_38;
ATerm term_v_38;
ATerm term_t_38;
ATerm term_r_38;
ATerm term_q_38;
ATerm term_n_38;
ATerm term_y_36;
ATerm term_x_36;
ATerm term_t_35;
ATerm term_s_35;
ATerm term_q_35;
ATerm term_n_34;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_y_33;
ATerm term_x_33;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_j_33;
ATerm term_h_33;
ATerm term_f_33;
ATerm term_x_32;
ATerm term_m_32;
ATerm term_w_31;
ATerm term_c_30;
ATerm term_m_25;
ATerm term_l_21;
ATerm term_d_21;
ATerm term_u_20;
ATerm term_g_18;
ATerm term_t_17;
ATerm term_n_17;
ATerm term_b_17;
ATerm term_e_16;
ATerm term_r_15;
ATerm term_t_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_l_14;
void init_constant_terms (void)
{
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeInt(80);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: invalid box: ", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: too many columns in row: ", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_16);
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-w int | --width int       Specifies max width of output.", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(sym__3, term_n_38, term_q_38, term_p_14);
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
}
ATerm topdown_1_0 (ATerm c_73 (ATerm), ATerm);
ATerm assert_1_0 (ATerm m_87 (ATerm), ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm topdown_print_to_0_0 (ATerm);
ATerm at_suffix_1_0 (ATerm h_78 (ATerm), ATerm);
ATerm split_fetch_1_0 (ATerm a_78 (ATerm), ATerm);
ATerm list_tokenize_1_0 (ATerm e_101 (ATerm), ATerm);
ATerm string_tokenize_0_0 (ATerm);
ATerm rel_string_length_0_0 (ATerm);
ATerm leq_0_0 (ATerm);
ATerm get_width_0_0 (ATerm);
ATerm last_0_0 (ATerm);
ATerm vertical_sep_0_0 (ATerm);
ATerm format_vbox_0_0 (ATerm);
ATerm separate_by_0_0 (ATerm);
ATerm hv_in_new_vbox_2_0 (ATerm k_71 (ATerm), ATerm l_71 (ATerm), ATerm);
ATerm hv_add_to_hbox_1_0 (ATerm j_71 (ATerm), ATerm);
ATerm foldl_1_0 (ATerm a_84 (ATerm), ATerm);
ATerm SOpt_2_0 (ATerm h_65 (ATerm), ATerm i_65 (ATerm), ATerm);
ATerm SOpt_value_1_0 (ATerm o_71 (ATerm), ATerm);
ATerm string_length_0_0 (ATerm);
ATerm copy_char_0_0 (ATerm);
ATerm Cons_T_2_0 (ATerm p_0 (ATerm), ATerm t_0 (ATerm), ATerm);
ATerm thread_map_1_0 (ATerm l_84 (ATerm), ATerm);
ATerm H_2_0 (ATerm b_65 (ATerm), ATerm c_65 (ATerm), ATerm);
ATerm is_real_hbox_0_0 (ATerm);
ATerm filter_1_0 (ATerm y_84 (ATerm), ATerm);
ATerm do_vbox_children_0_0 (ATerm);
ATerm is_real_vbox_0_0 (ATerm);
ATerm matrix_transpose_0_0 (ATerm);
ATerm align_helper_0_0 (ATerm);
ATerm align_center_0_0 (ATerm);
ATerm align_column_0_0 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm flatten_list_0_0 (ATerm);
ATerm do_A_column_0_0 (ATerm);
ATerm genzip_4_0 (ATerm i_79 (ATerm), ATerm j_79 (ATerm), ATerm k_79 (ATerm), ATerm l_79 (ATerm), ATerm);
ATerm map_with_index_1_0 (ATerm l_100 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm x_83 (ATerm), ATerm y_83 (ATerm), ATerm z_83 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm y_93 (ATerm), ATerm z_93 (ATerm), ATerm);
ATerm for_3_0 (ATerm b_94 (ATerm), ATerm c_94 (ATerm), ATerm d_94 (ATerm), ATerm);
ATerm copy_0_0 (ATerm);
ATerm FitToMax_1_0 (ATerm n_71 (ATerm), ATerm);
ATerm R_2_0 (ATerm t_64 (ATerm), ATerm u_64 (ATerm), ATerm);
ATerm construct_rows_0_0 (ATerm);
ATerm abox2text_0_0 (ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm j_87 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm j_76 (ATerm), ATerm k_76 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm i_87 (ATerm), ATerm);
ATerm xtc_temp_files_1_0 (ATerm x_71 (ATerm), ATerm);
ATerm xtc_io_1_0 (ATerm y_71 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm abox2text_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm v_83 (ATerm), ATerm w_83 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm e_86 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm f_91 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm j_66 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm k_66 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm x_77 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm d_78 (ATerm), ATerm);
ATerm _2_0 (ATerm k_62 (ATerm), ATerm l_62 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm map_1_0 (ATerm m_77 (ATerm), ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm t_63 (ATerm), ATerm u_63 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm d_93 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm c_93 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm h_91 (ATerm), ATerm i_91 (ATerm), ATerm j_91 (ATerm), ATerm k_91 (ATerm), ATerm);
ATerm io_Abox_2_text_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm topdown_1_0 (ATerm c_73 (ATerm), ATerm t)
{
  t = c_73(t);
  {
    ATerm b_0 (ATerm t)
    {
      t = topdown_1_0(c_73, t);
      return(t);
    }
    t = SRTS_all(b_0, t);
  }
  return(t);
}
ATerm assert_1_0 (ATerm m_87 (ATerm), ATerm t)
{
  ATerm f_0 = NULL,r_0 = NULL,w_0 = NULL,x_0 = NULL,a_1 = NULL;
  if(match_cons(t, sym__2))
    {
      f_0 = ATgetArgument(t, 0);
      r_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_87(t);
  w_0 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_0, f_0, r_0);
  t = table_push_0_0(t);
  {
    ATerm l_2 = t;
    int c_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(w_0, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(c_4);
      }
    else
      {
        t = l_2;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_0 = ATgetFirst((ATermList) t);
        a_1 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(w_0, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(a_1), (ATerm) ATinsert(CheckATermList(x_0), f_0)));
    t = (ATerm) ATmakeAppl(sym__2, f_0, r_0);
  }
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm v_1 (ATerm k_1, ATerm t)
  {
    t = k_1;
    {
      ATerm f_14 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm j_14 = ATgetArgument(t, 0);
              ATerm k_14 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = f_14;
        }
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue))));
      t = (ATerm) ATmakeAppl(sym__2, k_1, term_l_14);
      t = open_file_0_0(t);
    }
    return(t);
  }
  ATerm y_1 (ATerm m_1, ATerm n_1, ATerm o_1, ATerm t)
  {
    t = SSL_open_file(m_1, n_1);
    return(t);
  }
  ATerm r_1 = NULL,s_1 = NULL,t_1 = NULL;
  r_1 = t;
  if(match_cons(t, sym__2))
    {
      s_1 = ATgetArgument(t, 0);
      t_1 = ATgetArgument(t, 1);
      {
        ATerm n_14 = t;
        int o_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_1(r_1, t);
            ;
            LocalPopChoice(o_14);
          }
        else
          {
            t = n_14;
            t = y_1(s_1, t_1, r_1, t);
          }
      }
    }
  else
    {
      t = v_1(r_1, t);
    }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0_0 (ATerm t)
{
  ATerm a_2 = NULL;
  t = term_p_14;
  t = new_0_0(t);
  a_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_2, term_q_14);
  t = conc_strings_0_0(t);
  {
    ATerm r_14 = t;
    int s_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_2 = NULL;
        i_2 = t;
        t = SSL_access(i_2, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
        t = new_file_0_0(t);
        ;
        LocalPopChoice(s_14);
      }
    else
      {
        t = r_14;
      }
  }
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm p_2 = NULL;
  t = new_file_0_0(t);
  p_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_2, term_l_14);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, p_2, term_p_14);
  {
    ATerm l_0 (ATerm t)
    {
      t = term_t_14;
      return(t);
    }
    t = assert_1_0(l_0, t);
    t = p_2;
  }
  return(t);
}
ATerm topdown_print_to_0_0 (ATerm t)
{
  ATerm s_2 = NULL,t_2 = NULL;
  s_2 = t;
  t = xtc_new_file_0_0(t);
  t_2 = t;
  t = s_2;
  {
    ATerm m_0 (ATerm t)
    {
      ATerm u_14 = t;
      int v_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_3 = NULL,u_0 = NULL;
          b_3 = t;
          t = SSL_is_string(b_3);
          u_0 = t;
          t = SSL_print(t_2, (ATerm) ATinsert(ATempty, u_0));
          t = u_0;
          ;
          LocalPopChoice(v_14);
        }
      else
        {
          t = u_14;
        }
      return(t);
    }
    t = topdown_1_0(m_0, t);
    t = SSL_close_file(t_2);
    t = (ATerm) ATmakeAppl(sym_FILE_1, t_2);
  }
  return(t);
}
ATerm at_suffix_1_0 (ATerm h_78 (ATerm), ATerm t)
{
  ATerm x_18 (ATerm t)
  {
    ATerm w_14 = t;
    int x_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_78(t);
        ;
        LocalPopChoice(x_14);
      }
    else
      {
        t = w_14;
        t = Cons_2_0(_id, x_18, t);
      }
    return(t);
  }
  t = x_18(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm a_78 (ATerm), ATerm t)
{
  ATerm y_18 = NULL,z_18 = NULL;
  ATerm n_0 (ATerm t)
  {
    t = Cons_2_0(a_78, _id, t);
    {
      ATerm o_0 (ATerm t)
      {
        if(((y_18 != NULL) && (y_18 != t)))
          _fail(t);
        else
          y_18 = t;
        return(t);
      }
      t = Cons_2_0(_id, o_0, t);
      t = (ATerm) ATempty;
    }
    return(t);
  }
  t = at_suffix_1_0(n_0, t);
  z_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_18, not_null(y_18));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm e_101 (ATerm), ATerm t)
{
  ATerm j_19 = NULL,m_19 = NULL;
  ATerm y_14 = t;
  int b_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(e_101, t);
      ;
      LocalPopChoice(b_15);
    }
  else
    {
      t = y_14;
      {
        ATerm e_19 = NULL;
        e_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_19, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      j_19 = ATgetArgument(t, 0);
      m_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_19;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_19;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm g_15 = ATgetFirst((ATermList) t);
              ATerm h_15 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = m_19;
          t = list_tokenize_1_0(e_101, t);
        }
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
      t = m_19;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, j_19);
        }
      else
        {
          ATerm x_19 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm m_15 = ATgetFirst((ATermList) t);
              ATerm n_15 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = m_19;
          t = list_tokenize_1_0(e_101, t);
          x_19 = t;
          t = (ATerm) ATinsert(CheckATermList(x_19), j_19);
        }
    }
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm y_19 = NULL,b_20 = NULL;
  ATerm q_0 (ATerm t)
  {
    ATerm c_20 = NULL;
    c_20 = t;
    t = SSL_explode_string(c_20);
    return(t);
  }
  t = _2_0(_id, q_0, t);
  if(match_cons(t, sym__2))
    {
      y_19 = ATgetArgument(t, 0);
      b_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_20;
  {
    ATerm s_0 (ATerm t)
    {
      ATerm d_20 = NULL;
      d_20 = t;
      t = y_19;
      {
        ATerm v_0 (ATerm t)
        {
          ATerm l_6 = NULL;
          l_6 = t;
          if((d_20 != t))
            {
              _fail(t);
            }
          t = l_6;
          return(t);
        }
        t = SRTS_one(v_0, t);
      }
      return(t);
    }
    t = list_tokenize_1_0(s_0, t);
    {
      ATerm y_0 (ATerm t)
      {
        ATerm f_20 = NULL;
        f_20 = t;
        t = SSL_implode_string(f_20);
        return(t);
      }
      t = map_1_0(y_0, t);
    }
  }
  return(t);
}
ATerm rel_string_length_0_0 (ATerm t)
{
  ATerm i_20 = NULL,j_20 = NULL;
  if(match_cons(t, sym__2))
    {
      i_20 = ATgetArgument(t, 0);
      j_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_r_15, i_20);
  t = string_tokenize_0_0(t);
  {
    ATerm s_15 = t;
    int d_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_20 = NULL,m_20 = NULL;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = term_e_16;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                l_20 = ATgetFirst((ATermList) t);
                m_20 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = m_20;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = l_20;
            t = string_length_0_0(t);
          }
        ;
        LocalPopChoice(d_16);
      }
    else
      {
        t = s_15;
        {
          ATerm o_20 = NULL;
          t = last_0_0(t);
          t = string_length_0_0(t);
          o_20 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_20, j_20);
          {
            ATerm m_16 = t;
            int n_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SSL_subti(o_20, j_20);
                ;
                LocalPopChoice(n_16);
              }
            else
              {
                t = m_16;
                t = SSL_subtr(o_20, j_20);
              }
          }
        }
      }
  }
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm o_16 = t;
  if((PushChoice() == 0))
    {
      ATerm p_20 = NULL,q_20 = NULL;
      if(match_cons(t, sym__2))
        {
          p_20 = ATgetArgument(t, 0);
          q_20 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm p_16 = t;
        int w_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(p_20, q_20);
            ;
            LocalPopChoice(w_16);
          }
        else
          {
            t = p_16;
            t = SSL_gtr(p_20, q_20);
          }
        t = (ATerm) ATmakeAppl(sym__2, p_20, q_20);
      }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = o_16;
    }
  return(t);
}
ATerm get_width_0_0 (ATerm t)
{
  ATerm x_16 = t;
  int y_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue)));
      {
        ATerm z_16 = t;
        int a_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_6 = NULL;
            t = eval_config_0_0(t);
            z_6 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue)), z_6);
            t = z_6;
            ;
            LocalPopChoice(a_17);
          }
        else
          {
            t = z_16;
          }
      }
      ;
      LocalPopChoice(y_16);
    }
  else
    {
      t = x_16;
      t = term_b_17;
    }
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm n_18 = NULL,o_18 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_18 = ATgetFirst((ATermList) t);
      o_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_18;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm c_17 = t;
      int d_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_18;
          ;
          LocalPopChoice(d_17);
        }
      else
        {
          t = c_17;
          t = o_18;
          t = last_0_0(t);
        }
    }
  else
    {
      t = o_18;
      t = last_0_0(t);
    }
  return(t);
}
ATerm vertical_sep_0_0 (ATerm t)
{
  ATerm f_3 = NULL,g_3 = NULL,h_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL,m_3 = NULL,n_3 = NULL;
  if(match_cons(t, sym__2))
    {
      f_3 = ATgetArgument(t, 0);
      g_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_3;
  {
    ATerm h_17 = t;
    int j_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_0 (ATerm t)
        {
          if(!(match_cons(t, sym_VS_0)))
            _fail(t);
          return(t);
        }
        t = SOpt_value_1_0(z_0, t);
        ;
        LocalPopChoice(j_17);
      }
    else
      {
        t = h_17;
        t = term_e_16;
      }
    i_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_3, term_n_17);
    {
      ATerm o_17 = t;
      int p_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(i_3, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(p_17);
        }
      else
        {
          t = o_17;
          t = SSL_addr(i_3, (ATerm) ATmakeInt(1));
        }
      j_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_3, term_r_15);
      t = copy_char_0_0(t);
      h_3 = t;
      t = f_3;
      {
        ATerm q_17 = t;
        int r_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_1 (ATerm t)
            {
              if(!(match_cons(t, sym_IS_0)))
                _fail(t);
              return(t);
            }
            t = SOpt_value_1_0(h_1, t);
            ;
            LocalPopChoice(r_17);
          }
        else
          {
            t = q_17;
            t = term_e_16;
          }
        m_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_3, term_t_17);
        t = copy_char_0_0(t);
        k_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_3, term_t_17);
        t = copy_char_0_0(t);
        n_3 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, n_3), k_3), h_3);
        t = concat_strings_0_0(t);
      }
    }
  }
  return(t);
}
ATerm format_vbox_0_0 (ATerm t)
{
  ATerm o_3 = NULL,p_3 = NULL,r_3 = NULL,u_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL;
  if(match_cons(t, sym__3))
    {
      o_3 = ATgetArgument(t, 0);
      p_3 = ATgetArgument(t, 1);
      r_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_3, r_3);
  t = vertical_sep_0_0(t);
  u_3 = t;
  t = p_3;
  t = last_0_0(t);
  if(match_cons(t, sym__2))
    {
      ATerm u_17 = ATgetArgument(t, 0);
      w_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_3;
  {
    ATerm i_1 (ATerm t)
    {
      ATerm b_1 = NULL,c_1 = NULL;
      b_1 = t;
      t = SSL_explode_term(b_1);
      if(match_cons(t, sym__2))
        {
          ATerm v_17 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) v_17) != ATmakeSymbol("", 0, ATtrue)))
            _fail(t);
          {
            ATerm w_17 = ATgetArgument(t, 1);
            if(((ATgetType(w_17) == AT_LIST) && !(ATisEmpty(w_17))))
              {
                c_1 = ATgetFirst((ATermList) w_17);
                {
                  ATerm x_17 = (ATerm) ATgetNext((ATermList) w_17);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = c_1;
      return(t);
    }
    t = map_1_0(i_1, t);
    x_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_3, x_3);
    t = separate_by_0_0(t);
    y_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_3, w_3);
  }
  return(t);
}
ATerm separate_by_0_0 (ATerm t)
{
  ATerm z_3 = NULL,a_4 = NULL;
  if(match_cons(t, sym__2))
    {
      z_3 = ATgetArgument(t, 0);
      a_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_4;
  {
    ATerm a_18 = t;
    int b_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(b_18);
      }
    else
      {
        t = a_18;
        {
          ATerm j_1 (ATerm t)
          {
            ATerm c_18 = t;
            int d_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(d_18);
              }
            else
              {
                t = c_18;
                {
                  ATerm b_4 = NULL;
                  t = Cons_2_0(_id, j_1, t);
                  b_4 = t;
                  t = (ATerm) ATinsert(CheckATermList(b_4), z_3);
                }
              }
            return(t);
          }
          t = Cons_2_0(_id, j_1, t);
        }
      }
  }
  return(t);
}
ATerm hv_in_new_vbox_2_0 (ATerm k_71 (ATerm), ATerm l_71 (ATerm), ATerm t)
{
  ATerm d_4 = NULL,f_4 = NULL,g_4 = NULL,h_4 = NULL,j_4 = NULL,k_4 = NULL,o_4 = NULL;
  if(match_cons(t, sym__2))
    {
      d_4 = ATgetArgument(t, 0);
      f_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_p_14;
  t = l_71(t);
  g_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_4, g_4);
  {
    ATerm e_18 = t;
    int f_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = abox2text_0_0(t);
        ;
        LocalPopChoice(f_18);
      }
    else
      {
        t = e_18;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, d_4, g_4)), (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: invalid box: ", 0, ATtrue))));
        t = SSL_exit((ATerm) ATmakeInt(1));
        t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, d_4, g_4)), term_g_18);
      }
    if(match_cons(t, sym__2))
      {
        h_4 = ATgetArgument(t, 0);
        j_4 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = term_p_14;
    t = k_71(t);
    k_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_4, k_4);
    {
      ATerm h_18 = t;
      int k_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(j_4, k_4);
          ;
          LocalPopChoice(k_18);
        }
      else
        {
          t = h_18;
          t = SSL_addr(j_4, k_4);
        }
      o_4 = t;
      t = (ATerm) ATinsert(CheckATermList(f_4), (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, h_4), o_4));
    }
  }
  return(t);
}
ATerm hv_add_to_hbox_1_0 (ATerm j_71 (ATerm), ATerm t)
{
  ATerm p_4 = NULL,a_5 = NULL,b_5 = NULL,c_5 = NULL,d_5 = NULL,e_5 = NULL,f_5 = NULL,g_5 = NULL,j_5 = NULL;
  if(match_cons(t, sym__2))
    {
      p_4 = ATgetArgument(t, 0);
      {
        ATerm l_18 = ATgetArgument(t, 1);
        if(((ATgetType(l_18) == AT_LIST) && !(ATisEmpty(l_18))))
          {
            ATerm m_18 = ATgetFirst((ATermList) l_18);
            if(match_cons(m_18, sym__2))
              {
                a_5 = ATgetArgument(m_18, 0);
                b_5 = ATgetArgument(m_18, 1);
              }
            else
              _fail(t);
            c_5 = (ATerm) ATgetNext((ATermList) l_18);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_4, b_5);
  {
    ATerm p_18 = t;
    int q_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = abox2text_0_0(t);
        ;
        LocalPopChoice(q_18);
      }
    else
      {
        t = p_18;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, p_4, b_5)), (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: invalid box: ", 0, ATtrue))));
        t = SSL_exit((ATerm) ATmakeInt(1));
        t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, p_4, b_5)), term_g_18);
      }
    if(match_cons(t, sym__2))
      {
        d_5 = ATgetArgument(t, 0);
        e_5 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = term_p_14;
    t = get_width_0_0(t);
    f_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_5, f_5);
    t = leq_0_0(t);
    t = term_p_14;
    t = j_71(t);
    g_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_5, g_5);
    {
      ATerm r_18 = t;
      int s_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(e_5, g_5);
          ;
          LocalPopChoice(s_18);
        }
      else
        {
          t = r_18;
          t = SSL_addr(e_5, g_5);
        }
      j_5 = t;
      t = (ATerm) ATinsert(CheckATermList(c_5), (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_5), d_5), j_5));
    }
  }
  return(t);
}
ATerm foldl_1_0 (ATerm a_84 (ATerm), ATerm t)
{
  ATerm a_6 (ATerm t)
  {
    ATerm t_18 = t;
    int u_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_5 = NULL,w_5 = NULL;
        if(match_cons(t, sym__2))
          {
            u_5 = ATgetArgument(t, 0);
            w_5 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_5;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = w_5;
        ;
        LocalPopChoice(u_18);
      }
    else
      {
        t = t_18;
        {
          ATerm d_1 = NULL,e_1 = NULL,f_1 = NULL,g_1 = NULL;
          if(match_cons(t, sym__2))
            {
              ATerm v_18 = ATgetArgument(t, 0);
              if(((ATgetType(v_18) == AT_LIST) && !(ATisEmpty(v_18))))
                {
                  d_1 = ATgetFirst((ATermList) v_18);
                  e_1 = (ATerm) ATgetNext((ATermList) v_18);
                }
              else
                _fail(t);
              f_1 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, d_1, f_1);
          t = a_84(t);
          g_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, e_1, g_1);
          t = a_6(t);
        }
      }
    return(t);
  }
  t = a_6(t);
  return(t);
}
ATerm SOpt_2_0 (ATerm h_65 (ATerm), ATerm i_65 (ATerm), ATerm t)
{
  ATerm b_6 = NULL,d_6 = NULL,f_6 = NULL,g_6 = NULL,h_6 = NULL,i_6 = NULL;
  i_6 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      d_6 = ATgetArgument(t, 0);
      f_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_6);
  b_6 = t;
  t = d_6;
  t = h_65(t);
  g_6 = t;
  t = f_6;
  t = i_65(t);
  h_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SOpt_2, g_6, h_6), b_6);
  return(t);
}
ATerm SOpt_value_1_0 (ATerm o_71 (ATerm), ATerm t)
{
  ATerm p_6 = NULL;
  ATerm l_1 (ATerm t)
  {
    ATerm p_1 (ATerm t)
    {
      if(((p_6 != NULL) && (p_6 != t)))
        _fail(t);
      else
        p_6 = t;
      return(t);
    }
    t = SOpt_2_0(o_71, p_1, t);
    return(t);
  }
  t = fetch_1_0(l_1, t);
  t = SSL_string_to_int(not_null(p_6));
  return(t);
}
ATerm string_length_0_0 (ATerm t)
{
  ATerm q_6 = NULL;
  q_6 = t;
  t = SSL_explode_string(q_6);
  {
    ATerm q_1 (ATerm t)
    {
      t = term_e_16;
      return(t);
    }
    ATerm z_1 (ATerm t)
    {
      ATerm r_6 = NULL,w_6 = NULL;
      if(match_cons(t, sym__2))
        {
          r_6 = ATgetArgument(t, 0);
          w_6 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm w_18 = t;
        int d_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(r_6, w_6);
            ;
            LocalPopChoice(d_19);
          }
        else
          {
            t = w_18;
            t = SSL_addr(r_6, w_6);
          }
      }
      return(t);
    }
    ATerm b_2 (ATerm t)
    {
      t = term_n_17;
      return(t);
    }
    t = foldr_3_0(q_1, z_1, b_2, t);
  }
  return(t);
}
ATerm copy_char_0_0 (ATerm t)
{
  ATerm x_6 = NULL;
  t = copy_0_0(t);
  x_6 = t;
  t = SSL_implode_string(x_6);
  return(t);
}
ATerm Cons_T_2_0 (ATerm p_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm y_6 = NULL,a_7 = NULL,b_7 = NULL,c_7 = NULL,d_7 = NULL,g_7 = NULL,h_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_19 = ATgetArgument(t, 0);
      if(((ATgetType(f_19) == AT_LIST) && !(ATisEmpty(f_19))))
        {
          y_6 = ATgetFirst((ATermList) f_19);
          a_7 = (ATerm) ATgetNext((ATermList) f_19);
        }
      else
        _fail(t);
      b_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_6, b_7);
  t = p_0(t);
  if(match_cons(t, sym__2))
    {
      c_7 = ATgetArgument(t, 0);
      d_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_7, d_7);
  t = t_0(t);
  if(match_cons(t, sym__2))
    {
      h_7 = ATgetArgument(t, 0);
      g_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_7), c_7), g_7);
  return(t);
}
ATerm thread_map_1_0 (ATerm l_84 (ATerm), ATerm t)
{
  ATerm s_7 (ATerm t)
  {
    ATerm g_19 = t;
    int h_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_T_2_0(l_84, s_7, t);
        ;
        LocalPopChoice(h_19);
      }
    else
      {
        t = g_19;
        {
          ATerm l_7 = NULL,o_7 = NULL;
          l_7 = t;
          if(match_cons(t, sym__2))
            {
              o_7 = ATgetArgument(t, 0);
              {
                ATerm k_19 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = o_7;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = l_7;
        }
      }
    return(t);
  }
  t = s_7(t);
  return(t);
}
ATerm H_2_0 (ATerm b_65 (ATerm), ATerm c_65 (ATerm), ATerm t)
{
  ATerm z_7 = NULL,a_8 = NULL,c_8 = NULL,f_8 = NULL,g_8 = NULL,h_8 = NULL;
  h_8 = t;
  if(match_cons(t, sym_H_2))
    {
      a_8 = ATgetArgument(t, 0);
      c_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_8);
  z_7 = t;
  t = a_8;
  t = b_65(t);
  f_8 = t;
  t = c_8;
  t = c_65(t);
  g_8 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_H_2, f_8, g_8), z_7);
  return(t);
}
ATerm is_real_hbox_0_0 (ATerm t)
{
  ATerm l_19 = t;
  if((PushChoice() == 0))
    {
      ATerm n_19 = t;
      int o_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(o_19);
        }
      else
        {
          t = n_19;
          {
            ATerm c_2 (ATerm t)
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              return(t);
            }
            ATerm d_2 (ATerm t)
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              return(t);
            }
            t = H_2_0(c_2, d_2, t);
          }
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = l_19;
    }
  return(t);
}
ATerm filter_1_0 (ATerm y_84 (ATerm), ATerm t)
{
  ATerm p_19 = t;
  int r_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(r_19);
    }
  else
    {
      t = p_19;
      {
        ATerm s_19 = t;
        int t_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_2 (ATerm t)
            {
              t = filter_1_0(y_84, t);
              return(t);
            }
            t = Cons_2_0(y_84, e_2, t);
            ;
            LocalPopChoice(t_19);
          }
        else
          {
            t = s_19;
            {
              ATerm u_8 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm u_19 = ATgetFirst((ATermList) t);
                  u_8 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = u_8;
              t = filter_1_0(y_84, t);
            }
          }
      }
    }
  return(t);
}
ATerm do_vbox_children_0_0 (ATerm t)
{
  ATerm x_8 = NULL,d_9 = NULL,e_9 = NULL;
  if(match_cons(t, sym__3))
    {
      x_8 = ATgetArgument(t, 0);
      d_9 = ATgetArgument(t, 1);
      e_9 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = e_9;
  {
    ATerm g_2 (ATerm t)
    {
      ATerm f_9 = NULL;
      f_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_9, x_8);
      {
        ATerm v_19 = t;
        int w_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = abox2text_0_0(t);
            ;
            LocalPopChoice(w_19);
          }
        else
          {
            t = v_19;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, f_9, x_8)), (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: invalid box: ", 0, ATtrue))));
            t = SSL_exit((ATerm) ATmakeInt(1));
            t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, f_9, x_8)), term_g_18);
          }
      }
      return(t);
    }
    ATerm h_2 (ATerm t)
    {
      ATerm j_2 (ATerm t)
      {
        ATerm h_9 = NULL;
        h_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_9, d_9);
        {
          ATerm z_19 = t;
          int a_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = abox2text_0_0(t);
              ;
              LocalPopChoice(a_20);
            }
          else
            {
              t = z_19;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, h_9, d_9)), (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: invalid box: ", 0, ATtrue))));
              t = SSL_exit((ATerm) ATmakeInt(1));
              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, h_9, d_9)), term_g_18);
            }
        }
        return(t);
      }
      t = map_1_0(j_2, t);
      return(t);
    }
    t = Cons_2_0(g_2, h_2, t);
  }
  return(t);
}
ATerm is_real_vbox_0_0 (ATerm t)
{
  ATerm e_20 = t;
  if((PushChoice() == 0))
    {
      ATerm g_20 = t;
      int h_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(h_20);
        }
      else
        {
          t = g_20;
          {
            ATerm r_9 = NULL,u_1 = NULL,w_1 = NULL,x_1 = NULL;
            r_9 = t;
            t = SSL_explode_term(r_9);
            if(match_cons(t, sym__2))
              {
                u_1 = ATgetArgument(t, 0);
                w_1 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = w_1;
            {
              ATerm m_2 (ATerm t)
              {
                ATerm n_2 (ATerm t)
                {
                  ATerm k_20 = t;
                  int n_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      ;
                      LocalPopChoice(n_20);
                    }
                  else
                    {
                      t = k_20;
                      {
                        ATerm q_2 (ATerm t)
                        {
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          return(t);
                        }
                        ATerm r_2 (ATerm t)
                        {
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          return(t);
                        }
                        t = Cons_2_0(q_2, r_2, t);
                      }
                    }
                  return(t);
                }
                ATerm o_2 (ATerm t)
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  return(t);
                }
                t = Cons_2_0(n_2, o_2, t);
                return(t);
              }
              t = Cons_2_0(_id, m_2, t);
              x_1 = t;
              t = SSL_mkterm(u_1, x_1);
            }
          }
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = e_20;
    }
  return(t);
}
ATerm matrix_transpose_0_0 (ATerm t)
{
  ATerm r_20 = t;
  int s_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_2 (ATerm t)
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        return(t);
      }
      t = map_1_0(u_2, t);
      t = (ATerm) ATempty;
      ;
      LocalPopChoice(s_20);
    }
  else
    {
      t = r_20;
      {
        ATerm t_9 = NULL,u_9 = NULL;
        ATerm w_2 (ATerm t)
        {
          ATerm v_9 = NULL,w_9 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              v_9 = ATgetFirst((ATermList) t);
              w_9 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, v_9, w_9);
          return(t);
        }
        t = map_1_0(w_2, t);
        {
          ATerm x_2 (ATerm t)
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = term_u_20;
            return(t);
          }
          ATerm y_2 (ATerm t)
          {
            ATerm x_9 = NULL,y_9 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                x_9 = ATgetFirst((ATermList) t);
                y_9 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, x_9, y_9);
            return(t);
          }
          ATerm z_2 (ATerm t)
          {
            ATerm z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL;
            if(match_cons(t, sym__2))
              {
                ATerm v_20 = ATgetArgument(t, 0);
                if(match_cons(v_20, sym__2))
                  {
                    z_9 = ATgetArgument(v_20, 0);
                    b_10 = ATgetArgument(v_20, 1);
                  }
                else
                  _fail(t);
                {
                  ATerm w_20 = ATgetArgument(t, 1);
                  if(match_cons(w_20, sym__2))
                    {
                      a_10 = ATgetArgument(w_20, 0);
                      c_10 = ATgetArgument(w_20, 1);
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_10), z_9), (ATerm) ATinsert(CheckATermList(c_10), b_10));
            return(t);
          }
          t = genzip_4_0(x_2, y_2, z_2, _id, t);
          t = _2_0(_id, matrix_transpose_0_0, t);
          if(match_cons(t, sym__2))
            {
              t_9 = ATgetArgument(t, 0);
              u_9 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(u_9), t_9);
        }
      }
    }
  return(t);
}
ATerm align_helper_0_0 (ATerm t)
{
  ATerm z_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL;
  if(match_cons(t, sym__3))
    {
      z_10 = ATgetArgument(t, 0);
      a_11 = ATgetArgument(t, 1);
      b_11 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = a_11;
  t = string_length_0_0(t);
  c_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_11, c_11);
  {
    ATerm y_20 = t;
    int z_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_subti(b_11, c_11);
        ;
        LocalPopChoice(z_20);
      }
    else
      {
        t = y_20;
        t = SSL_subtr(b_11, c_11);
      }
    {
      ATerm a_21 = t;
      int c_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_11 = NULL;
          d_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, d_11, term_e_16);
          t = geq_0_0(t);
          t = d_11;
          LocalPopChoice(c_21);
          {
            ATerm e_11 = NULL;
            e_11 = t;
            t = (ATerm) ATmakeAppl(sym__2, e_11, z_10);
            t = copy_char_0_0(t);
          }
        }
      else
        {
          t = a_21;
          t = term_d_21;
        }
    }
  }
  return(t);
}
ATerm align_center_0_0 (ATerm t)
{
  ATerm j_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL;
  if(match_cons(t, sym__3))
    {
      j_10 = ATgetArgument(t, 0);
      k_10 = ATgetArgument(t, 1);
      l_10 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = k_10;
  t = string_length_0_0(t);
  m_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_10, m_10);
  {
    ATerm e_21 = t;
    int g_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_subti(l_10, m_10);
        ;
        LocalPopChoice(g_21);
      }
    else
      {
        t = e_21;
        t = SSL_subtr(l_10, m_10);
      }
    n_10 = t;
    {
      ATerm h_21 = t;
      int k_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_mod(n_10, (ATerm) ATmakeInt(2));
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
            _fail(t);
          t = n_10;
          LocalPopChoice(k_21);
          {
            ATerm v_10 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, n_10, term_l_21);
            {
              ATerm m_21 = t;
              int n_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SSL_divi(n_10, (ATerm) ATmakeInt(2));
                  ;
                  LocalPopChoice(n_21);
                }
              else
                {
                  t = m_21;
                  t = SSL_divr(n_10, (ATerm) ATmakeInt(2));
                }
              v_10 = t;
              t = (ATerm) ATmakeAppl(sym__2, v_10, v_10);
            }
          }
        }
      else
        {
          t = h_21;
          {
            ATerm w_10 = NULL,x_10 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, n_10, term_n_17);
            {
              ATerm o_21 = t;
              int p_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SSL_subti(n_10, (ATerm) ATmakeInt(1));
                  ;
                  LocalPopChoice(p_21);
                }
              else
                {
                  t = o_21;
                  t = SSL_subtr(n_10, (ATerm) ATmakeInt(1));
                }
              w_10 = t;
              t = (ATerm) ATmakeAppl(sym__2, w_10, term_l_21);
              {
                ATerm q_21 = t;
                int r_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = SSL_divi(w_10, (ATerm) ATmakeInt(2));
                    ;
                    LocalPopChoice(r_21);
                  }
                else
                  {
                    t = q_21;
                    t = SSL_divr(w_10, (ATerm) ATmakeInt(2));
                  }
                x_10 = t;
                t = (ATerm) ATmakeAppl(sym__2, x_10, x_10);
                {
                  ATerm c_3 (ATerm t)
                  {
                    ATerm y_10 = NULL;
                    y_10 = t;
                    t = (ATerm) ATmakeAppl(sym__2, y_10, term_n_17);
                    {
                      ATerm s_21 = t;
                      int t_21 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = SSL_addi(y_10, (ATerm) ATmakeInt(1));
                          ;
                          LocalPopChoice(t_21);
                        }
                      else
                        {
                          t = s_21;
                          t = SSL_addr(y_10, (ATerm) ATmakeInt(1));
                        }
                    }
                    return(t);
                  }
                  t = _2_0(c_3, _id, t);
                }
              }
            }
          }
        }
      if(match_cons(t, sym__2))
        {
          o_10 = ATgetArgument(t, 0);
          p_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, m_10, o_10);
      {
        ATerm u_21 = t;
        int v_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(m_10, o_10);
            ;
            LocalPopChoice(v_21);
          }
        else
          {
            t = u_21;
            t = SSL_addr(m_10, o_10);
          }
        q_10 = t;
        t = (ATerm) ATmakeAppl(sym__3, j_10, k_10, q_10);
        t = align_helper_0_0(t);
        s_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_10, p_10);
        {
          ATerm w_21 = t;
          int x_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_addi(m_10, p_10);
              ;
              LocalPopChoice(x_21);
            }
          else
            {
              t = w_21;
              t = SSL_addr(m_10, p_10);
            }
          t_10 = t;
          t = (ATerm) ATmakeAppl(sym__3, j_10, k_10, t_10);
          t = align_helper_0_0(t);
          u_10 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, u_10), k_10), s_10);
          t = concat_strings_0_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm align_column_0_0 (ATerm t)
{
  ATerm h_12 (ATerm r_11, ATerm s_11, ATerm t_11, ATerm t)
  {
    ATerm f_2 = NULL,k_2 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, r_11, term_n_17);
    {
      ATerm y_21 = t;
      int z_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_gti(r_11, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(z_21);
        }
      else
        {
          t = y_21;
          t = SSL_gtr(r_11, (ATerm) ATmakeInt(1));
        }
      t = s_11;
      if(match_cons(t, sym__3))
        {
          ATerm a_22 = ATgetArgument(t, 0);
          f_2 = ATgetArgument(t, 1);
          {
            ATerm b_22 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = align_helper_0_0(t);
      k_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_2, k_2);
      t = conc_strings_0_0(t);
    }
    return(t);
  }
  ATerm x_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,d_12 = NULL;
  z_11 = t;
  if(match_cons(t, sym__3))
    {
      a_12 = ATgetArgument(t, 0);
      b_12 = ATgetArgument(t, 1);
      d_12 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = b_12;
  {
    ATerm c_22 = t;
    int d_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_AL_1))
          {
            ATerm e_22 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(d_22);
        t = d_12;
        {
          ATerm f_22 = t;
          int g_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym__3))
                {
                  ATerm h_22 = ATgetArgument(t, 0);
                  x_11 = ATgetArgument(t, 1);
                  {
                    ATerm i_22 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(g_22);
              t = a_12;
              if(match_int(t, 1))
                {
                  ATerm j_22 = t;
                  int k_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = h_12(a_12, d_12, z_11, t);
                      ;
                      LocalPopChoice(k_22);
                    }
                  else
                    {
                      t = j_22;
                      t = x_11;
                    }
                }
              else
                {
                  t = h_12(a_12, d_12, z_11, t);
                }
            }
          else
            {
              t = f_22;
              t = a_12;
              t = h_12(a_12, d_12, z_11, t);
            }
        }
      }
    else
      {
        t = c_22;
        {
          ATerm l_22 = t;
          int m_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_AC_1))
                {
                  ATerm n_22 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(m_22);
              t = d_12;
              t = align_center_0_0(t);
            }
          else
            {
              t = l_22;
              {
                ATerm v_2 = NULL,a_3 = NULL;
                if(match_cons(t, sym_AR_1))
                  {
                    ATerm o_22 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = d_12;
                if(match_cons(t, sym__3))
                  {
                    ATerm p_22 = ATgetArgument(t, 0);
                    v_2 = ATgetArgument(t, 1);
                    {
                      ATerm q_22 = ATgetArgument(t, 2);
                    }
                  }
                else
                  _fail(t);
                t = align_helper_0_0(t);
                a_3 = t;
                t = (ATerm) ATmakeAppl(sym__2, a_3, v_2);
                t = conc_strings_0_0(t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm n_12 = NULL;
  ATerm d_3 (ATerm t)
  {
    ATerm o_12 = NULL;
    o_12 = t;
    t = SSL_explode_string(o_12);
    return(t);
  }
  t = map_1_0(d_3, t);
  t = concat_0_0(t);
  n_12 = t;
  t = SSL_implode_string(n_12);
  return(t);
}
ATerm flatten_list_0_0 (ATerm t)
{
  ATerm e_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm t_3 (ATerm t)
  {
    ATerm r_22 = t;
    int t_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_4 (ATerm t)
        {
          ATerm u_12 = NULL;
          u_12 = t;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = u_12;
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm u_22 = ATgetFirst((ATermList) t);
                  ATerm v_22 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = u_12;
            }
          return(t);
        }
        t = _2_0(l_4, _id, t);
        LocalPopChoice(t_22);
        {
          ATerm x_12 = NULL,y_12 = NULL;
          if(match_cons(t, sym__2))
            {
              y_12 = ATgetArgument(t, 0);
              x_12 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = y_12;
          {
            ATerm q_4 (ATerm t)
            {
              t = x_12;
              return(t);
            }
            t = at_end_1_0(q_4, t);
          }
        }
      }
    else
      {
        t = r_22;
        {
          ATerm z_12 = NULL,a_13 = NULL;
          if(match_cons(t, sym__2))
            {
              z_12 = ATgetArgument(t, 0);
              a_13 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(a_13), z_12);
        }
      }
    return(t);
  }
  ATerm i_4 (ATerm t)
  {
    ATerm w_22 = t;
    int x_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_13 = NULL;
        b_13 = t;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_13;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm y_22 = ATgetFirst((ATermList) t);
                ATerm z_22 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_13;
          }
        LocalPopChoice(x_22);
        t = flatten_list_0_0(t);
      }
    else
      {
        t = w_22;
      }
    return(t);
  }
  t = foldr_3_0(e_3, t_3, i_4, t);
  return(t);
}
ATerm do_A_column_0_0 (ATerm t)
{
  ATerm f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_23 = ATgetArgument(t, 0);
      if(match_cons(a_23, sym__2))
        {
          f_13 = ATgetArgument(a_23, 0);
          {
            ATerm c_23 = ATgetArgument(a_23, 1);
            if(match_cons(c_23, sym__2))
              {
                g_13 = ATgetArgument(c_23, 0);
                h_13 = ATgetArgument(c_23, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm b_23 = ATgetArgument(t, 1);
        if(match_cons(b_23, sym__2))
          {
            i_13 = ATgetArgument(b_23, 0);
            j_13 = ATgetArgument(b_23, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_13;
  {
    ATerm r_4 (ATerm t)
    {
      ATerm r_13 = NULL;
      r_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_13, i_13);
      {
        ATerm d_23 = t;
        int e_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = abox2text_0_0(t);
            ;
            LocalPopChoice(e_23);
          }
        else
          {
            t = d_23;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, r_13, i_13)), (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: invalid box: ", 0, ATtrue))));
            t = SSL_exit((ATerm) ATmakeInt(1));
            t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, r_13, i_13)), term_g_18);
          }
      }
      return(t);
    }
    t = map_1_0(r_4, t);
    {
      ATerm u_4 (ATerm t)
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = term_u_20;
        return(t);
      }
      ATerm v_4 (ATerm t)
      {
        ATerm s_13 = NULL,t_13 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_13 = ATgetFirst((ATermList) t);
            t_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, s_13, t_13);
        return(t);
      }
      ATerm w_4 (ATerm t)
      {
        ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm f_23 = ATgetArgument(t, 0);
            if(match_cons(f_23, sym__2))
              {
                u_13 = ATgetArgument(f_23, 0);
                w_13 = ATgetArgument(f_23, 1);
              }
            else
              _fail(t);
            {
              ATerm g_23 = ATgetArgument(t, 1);
              if(match_cons(g_23, sym__2))
                {
                  v_13 = ATgetArgument(g_23, 0);
                  x_13 = ATgetArgument(g_23, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_13), u_13), (ATerm) ATinsert(CheckATermList(x_13), w_13));
        return(t);
      }
      t = genzip_4_0(u_4, v_4, w_4, _id, t);
      {
        ATerm x_4 (ATerm t)
        {
          ATerm z_4 (ATerm t)
          {
            ATerm h_23 = t;
            int i_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = flatten_list_0_0(t);
                t = concat_strings_0_0(t);
                ;
                LocalPopChoice(i_23);
              }
            else
              {
                t = h_23;
              }
            return(t);
          }
          t = map_1_0(z_4, t);
          return(t);
        }
        ATerm y_4 (ATerm t)
        {
          ATerm l_3 = NULL,q_3 = NULL,s_3 = NULL;
          l_3 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm j_23 = ATgetFirst((ATermList) t);
              q_3 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = l_3;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              s_3 = ATgetFirst((ATermList) t);
              {
                ATerm k_23 = (ATerm) ATgetNext((ATermList) t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, q_3, s_3);
          {
            ATerm l_5 (ATerm t)
            {
              ATerm m_23 = t;
              int n_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_3 = NULL,e_4 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      v_3 = ATgetArgument(t, 0);
                      e_4 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm o_23 = t;
                    int p_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = SSL_gti(v_3, e_4);
                        ;
                        LocalPopChoice(p_23);
                      }
                    else
                      {
                        t = o_23;
                        t = SSL_gtr(v_3, e_4);
                      }
                    t = (ATerm) ATmakeAppl(sym__2, v_3, e_4);
                  }
                  LocalPopChoice(n_23);
                  {
                    ATerm m_4 = NULL,n_4 = NULL;
                    m_4 = t;
                    t = SSL_explode_term(m_4);
                    if(match_cons(t, sym__2))
                      {
                        ATerm q_23 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) q_23) != ATmakeSymbol("", 0, ATtrue)))
                          _fail(t);
                        {
                          ATerm s_23 = ATgetArgument(t, 1);
                          if(((ATgetType(s_23) == AT_LIST) && !(ATisEmpty(s_23))))
                            {
                              n_4 = ATgetFirst((ATermList) s_23);
                              {
                                ATerm t_23 = (ATerm) ATgetNext((ATermList) s_23);
                              }
                            }
                          else
                            _fail(t);
                        }
                      }
                    else
                      _fail(t);
                    t = n_4;
                  }
                }
              else
                {
                  t = m_23;
                  {
                    ATerm s_4 = NULL,t_4 = NULL;
                    s_4 = t;
                    t = SSL_explode_term(s_4);
                    if(match_cons(t, sym__2))
                      {
                        ATerm w_23 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) w_23) != ATmakeSymbol("", 0, ATtrue)))
                          _fail(t);
                        {
                          ATerm x_23 = ATgetArgument(t, 1);
                          if(((ATgetType(x_23) == AT_LIST) && !(ATisEmpty(x_23))))
                            {
                              ATerm y_23 = ATgetFirst((ATermList) x_23);
                              ATerm z_23 = (ATerm) ATgetNext((ATermList) x_23);
                              if(((ATgetType(z_23) == AT_LIST) && !(ATisEmpty(z_23))))
                                {
                                  t_4 = ATgetFirst((ATermList) z_23);
                                  {
                                    ATerm a_24 = (ATerm) ATgetNext((ATermList) z_23);
                                  }
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      }
                    else
                      _fail(t);
                    t = t_4;
                  }
                }
              return(t);
            }
            t = foldl_1_0(l_5, t);
          }
          return(t);
        }
        t = _2_0(x_4, y_4, t);
        if(match_cons(t, sym__2))
          {
            k_13 = ATgetArgument(t, 0);
            l_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_13, i_13);
        {
          ATerm b_24 = t;
          int c_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_subti(l_13, i_13);
              ;
              LocalPopChoice(c_24);
            }
          else
            {
              t = b_24;
              t = SSL_subtr(l_13, i_13);
            }
          m_13 = t;
          {
            ATerm d_24 = t;
            int e_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = (ATerm) ATmakeAppl(sym__2, g_13, term_n_17);
                {
                  ATerm f_24 = t;
                  int g_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_gti(g_13, (ATerm) ATmakeInt(1));
                      ;
                      LocalPopChoice(g_24);
                    }
                  else
                    {
                      t = f_24;
                      t = SSL_gtr(g_13, (ATerm) ATmakeInt(1));
                    }
                  t = (ATerm) ATmakeAppl(sym__2, g_13, term_n_17);
                }
                LocalPopChoice(e_24);
                {
                  ATerm a_14 = NULL,c_14 = NULL;
                  t = f_13;
                  if(match_cons(t, sym_AC_1))
                    {
                      c_14 = ATgetArgument(t, 0);
                      t = c_14;
                    }
                  else
                    {
                      if(match_cons(t, sym_AR_1))
                        {
                          c_14 = ATgetArgument(t, 0);
                          t = c_14;
                        }
                      else
                        {
                          if(match_cons(t, sym_AL_1))
                            {
                              c_14 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = c_14;
                        }
                    }
                  {
                    ATerm h_24 = t;
                    int i_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm m_5 (ATerm t)
                        {
                          if(!(match_cons(t, sym_HS_0)))
                            _fail(t);
                          return(t);
                        }
                        t = SOpt_value_1_0(m_5, t);
                        ;
                        LocalPopChoice(i_24);
                      }
                    else
                      {
                        t = h_24;
                        t = term_n_17;
                      }
                    a_14 = t;
                    t = (ATerm) ATmakeAppl(sym__2, a_14, term_t_17);
                    t = copy_char_0_0(t);
                  }
                }
              }
            else
              {
                t = d_24;
                t = term_d_21;
              }
            n_13 = t;
            t = k_13;
            {
              ATerm n_5 (ATerm t)
              {
                ATerm g_14 = NULL,h_14 = NULL;
                g_14 = t;
                t = (ATerm) ATmakeAppl(sym__3, g_13, f_13, (ATerm) ATmakeAppl(sym__3, term_t_17, g_14, m_13));
                t = align_column_0_0(t);
                h_14 = t;
                t = (ATerm) ATmakeAppl(sym__2, h_14, n_13);
                t = conc_strings_0_0(t);
                return(t);
              }
              t = map_1_0(n_5, t);
              o_13 = t;
              t = n_13;
              t = string_length_0_0(t);
              p_13 = t;
              t = (ATerm) ATmakeAppl(sym__2, p_13, l_13);
              {
                ATerm j_24 = t;
                int k_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = SSL_addi(p_13, l_13);
                    ;
                    LocalPopChoice(k_24);
                  }
                else
                  {
                    t = j_24;
                    t = SSL_addr(p_13, l_13);
                  }
                q_13 = t;
                t = (ATerm) ATmakeAppl(sym__2, q_13, (ATerm) ATinsert(CheckATermList(j_13), o_13));
              }
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm genzip_4_0 (ATerm i_79 (ATerm), ATerm j_79 (ATerm), ATerm k_79 (ATerm), ATerm l_79 (ATerm), ATerm t)
{
  ATerm i_14 (ATerm t)
  {
    ATerm l_24 = t;
    int m_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_79(t);
        ;
        LocalPopChoice(m_24);
      }
    else
      {
        t = l_24;
        t = j_79(t);
        t = _2_0(l_79, i_14, t);
        t = k_79(t);
      }
    return(t);
  }
  t = i_14(t);
  return(t);
}
ATerm map_with_index_1_0 (ATerm l_100 (ATerm), ATerm t)
{
  ATerm m_14 = NULL;
  m_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_17, m_14);
  {
    ATerm f_15 (ATerm t)
    {
      ATerm z_14 = NULL,a_15 = NULL,d_15 = NULL,e_15 = NULL;
      if(match_cons(t, sym__2))
        {
          z_14 = ATgetArgument(t, 0);
          a_15 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = a_15;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          ATerm h_5 = NULL,i_5 = NULL,k_5 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              d_15 = ATgetFirst((ATermList) t);
              e_15 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, z_14, d_15);
          t = l_100(t);
          h_5 = t;
          t = (ATerm) ATmakeAppl(sym__2, z_14, term_n_17);
          {
            ATerm n_24 = t;
            int o_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SSL_addi(z_14, (ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(o_24);
              }
            else
              {
                t = n_24;
                t = SSL_addr(z_14, (ATerm) ATmakeInt(1));
              }
            i_5 = t;
            t = (ATerm) ATmakeAppl(sym__2, i_5, e_15);
            t = f_15(t);
            k_5 = t;
            t = (ATerm) ATinsert(CheckATermList(k_5), h_5);
          }
        }
      return(t);
    }
    t = f_15(t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm x_83 (ATerm), ATerm y_83 (ATerm), ATerm z_83 (ATerm), ATerm t)
{
  ATerm p_24 = t;
  int q_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = x_83(t);
      ;
      LocalPopChoice(q_24);
    }
  else
    {
      t = p_24;
      {
        ATerm p_15 = NULL,q_15 = NULL,t_15 = NULL,u_15 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_15 = ATgetFirst((ATermList) t);
            q_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = p_15;
        t = z_83(t);
        t_15 = t;
        t = q_15;
        t = foldr_3_0(x_83, y_83, z_83, t);
        u_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_15, u_15);
        t = y_83(t);
      }
    }
  return(t);
}
ATerm while_not_2_0 (ATerm y_93 (ATerm), ATerm z_93 (ATerm), ATerm t)
{
  ATerm v_15 (ATerm t)
  {
    ATerm r_24 = t;
    int s_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_93(t);
        ;
        LocalPopChoice(s_24);
      }
    else
      {
        t = r_24;
        t = z_93(t);
        t = v_15(t);
      }
    return(t);
  }
  t = v_15(t);
  return(t);
}
ATerm for_3_0 (ATerm b_94 (ATerm), ATerm c_94 (ATerm), ATerm d_94 (ATerm), ATerm t)
{
  t = b_94(t);
  t = while_not_2_0(c_94, d_94, t);
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  ATerm o_5 (ATerm t)
  {
    ATerm w_15 = NULL,x_15 = NULL;
    if(match_cons(t, sym__2))
      {
        w_15 = ATgetArgument(t, 0);
        x_15 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, w_15, x_15, (ATerm) ATempty);
    return(t);
  }
  ATerm p_5 (ATerm t)
  {
    ATerm y_15 = NULL;
    if(match_cons(t, sym__3))
      {
        ATerm t_24 = ATgetArgument(t, 0);
        if(((ATgetType(t_24) != AT_INT) || (ATgetInt((ATermInt) t_24) != 0)))
          _fail(t);
        {
          ATerm u_24 = ATgetArgument(t, 1);
        }
        y_15 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = y_15;
    return(t);
  }
  ATerm q_5 (ATerm t)
  {
    ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL;
    if(match_cons(t, sym__3))
      {
        z_15 = ATgetArgument(t, 0);
        a_16 = ATgetArgument(t, 1);
        b_16 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, z_15, term_n_17);
    t = geq_0_0(t);
    t = (ATerm) ATmakeAppl(sym__2, z_15, term_n_17);
    {
      ATerm v_24 = t;
      int w_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(z_15, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(w_24);
        }
      else
        {
          t = v_24;
          t = SSL_subtr(z_15, (ATerm) ATmakeInt(1));
        }
      c_16 = t;
      t = (ATerm) ATmakeAppl(sym__3, c_16, a_16, (ATerm) ATinsert(CheckATermList(b_16), a_16));
    }
    return(t);
  }
  t = for_3_0(o_5, p_5, q_5, t);
  return(t);
}
ATerm FitToMax_1_0 (ATerm n_71 (ATerm), ATerm t)
{
  ATerm f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL;
  f_16 = t;
  {
    ATerm r_5 (ATerm t)
    {
      t = term_e_16;
      return(t);
    }
    ATerm t_5 (ATerm t)
    {
      ATerm k_16 = NULL,l_16 = NULL;
      if(match_cons(t, sym__2))
        {
          k_16 = ATgetArgument(t, 0);
          l_16 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm x_24 = t;
        int y_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(k_16, l_16);
            ;
            LocalPopChoice(y_24);
          }
        else
          {
            t = x_24;
            t = SSL_addr(k_16, l_16);
          }
      }
      return(t);
    }
    ATerm x_5 (ATerm t)
    {
      t = term_n_17;
      return(t);
    }
    t = foldr_3_0(r_5, t_5, x_5, t);
    g_16 = t;
    t = term_p_14;
    t = n_71(t);
    h_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_16, g_16);
    {
      ATerm z_24 = t;
      int a_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(h_16, g_16);
          ;
          LocalPopChoice(a_25);
        }
      else
        {
          t = z_24;
          t = SSL_subtr(h_16, g_16);
        }
      i_16 = t;
      {
        ATerm b_25 = t;
        int c_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, i_16, term_e_16);
            {
              ATerm d_25 = t;
              int e_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SSL_gti(i_16, (ATerm) ATmakeInt(0));
                  ;
                  LocalPopChoice(e_25);
                }
              else
                {
                  t = d_25;
                  t = SSL_gtr(i_16, (ATerm) ATmakeInt(0));
                }
              t = (ATerm) ATmakeAppl(sym__2, i_16, (ATerm) ATempty);
              t = copy_0_0(t);
              j_16 = t;
              t = (ATerm) ATmakeAppl(sym__2, f_16, j_16);
              {
                ATerm f_25 = t;
                int g_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym__2))
                      {
                        ATerm h_25 = ATgetArgument(t, 0);
                        ATerm i_25 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = f_16;
                    {
                      ATerm y_5 (ATerm t)
                      {
                        t = j_16;
                        return(t);
                      }
                      t = at_end_1_0(y_5, t);
                    }
                    ;
                    LocalPopChoice(g_25);
                  }
                else
                  {
                    t = f_25;
                    {
                      ATerm s_5 = NULL;
                      t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, f_16, j_16));
                      if(match_cons(t, sym__2))
                        {
                          ATerm j_25 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) j_25) != ATmakeSymbol("", 0, ATtrue)))
                            _fail(t);
                          s_5 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = s_5;
                      t = concat_0_0(t);
                    }
                  }
              }
            }
            ;
            LocalPopChoice(c_25);
          }
        else
          {
            t = b_25;
            {
              ATerm k_25 = t;
              int l_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
                    _fail(t);
                  t = f_16;
                  ;
                  LocalPopChoice(l_25);
                }
              else
                {
                  t = k_25;
                  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, f_16), (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: too many columns in row: ", 0, ATtrue))));
                  t = SSL_exit((ATerm) ATmakeInt(1));
                  t = (ATerm) ATinsert(ATinsert(ATempty, f_16), term_m_25);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm R_2_0 (ATerm t_64 (ATerm), ATerm u_64 (ATerm), ATerm t)
{
  ATerm q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL,v_16 = NULL;
  v_16 = t;
  if(match_cons(t, sym_R_2))
    {
      r_16 = ATgetArgument(t, 0);
      s_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_16);
  q_16 = t;
  t = r_16;
  t = t_64(t);
  t_16 = t;
  t = s_16;
  t = u_64(t);
  u_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_R_2, t_16, u_16), q_16);
  return(t);
}
ATerm construct_rows_0_0 (ATerm t)
{
  ATerm v_5 = NULL;
  v_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_5, (ATerm) ATempty);
  {
    ATerm j_18 (ATerm t)
    {
      ATerm f_17 = NULL,g_17 = NULL,i_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL;
      if(match_cons(t, sym__2))
        {
          i_17 = ATgetArgument(t, 0);
          m_17 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = i_17;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm s_17 = NULL;
          t = m_17;
          {
            ATerm z_5 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2_0(_id, z_5, t);
            s_17 = t;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, s_17));
          }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              k_17 = ATgetFirst((ATermList) t);
              l_17 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = k_17;
          if(match_cons(t, sym_R_2))
            {
              f_17 = ATgetArgument(t, 0);
              g_17 = ATgetArgument(t, 1);
              {
                ATerm n_25 = t;
                int o_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm y_17 = NULL,z_17 = NULL;
                    t = m_17;
                    {
                      ATerm c_6 (ATerm t)
                      {
                        t = (ATerm) ATempty;
                        return(t);
                      }
                      t = reverse_acc_2_0(_id, c_6, t);
                      y_17 = t;
                      t = (ATerm) ATmakeAppl(sym__2, l_17, (ATerm) ATempty);
                      t = j_18(t);
                      z_17 = t;
                      t = (ATerm) ATinsert(ATinsert(CheckATermList(z_17), (ATerm) ATmakeAppl(sym_R_2, f_17, g_17)), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, y_17));
                    }
                    ;
                    LocalPopChoice(o_25);
                  }
                else
                  {
                    t = n_25;
                    t = (ATerm) ATmakeAppl(sym__2, l_17, (ATerm) ATinsert(CheckATermList(m_17), k_17));
                    t = j_18(t);
                  }
              }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, l_17, (ATerm) ATinsert(CheckATermList(m_17), k_17));
              t = j_18(t);
            }
        }
      return(t);
    }
    t = j_18(t);
    {
      ATerm e_6 (ATerm t)
      {
        ATerm p_25 = t;
        if((PushChoice() == 0))
          {
            ATerm j_6 (ATerm t)
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              return(t);
            }
            t = R_2_0(_id, j_6, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = p_25;
          }
        return(t);
      }
      t = filter_1_0(e_6, t);
    }
  }
  return(t);
}
ATerm abox2text_0_0 (ATerm t)
{
  ATerm o_31 (ATerm f_27, ATerm g_27, ATerm h_27, ATerm o_27, ATerm p_27, ATerm t)
  {
    ATerm y_27 = NULL,a_28 = NULL,b_28 = NULL,d_28 = NULL,f_28 = NULL;
    t = h_27;
    t = construct_rows_0_0(t);
    {
      ATerm k_6 (ATerm t)
      {
        ATerm g_28 = NULL;
        if(match_cons(t, sym_R_2))
          {
            ATerm q_25 = ATgetArgument(t, 0);
            g_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_28;
        return(t);
      }
      t = map_1_0(k_6, t);
      {
        ATerm m_6 (ATerm t)
        {
          ATerm n_6 (ATerm t)
          {
            t = f_27;
            {
              ATerm o_6 (ATerm t)
              {
                t = term_e_16;
                return(t);
              }
              ATerm s_6 (ATerm t)
              {
                ATerm h_28 = NULL,i_28 = NULL;
                if(match_cons(t, sym__2))
                  {
                    h_28 = ATgetArgument(t, 0);
                    i_28 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                {
                  ATerm r_25 = t;
                  int s_25 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_addi(h_28, i_28);
                      ;
                      LocalPopChoice(s_25);
                    }
                  else
                    {
                      t = r_25;
                      t = SSL_addr(h_28, i_28);
                    }
                }
                return(t);
              }
              ATerm t_6 (ATerm t)
              {
                t = term_n_17;
                return(t);
              }
              t = foldr_3_0(o_6, s_6, t_6, t);
            }
            return(t);
          }
          t = FitToMax_1_0(n_6, t);
          return(t);
        }
        t = map_1_0(m_6, t);
        t = matrix_transpose_0_0(t);
        {
          ATerm u_6 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = reverse_acc_2_0(_id, u_6, t);
          t = map_with_index_1_0(_id, t);
          {
            ATerm v_6 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2_0(_id, v_6, t);
            y_27 = t;
            t = (ATerm) ATmakeAppl(sym__2, f_27, y_27);
            {
              ATerm e_7 (ATerm t)
              {
                if(match_cons(t, sym__2))
                  {
                    ATerm t_25 = ATgetArgument(t, 0);
                    if(((ATgetType(t_25) != AT_LIST) || !(ATisEmpty(t_25))))
                      _fail(t);
                    {
                      ATerm u_25 = ATgetArgument(t, 1);
                      if(((ATgetType(u_25) != AT_LIST) || !(ATisEmpty(u_25))))
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATempty;
                return(t);
              }
              ATerm f_7 (ATerm t)
              {
                ATerm j_28 = NULL,k_28 = NULL,l_28 = NULL,r_28 = NULL;
                if(match_cons(t, sym__2))
                  {
                    ATerm v_25 = ATgetArgument(t, 0);
                    if(((ATgetType(v_25) == AT_LIST) && !(ATisEmpty(v_25))))
                      {
                        j_28 = ATgetFirst((ATermList) v_25);
                        l_28 = (ATerm) ATgetNext((ATermList) v_25);
                      }
                    else
                      _fail(t);
                    {
                      ATerm w_25 = ATgetArgument(t, 1);
                      if(((ATgetType(w_25) == AT_LIST) && !(ATisEmpty(w_25))))
                        {
                          k_28 = ATgetFirst((ATermList) w_25);
                          r_28 = (ATerm) ATgetNext((ATermList) w_25);
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_28, k_28), (ATerm) ATmakeAppl(sym__2, l_28, r_28));
                return(t);
              }
              ATerm i_7 (ATerm t)
              {
                ATerm s_28 = NULL,t_28 = NULL;
                if(match_cons(t, sym__2))
                  {
                    s_28 = ATgetArgument(t, 0);
                    t_28 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATinsert(CheckATermList(t_28), s_28);
                return(t);
              }
              t = genzip_4_0(e_7, f_7, i_7, _id, t);
              a_28 = t;
              t = (ATerm) ATmakeAppl(sym__2, a_28, (ATerm) ATmakeAppl(sym__2, o_27, (ATerm) ATempty));
              t = foldl_1_0(do_A_column_0_0, t);
              if(match_cons(t, sym__2))
                {
                  b_28 = ATgetArgument(t, 0);
                  d_28 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = d_28;
              {
                ATerm j_7 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = reverse_acc_2_0(_id, j_7, t);
                t = matrix_transpose_0_0(t);
                {
                  ATerm k_7 (ATerm t)
                  {
                    ATerm u_28 = NULL;
                    u_28 = t;
                    t = (ATerm) ATmakeAppl(sym__2, u_28, b_28);
                    return(t);
                  }
                  t = map_1_0(k_7, t);
                  f_28 = t;
                  t = (ATerm) ATmakeAppl(sym__3, g_27, f_28, o_27);
                  t = format_vbox_0_0(t);
                }
              }
            }
          }
        }
      }
    }
    return(t);
  }
  ATerm r_31 (ATerm v_28, ATerm w_28, ATerm x_28, ATerm y_28, ATerm t)
  {
    ATerm c_29 = NULL,d_29 = NULL,e_29 = NULL;
    t = v_28;
    {
      ATerm x_25 = t;
      int y_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_7 (ATerm t)
          {
            if(!(match_cons(t, sym_IS_0)))
              _fail(t);
            return(t);
          }
          t = SOpt_value_1_0(m_7, t);
          ;
          LocalPopChoice(y_25);
        }
      else
        {
          t = x_25;
          t = term_e_16;
        }
      c_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_28, c_29);
      {
        ATerm z_25 = t;
        int a_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(x_28, c_29);
            ;
            LocalPopChoice(a_26);
          }
        else
          {
            t = z_25;
            t = SSL_addr(x_28, c_29);
          }
        d_29 = t;
        t = w_28;
        t = filter_1_0(is_real_vbox_0_0, t);
        e_29 = t;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, x_28);
          }
        else
          {
            ATerm f_29 = NULL;
            t = (ATerm) ATmakeAppl(sym__3, x_28, d_29, e_29);
            t = do_vbox_children_0_0(t);
            f_29 = t;
            t = (ATerm) ATmakeAppl(sym__3, v_28, f_29, x_28);
            t = format_vbox_0_0(t);
          }
      }
    }
    return(t);
  }
  ATerm s_31 (ATerm g_29, ATerm h_29, ATerm i_29, ATerm j_29, ATerm t)
  {
    ATerm n_29 = NULL,o_29 = NULL,p_29 = NULL,q_29 = NULL;
    t = g_29;
    {
      ATerm b_26 = t;
      int c_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_7 (ATerm t)
          {
            if(!(match_cons(t, sym_HS_0)))
              _fail(t);
            return(t);
          }
          t = SOpt_value_1_0(n_7, t);
          ;
          LocalPopChoice(c_26);
        }
      else
        {
          t = b_26;
          t = term_n_17;
        }
      o_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_29, term_t_17);
      t = copy_char_0_0(t);
      n_29 = t;
      t = string_length_0_0(t);
      p_29 = t;
      t = h_29;
      t = filter_1_0(is_real_hbox_0_0, t);
      q_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_29, i_29);
      {
        ATerm p_7 (ATerm t)
        {
          ATerm d_26 = t;
          int e_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = abox2text_0_0(t);
              ;
              LocalPopChoice(e_26);
            }
          else
            {
              t = d_26;
              {
                ATerm t_29 = NULL;
                t_29 = t;
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, t_29), (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: invalid box: ", 0, ATtrue))));
                t = SSL_exit((ATerm) ATmakeInt(1));
                t = (ATerm) ATinsert(ATinsert(ATempty, t_29), term_g_18);
              }
            }
          {
            ATerm q_7 (ATerm t)
            {
              ATerm u_29 = NULL;
              u_29 = t;
              t = (ATerm) ATmakeAppl(sym__2, p_29, u_29);
              {
                ATerm f_26 = t;
                int g_26 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = SSL_addi(p_29, u_29);
                    ;
                    LocalPopChoice(g_26);
                  }
                else
                  {
                    t = f_26;
                    t = SSL_addr(p_29, u_29);
                  }
              }
              return(t);
            }
            t = _2_0(_id, q_7, t);
          }
          return(t);
        }
        t = thread_map_1_0(p_7, t);
        {
          ATerm r_7 (ATerm t)
          {
            ATerm v_29 = NULL;
            v_29 = t;
            t = (ATerm) ATmakeAppl(sym__2, n_29, v_29);
            t = separate_by_0_0(t);
            return(t);
          }
          t = _2_0(r_7, _id, t);
          {
            ATerm h_26 = t;
            int i_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_7 (ATerm t)
                {
                  ATerm j_26 = t;
                  if((PushChoice() == 0))
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = j_26;
                    }
                  return(t);
                }
                ATerm u_7 (ATerm t)
                {
                  ATerm w_29 = NULL;
                  w_29 = t;
                  t = (ATerm) ATmakeAppl(sym__2, w_29, p_29);
                  {
                    ATerm k_26 = t;
                    int l_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = SSL_subti(w_29, p_29);
                        ;
                        LocalPopChoice(l_26);
                      }
                    else
                      {
                        t = k_26;
                        t = SSL_subtr(w_29, p_29);
                      }
                  }
                  return(t);
                }
                t = _2_0(t_7, u_7, t);
                ;
                LocalPopChoice(i_26);
              }
            else
              {
                t = h_26;
              }
          }
        }
      }
    }
    return(t);
  }
  ATerm t_31 (ATerm x_29, ATerm y_29, ATerm z_29, ATerm a_30, ATerm t)
  {
    ATerm e_30 = NULL,f_30 = NULL,g_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL,k_30 = NULL,l_30 = NULL;
    t = x_29;
    {
      ATerm m_26 = t;
      int n_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_7 (ATerm t)
          {
            if(!(match_cons(t, sym_HS_0)))
              _fail(t);
            return(t);
          }
          t = SOpt_value_1_0(v_7, t);
          ;
          LocalPopChoice(n_26);
        }
      else
        {
          t = m_26;
          t = term_n_17;
        }
      f_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_30, term_t_17);
      t = copy_char_0_0(t);
      e_30 = t;
      t = x_29;
      {
        ATerm o_26 = t;
        int p_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_7 (ATerm t)
            {
              if(!(match_cons(t, sym_VS_0)))
                _fail(t);
              return(t);
            }
            t = SOpt_value_1_0(w_7, t);
            ;
            LocalPopChoice(p_26);
          }
        else
          {
            t = o_26;
            t = term_e_16;
          }
        g_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_30, term_n_17);
        {
          ATerm q_26 = t;
          int r_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_addi(g_30, (ATerm) ATmakeInt(1));
              ;
              LocalPopChoice(r_26);
            }
          else
            {
              t = q_26;
              t = SSL_addr(g_30, (ATerm) ATmakeInt(1));
            }
          h_30 = t;
          t = (ATerm) ATmakeAppl(sym__2, h_30, term_r_15);
          t = copy_char_0_0(t);
          t = e_30;
          t = string_length_0_0(t);
          i_30 = t;
          t = x_29;
          {
            ATerm s_26 = t;
            int t_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_7 (ATerm t)
                {
                  if(!(match_cons(t, sym_IS_0)))
                    _fail(t);
                  return(t);
                }
                t = SOpt_value_1_0(x_7, t);
                ;
                LocalPopChoice(t_26);
              }
            else
              {
                t = s_26;
                t = term_e_16;
              }
            j_30 = t;
            t = (ATerm) ATmakeAppl(sym__2, z_29, j_30);
            {
              ATerm u_26 = t;
              int v_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SSL_addi(z_29, j_30);
                  ;
                  LocalPopChoice(v_26);
                }
              else
                {
                  t = u_26;
                  t = SSL_addr(z_29, j_30);
                }
              k_30 = t;
              t = (ATerm) ATmakeAppl(sym__2, y_29, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, z_29)));
              {
                ATerm e_8 (ATerm t)
                {
                  ATerm w_26 = t;
                  int x_26 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm i_8 (ATerm t)
                      {
                        t = i_30;
                        return(t);
                      }
                      t = hv_add_to_hbox_1_0(i_8, t);
                      ;
                      LocalPopChoice(x_26);
                    }
                  else
                    {
                      t = w_26;
                      {
                        ATerm j_8 (ATerm t)
                        {
                          t = i_30;
                          return(t);
                        }
                        ATerm k_8 (ATerm t)
                        {
                          t = k_30;
                          return(t);
                        }
                        t = hv_in_new_vbox_2_0(j_8, k_8, t);
                      }
                    }
                  return(t);
                }
                t = foldl_1_0(e_8, t);
                {
                  ATerm l_8 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = reverse_acc_2_0(_id, l_8, t);
                  {
                    ATerm m_8 (ATerm t)
                    {
                      ATerm n_8 (ATerm t)
                      {
                        ATerm o_8 (ATerm t)
                        {
                          t = (ATerm) ATempty;
                          return(t);
                        }
                        t = reverse_acc_2_0(_id, o_8, t);
                        return(t);
                      }
                      t = _2_0(n_8, _id, t);
                      return(t);
                    }
                    t = map_1_0(m_8, t);
                    {
                      ATerm p_8 (ATerm t)
                      {
                        ATerm q_8 (ATerm t)
                        {
                          ATerm m_30 = NULL;
                          m_30 = t;
                          t = (ATerm) ATmakeAppl(sym__2, e_30, m_30);
                          t = separate_by_0_0(t);
                          return(t);
                        }
                        t = _2_0(q_8, _id, t);
                        return(t);
                      }
                      t = map_1_0(p_8, t);
                      l_30 = t;
                      t = (ATerm) ATmakeAppl(sym__3, x_29, l_30, z_29);
                      t = format_vbox_0_0(t);
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
  ATerm n_30 = NULL,o_30 = NULL,r_30 = NULL,s_30 = NULL,t_30 = NULL,u_30 = NULL,v_30 = NULL,w_30 = NULL,x_30 = NULL,y_30 = NULL,a_31 = NULL,b_31 = NULL;
  w_30 = t;
  if(match_cons(t, sym__2))
    {
      x_30 = ATgetArgument(t, 0);
      b_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_30;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_21, b_31);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_30 = ATgetFirst((ATermList) t);
          a_31 = (ATerm) ATgetNext((ATermList) t);
          t = a_31;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, y_30, b_31);
          {
            ATerm y_26 = t;
            int z_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = abox2text_0_0(t);
                ;
                LocalPopChoice(z_26);
              }
            else
              {
                t = y_26;
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, y_30, b_31)), (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: invalid box: ", 0, ATtrue))));
                t = SSL_exit((ATerm) ATmakeInt(1));
                t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, y_30, b_31)), term_g_18);
              }
          }
        }
      else
        {
          if(match_cons(t, sym_ALT_2))
            {
              y_30 = ATgetArgument(t, 0);
              a_31 = ATgetArgument(t, 1);
              {
                ATerm y_7 = NULL,b_8 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, y_30, b_31);
                {
                  ATerm a_27 = t;
                  int b_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = abox2text_0_0(t);
                      ;
                      LocalPopChoice(b_27);
                    }
                  else
                    {
                      t = a_27;
                      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, y_30, b_31)), (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: invalid box: ", 0, ATtrue))));
                      t = SSL_exit((ATerm) ATmakeInt(1));
                      t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, y_30, b_31)), term_g_18);
                    }
                  y_7 = t;
                  if(match_cons(t, sym__2))
                    {
                      ATerm c_27 = ATgetArgument(t, 0);
                      b_8 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_ALT_2, y_30, a_31), b_31);
                  {
                    ATerm d_27 = t;
                    int e_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm d_8 = NULL;
                        t = get_width_0_0(t);
                        d_8 = t;
                        t = (ATerm) ATmakeAppl(sym__2, b_8, d_8);
                        t = leq_0_0(t);
                        LocalPopChoice(e_27);
                        t = y_7;
                      }
                    else
                      {
                        t = d_27;
                        t = (ATerm) ATmakeAppl(sym__2, a_31, b_31);
                        {
                          ATerm i_27 = t;
                          int j_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = abox2text_0_0(t);
                              ;
                              LocalPopChoice(j_27);
                            }
                          else
                            {
                              t = i_27;
                              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, a_31, b_31)), (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: invalid box: ", 0, ATtrue))));
                              t = SSL_exit((ATerm) ATmakeInt(1));
                              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, a_31, b_31)), term_g_18);
                            }
                        }
                      }
                  }
                }
              }
            }
          else
            {
              if(match_cons(t, sym_R_2))
                {
                  y_30 = ATgetArgument(t, 0);
                  a_31 = ATgetArgument(t, 1);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, y_30, a_31), b_31);
                  {
                    ATerm k_27 = t;
                    int l_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = abox2text_0_0(t);
                        ;
                        LocalPopChoice(l_27);
                      }
                    else
                      {
                        t = k_27;
                        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, y_30, a_31), b_31)), (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: invalid box: ", 0, ATtrue))));
                        t = SSL_exit((ATerm) ATmakeInt(1));
                        t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, y_30, a_31), b_31)), term_g_18);
                      }
                  }
                }
              else
                {
                  ATerm m_27 = t;
                  int n_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_FBOX_2))
                        {
                          ATerm q_27 = ATgetArgument(t, 0);
                          a_31 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      LocalPopChoice(n_27);
                      t = (ATerm) ATmakeAppl(sym__2, a_31, b_31);
                      {
                        ATerm r_27 = t;
                        int s_27 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = abox2text_0_0(t);
                            ;
                            LocalPopChoice(s_27);
                          }
                        else
                          {
                            t = r_27;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, a_31, b_31)), (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: invalid box: ", 0, ATtrue))));
                            t = SSL_exit((ATerm) ATmakeInt(1));
                            t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, a_31, b_31)), term_g_18);
                          }
                      }
                    }
                  else
                    {
                      t = m_27;
                      {
                        ATerm t_27 = t;
                        int u_27 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_C_2))
                              {
                                ATerm v_27 = ATgetArgument(t, 0);
                                a_31 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(u_27);
                            t = a_31;
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                n_30 = ATgetFirst((ATermList) t);
                                r_30 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = n_30;
                            if(match_cons(t, sym_S_1))
                              {
                                o_30 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = r_30;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym__2, o_30, b_31);
                          }
                        else
                          {
                            t = t_27;
                            if(match_cons(t, sym_S_1))
                              {
                                y_30 = ATgetArgument(t, 0);
                                {
                                  ATerm k_11 = NULL,l_11 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, y_30, b_31);
                                  t = rel_string_length_0_0(t);
                                  k_11 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, b_31, k_11);
                                  {
                                    ATerm w_27 = t;
                                    int x_27 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = SSL_addi(b_31, k_11);
                                        ;
                                        LocalPopChoice(x_27);
                                      }
                                    else
                                      {
                                        t = w_27;
                                        t = SSL_addr(b_31, k_11);
                                      }
                                    l_11 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, y_30, l_11);
                                  }
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_A_3))
                                  {
                                    y_30 = ATgetArgument(t, 0);
                                    a_31 = ATgetArgument(t, 1);
                                    v_30 = ATgetArgument(t, 2);
                                    t = y_30;
                                    if(match_cons(t, sym_AOPTIONS_1))
                                      {
                                        u_30 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = v_30;
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        s_30 = ATgetFirst((ATermList) t);
                                        t_30 = (ATerm) ATgetNext((ATermList) t);
                                        t = t_30;
                                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                          {
                                            t = s_30;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm z_27 = t;
                                                int c_28 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = o_31(u_30, a_31, v_30, b_31, w_30, t);
                                                    ;
                                                    LocalPopChoice(c_28);
                                                  }
                                                else
                                                  {
                                                    t = z_27;
                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, b_31);
                                                  }
                                              }
                                            else
                                              {
                                                t = o_31(u_30, a_31, v_30, b_31, w_30, t);
                                              }
                                          }
                                        else
                                          {
                                            t = s_30;
                                            t = o_31(u_30, a_31, v_30, b_31, w_30, t);
                                          }
                                      }
                                    else
                                      {
                                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                          {
                                            ATerm e_28 = t;
                                            int m_28 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = o_31(u_30, a_31, v_30, b_31, w_30, t);
                                                ;
                                                LocalPopChoice(m_28);
                                              }
                                            else
                                              {
                                                t = e_28;
                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, b_31);
                                              }
                                          }
                                        else
                                          {
                                            t = o_31(u_30, a_31, v_30, b_31, w_30, t);
                                          }
                                      }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_V_2))
                                      {
                                        y_30 = ATgetArgument(t, 0);
                                        a_31 = ATgetArgument(t, 1);
                                        t = r_31(y_30, a_31, b_31, w_30, t);
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_H_2))
                                          {
                                            y_30 = ATgetArgument(t, 0);
                                            a_31 = ATgetArgument(t, 1);
                                            t = s_31(y_30, a_31, b_31, w_30, t);
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_HV_2))
                                              {
                                                y_30 = ATgetArgument(t, 0);
                                                a_31 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = t_31(y_30, a_31, b_31, w_30, t);
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
ATerm fclose_0_0 (ATerm t)
{
  ATerm q_32 (ATerm h_32, ATerm t)
  {
    t = SSL_fclose(h_32);
    return(t);
  }
  ATerm k_32 = NULL,o_32 = NULL;
  o_32 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_32 = ATgetArgument(t, 0);
      {
        ATerm n_28 = t;
        int o_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(k_32);
            ;
            LocalPopChoice(o_28);
          }
        else
          {
            t = n_28;
            t = q_32(o_32, t);
          }
      }
    }
  else
    {
      t = q_32(o_32, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm r_32 = NULL;
  t = SSL_stdin_stream();
  r_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_32);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm s_32 = NULL;
  t = SSL_stdout_stream();
  s_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_32);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm t_32 = NULL;
  t = SSL_stderr_stream();
  t_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_32);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_28 = ATgetArgument(t, 0);
      ATerm q_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_28 = t;
    int a_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_12 = NULL,r_12 = NULL;
        q_12 = t;
        t = SSL_explode_term(q_12);
        if(match_cons(t, sym__2))
          {
            ATerm b_29 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) b_29) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm k_29 = ATgetArgument(t, 1);
              if(((ATgetType(k_29) == AT_LIST) && !(ATisEmpty(k_29))))
                {
                  r_12 = ATgetFirst((ATermList) k_29);
                  {
                    ATerm l_29 = (ATerm) ATgetNext((ATermList) k_29);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = r_12;
        if(match_cons(t, sym_stderr_0))
          {
            t = r_12;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = r_12;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = r_12;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(a_29);
      }
    else
      {
        t = z_28;
        {
          ATerm m_29 = t;
          int r_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_32 = NULL,y_32 = NULL,z_32 = NULL;
              ATerm r_8 (ATerm t)
              {
                ATerm a_33 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    a_33 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = a_33;
                return(t);
              }
              t = _2_0(r_8, _id, t);
              if(match_cons(t, sym__2))
                {
                  w_32 = ATgetArgument(t, 0);
                  y_32 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(w_32, y_32);
              z_32 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, z_32);
              ;
              LocalPopChoice(r_29);
            }
          else
            {
              t = m_29;
              {
                ATerm b_33 = NULL,c_33 = NULL,d_33 = NULL;
                ATerm s_8 (ATerm t)
                {
                  ATerm e_33 = NULL;
                  e_33 = t;
                  t = SSL_is_string(e_33);
                  return(t);
                }
                t = _2_0(s_8, _id, t);
                if(match_cons(t, sym__2))
                  {
                    b_33 = ATgetArgument(t, 0);
                    c_33 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(b_33, c_33);
                d_33 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, d_33);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm g_33 = NULL,i_33 = NULL,k_33 = NULL;
  ATerm s_29 = t;
  int b_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_33 = NULL;
      l_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_33, term_c_30);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(b_30);
    }
  else
    {
      t = s_29;
      {
        ATerm s_12 = NULL;
        s_12 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, s_12), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = s_12;
        _fail(t);
      }
    }
  g_33 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(k_33);
  i_33 = t;
  t = g_33;
  t = fclose_0_0(t);
  t = i_33;
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm s_33 = NULL,t_33 = NULL;
  s_33 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = s_33;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          t_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_access(t_33, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm j_34 = NULL,k_34 = NULL;
  j_34 = t;
  if(match_cons(t, sym_FILE_1))
    {
      k_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm d_30 = t;
    int p_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_15 = NULL;
        t = j_34;
        t = k_0(t);
        c_15 = t;
        {
          ATerm q_30 = t;
          int z_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(z_30);
            }
          else
            {
              t = q_30;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(k_34, c_15);
          t = (ATerm) ATmakeAppl(sym_FILE_1, k_34);
        }
        ;
        LocalPopChoice(p_30);
      }
    else
      {
        t = d_30;
        {
          ATerm c_31 = t;
          int d_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_15 = NULL;
              t = j_34;
              t = k_0(t);
              k_15 = t;
              {
                ATerm e_31 = t;
                if((PushChoice() == 0))
                  {
                    ATerm f_31 = t;
                    int g_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(g_31);
                      }
                    else
                      {
                        t = f_31;
                        {
                          ATerm h_31 = t;
                          int i_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(i_31);
                            }
                          else
                            {
                              t = h_31;
                              {
                                ATerm l_15 = NULL;
                                l_15 = t;
                                if((k_34 != t))
                                  {
                                    _fail(t);
                                  }
                                t = l_15;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = e_31;
                  }
                t = SSL_copy(k_34, k_15);
                t = (ATerm) ATmakeAppl(sym_FILE_1, k_34);
              }
              ;
              LocalPopChoice(d_31);
            }
          else
            {
              t = c_31;
              t = j_34;
              t = k_0(t);
              if((k_34 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_34);
            }
        }
      }
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm q_34 = NULL,r_34 = NULL,s_34 = NULL;
  if(match_cons(t, sym__2))
    {
      q_34 = ATgetArgument(t, 0);
      r_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_31 = t;
    int k_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_15 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm l_31 = ATgetArgument(t, 0);
            ATerm m_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(q_34, r_34);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm n_31 = ATgetFirst((ATermList) t);
            o_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = o_15;
        ;
        LocalPopChoice(k_31);
      }
    else
      {
        t = j_31;
        t = (ATerm) ATempty;
      }
    s_34 = t;
    t = SSL_table_put(q_34, r_34, s_34);
    t = (ATerm) ATmakeAppl(sym__2, q_34, r_34);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm j_87 (ATerm), ATerm t)
{
  ATerm y_34 = NULL,z_34 = NULL,a_35 = NULL,b_35 = NULL;
  y_34 = t;
  t = j_87(t);
  z_34 = t;
  {
    ATerm p_31 = t;
    int q_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(z_34, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(q_31);
      }
    else
      {
        t = p_31;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_35 = ATgetFirst((ATermList) t);
        a_35 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(z_34, (ATerm)ATmakeAppl(sym_Scopes_0), a_35);
    t = b_35;
    {
      ATerm t_8 (ATerm t)
      {
        ATerm c_35 = NULL;
        c_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_34, c_35);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(t_8, t);
      t = y_34;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm j_76 (ATerm), ATerm k_76 (ATerm), ATerm t)
{
  ATerm u_31 = t;
  int v_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_76(t);
      t = k_76(t);
      ;
      LocalPopChoice(v_31);
    }
  else
    {
      t = u_31;
      t = k_76(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm i_87 (ATerm), ATerm t)
{
  ATerm f_35 = NULL,g_35 = NULL,h_35 = NULL;
  f_35 = t;
  t = i_87(t);
  g_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_35, term_w_31);
  {
    ATerm x_31 = t;
    int y_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_31 = ATgetArgument(t, 0);
            ATerm a_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(g_35, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(y_31);
      }
    else
      {
        t = x_31;
        t = (ATerm) ATempty;
      }
    h_35 = t;
    t = SSL_table_put(g_35, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(h_35), (ATerm) ATempty));
    t = f_35;
  }
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm x_71 (ATerm), ATerm t)
{
  ATerm n_35 = NULL;
  ATerm v_8 (ATerm t)
  {
    t = term_t_14;
    return(t);
  }
  t = begin_scope_1_0(v_8, t);
  {
    ATerm w_8 (ATerm t)
    {
      ATerm o_35 = NULL;
      o_35 = t;
      {
        ATerm b_32 = t;
        int c_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(c_32);
          }
        else
          {
            t = b_32;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((n_35 != NULL) && (n_35 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              n_35 = ATgetFirst((ATermList) t);
            {
              ATerm d_32 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(n_35);
        {
          ATerm y_8 (ATerm t)
          {
            ATerm e_32 = t;
            int f_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_35 = NULL;
                r_35 = t;
                t = SSL_remove(r_35);
                ;
                LocalPopChoice(f_32);
              }
            else
              {
                t = e_32;
              }
            return(t);
          }
          t = map_1_0(y_8, t);
          t = o_35;
          {
            ATerm z_8 (ATerm t)
            {
              t = term_t_14;
              return(t);
            }
            t = end_scope_1_0(z_8, t);
          }
        }
      }
      return(t);
    }
    t = restore_always_2_0(x_71, w_8, t);
  }
  return(t);
}
ATerm xtc_io_1_0 (ATerm y_71 (ATerm), ATerm t)
{
  ATerm a_9 (ATerm t)
  {
    ATerm g_32 = t;
    int i_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_35 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)));
        {
          ATerm j_32 = t;
          int l_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_17 = NULL;
              t = eval_config_0_0(t);
              e_17 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), e_17);
              t = e_17;
              ;
              LocalPopChoice(l_32);
            }
          else
            {
              t = j_32;
            }
          u_35 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, u_35);
        }
        ;
        LocalPopChoice(i_32);
      }
    else
      {
        t = g_32;
        t = term_m_32;
      }
    t = y_71(t);
    {
      ATerm b_9 (ATerm t)
      {
        ATerm n_32 = t;
        int p_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)));
            {
              ATerm u_32 = t;
              int v_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_18 = NULL;
                  t = eval_config_0_0(t);
                  i_18 = t;
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), i_18);
                  t = i_18;
                  ;
                  LocalPopChoice(v_32);
                }
              else
                {
                  t = u_32;
                }
            }
            ;
            LocalPopChoice(p_32);
          }
        else
          {
            t = n_32;
            t = term_x_32;
          }
        return(t);
      }
      t = copy_to_1_0(b_9, t);
    }
    return(t);
  }
  t = xtc_temp_files_1_0(a_9, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm v_35 = NULL,w_35 = NULL;
  v_35 = t;
  t = term_p_14;
  t = whoami_0_0(t);
  w_35 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), w_35), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = v_35;
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm a_36 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_36 = NULL;
      t = term_p_14;
      t = j_0(t);
      e_36 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_33, term_h_33, e_36);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm i_36 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_36 = ATgetFirst((ATermList) t);
          b_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_36;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_36 = ATgetFirst((ATermList) t);
          d_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_36;
      t = h_0(t);
      t = c_36;
      t = i_0(t);
      i_36 = t;
      t = (ATerm) ATinsert(CheckATermList(d_36), i_36);
    }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm c_9 (ATerm t)
  {
    ATerm k_36 = NULL;
    k_36 = t;
    if(match_string(t, "-k"))
      {
        t = k_36;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = k_36;
      }
    return(t);
  }
  ATerm g_9 (ATerm t)
  {
    ATerm l_36 = NULL,m_36 = NULL;
    l_36 = t;
    t = SSL_string_to_int(l_36);
    m_36 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), m_36);
    t = l_36;
    return(t);
  }
  ATerm i_9 (ATerm t)
  {
    t = term_j_33;
    return(t);
  }
  t = ArgOption_3_0(c_9, g_9, i_9, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm m_33 = t;
  int n_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_9 (ATerm t)
      {
        ATerm o_36 = NULL;
        o_36 = t;
        if(match_string(t, "-S"))
          {
            t = o_36;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = o_36;
          }
        return(t);
      }
      ATerm k_9 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_o_33;
        return(t);
      }
      ATerm l_9 (ATerm t)
      {
        t = term_p_33;
        return(t);
      }
      t = Option_3_0(j_9, k_9, l_9, t);
      ;
      LocalPopChoice(n_33);
    }
  else
    {
      t = m_33;
      {
        ATerm q_33 = t;
        int r_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_9 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm n_9 (ATerm t)
            {
              ATerm p_36 = NULL,q_36 = NULL;
              p_36 = t;
              t = SSL_string_to_int(p_36);
              q_36 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), q_36);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, p_36);
              return(t);
            }
            ATerm o_9 (ATerm t)
            {
              t = term_u_33;
              return(t);
            }
            t = ArgOption_3_0(m_9, n_9, o_9, t);
            ;
            LocalPopChoice(r_33);
          }
        else
          {
            t = q_33;
            {
              ATerm p_9 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm q_9 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_v_33;
                return(t);
              }
              ATerm s_9 (ATerm t)
              {
                t = term_w_33;
                return(t);
              }
              t = Option_3_0(p_9, q_9, s_9, t);
            }
          }
      }
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm d_10 (ATerm t)
  {
    ATerm s_36 = NULL;
    s_36 = t;
    if(match_string(t, "-o"))
      {
        t = s_36;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = s_36;
      }
    return(t);
  }
  ATerm e_10 (ATerm t)
  {
    ATerm t_36 = NULL;
    t_36 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), t_36);
    t = (ATerm) ATmakeAppl(sym_Output_1, t_36);
    return(t);
  }
  ATerm f_10 (ATerm t)
  {
    t = term_x_33;
    return(t);
  }
  t = ArgOption_3_0(d_10, e_10, f_10, t);
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm g_10 (ATerm t)
  {
    ATerm a_37 = NULL;
    a_37 = t;
    if(match_string(t, "-i"))
      {
        t = a_37;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = a_37;
      }
    return(t);
  }
  ATerm h_10 (ATerm t)
  {
    ATerm b_37 = NULL;
    b_37 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), b_37);
    t = (ATerm) ATmakeAppl(sym_Input_1, b_37);
    return(t);
  }
  ATerm i_10 (ATerm t)
  {
    t = term_y_33;
    return(t);
  }
  t = ArgOption_3_0(g_10, h_10, i_10, t);
  return(t);
}
ATerm abox2text_options_0_0 (ATerm t)
{
  ATerm z_33 = t;
  int a_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(a_34);
    }
  else
    {
      t = z_33;
      {
        ATerm b_34 = t;
        int c_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(c_34);
          }
        else
          {
            t = b_34;
            {
              ATerm d_34 = t;
              int e_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_10 (ATerm t)
                  {
                    if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
                      _fail(t);
                    return(t);
                  }
                  ATerm f_11 (ATerm t)
                  {
                    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                    t = term_f_34;
                    return(t);
                  }
                  ATerm g_11 (ATerm t)
                  {
                    t = term_g_34;
                    return(t);
                  }
                  t = Option_3_0(r_10, f_11, g_11, t);
                  ;
                  LocalPopChoice(e_34);
                }
              else
                {
                  t = d_34;
                  {
                    ATerm h_34 = t;
                    int i_34 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(i_34);
                      }
                    else
                      {
                        t = h_34;
                        {
                          ATerm l_34 = t;
                          int m_34 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = keep_option_0_0(t);
                              ;
                              LocalPopChoice(m_34);
                            }
                          else
                            {
                              t = l_34;
                              {
                                ATerm h_11 (ATerm t)
                                {
                                  ATerm j_37 = NULL;
                                  j_37 = t;
                                  if(match_string(t, "-w"))
                                    {
                                      t = j_37;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--width", 0, ATtrue)))
                                        _fail(t);
                                      t = j_37;
                                    }
                                  return(t);
                                }
                                ATerm i_11 (ATerm t)
                                {
                                  ATerm k_37 = NULL,l_37 = NULL;
                                  k_37 = t;
                                  t = SSL_string_to_int(k_37);
                                  l_37 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue)), l_37);
                                  t = k_37;
                                  return(t);
                                }
                                ATerm j_11 (ATerm t)
                                {
                                  t = term_n_34;
                                  return(t);
                                }
                                t = ArgOption_3_0(h_11, i_11, j_11, t);
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
ATerm report_failure_0_0 (ATerm t)
{
  ATerm m_37 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_14;
  t = whoami_0_0(t);
  m_37 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), m_37));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm o_34 = t;
    int p_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_19 = NULL;
        t = eval_config_0_0(t);
        a_19 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), a_19);
        t = a_19;
        ;
        LocalPopChoice(p_34);
      }
    else
      {
        t = o_34;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm v_83 (ATerm), ATerm w_83 (ATerm), ATerm t)
{
  ATerm t_34 = t;
  int u_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = v_83(t);
      ;
      LocalPopChoice(u_34);
    }
  else
    {
      t = t_34;
      {
        ATerm p_37 = NULL,q_37 = NULL,t_37 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_37 = ATgetFirst((ATermList) t);
            q_37 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = q_37;
        t = foldr_2_0(v_83, w_83, t);
        t_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_37, t_37);
        t = w_83(t);
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
  ATerm w_37 = NULL,b_19 = NULL,c_19 = NULL;
  t = times_0_0(t);
  b_19 = t;
  t = SSL_explode_term(b_19);
  if(match_cons(t, sym__2))
    {
      ATerm v_34 = ATgetArgument(t, 0);
      c_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_19;
  {
    ATerm m_11 (ATerm t)
    {
      t = term_e_16;
      return(t);
    }
    ATerm n_11 (ATerm t)
    {
      ATerm i_19 = NULL,q_19 = NULL;
      if(match_cons(t, sym__2))
        {
          i_19 = ATgetArgument(t, 0);
          q_19 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm w_34 = t;
        int x_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(i_19, q_19);
            ;
            LocalPopChoice(x_34);
          }
        else
          {
            t = w_34;
            t = SSL_addr(i_19, q_19);
          }
      }
      return(t);
    }
    t = foldr_2_0(m_11, n_11, t);
    w_37 = t;
    t = SSL_TicksToSeconds(w_37);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm k_38 = NULL,o_38 = NULL,p_38 = NULL;
  k_38 = t;
  if(match_cons(t, sym__2))
    {
      o_38 = ATgetArgument(t, 0);
      p_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_35 = t;
    int e_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_38;
        if((o_38 != t))
          {
            _fail(t);
          }
        t = k_38;
        ;
        LocalPopChoice(e_35);
      }
    else
      {
        t = d_35;
        t = k_38;
        {
          ATerm i_35 = t;
          int j_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(o_38, p_38);
              ;
              LocalPopChoice(j_35);
            }
          else
            {
              t = i_35;
              t = SSL_gtr(o_38, p_38);
            }
          t = (ATerm) ATmakeAppl(sym__2, o_38, p_38);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm e_86 (ATerm), ATerm t)
{
  ATerm k_35 = t;
  int l_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_38 = NULL,u_38 = NULL;
      s_38 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm m_35 = t;
        int p_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_20 = NULL;
            t = eval_config_0_0(t);
            t_20 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), t_20);
            t = t_20;
            ;
            LocalPopChoice(p_35);
          }
        else
          {
            t = m_35;
          }
        u_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_38, term_n_17);
        t = geq_0_0(t);
        t = s_38;
        t = e_86(t);
      }
      ;
      LocalPopChoice(l_35);
    }
  else
    {
      t = k_35;
    }
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm o_11 (ATerm t)
  {
    ATerm w_38 = NULL,x_38 = NULL;
    t = run_time_0_0(t);
    w_38 = t;
    t = term_p_14;
    t = whoami_0_0(t);
    x_38 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), w_38), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), x_38));
    t = (ATerm) ATmakeAppl(sym__2, term_q_35, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_35), w_38), term_s_35), x_38));
    return(t);
  }
  t = if_verbose1_1_0(o_11, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm f_91 (ATerm), ATerm t)
{
  ATerm x_35 = t;
  int y_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm z_35 = t;
        int f_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_20 = NULL;
            t = eval_config_0_0(t);
            x_20 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), x_20);
            t = x_20;
            ;
            LocalPopChoice(f_36);
          }
        else
          {
            t = z_35;
          }
      }
      ;
      LocalPopChoice(y_35);
    }
  else
    {
      t = x_35;
      {
        ATerm p_11 (ATerm t)
        {
          ATerm g_36 = t;
          int h_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(h_36);
            }
          else
            {
              t = g_36;
              {
                ATerm j_36 = t;
                int n_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(n_36);
                  }
                else
                  {
                    t = j_36;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = fetch_1_0(p_11, t);
      }
    }
  t = f_91(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm z_38 = NULL,a_39 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_38 = ATgetFirst((ATermList) t);
      a_39 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm e_39 = NULL,f_39 = NULL;
        t = a_39;
        t = g_0(t);
        e_39 = t;
        t = z_38;
        t = e_0(t);
        f_39 = t;
        t = a_39;
        {
          ATerm q_11 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(e_39), f_39);
            return(t);
          }
          t = reverse_acc_2_0(e_0, q_11, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_p_14;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm j_66 (ATerm), ATerm t)
{
  ATerm g_39 = NULL,h_39 = NULL,i_39 = NULL,j_39 = NULL;
  j_39 = t;
  if(match_cons(t, sym_Program_1))
    {
      h_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_39);
  g_39 = t;
  t = h_39;
  t = j_66(t);
  i_39 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, i_39), g_39);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm r_36 = t;
  int u_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm v_36 = t;
        int w_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_21 = NULL;
            t = eval_config_0_0(t);
            b_21 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), b_21);
            t = b_21;
            ;
            LocalPopChoice(w_36);
          }
        else
          {
            t = v_36;
          }
      }
      ;
      LocalPopChoice(u_36);
    }
  else
    {
      t = r_36;
      {
        ATerm u_11 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(u_11, t);
      }
    }
  t = term_x_36;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  {
    ATerm v_11 (ATerm t)
    {
      t = (ATerm) ATempty;
      return(t);
    }
    t = reverse_acc_2_0(_id, v_11, t);
    {
      ATerm w_11 (ATerm t)
      {
        ATerm o_39 = NULL;
        o_39 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, o_39), term_y_36);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(w_11, t);
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm k_66 (ATerm), ATerm t)
{
  ATerm p_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL;
  s_39 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      q_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_39);
  p_39 = t;
  t = q_39;
  t = k_66(t);
  r_39 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, r_39), p_39);
  return(t);
}
ATerm fetch_1_0 (ATerm x_77 (ATerm), ATerm t)
{
  ATerm v_39 (ATerm t)
  {
    ATerm z_36 = t;
    int c_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(x_77, _id, t);
        ;
        LocalPopChoice(c_37);
      }
    else
      {
        t = z_36;
        t = Cons_2_0(_id, v_39, t);
      }
    return(t);
  }
  t = v_39(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm x_39 = NULL,y_39 = NULL;
  x_39 = t;
  {
    ATerm d_37 = t;
    int e_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = x_39;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm f_37 = ATgetFirst((ATermList) t);
                ATerm g_37 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = x_39;
          }
        ;
        LocalPopChoice(e_37);
      }
    else
      {
        t = d_37;
        t = (ATerm) ATinsert(ATempty, x_39);
      }
    y_39 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), y_39);
    t = x_39;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm h_37 = t;
    int i_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_21 = NULL;
        t = eval_config_0_0(t);
        f_21 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), f_21);
        t = f_21;
        ;
        LocalPopChoice(i_37);
      }
    else
      {
        t = h_37;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm n_37 = t;
  int o_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(o_37);
    }
  else
    {
      t = n_37;
      {
        ATerm v_40 = NULL,w_40 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_40 = ATgetFirst((ATermList) t);
            w_40 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_40;
        {
          ATerm y_11 (ATerm t)
          {
            t = w_40;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(y_11, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm d_78 (ATerm), ATerm t)
{
  ATerm i_41 (ATerm t)
  {
    ATerm r_37 = t;
    int s_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, i_41, t);
        ;
        LocalPopChoice(s_37);
      }
    else
      {
        t = r_37;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = d_78(t);
      }
    return(t);
  }
  t = i_41(t);
  return(t);
}
ATerm _2_0 (ATerm k_62 (ATerm), ATerm l_62 (ATerm), ATerm t)
{
  ATerm j_41 = NULL,k_41 = NULL,l_41 = NULL,n_41 = NULL,o_41 = NULL,q_41 = NULL;
  q_41 = t;
  if(match_cons(t, sym__2))
    {
      k_41 = ATgetArgument(t, 0);
      l_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_41);
  j_41 = t;
  t = k_41;
  t = k_62(t);
  n_41 = t;
  t = l_41;
  t = l_62(t);
  o_41 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, n_41, o_41), j_41);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm u_41 = NULL;
  ATerm c_12 (ATerm t)
  {
    ATerm v_41 = NULL;
    v_41 = t;
    t = SSL_explode_string(v_41);
    return(t);
  }
  ATerm e_12 (ATerm t)
  {
    ATerm w_41 = NULL;
    w_41 = t;
    t = SSL_explode_string(w_41);
    return(t);
  }
  t = _2_0(c_12, e_12, t);
  {
    ATerm u_37 = t;
    int v_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_41 = NULL,z_41 = NULL;
        if(match_cons(t, sym__2))
          {
            y_41 = ATgetArgument(t, 0);
            z_41 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_41;
        {
          ATerm f_12 (ATerm t)
          {
            t = z_41;
            return(t);
          }
          t = at_end_1_0(f_12, t);
        }
        ;
        LocalPopChoice(v_37);
      }
    else
      {
        t = u_37;
        {
          ATerm i_21 = NULL,j_21 = NULL;
          i_21 = t;
          t = SSL_explode_term(i_21);
          if(match_cons(t, sym__2))
            {
              ATerm x_37 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) x_37) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              j_21 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = j_21;
          t = concat_0_0(t);
        }
      }
    u_41 = t;
    t = SSL_implode_string(u_41);
  }
  return(t);
}
ATerm map_1_0 (ATerm m_77 (ATerm), ATerm t)
{
  ATerm e_42 (ATerm t)
  {
    ATerm y_37 = t;
    int z_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(z_37);
      }
    else
      {
        t = y_37;
        t = Cons_2_0(m_77, e_42, t);
      }
    return(t);
  }
  t = e_42(t);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm a_38 = t;
  int b_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_42 = NULL;
      k_42 = t;
      t = SSL_is_string(k_42);
      ;
      LocalPopChoice(b_38);
    }
  else
    {
      t = a_38;
      {
        ATerm c_38 = t;
        int d_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_12 (ATerm t)
            {
              ATerm e_38 = t;
              int f_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0_0(t);
                  ;
                  LocalPopChoice(f_38);
                }
              else
                {
                  t = e_38;
                }
              return(t);
            }
            t = map_1_0(g_12, t);
            ;
            LocalPopChoice(d_38);
          }
        else
          {
            t = c_38;
            {
              ATerm p_42 = NULL,q_42 = NULL,r_42 = NULL;
              p_42 = t;
              if(match_cons(t, sym_Path_1))
                {
                  q_42 = ATgetArgument(t, 0);
                  t = q_42;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      q_42 = ATgetArgument(t, 0);
                      t = q_42;
                      {
                        ATerm g_38 = t;
                        int h_38 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), q_42);
                            {
                              ATerm i_38 = t;
                              int j_38 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm s_22 = NULL;
                                  t = eval_config_0_0(t);
                                  s_22 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), q_42, s_22);
                                  t = s_22;
                                  ;
                                  LocalPopChoice(j_38);
                                }
                              else
                                {
                                  t = i_38;
                                }
                            }
                            ;
                            LocalPopChoice(h_38);
                          }
                        else
                          {
                            t = g_38;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, q_42), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = q_42;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm w_42 = NULL,x_42 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          q_42 = ATgetArgument(t, 0);
                          r_42 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = q_42;
                      t = eval_config_0_0(t);
                      w_42 = t;
                      t = r_42;
                      t = eval_config_0_0(t);
                      x_42 = t;
                      t = (ATerm) ATmakeAppl(sym__2, w_42, x_42);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm l_38 = t;
  int m_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_12 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm j_12 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_r_38;
        return(t);
      }
      ATerm k_12 (ATerm t)
      {
        t = term_t_38;
        return(t);
      }
      t = Option_3_0(i_12, j_12, k_12, t);
      ;
      LocalPopChoice(m_38);
    }
  else
    {
      t = l_38;
      {
        ATerm l_12 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm m_12 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_v_38;
          return(t);
        }
        ATerm p_12 (ATerm t)
        {
          t = term_y_38;
          return(t);
        }
        t = Option_3_0(l_12, m_12, p_12, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm g_43 = NULL,h_43 = NULL,i_43 = NULL,j_43 = NULL;
  if(match_cons(t, sym__3))
    {
      g_43 = ATgetArgument(t, 0);
      h_43 = ATgetArgument(t, 1);
      i_43 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_43, h_43);
  {
    ATerm b_39 = t;
    int c_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_39 = ATgetArgument(t, 0);
            ATerm k_39 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(g_43, h_43);
        ;
        LocalPopChoice(c_39);
      }
    else
      {
        t = b_39;
        t = (ATerm) ATempty;
      }
    j_43 = t;
    t = SSL_table_put(g_43, h_43, (ATerm) ATinsert(CheckATermList(j_43), i_43));
    t = (ATerm) ATmakeAppl(sym__3, g_43, h_43, i_43);
  }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm q_43 = NULL,r_43 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_43 = NULL;
      t = term_p_14;
      t = d_0(t);
      s_43 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_33, term_h_33, s_43);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm v_43 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_43 = ATgetFirst((ATermList) t);
          r_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_43;
      t = a_0(t);
      t = term_p_14;
      t = c_0(t);
      v_43 = t;
      t = (ATerm) ATinsert(CheckATermList(r_43), v_43);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm t_63 (ATerm), ATerm u_63 (ATerm), ATerm t)
{
  ATerm w_43 = NULL,x_43 = NULL,y_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL;
  b_44 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_43 = ATgetFirst((ATermList) t);
      y_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_44);
  w_43 = t;
  t = x_43;
  t = t_63(t);
  z_43 = t;
  t = y_43;
  t = u_63(t);
  a_44 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(a_44), z_43), w_43);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_93 (ATerm), ATerm t)
{
  ATerm f_44 = NULL;
  f_44 = t;
  {
    ATerm l_39 = t;
    int m_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_n_39;
        t = d_93(t);
        ;
        LocalPopChoice(m_39);
      }
    else
      {
        t = l_39;
      }
    t = f_44;
    {
      ATerm t_12 (ATerm t)
      {
        ATerm g_44 = NULL;
        g_44 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), g_44);
        t = (ATerm) ATmakeAppl(sym_Program_1, g_44);
        return(t);
      }
      ATerm v_12 (ATerm t)
      {
        ATerm t_39 = t;
        int u_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_39 = t;
            int z_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(z_39);
              }
            else
              {
                t = w_39;
                t = d_93(t);
                t = Cons_2_0(_id, v_12, t);
              }
            ;
            LocalPopChoice(u_39);
          }
        else
          {
            t = t_39;
            {
              ATerm i_44 = NULL,j_44 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  i_44 = ATgetFirst((ATermList) t);
                  j_44 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(j_44), (ATerm) ATmakeAppl(sym_Undefined_1, i_44));
            }
          }
        return(t);
      }
      t = Cons_2_0(t_12, v_12, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm c_93 (ATerm), ATerm t)
{
  ATerm v_44 = NULL,w_44 = NULL,a_45 = NULL;
  v_44 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = v_44;
  {
    ATerm w_12 (ATerm t)
    {
      ATerm a_40 = t;
      int b_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_93(t);
          ;
          LocalPopChoice(b_40);
        }
      else
        {
          t = a_40;
          {
            ATerm c_40 = t;
            int d_40 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_13 (ATerm t)
                {
                  ATerm b_45 = NULL;
                  b_45 = t;
                  if(match_string(t, "--help"))
                    {
                      t = b_45;
                    }
                  else
                    {
                      if(match_string(t, "-h"))
                        {
                          t = b_45;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
                            _fail(t);
                          t = b_45;
                        }
                    }
                  return(t);
                }
                ATerm d_13 (ATerm t)
                {
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                  t = term_e_40;
                  return(t);
                }
                ATerm e_13 (ATerm t)
                {
                  t = term_f_40;
                  return(t);
                }
                t = Option_3_0(c_13, d_13, e_13, t);
                ;
                LocalPopChoice(d_40);
              }
            else
              {
                t = c_40;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(w_12, t);
    {
      ATerm g_40 = t;
      int h_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_45 = NULL;
          h_45 = t;
          {
            ATerm i_40 = t;
            int j_40 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = h_45;
                {
                  ATerm k_40 = t;
                  int l_40 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm m_40 = t;
                        int n_40 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm l_23 = NULL;
                            t = eval_config_0_0(t);
                            l_23 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), l_23);
                            t = l_23;
                            ;
                            LocalPopChoice(n_40);
                          }
                        else
                          {
                            t = m_40;
                          }
                      }
                      ;
                      LocalPopChoice(l_40);
                    }
                  else
                    {
                      t = k_40;
                      {
                        ATerm y_13 (ATerm t)
                        {
                          if(!(match_cons(t, sym_Help_0)))
                            _fail(t);
                          return(t);
                        }
                        t = fetch_1_0(y_13, t);
                      }
                    }
                  t = h_45;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(j_40);
              }
            else
              {
                t = i_40;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm o_40 = t;
                  int p_40 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_23 = NULL;
                      t = eval_config_0_0(t);
                      r_23 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), r_23);
                      t = r_23;
                      ;
                      LocalPopChoice(p_40);
                    }
                  else
                    {
                      t = o_40;
                    }
                  t = h_45;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(h_40);
        }
      else
        {
          t = g_40;
          {
            ATerm q_40 = t;
            int r_40 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_13 (ATerm t)
                {
                  ATerm b_14 (ATerm t)
                  {
                    if(((w_44 != NULL) && (w_44 != t)))
                      _fail(t);
                    else
                      w_44 = t;
                    return(t);
                  }
                  t = Undefined_1_0(b_14, t);
                  return(t);
                }
                t = fetch_1_0(z_13, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(w_44)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_q_35, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_44)), term_s_40));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(r_40);
              }
            else
              {
                t = q_40;
              }
          }
        }
      a_45 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = a_45;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm h_91 (ATerm), ATerm i_91 (ATerm), ATerm j_91 (ATerm), ATerm k_91 (ATerm), ATerm t)
{
  ATerm k_45 = NULL;
  t = parse_options_1_0(h_91, t);
  k_45 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), k_45);
  t = k_45;
  t = j_91(t);
  {
    ATerm t_40 = t;
    int u_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(i_91, t);
        ;
        LocalPopChoice(u_40);
      }
    else
      {
        t = t_40;
        {
          ATerm x_40 = t;
          int y_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_91(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(y_40);
            }
          else
            {
              t = x_40;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm io_Abox_2_text_0_0 (ATerm t)
{
  ATerm d_14 (ATerm t)
  {
    ATerm e_14 (ATerm t)
    {
      ATerm l_45 = NULL,u_23 = NULL,v_23 = NULL;
      t = read_from_0_0(t);
      l_45 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_45, term_e_16);
      {
        ATerm z_40 = t;
        int a_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = abox2text_0_0(t);
            ;
            LocalPopChoice(a_41);
          }
        else
          {
            t = z_40;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, l_45, (ATerm) ATmakeInt(0))), (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: invalid box: ", 0, ATtrue))));
            t = SSL_exit((ATerm) ATmakeInt(1));
            t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, l_45, term_e_16)), term_g_18);
          }
        u_23 = t;
        t = SSL_explode_term(u_23);
        if(match_cons(t, sym__2))
          {
            ATerm b_41 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) b_41) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm c_41 = ATgetArgument(t, 1);
              if(((ATgetType(c_41) == AT_LIST) && !(ATisEmpty(c_41))))
                {
                  v_23 = ATgetFirst((ATermList) c_41);
                  {
                    ATerm d_41 = (ATerm) ATgetNext((ATermList) c_41);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, v_23, term_e_41);
        t = topdown_print_to_0_0(t);
      }
      return(t);
    }
    t = xtc_io_1_0(e_14, t);
    return(t);
  }
  t = option_wrap_4_0(abox2text_options_0_0, default_usage_0_0, _id, d_14, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_Abox_2_text_0_0(t);
  return(t);
}
