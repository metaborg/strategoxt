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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_FILE_1;
Symbol sym_TempFiles_0;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Undefined_0;
Symbol sym_F__OK_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
Symbol sym_PP_Table_1;
Symbol sym_PP_Entry_2;
Symbol sym_Path1_1;
Symbol sym_Path_2;
Symbol sym_selector_2;
Symbol sym_Arg_1;
Symbol sym_Arg2_2;
Symbol sym_S_1;
Symbol sym_HV_2;
Symbol sym_SOpt_2;
Symbol sym_Strict_0;
Symbol sym_alt_2;
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
  sym_PP_Table_1 = ATmakeSymbol("PP-Table", 1, ATfalse);
  ATprotectSymbol(sym_PP_Table_1);
  sym_PP_Entry_2 = ATmakeSymbol("PP-Entry", 2, ATfalse);
  ATprotectSymbol(sym_PP_Entry_2);
  sym_Path1_1 = ATmakeSymbol("Path1", 1, ATfalse);
  ATprotectSymbol(sym_Path1_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_selector_2 = ATmakeSymbol("selector", 2, ATfalse);
  ATprotectSymbol(sym_selector_2);
  sym_Arg_1 = ATmakeSymbol("Arg", 1, ATfalse);
  ATprotectSymbol(sym_Arg_1);
  sym_Arg2_2 = ATmakeSymbol("Arg2", 2, ATfalse);
  ATprotectSymbol(sym_Arg2_2);
  sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
  ATprotectSymbol(sym_S_1);
  sym_HV_2 = ATmakeSymbol("HV", 2, ATfalse);
  ATprotectSymbol(sym_HV_2);
  sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
  ATprotectSymbol(sym_SOpt_2);
  sym_Strict_0 = ATmakeSymbol("Strict", 0, ATfalse);
  ATprotectSymbol(sym_Strict_0);
  sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
  ATprotectSymbol(sym_alt_2);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_t_34;
ATerm term_s_34;
ATerm term_n_34;
ATerm term_m_34;
ATerm term_b_34;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_e_33;
ATerm term_a_33;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_d_30;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_z_28;
ATerm term_v_28;
ATerm term_m_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_f_28;
ATerm term_e_28;
ATerm term_z_27;
ATerm term_w_27;
ATerm term_t_27;
ATerm term_r_27;
ATerm term_t_26;
ATerm term_r_26;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_r_24;
ATerm term_o_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_x_23;
ATerm term_t_22;
ATerm term_r_20;
ATerm term_j_20;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_h_13;
ATerm term_x_12;
ATerm term_v_12;
ATerm term_h_10;
void init_constant_terms (void)
{
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: cannot rewrite to box: ", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("in-type", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_13);
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(sym__3, term_r_27, term_v_32, term_h_10);
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
}
ATerm flat_list_0_0 (ATerm);
ATerm Instantiate_1_0 (ATerm l_0 (ATerm), ATerm);
ATerm bottomup_1_0 (ATerm n_78 (ATerm), ATerm);
ATerm symbol2abox7_0_0 (ATerm);
ATerm instantiate_sep_list_1_0 (ATerm q_100 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm p_89 (ATerm), ATerm q_89 (ATerm), ATerm r_89 (ATerm), ATerm);
ATerm collect_p__1_0 (ATerm u_106 (ATerm), ATerm);
ATerm BuildSepList_1_0 (ATerm i_75 (ATerm), ATerm);
ATerm symbol2abox6_helper_0_0 (ATerm);
ATerm symbol2abox6_0_0 (ATerm);
ATerm symbol2abox5_0_0 (ATerm);
ATerm symbol2abox3_0_0 (ATerm);
ATerm symbol2abox2_0_0 (ATerm);
ATerm Ind2_0_0 (ATerm);
ATerm repeat_1_0 (ATerm s_92 (ATerm), ATerm);
ATerm index_0_0 (ATerm);
ATerm symbol2abox1_0_0 (ATerm);
ATerm arg2abox_0_0 (ATerm);
ATerm NZip2_0_0 (ATerm);
ATerm genzip_4_0 (ATerm a_85 (ATerm), ATerm b_85 (ATerm), ATerm c_85 (ATerm), ATerm d_85 (ATerm), ATerm);
ATerm nzip_1_0 (ATerm m_85 (ATerm), ATerm);
ATerm pp_table_get_0_0 (ATerm);
ATerm trm2abox_appl_0_0 (ATerm);
ATerm trm2abox_list_0_0 (ATerm);
ATerm trm2abox_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm q_98 (ATerm), ATerm);
ATerm assert_1_0 (ATerm u_93 (ATerm), ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm xtc_io_transform_1_0 (ATerm g_78 (ATerm), ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm r_93 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm t_81 (ATerm), ATerm u_81 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm q_93 (ATerm), ATerm);
ATerm xtc_temp_files_1_0 (ATerm h_77 (ATerm), ATerm);
ATerm xtc_io_1_0 (ATerm i_77 (ATerm), ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm path_to_string_0_0 (ATerm);
ATerm mk_key_0_0 (ATerm);
ATerm StoreEntry_0_0 (ATerm);
ATerm selector_2_0 (ATerm b_72 (ATerm), ATerm c_72 (ATerm), ATerm);
ATerm unescape_chars_0_0 (ATerm);
ATerm at_last_1_0 (ATerm y_83 (ATerm), ATerm);
ATerm last_0_0 (ATerm);
ATerm unquote_chars_1_0 (ATerm d_92 (ATerm), ATerm);
ATerm S_1_0 (ATerm g_72 (ATerm), ATerm);
ATerm SOpt_2_0 (ATerm s_73 (ATerm), ATerm t_73 (ATerm), ATerm);
ATerm Arg2_2_0 (ATerm e_72 (ATerm), ATerm f_72 (ATerm), ATerm);
ATerm Arg_1_0 (ATerm d_72 (ATerm), ATerm);
ATerm MakePPTerm_0_0 (ATerm);
ATerm topdown_1_0 (ATerm m_78 (ATerm), ATerm);
ATerm oncetd_1_0 (ATerm q_79 (ATerm), ATerm);
ATerm get_options_0_0 (ATerm);
ATerm type_failure_0_0 (ATerm);
ATerm InId_1_0 (ATerm e_100 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm read_pp_tables_0_0 (ATerm);
ATerm get_config_p_0_0 (ATerm);
ATerm ast2abox_0_0 (ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm extend_config_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm output_option_0_0 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm n_89 (ATerm), ATerm o_89 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm k_75 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm v_94 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm a_71 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm b_71 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm h_83 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm n_83 (ATerm), ATerm);
ATerm _2_0 (ATerm s_64 (ATerm), ATerm t_64 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm map_1_0 (ATerm w_82 (ATerm), ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm b_66 (ATerm), ATerm c_66 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm t_96 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm s_96 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm x_94 (ATerm), ATerm y_94 (ATerm), ATerm z_94 (ATerm), ATerm a_95 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm b_1 = t;
  int h_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(h_9);
    }
  else
    {
      t = b_1;
      {
        ATerm l_9 = t;
        int p_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_0 (ATerm t)
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              return(t);
            }
            t = Cons_2_0(b_0, flat_list_0_0, t);
            ;
            LocalPopChoice(p_9);
          }
        else
          {
            t = l_9;
            {
              ATerm q_9 = t;
              int r_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_0 = NULL,o_0 = NULL,p_0 = NULL;
                  ATerm f_0 (ATerm t)
                  {
                    ATerm q_0 = NULL;
                    q_0 = t;
                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                      {
                        t = q_0;
                      }
                    else
                      {
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm s_9 = ATgetFirst((ATermList) t);
                            ATerm t_9 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = q_0;
                      }
                    return(t);
                  }
                  t = Cons_2_0(f_0, _id, t);
                  n_0 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      o_0 = ATgetFirst((ATermList) t);
                      {
                        ATerm a_10 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = n_0;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm b_10 = ATgetFirst((ATermList) t);
                      p_0 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, o_0, p_0);
                  {
                    ATerm c_10 = t;
                    int d_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym__2))
                          {
                            ATerm e_10 = ATgetArgument(t, 0);
                            ATerm f_10 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = o_0;
                        {
                          ATerm m_0 (ATerm t)
                          {
                            t = p_0;
                            return(t);
                          }
                          t = at_end_1_0(m_0, t);
                        }
                        ;
                        LocalPopChoice(d_10);
                      }
                    else
                      {
                        t = c_10;
                        {
                          ATerm r_0 = NULL;
                          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, o_0, p_0));
                          if(match_cons(t, sym__2))
                            {
                              ATerm g_10 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) g_10) != ATmakeSymbol("", 0, ATtrue)))
                                _fail(t);
                              r_0 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = r_0;
                          t = concat_0_0(t);
                        }
                      }
                    t = flat_list_0_0(t);
                  }
                  ;
                  LocalPopChoice(r_9);
                }
              else
                {
                  t = q_9;
                  t = Cons_2_0(_id, flat_list_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Instantiate_1_0 (ATerm l_0 (ATerm), ATerm t)
{
  ATerm d_1 = NULL,i_1 = NULL;
  if(match_cons(t, sym_Arg2_2))
    {
      i_1 = ATgetArgument(t, 0);
      d_1 = ATgetArgument(t, 1);
      {
        ATerm l_1 = NULL,m_1 = NULL;
        t = term_h_10;
        t = l_0(t);
        l_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_1, l_1);
        t = index_0_0(t);
        m_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_1, m_1);
        t = index_0_0(t);
      }
    }
  else
    {
      ATerm o_1 = NULL;
      if(match_cons(t, sym_Arg_1))
        {
          i_1 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = term_h_10;
      t = l_0(t);
      o_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_1, o_1);
      t = index_0_0(t);
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm n_78 (ATerm), ATerm t)
{
  ATerm s_0 (ATerm t)
  {
    t = bottomup_1_0(n_78, t);
    return(t);
  }
  t = SRTS_all(s_0, t);
  t = n_78(t);
  return(t);
}
ATerm symbol2abox7_0_0 (ATerm t)
{
  ATerm v_1 = NULL,x_1 = NULL,z_1 = NULL,a_2 = NULL,b_2 = NULL;
  if(match_cons(t, sym__4))
    {
      ATerm i_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_10) != ATmakeSymbol("seq", 0, ATtrue)))
        _fail(t);
      v_1 = ATgetArgument(t, 1);
      x_1 = ATgetArgument(t, 2);
      z_1 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSL_explode_term(z_1);
  if(match_cons(t, sym__2))
    {
      ATerm c_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_11) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      a_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_2;
  {
    ATerm t_0 (ATerm t)
    {
      ATerm d_2 = NULL,e_2 = NULL;
      if(match_cons(t, sym__2))
        {
          d_2 = ATgetArgument(t, 0);
          e_2 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, d_2, v_1, e_2);
      t = arg2abox_0_0(t);
      return(t);
    }
    t = nzip_1_0(t_0, t);
    b_2 = t;
    t = x_1;
    {
      ATerm u_0 (ATerm t)
      {
        ATerm e_11 = t;
        int f_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_11 = t;
            int h_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_0 (ATerm t)
                {
                  t = b_2;
                  return(t);
                }
                t = Instantiate_1_0(v_0, t);
                ;
                LocalPopChoice(h_11);
              }
            else
              {
                t = g_11;
                t = flat_list_0_0(t);
              }
            ;
            LocalPopChoice(f_11);
          }
        else
          {
            t = e_11;
          }
        return(t);
      }
      t = bottomup_1_0(u_0, t);
    }
  }
  return(t);
}
ATerm instantiate_sep_list_1_0 (ATerm q_100 (ATerm), ATerm t)
{
  ATerm w_2 (ATerm t)
  {
    ATerm i_11 = t;
    int j_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(j_11);
      }
    else
      {
        t = i_11;
        {
          ATerm k_11 = t;
          int l_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_0 (ATerm t)
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                return(t);
              }
              t = Cons_2_0(_id, w_0, t);
              ;
              LocalPopChoice(l_11);
            }
          else
            {
              t = k_11;
              {
                ATerm m_2 = NULL,o_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL;
                m_2 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    o_2 = ATgetFirst((ATermList) t);
                    p_2 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = p_2;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    q_2 = ATgetFirst((ATermList) t);
                    r_2 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = m_2;
                {
                  ATerm x_0 (ATerm t)
                  {
                    ATerm t_2 = NULL;
                    t = term_h_10;
                    t = q_100(t);
                    t_2 = t;
                    {
                      ATerm z_0 (ATerm t)
                      {
                        ATerm m_11 = t;
                        int o_11 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm p_11 = t;
                            int q_11 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm a_1 (ATerm t)
                                {
                                  t = (ATerm) ATinsert(ATinsert(ATempty, q_2), o_2);
                                  return(t);
                                }
                                t = Instantiate_1_0(a_1, t);
                                ;
                                LocalPopChoice(q_11);
                              }
                            else
                              {
                                t = p_11;
                                t = flat_list_0_0(t);
                              }
                            ;
                            LocalPopChoice(o_11);
                          }
                        else
                          {
                            t = m_11;
                          }
                        return(t);
                      }
                      t = bottomup_1_0(z_0, t);
                    }
                    return(t);
                  }
                  ATerm y_0 (ATerm t)
                  {
                    t = r_2;
                    t = w_2(t);
                    return(t);
                  }
                  t = Cons_2_0(x_0, y_0, t);
                }
              }
            }
        }
      }
    return(t);
  }
  t = w_2(t);
  return(t);
}
ATerm foldr_3_0 (ATerm p_89 (ATerm), ATerm q_89 (ATerm), ATerm r_89 (ATerm), ATerm t)
{
  ATerm r_11 = t;
  int t_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = p_89(t);
      ;
      LocalPopChoice(t_11);
    }
  else
    {
      t = r_11;
      {
        ATerm h_3 = NULL,m_3 = NULL,r_3 = NULL,s_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_3 = ATgetFirst((ATermList) t);
            m_3 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = h_3;
        t = r_89(t);
        r_3 = t;
        t = m_3;
        t = foldr_3_0(p_89, q_89, r_89, t);
        s_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_3, s_3);
        t = q_89(t);
      }
    }
  return(t);
}
ATerm collect_p__1_0 (ATerm u_106 (ATerm), ATerm t)
{
  ATerm f_4 (ATerm t)
  {
    ATerm c_12 = t;
    int d_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_3 = NULL;
        t = u_106(t);
        y_3 = t;
        t = (ATerm) ATinsert(ATempty, y_3);
        ;
        LocalPopChoice(d_12);
      }
    else
      {
        t = c_12;
        {
          ATerm r_1 = NULL,s_1 = NULL;
          r_1 = t;
          t = SSL_explode_term(r_1);
          if(match_cons(t, sym__2))
            {
              ATerm g_12 = ATgetArgument(t, 0);
              s_1 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = s_1;
          {
            ATerm c_1 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            ATerm e_1 (ATerm t)
            {
              ATerm k_12 = t;
              int l_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_2 = NULL,f_2 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      c_2 = ATgetArgument(t, 0);
                      f_2 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = c_2;
                  {
                    ATerm f_1 (ATerm t)
                    {
                      t = f_2;
                      return(t);
                    }
                    t = at_end_1_0(f_1, t);
                  }
                  ;
                  LocalPopChoice(l_12);
                }
              else
                {
                  t = k_12;
                  {
                    ATerm s_2 = NULL,u_2 = NULL;
                    s_2 = t;
                    t = SSL_explode_term(s_2);
                    if(match_cons(t, sym__2))
                      {
                        ATerm q_12 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) q_12) != ATmakeSymbol("", 0, ATtrue)))
                          _fail(t);
                        u_2 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = u_2;
                    t = concat_0_0(t);
                  }
                }
              return(t);
            }
            t = foldr_3_0(c_1, e_1, f_4, t);
          }
        }
      }
    return(t);
  }
  t = f_4(t);
  return(t);
}
ATerm BuildSepList_1_0 (ATerm i_75 (ATerm), ATerm t)
{
  ATerm h_4 = NULL,i_4 = NULL,j_4 = NULL;
  if(match_cons(t, sym__2))
    {
      h_4 = ATgetArgument(t, 0);
      i_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_12 = t;
    int u_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_4 = NULL;
        t = SSL_mod(h_4, (ATerm) ATmakeInt(2));
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = term_h_10;
        t = i_75(t);
        k_4 = t;
        t = (ATerm) ATmakeAppl(sym__3, term_v_12, k_4, i_4);
        t = arg2abox_0_0(t);
        j_4 = t;
        ;
        LocalPopChoice(u_12);
      }
    else
      {
        t = s_12;
        {
          ATerm p_4 = NULL;
          t = term_h_10;
          t = i_75(t);
          p_4 = t;
          t = (ATerm) ATmakeAppl(sym__3, term_x_12, p_4, i_4);
          t = arg2abox_0_0(t);
          j_4 = t;
        }
      }
    t = j_4;
  }
  return(t);
}
ATerm symbol2abox6_helper_0_0 (ATerm t)
{
  ATerm t_4 = NULL,y_4 = NULL,z_4 = NULL,a_5 = NULL;
  if(match_cons(t, sym__3))
    {
      t_4 = ATgetArgument(t, 0);
      y_4 = ATgetArgument(t, 1);
      z_4 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = z_4;
  {
    ATerm g_1 (ATerm t)
    {
      ATerm h_1 (ATerm t)
      {
        t = t_4;
        return(t);
      }
      t = BuildSepList_1_0(h_1, t);
      return(t);
    }
    t = nzip_1_0(g_1, t);
    a_5 = t;
    {
      ATerm y_12 = t;
      int f_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_4;
          {
            ATerm j_1 (ATerm t)
            {
              t = S_1_0(_id, t);
              return(t);
            }
            t = collect_p__1_0(j_1, t);
            {
              ATerm k_1 (ATerm t)
              {
                t = term_h_13;
                return(t);
              }
              ATerm n_1 (ATerm t)
              {
                ATerm c_5 = NULL,d_5 = NULL;
                if(match_cons(t, sym__2))
                  {
                    c_5 = ATgetArgument(t, 0);
                    d_5 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                {
                  ATerm i_13 = t;
                  int j_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_addi(c_5, d_5);
                      ;
                      LocalPopChoice(j_13);
                    }
                  else
                    {
                      t = i_13;
                      t = SSL_addr(c_5, d_5);
                    }
                }
                return(t);
              }
              ATerm p_1 (ATerm t)
              {
                t = term_x_12;
                return(t);
              }
              t = foldr_3_0(k_1, n_1, p_1, t);
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 1)))
                _fail(t);
              t = a_5;
              {
                ATerm r_5 (ATerm t)
                {
                  ATerm e_5 = NULL,f_5 = NULL,i_5 = NULL;
                  e_5 = t;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = e_5;
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          f_5 = ATgetFirst((ATermList) t);
                          i_5 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = i_5;
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          ATerm m_13 = t;
                          int p_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = e_5;
                              ;
                              LocalPopChoice(p_13);
                            }
                          else
                            {
                              t = m_13;
                              {
                                ATerm l_5 = NULL;
                                t = i_5;
                                t = r_5(t);
                                l_5 = t;
                                t = (ATerm) ATinsert(ATinsert(CheckATermList(l_5), f_5), f_5);
                              }
                            }
                        }
                      else
                        {
                          ATerm q_5 = NULL;
                          t = i_5;
                          t = r_5(t);
                          q_5 = t;
                          t = (ATerm) ATinsert(ATinsert(CheckATermList(q_5), f_5), f_5);
                        }
                    }
                  return(t);
                }
                t = r_5(t);
              }
            }
          }
          ;
          LocalPopChoice(f_13);
        }
      else
        {
          t = y_12;
          t = a_5;
        }
      {
        ATerm q_1 (ATerm t)
        {
          t = y_4;
          return(t);
        }
        t = instantiate_sep_list_1_0(q_1, t);
      }
    }
  }
  return(t);
}
ATerm symbol2abox6_0_0 (ATerm t)
{
  ATerm k_6 = NULL,l_6 = NULL,m_6 = NULL,r_6 = NULL;
  if(match_cons(t, sym__4))
    {
      k_6 = ATgetArgument(t, 0);
      l_6 = ATgetArgument(t, 1);
      m_6 = ATgetArgument(t, 2);
      r_6 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = k_6;
  if(match_string(t, "iter-star-sep"))
    {
      t = (ATerm) ATmakeAppl(sym__3, l_6, m_6, r_6);
      t = symbol2abox6_helper_0_0(t);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("iter-sep", 0, ATtrue)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, l_6, m_6, r_6);
      t = symbol2abox6_helper_0_0(t);
    }
  return(t);
}
ATerm symbol2abox5_0_0 (ATerm t)
{
  ATerm f_8 = NULL,g_8 = NULL,k_8 = NULL,l_8 = NULL,m_8 = NULL,p_8 = NULL;
  g_8 = t;
  if(match_cons(t, sym__4))
    {
      k_8 = ATgetArgument(t, 0);
      l_8 = ATgetArgument(t, 1);
      m_8 = ATgetArgument(t, 2);
      p_8 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = k_8;
  if(match_string(t, "iter"))
    {
      t = g_8;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("iter-star", 0, ATtrue)))
        _fail(t);
      t = g_8;
    }
  t = p_8;
  {
    ATerm t_1 (ATerm t)
    {
      ATerm q_8 = NULL;
      q_8 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_12, l_8, q_8);
      t = arg2abox_0_0(t);
      return(t);
    }
    t = map_1_0(t_1, t);
    f_8 = t;
    t = m_8;
    {
      ATerm u_1 (ATerm t)
      {
        ATerm q_13 = t;
        int r_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_13 = t;
            int t_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_1 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATempty, f_8);
                  return(t);
                }
                t = Instantiate_1_0(w_1, t);
                ;
                LocalPopChoice(t_13);
              }
            else
              {
                t = s_13;
                t = flat_list_0_0(t);
              }
            ;
            LocalPopChoice(r_13);
          }
        else
          {
            t = q_13;
          }
        return(t);
      }
      t = bottomup_1_0(u_1, t);
    }
  }
  return(t);
}
ATerm symbol2abox3_0_0 (ATerm t)
{
  ATerm r_8 = NULL,t_8 = NULL,u_8 = NULL,v_8 = NULL;
  if(match_cons(t, sym__4))
    {
      ATerm u_13 = ATgetArgument(t, 0);
      r_8 = ATgetArgument(t, 1);
      t_8 = ATgetArgument(t, 2);
      {
        ATerm v_13 = ATgetArgument(t, 3);
        if(match_cons(v_13, sym_Some_1))
          {
            u_8 = ATgetArgument(v_13, 0);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, term_x_12, r_8, u_8);
  t = arg2abox_0_0(t);
  v_8 = t;
  t = t_8;
  {
    ATerm y_1 (ATerm t)
    {
      ATerm w_13 = t;
      int x_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_13 = t;
          int b_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_2 (ATerm t)
              {
                t = (ATerm) ATinsert(ATempty, v_8);
                return(t);
              }
              t = Instantiate_1_0(g_2, t);
              ;
              LocalPopChoice(b_14);
            }
          else
            {
              t = y_13;
              t = flat_list_0_0(t);
            }
          ;
          LocalPopChoice(x_13);
        }
      else
        {
          t = w_13;
        }
      return(t);
    }
    t = bottomup_1_0(y_1, t);
  }
  return(t);
}
ATerm symbol2abox2_0_0 (ATerm t)
{
  ATerm w_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL,c_9 = NULL,d_9 = NULL;
  if(match_cons(t, sym__4))
    {
      ATerm c_14 = ATgetArgument(t, 0);
      w_8 = ATgetArgument(t, 1);
      z_8 = ATgetArgument(t, 2);
      {
        ATerm d_14 = ATgetArgument(t, 3);
        if(match_cons(d_14, sym_alt_2))
          {
            a_9 = ATgetArgument(d_14, 0);
            {
              ATerm e_14 = ATgetArgument(d_14, 1);
              if(((ATgetType(e_14) == AT_LIST) && !(ATisEmpty(e_14))))
                {
                  b_9 = ATgetFirst((ATermList) e_14);
                  {
                    ATerm h_14 = (ATerm) ATgetNext((ATermList) e_14);
                    if(((ATgetType(h_14) != AT_LIST) || !(ATisEmpty(h_14))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, a_9, w_8, b_9);
  t = arg2abox_0_0(t);
  c_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_9, z_8);
  t = index_0_0(t);
  d_9 = t;
  t = (ATerm) ATinsert(ATempty, d_9);
  {
    ATerm h_2 (ATerm t)
    {
      ATerm i_14 = t;
      int m_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_14 = t;
          int o_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_2 (ATerm t)
              {
                t = (ATerm) ATinsert(ATempty, c_9);
                return(t);
              }
              t = Instantiate_1_0(i_2, t);
              ;
              LocalPopChoice(o_14);
            }
          else
            {
              t = n_14;
              t = flat_list_0_0(t);
            }
          ;
          LocalPopChoice(m_14);
        }
      else
        {
          t = i_14;
        }
      return(t);
    }
    t = bottomup_1_0(h_2, t);
  }
  return(t);
}
ATerm Ind2_0_0 (ATerm t)
{
  ATerm e_9 = NULL,g_9 = NULL,i_9 = NULL;
  if(match_cons(t, sym__2))
    {
      e_9 = ATgetArgument(t, 0);
      {
        ATerm p_14 = ATgetArgument(t, 1);
        if(((ATgetType(p_14) == AT_LIST) && !(ATisEmpty(p_14))))
          {
            ATerm q_14 = ATgetFirst((ATermList) p_14);
            g_9 = (ATerm) ATgetNext((ATermList) p_14);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_9, term_v_12);
  t = geq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, e_9, term_x_12);
  {
    ATerm w_14 = t;
    int x_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_subti(e_9, (ATerm) ATmakeInt(1));
        ;
        LocalPopChoice(x_14);
      }
    else
      {
        t = w_14;
        t = SSL_subtr(e_9, (ATerm) ATmakeInt(1));
      }
    i_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_9, g_9);
  }
  return(t);
}
ATerm repeat_1_0 (ATerm s_92 (ATerm), ATerm t)
{
  ATerm j_9 (ATerm t)
  {
    ATerm b_15 = t;
    int c_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_92(t);
        t = j_9(t);
        ;
        LocalPopChoice(c_15);
      }
    else
      {
        t = b_15;
      }
    return(t);
  }
  t = j_9(t);
  return(t);
}
ATerm index_0_0 (ATerm t)
{
  ATerm k_9 = NULL;
  t = repeat_1_0(Ind2_0_0, t);
  if(match_cons(t, sym__2))
    {
      ATerm d_15 = ATgetArgument(t, 0);
      if(((ATgetType(d_15) != AT_INT) || (ATgetInt((ATermInt) d_15) != 1)))
        _fail(t);
      {
        ATerm e_15 = ATgetArgument(t, 1);
        if(((ATgetType(e_15) == AT_LIST) && !(ATisEmpty(e_15))))
          {
            k_9 = ATgetFirst((ATermList) e_15);
            {
              ATerm f_15 = (ATerm) ATgetNext((ATermList) e_15);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = k_9;
  return(t);
}
ATerm symbol2abox1_0_0 (ATerm t)
{
  ATerm m_9 = NULL,n_9 = NULL,o_9 = NULL;
  if(match_cons(t, sym__4))
    {
      ATerm g_15 = ATgetArgument(t, 0);
      ATerm h_15 = ATgetArgument(t, 1);
      m_9 = ATgetArgument(t, 2);
      {
        ATerm i_15 = ATgetArgument(t, 3);
        if(match_cons(i_15, sym_alt_2))
          {
            n_9 = ATgetArgument(i_15, 0);
            {
              ATerm j_15 = ATgetArgument(i_15, 1);
              if(((ATgetType(j_15) != AT_LIST) || !(ATisEmpty(j_15))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_9, m_9);
  t = index_0_0(t);
  o_9 = t;
  t = (ATerm) ATinsert(ATempty, o_9);
  {
    ATerm j_2 (ATerm t)
    {
      ATerm m_15 = t;
      int o_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_15 = t;
          int r_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_2 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = Instantiate_1_0(k_2, t);
              ;
              LocalPopChoice(r_15);
            }
          else
            {
              t = p_15;
              t = flat_list_0_0(t);
            }
          ;
          LocalPopChoice(o_15);
        }
      else
        {
          t = m_15;
        }
      return(t);
    }
    t = bottomup_1_0(j_2, t);
  }
  return(t);
}
ATerm arg2abox_0_0 (ATerm t)
{
  ATerm u_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL;
  if(match_cons(t, sym__3))
    {
      u_9 = ATgetArgument(t, 0);
      v_9 = ATgetArgument(t, 1);
      w_9 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_9, (ATerm) ATinsert(ATempty, u_9));
  {
    ATerm s_15 = t;
    int t_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_15 = ATgetArgument(t, 0);
            ATerm z_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_9;
        {
          ATerm l_2 (ATerm t)
          {
            t = (ATerm) ATinsert(ATempty, u_9);
            return(t);
          }
          t = at_end_1_0(l_2, t);
        }
        ;
        LocalPopChoice(t_15);
      }
    else
      {
        t = s_15;
        {
          ATerm d_4 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, v_9, (ATerm) ATinsert(ATempty, u_9)));
          if(match_cons(t, sym__2))
            {
              ATerm a_16 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) a_16) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              d_4 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_4;
          t = concat_0_0(t);
        }
      }
    x_9 = t;
    {
      ATerm c_16 = t;
      int d_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_4 = NULL,n_4 = NULL;
          t = pp_table_get_0_0(t);
          if(match_cons(t, sym__2))
            {
              y_9 = ATgetArgument(t, 0);
              z_9 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = y_9;
          if(match_cons(t, sym_Path_2))
            {
              ATerm f_16 = ATgetArgument(t, 0);
              m_4 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = m_4;
          {
            ATerm n_2 (ATerm t)
            {
              ATerm v_2 (ATerm t)
              {
                ATerm y_2 (ATerm t)
                {
                  if(((n_4 != NULL) && (n_4 != t)))
                    _fail(t);
                  else
                    n_4 = t;
                  return(t);
                }
                t = selector_2_0(_id, y_2, t);
                return(t);
              }
              ATerm x_2 (ATerm t)
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                return(t);
              }
              t = Cons_2_0(v_2, x_2, t);
              return(t);
            }
            t = at_last_1_0(n_2, t);
            t = (ATerm) ATmakeAppl(sym__4, not_null(n_4), x_9, z_9, w_9);
            {
              ATerm h_16 = t;
              int i_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = symbol2abox1_0_0(t);
                  ;
                  LocalPopChoice(i_16);
                }
              else
                {
                  t = h_16;
                  {
                    ATerm j_16 = t;
                    int k_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = symbol2abox2_0_0(t);
                        ;
                        LocalPopChoice(k_16);
                      }
                    else
                      {
                        t = j_16;
                        {
                          ATerm l_16 = t;
                          int m_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = symbol2abox3_0_0(t);
                              ;
                              LocalPopChoice(m_16);
                            }
                          else
                            {
                              t = l_16;
                              {
                                ATerm n_16 = t;
                                int o_16 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym__4))
                                      {
                                        ATerm u_16 = ATgetArgument(t, 0);
                                        ATerm x_16 = ATgetArgument(t, 1);
                                        ATerm y_16 = ATgetArgument(t, 2);
                                        ATerm z_16 = ATgetArgument(t, 3);
                                      }
                                    else
                                      _fail(t);
                                    t = w_9;
                                    if(!(match_cons(t, sym_None_0)))
                                      _fail(t);
                                    t = (ATerm) ATempty;
                                    ;
                                    LocalPopChoice(o_16);
                                  }
                                else
                                  {
                                    t = n_16;
                                    {
                                      ATerm a_17 = t;
                                      int b_17 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = symbol2abox5_0_0(t);
                                          ;
                                          LocalPopChoice(b_17);
                                        }
                                      else
                                        {
                                          t = a_17;
                                          {
                                            ATerm c_17 = t;
                                            int d_17 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = symbol2abox6_0_0(t);
                                                ;
                                                LocalPopChoice(d_17);
                                              }
                                            else
                                              {
                                                t = c_17;
                                                t = symbol2abox7_0_0(t);
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
          }
          ;
          LocalPopChoice(d_16);
        }
      else
        {
          t = c_16;
          t = w_9;
          t = trm2abox_0_0(t);
        }
    }
  }
  return(t);
}
ATerm NZip2_0_0 (ATerm t)
{
  ATerm j_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL;
  if(match_cons(t, sym__2))
    {
      j_10 = ATgetArgument(t, 0);
      {
        ATerm q_17 = ATgetArgument(t, 1);
        if(((ATgetType(q_17) == AT_LIST) && !(ATisEmpty(q_17))))
          {
            k_10 = ATgetFirst((ATermList) q_17);
            l_10 = (ATerm) ATgetNext((ATermList) q_17);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_10, term_x_12);
  {
    ATerm r_17 = t;
    int s_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(j_10, (ATerm) ATmakeInt(1));
        ;
        LocalPopChoice(s_17);
      }
    else
      {
        t = r_17;
        t = SSL_addr(j_10, (ATerm) ATmakeInt(1));
      }
    m_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_10, k_10), (ATerm) ATmakeAppl(sym__2, m_10, l_10));
  }
  return(t);
}
ATerm genzip_4_0 (ATerm a_85 (ATerm), ATerm b_85 (ATerm), ATerm c_85 (ATerm), ATerm d_85 (ATerm), ATerm t)
{
  ATerm n_10 (ATerm t)
  {
    ATerm t_17 = t;
    int w_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_85(t);
        ;
        LocalPopChoice(w_17);
      }
    else
      {
        t = t_17;
        t = b_85(t);
        t = _2_0(d_85, n_10, t);
        t = c_85(t);
      }
    return(t);
  }
  t = n_10(t);
  return(t);
}
ATerm nzip_1_0 (ATerm m_85 (ATerm), ATerm t)
{
  ATerm o_10 = NULL;
  o_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_12, o_10);
  {
    ATerm z_2 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          ATerm b_18 = ATgetArgument(t, 0);
          ATerm c_18 = ATgetArgument(t, 1);
          if(((ATgetType(c_18) != AT_LIST) || !(ATisEmpty(c_18))))
            _fail(t);
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      return(t);
    }
    ATerm a_3 (ATerm t)
    {
      ATerm p_10 = NULL,q_10 = NULL;
      if(match_cons(t, sym__2))
        {
          p_10 = ATgetArgument(t, 0);
          q_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(q_10), p_10);
      return(t);
    }
    t = genzip_4_0(z_2, NZip2_0_0, a_3, m_85, t);
  }
  return(t);
}
ATerm pp_table_get_0_0 (ATerm t)
{
  ATerm r_10 = NULL,s_10 = NULL,t_10 = NULL;
  r_10 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue)), r_10);
  if(match_cons(t, sym__2))
    {
      s_10 = ATgetArgument(t, 0);
      t_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_10;
  t = path_to_string_0_0(t);
  {
    ATerm b_3 (ATerm t)
    {
      ATerm o_4 = NULL;
      o_4 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, o_4), (ATerm) ATmakeAppl(ATmakeSymbol("obtaining: ", 0, ATtrue))));
      t = o_4;
      return(t);
    }
    t = if_verbose1_1_0(b_3, t);
    t = (ATerm) ATmakeAppl(sym__2, s_10, t_10);
  }
  return(t);
}
ATerm trm2abox_appl_0_0 (ATerm t)
{
  ATerm u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL;
  u_10 = t;
  t = SSL_explode_term(u_10);
  if(match_cons(t, sym__2))
    {
      v_10 = ATgetArgument(t, 0);
      w_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_10);
  {
    ATerm d_18 = t;
    int e_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = pp_table_get_0_0(t);
        ;
        LocalPopChoice(e_18);
      }
    else
      {
        t = d_18;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, v_10)), (ATerm) ATmakeAppl(ATmakeSymbol("No pp entry found for: ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATempty, v_10);
        _fail(t);
      }
    if(match_cons(t, sym__2))
      {
        ATerm f_18 = ATgetArgument(t, 0);
        x_10 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = w_10;
    {
      ATerm c_3 (ATerm t)
      {
        ATerm z_10 = NULL,a_11 = NULL;
        if(match_cons(t, sym__2))
          {
            z_10 = ATgetArgument(t, 0);
            a_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__3, z_10, (ATerm)ATinsert(ATempty, v_10), a_11);
        t = arg2abox_0_0(t);
        return(t);
      }
      t = nzip_1_0(c_3, t);
      y_10 = t;
      t = x_10;
      {
        ATerm d_3 (ATerm t)
        {
          ATerm g_18 = t;
          int h_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_18 = t;
              int k_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_3 (ATerm t)
                  {
                    t = y_10;
                    return(t);
                  }
                  t = Instantiate_1_0(e_3, t);
                  ;
                  LocalPopChoice(k_18);
                }
              else
                {
                  t = i_18;
                  t = flat_list_0_0(t);
                }
              ;
              LocalPopChoice(h_18);
            }
          else
            {
              t = g_18;
            }
          return(t);
        }
        t = bottomup_1_0(d_3, t);
      }
    }
  }
  return(t);
}
ATerm trm2abox_list_0_0 (ATerm t)
{
  ATerm d_11 = NULL;
  d_11 = t;
  t = SSL_explode_term(d_11);
  if(match_cons(t, sym__2))
    {
      ATerm l_18 = ATgetArgument(t, 0);
      ATerm m_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_11;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_11;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm p_18 = ATgetFirst((ATermList) t);
          ATerm q_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_11;
    }
  t = map_1_0(trm2abox_0_0, t);
  return(t);
}
ATerm trm2abox_0_0 (ATerm t)
{
  ATerm r_18 = t;
  int s_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_5 = NULL,s_5 = NULL;
      s_5 = t;
      t = SSL_is_string(s_5);
      p_5 = t;
      t = (ATerm) ATmakeAppl(sym_S_1, p_5);
      ;
      LocalPopChoice(s_18);
    }
  else
    {
      t = r_18;
      {
        ATerm b_19 = t;
        int c_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_5 = NULL,x_5 = NULL,y_5 = NULL;
            x_5 = t;
            t = SSL_is_int(x_5);
            w_5 = t;
            t = SSL_int_to_string(w_5);
            y_5 = t;
            t = (ATerm) ATmakeAppl(sym_S_1, y_5);
            ;
            LocalPopChoice(c_19);
          }
        else
          {
            t = b_19;
            {
              ATerm j_19 = t;
              int k_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = trm2abox_list_0_0(t);
                  ;
                  LocalPopChoice(k_19);
                }
              else
                {
                  t = j_19;
                  {
                    ATerm r_19 = t;
                    int s_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = trm2abox_appl_0_0(t);
                        ;
                        LocalPopChoice(s_19);
                      }
                    else
                      {
                        t = r_19;
                        {
                          ATerm s_11 = NULL;
                          s_11 = t;
                          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, s_11), (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: cannot rewrite to box: ", 0, ATtrue))));
                          t = SSL_exit((ATerm) ATmakeInt(1));
                          t = (ATerm) ATinsert(ATinsert(ATempty, s_11), term_u_19);
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
ATerm WriteToFile_1_0 (ATerm q_98 (ATerm), ATerm t)
{
  ATerm u_11 = NULL,v_11 = NULL,w_11 = NULL;
  if(match_cons(t, sym__2))
    {
      u_11 = ATgetArgument(t, 0);
      v_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_11, term_v_19);
  t = open_stream_0_0(t);
  w_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_11, v_11);
  t = q_98(t);
  t = fclose_0_0(t);
  t = v_11;
  return(t);
}
ATerm assert_1_0 (ATerm u_93 (ATerm), ATerm t)
{
  ATerm x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL;
  if(match_cons(t, sym__2))
    {
      x_11 = ATgetArgument(t, 0);
      y_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_93(t);
  z_11 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_11, x_11, y_11);
  t = table_push_0_0(t);
  {
    ATerm w_19 = t;
    int z_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(z_11, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(z_19);
      }
    else
      {
        t = w_19;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_12 = ATgetFirst((ATermList) t);
        b_12 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(z_11, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(b_12), (ATerm) ATinsert(CheckATermList(a_12), x_11)));
    t = (ATerm) ATmakeAppl(sym__2, x_11, y_11);
  }
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm p_12 (ATerm f_12, ATerm t)
  {
    t = f_12;
    {
      ATerm b_20 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm c_20 = ATgetArgument(t, 0);
              ATerm e_20 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = b_20;
        }
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue))));
      t = (ATerm) ATmakeAppl(sym__2, f_12, term_v_19);
      t = open_file_0_0(t);
    }
    return(t);
  }
  ATerm r_12 (ATerm h_12, ATerm i_12, ATerm j_12, ATerm t)
  {
    t = SSL_open_file(h_12, i_12);
    return(t);
  }
  ATerm m_12 = NULL,n_12 = NULL,o_12 = NULL;
  m_12 = t;
  if(match_cons(t, sym__2))
    {
      n_12 = ATgetArgument(t, 0);
      o_12 = ATgetArgument(t, 1);
      {
        ATerm f_20 = t;
        int g_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_12(m_12, t);
            ;
            LocalPopChoice(g_20);
          }
        else
          {
            t = f_20;
            t = r_12(n_12, o_12, m_12, t);
          }
      }
    }
  else
    {
      t = p_12(m_12, t);
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
  ATerm t_12 = NULL;
  t = term_h_10;
  t = new_0_0(t);
  t_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_12, term_j_20);
  t = conc_strings_0_0(t);
  {
    ATerm m_20 = t;
    int n_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_12 = NULL;
        w_12 = t;
        t = SSL_access(w_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
        t = new_file_0_0(t);
        ;
        LocalPopChoice(n_20);
      }
    else
      {
        t = m_20;
      }
  }
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm z_12 = NULL;
  t = new_file_0_0(t);
  z_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_12, term_v_19);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, z_12, term_h_10);
  {
    ATerm f_3 (ATerm t)
    {
      t = term_r_20;
      return(t);
    }
    t = assert_1_0(f_3, t);
    t = z_12;
  }
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm a_13 = NULL,b_13 = NULL;
  a_13 = t;
  t = xtc_new_file_0_0(t);
  b_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_13, a_13);
  {
    ATerm g_3 (ATerm t)
    {
      ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm s_20 = ATgetArgument(t, 0);
          if(match_cons(s_20, sym_Stream_1))
            {
              c_13 = ATgetArgument(s_20, 0);
            }
          else
            _fail(t);
          d_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_write_term_to_stream_baf(c_13, d_13);
      e_13 = t;
      t = (ATerm) ATmakeAppl(sym_Stream_1, e_13);
      return(t);
    }
    t = WriteToFile_1_0(g_3, t);
    t = SSL_close_file(b_13);
    t = (ATerm) ATmakeAppl(sym_FILE_1, b_13);
  }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm k_13 = NULL,l_13 = NULL;
  k_13 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = k_13;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          l_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_access(l_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm g_78 (ATerm), ATerm t)
{
  t = read_from_0_0(t);
  t = g_78(t);
  t = write_to_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm z_13 = NULL,a_14 = NULL;
  z_13 = t;
  if(match_cons(t, sym_FILE_1))
    {
      a_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm t_20 = t;
    int v_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_6 = NULL;
        t = z_13;
        t = k_0(t);
        q_6 = t;
        {
          ATerm w_20 = t;
          int x_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(x_20);
            }
          else
            {
              t = w_20;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(a_14, q_6);
          t = (ATerm) ATmakeAppl(sym_FILE_1, a_14);
        }
        ;
        LocalPopChoice(v_20);
      }
    else
      {
        t = t_20;
        {
          ATerm y_20 = t;
          int z_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_6 = NULL;
              t = z_13;
              t = k_0(t);
              v_6 = t;
              {
                ATerm b_21 = t;
                if((PushChoice() == 0))
                  {
                    ATerm c_21 = t;
                    int f_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(f_21);
                      }
                    else
                      {
                        t = c_21;
                        {
                          ATerm k_21 = t;
                          int l_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(l_21);
                            }
                          else
                            {
                              t = k_21;
                              {
                                ATerm w_6 = NULL;
                                w_6 = t;
                                if((a_14 != t))
                                  {
                                    _fail(t);
                                  }
                                t = w_6;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = b_21;
                  }
                t = SSL_copy(a_14, v_6);
                t = (ATerm) ATmakeAppl(sym_FILE_1, a_14);
              }
              ;
              LocalPopChoice(z_20);
            }
          else
            {
              t = y_20;
              t = z_13;
              t = k_0(t);
              if((a_14 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_14);
            }
        }
      }
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm j_14 = NULL,k_14 = NULL,l_14 = NULL;
  if(match_cons(t, sym__2))
    {
      j_14 = ATgetArgument(t, 0);
      k_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_21 = t;
    int n_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_6 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm a_22 = ATgetArgument(t, 0);
            ATerm e_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(j_14, k_14);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm h_22 = ATgetFirst((ATermList) t);
            y_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = y_6;
        ;
        LocalPopChoice(n_21);
      }
    else
      {
        t = m_21;
        t = (ATerm) ATempty;
      }
    l_14 = t;
    t = SSL_table_put(j_14, k_14, l_14);
    t = (ATerm) ATmakeAppl(sym__2, j_14, k_14);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm r_93 (ATerm), ATerm t)
{
  ATerm r_14 = NULL,s_14 = NULL,t_14 = NULL,u_14 = NULL;
  r_14 = t;
  t = r_93(t);
  s_14 = t;
  {
    ATerm i_22 = t;
    int m_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(s_14, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(m_22);
      }
    else
      {
        t = i_22;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_14 = ATgetFirst((ATermList) t);
        t_14 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(s_14, (ATerm)ATmakeAppl(sym_Scopes_0), t_14);
    t = u_14;
    {
      ATerm i_3 (ATerm t)
      {
        ATerm v_14 = NULL;
        v_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_14, v_14);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(i_3, t);
      t = r_14;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm t_81 (ATerm), ATerm u_81 (ATerm), ATerm t)
{
  ATerm r_22 = t;
  int s_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_81(t);
      t = u_81(t);
      ;
      LocalPopChoice(s_22);
    }
  else
    {
      t = r_22;
      t = u_81(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm q_93 (ATerm), ATerm t)
{
  ATerm y_14 = NULL,z_14 = NULL,a_15 = NULL;
  y_14 = t;
  t = q_93(t);
  z_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_14, term_t_22);
  {
    ATerm u_22 = t;
    int v_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_22 = ATgetArgument(t, 0);
            ATerm d_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(z_14, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(v_22);
      }
    else
      {
        t = u_22;
        t = (ATerm) ATempty;
      }
    a_15 = t;
    t = SSL_table_put(z_14, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(a_15), (ATerm) ATempty));
    t = y_14;
  }
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm h_77 (ATerm), ATerm t)
{
  ATerm k_15 = NULL;
  ATerm j_3 (ATerm t)
  {
    t = term_r_20;
    return(t);
  }
  t = begin_scope_1_0(j_3, t);
  {
    ATerm k_3 (ATerm t)
    {
      ATerm l_15 = NULL;
      l_15 = t;
      {
        ATerm e_23 = t;
        int i_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(i_23);
          }
        else
          {
            t = e_23;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((k_15 != NULL) && (k_15 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              k_15 = ATgetFirst((ATermList) t);
            {
              ATerm j_23 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(k_15);
        {
          ATerm l_3 (ATerm t)
          {
            ATerm l_23 = t;
            int o_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_15 = NULL;
                q_15 = t;
                t = SSL_remove(q_15);
                ;
                LocalPopChoice(o_23);
              }
            else
              {
                t = l_23;
              }
            return(t);
          }
          t = map_1_0(l_3, t);
          t = l_15;
          {
            ATerm n_3 (ATerm t)
            {
              t = term_r_20;
              return(t);
            }
            t = end_scope_1_0(n_3, t);
          }
        }
      }
      return(t);
    }
    t = restore_always_2_0(h_77, k_3, t);
  }
  return(t);
}
ATerm xtc_io_1_0 (ATerm i_77 (ATerm), ATerm t)
{
  ATerm o_3 (ATerm t)
  {
    ATerm p_23 = t;
    int u_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_15 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)));
        {
          ATerm v_23 = t;
          int w_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_7 = NULL;
              t = eval_config_0_0(t);
              k_7 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), k_7);
              t = k_7;
              ;
              LocalPopChoice(w_23);
            }
          else
            {
              t = v_23;
            }
          u_15 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, u_15);
        }
        ;
        LocalPopChoice(u_23);
      }
    else
      {
        t = p_23;
        t = term_x_23;
      }
    t = i_77(t);
    {
      ATerm p_3 (ATerm t)
      {
        ATerm y_23 = t;
        int z_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)));
            {
              ATerm a_24 = t;
              int b_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_7 = NULL;
                  t = eval_config_0_0(t);
                  o_7 = t;
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), o_7);
                  t = o_7;
                  ;
                  LocalPopChoice(b_24);
                }
              else
                {
                  t = a_24;
                }
            }
            ;
            LocalPopChoice(z_23);
          }
        else
          {
            t = y_23;
            t = term_c_24;
          }
        return(t);
      }
      t = copy_to_1_0(p_3, t);
    }
    return(t);
  }
  t = xtc_temp_files_1_0(o_3, t);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm w_15 = NULL;
  ATerm q_3 (ATerm t)
  {
    ATerm y_15 = NULL;
    y_15 = t;
    t = SSL_explode_string(y_15);
    return(t);
  }
  t = map_1_0(q_3, t);
  t = concat_0_0(t);
  w_15 = t;
  t = SSL_implode_string(w_15);
  return(t);
}
ATerm path_to_string_0_0 (ATerm t)
{
  ATerm e_16 = NULL,g_16 = NULL;
  if(match_cons(t, sym_Path1_1))
    {
      e_16 = ATgetArgument(t, 0);
      t = e_16;
    }
  else
    {
      ATerm p_16 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          e_16 = ATgetArgument(t, 0);
          g_16 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = g_16;
      {
        ATerm t_3 (ATerm t)
        {
          ATerm q_16 = NULL,r_16 = NULL,s_16 = NULL;
          if(match_cons(t, sym_selector_2))
            {
              q_16 = ATgetArgument(t, 0);
              r_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSL_int_to_string(q_16);
          s_16 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, r_16), term_e_24), s_16), term_d_24);
          return(t);
        }
        t = map_1_0(t_3, t);
        t = concat_0_0(t);
        p_16 = t;
        t = (ATerm) ATinsert(CheckATermList(p_16), e_16);
        t = concat_strings_0_0(t);
      }
    }
  return(t);
}
ATerm mk_key_0_0 (ATerm t)
{
  ATerm v_16 = NULL,w_16 = NULL;
  if(match_cons(t, sym_Path1_1))
    {
      v_16 = ATgetArgument(t, 0);
      t = (ATerm) ATinsert(ATempty, v_16);
    }
  else
    {
      ATerm e_17 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          v_16 = ATgetArgument(t, 0);
          w_16 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = w_16;
      {
        ATerm u_3 (ATerm t)
        {
          ATerm f_17 = NULL;
          if(match_cons(t, sym_selector_2))
            {
              f_17 = ATgetArgument(t, 0);
              {
                ATerm g_24 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = f_17;
          return(t);
        }
        t = map_1_0(u_3, t);
        e_17 = t;
        t = (ATerm) ATinsert(CheckATermList(e_17), v_16);
      }
    }
  return(t);
}
ATerm StoreEntry_0_0 (ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL;
  if(match_cons(t, sym_PP_Entry_2))
    {
      g_17 = ATgetArgument(t, 0);
      h_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_17;
  t = mk_key_0_0(t);
  i_17 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue)), i_17, (ATerm) ATmakeAppl(sym__2, g_17, h_17));
  t = g_17;
  t = path_to_string_0_0(t);
  j_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_17, h_17);
  {
    ATerm v_3 (ATerm t)
    {
      ATerm p_7 = NULL;
      p_7 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, p_7), (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue))));
      t = p_7;
      return(t);
    }
    t = if_verbose1_1_0(v_3, t);
  }
  return(t);
}
ATerm selector_2_0 (ATerm b_72 (ATerm), ATerm c_72 (ATerm), ATerm t)
{
  ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL;
  p_17 = t;
  if(match_cons(t, sym_selector_2))
    {
      l_17 = ATgetArgument(t, 0);
      m_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_17);
  k_17 = t;
  t = l_17;
  t = b_72(t);
  n_17 = t;
  t = m_17;
  t = c_72(t);
  o_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_selector_2, n_17, o_17), k_17);
  return(t);
}
ATerm unescape_chars_0_0 (ATerm t)
{
  ATerm h_24 = t;
  int i_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_17 = ATgetFirst((ATermList) t);
          y_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_17;
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 92)))
        _fail(t);
      t = y_17;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_17 = ATgetFirst((ATermList) t);
          a_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_17;
      if(match_int(t, 34))
        {
          t = (ATerm) ATinsert(CheckATermList(a_18), term_j_24);
        }
      else
        {
          if(match_int(t, 92))
            {
              t = (ATerm) ATinsert(CheckATermList(a_18), term_k_24);
            }
          else
            {
              if(match_int(t, 110))
                {
                  t = (ATerm) ATinsert(CheckATermList(a_18), term_o_24);
                }
              else
                {
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 116)))
                    _fail(t);
                  t = (ATerm) ATinsert(CheckATermList(a_18), term_r_24);
                }
            }
        }
      ;
      LocalPopChoice(i_24);
    }
  else
    {
      t = h_24;
    }
  {
    ATerm s_24 = t;
    int t_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, unescape_chars_0_0, t);
        ;
        LocalPopChoice(t_24);
      }
    else
      {
        t = s_24;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
      }
  }
  return(t);
}
ATerm at_last_1_0 (ATerm y_83 (ATerm), ATerm t)
{
  ATerm j_18 (ATerm t)
  {
    ATerm u_24 = t;
    int w_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_3 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = Cons_2_0(_id, w_3, t);
        t = y_83(t);
        ;
        LocalPopChoice(w_24);
      }
    else
      {
        t = u_24;
        t = Cons_2_0(_id, j_18, t);
      }
    return(t);
  }
  t = j_18(t);
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
      ATerm x_24 = t;
      int y_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_18;
          ;
          LocalPopChoice(y_24);
        }
      else
        {
          t = x_24;
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
ATerm unquote_chars_1_0 (ATerm d_92 (ATerm), ATerm t)
{
  ATerm t_18 = NULL,u_18 = NULL,v_18 = NULL;
  t_18 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_18 = ATgetFirst((ATermList) t);
      {
        ATerm a_25 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = u_18;
  t = d_92(t);
  t = t_18;
  t = last_0_0(t);
  t = d_92(t);
  t = t_18;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm b_25 = ATgetFirst((ATermList) t);
      v_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_18;
  {
    ATerm x_3 (ATerm t)
    {
      ATerm w_18 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm c_25 = ATgetFirst((ATermList) t);
          w_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_18;
      return(t);
    }
    t = at_last_1_0(x_3, t);
  }
  return(t);
}
ATerm S_1_0 (ATerm g_72 (ATerm), ATerm t)
{
  ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL;
  a_19 = t;
  if(match_cons(t, sym_S_1))
    {
      y_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_19);
  x_18 = t;
  t = y_18;
  t = g_72(t);
  z_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_S_1, z_18), x_18);
  return(t);
}
ATerm SOpt_2_0 (ATerm s_73 (ATerm), ATerm t_73 (ATerm), ATerm t)
{
  ATerm d_19 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL;
  i_19 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      e_19 = ATgetArgument(t, 0);
      f_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_19);
  d_19 = t;
  t = e_19;
  t = s_73(t);
  g_19 = t;
  t = f_19;
  t = t_73(t);
  h_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SOpt_2, g_19, h_19), d_19);
  return(t);
}
ATerm Arg2_2_0 (ATerm e_72 (ATerm), ATerm f_72 (ATerm), ATerm t)
{
  ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL,q_19 = NULL;
  q_19 = t;
  if(match_cons(t, sym_Arg2_2))
    {
      m_19 = ATgetArgument(t, 0);
      n_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_19);
  l_19 = t;
  t = m_19;
  t = e_72(t);
  o_19 = t;
  t = n_19;
  t = f_72(t);
  p_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Arg2_2, o_19, p_19), l_19);
  return(t);
}
ATerm Arg_1_0 (ATerm d_72 (ATerm), ATerm t)
{
  ATerm t_19 = NULL,x_19 = NULL,y_19 = NULL,a_20 = NULL;
  a_20 = t;
  if(match_cons(t, sym_Arg_1))
    {
      x_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_20);
  t_19 = t;
  t = x_19;
  t = d_72(t);
  y_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Arg_1, y_19), t_19);
  return(t);
}
ATerm MakePPTerm_0_0 (ATerm t)
{
  ATerm d_25 = t;
  int e_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_3 (ATerm t)
      {
        ATerm d_20 = NULL;
        d_20 = t;
        t = SSL_string_to_int(d_20);
        return(t);
      }
      t = Arg_1_0(z_3, t);
      ;
      LocalPopChoice(e_25);
    }
  else
    {
      t = d_25;
      {
        ATerm f_25 = t;
        int h_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_4 (ATerm t)
            {
              ATerm h_20 = NULL;
              h_20 = t;
              t = SSL_string_to_int(h_20);
              return(t);
            }
            ATerm b_4 (ATerm t)
            {
              ATerm i_20 = NULL;
              i_20 = t;
              t = SSL_string_to_int(i_20);
              return(t);
            }
            t = Arg2_2_0(a_4, b_4, t);
            ;
            LocalPopChoice(h_25);
          }
        else
          {
            t = f_25;
            {
              ATerm i_25 = t;
              int j_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SOpt_2_0(_id, _id, t);
                  ;
                  LocalPopChoice(j_25);
                }
              else
                {
                  t = i_25;
                  {
                    ATerm k_25 = t;
                    int l_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm c_4 (ATerm t)
                        {
                          ATerm x_7 = NULL,y_7 = NULL,t_7 = NULL,u_7 = NULL;
                          t_7 = t;
                          t = SSL_explode_string(t_7);
                          {
                            ATerm e_4 (ATerm t)
                            {
                              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
                                _fail(t);
                              return(t);
                            }
                            t = unquote_chars_1_0(e_4, t);
                            u_7 = t;
                            t = SSL_implode_string(u_7);
                            x_7 = t;
                            t = SSL_explode_string(x_7);
                            t = unescape_chars_0_0(t);
                            y_7 = t;
                            t = SSL_implode_string(y_7);
                          }
                          return(t);
                        }
                        t = S_1_0(c_4, t);
                        ;
                        LocalPopChoice(l_25);
                      }
                    else
                      {
                        t = k_25;
                        {
                          ATerm g_4 (ATerm t)
                          {
                            ATerm k_20 = NULL;
                            k_20 = t;
                            t = SSL_string_to_int(k_20);
                            return(t);
                          }
                          t = selector_2_0(g_4, _id, t);
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
ATerm topdown_1_0 (ATerm m_78 (ATerm), ATerm t)
{
  t = m_78(t);
  {
    ATerm l_4 (ATerm t)
    {
      t = topdown_1_0(m_78, t);
      return(t);
    }
    t = SRTS_all(l_4, t);
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm q_79 (ATerm), ATerm t)
{
  ATerm l_20 (ATerm t)
  {
    ATerm m_25 = t;
    int n_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_79(t);
        ;
        LocalPopChoice(n_25);
      }
    else
      {
        t = m_25;
        t = SRTS_one(l_20, t);
      }
    return(t);
  }
  t = l_20(t);
  return(t);
}
ATerm get_options_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)));
  return(t);
}
ATerm type_failure_0_0 (ATerm t)
{
  ATerm o_25 = t;
  int p_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_25;
      t = get_options_0_0(t);
      {
        ATerm q_4 (ATerm t)
        {
          if(!(match_cons(t, sym_Strict_0)))
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(q_4, t);
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue))));
        t = SSL_exit((ATerm) ATmakeInt(1));
        t = (ATerm) ATinsert(ATempty, term_r_25);
      }
      ;
      LocalPopChoice(p_25);
    }
  else
    {
      t = o_25;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue))));
      t = (ATerm) ATinsert(ATempty, term_s_25);
    }
  return(t);
}
ATerm InId_1_0 (ATerm e_100 (ATerm), ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_25 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_25) != ATmakeSymbol("in-type", 0, ATtrue)))
        _fail(t);
      o_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(o_20);
  if(match_cons(t, sym__2))
    {
      p_20 = ATgetArgument(t, 0);
      {
        ATerm w_25 = ATgetArgument(t, 1);
        if(((ATgetType(w_25) == AT_LIST) && !(ATisEmpty(w_25))))
          {
            q_20 = ATgetFirst((ATermList) w_25);
            {
              ATerm x_25 = (ATerm) ATgetNext((ATermList) w_25);
              if(((ATgetType(x_25) != AT_LIST) || !(ATisEmpty(x_25))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = p_20;
  {
    ATerm y_25 = t;
    int z_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_100(t);
        ;
        LocalPopChoice(z_25);
      }
    else
      {
        t = y_25;
        t = type_failure_0_0(t);
      }
    t = q_20;
  }
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm g_21 (ATerm a_21, ATerm t)
  {
    t = SSL_fclose(a_21);
    return(t);
  }
  ATerm d_21 = NULL,e_21 = NULL;
  e_21 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_21 = ATgetArgument(t, 0);
      {
        ATerm b_26 = t;
        int c_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(d_21);
            ;
            LocalPopChoice(c_26);
          }
        else
          {
            t = b_26;
            t = g_21(e_21, t);
          }
      }
    }
  else
    {
      t = g_21(e_21, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm h_21 = NULL;
  t = SSL_stdin_stream();
  h_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_21);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm i_21 = NULL;
  t = SSL_stdout_stream();
  i_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_21);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm j_21 = NULL;
  t = SSL_stderr_stream();
  j_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_21);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_26 = ATgetArgument(t, 0);
      ATerm e_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_26 = t;
    int i_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_8 = NULL,n_8 = NULL;
        j_8 = t;
        t = SSL_explode_term(j_8);
        if(match_cons(t, sym__2))
          {
            ATerm j_26 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) j_26) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm k_26 = ATgetArgument(t, 1);
              if(((ATgetType(k_26) == AT_LIST) && !(ATisEmpty(k_26))))
                {
                  n_8 = ATgetFirst((ATermList) k_26);
                  {
                    ATerm l_26 = (ATerm) ATgetNext((ATermList) k_26);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = n_8;
        if(match_cons(t, sym_stderr_0))
          {
            t = n_8;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = n_8;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = n_8;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(i_26);
      }
    else
      {
        t = h_26;
        {
          ATerm m_26 = t;
          int n_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_21 = NULL,p_21 = NULL,q_21 = NULL;
              ATerm r_4 (ATerm t)
              {
                ATerm r_21 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    r_21 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = r_21;
                return(t);
              }
              t = _2_0(r_4, _id, t);
              if(match_cons(t, sym__2))
                {
                  o_21 = ATgetArgument(t, 0);
                  p_21 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(o_21, p_21);
              q_21 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, q_21);
              ;
              LocalPopChoice(n_26);
            }
          else
            {
              t = m_26;
              {
                ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL;
                ATerm s_4 (ATerm t)
                {
                  ATerm v_21 = NULL;
                  v_21 = t;
                  t = SSL_is_string(v_21);
                  return(t);
                }
                t = _2_0(s_4, _id, t);
                if(match_cons(t, sym__2))
                  {
                    s_21 = ATgetArgument(t, 0);
                    t_21 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(s_21, t_21);
                u_21 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, u_21);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL;
  ATerm o_26 = t;
  int q_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_21 = NULL;
      z_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_21, term_r_26);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(q_26);
    }
  else
    {
      t = o_26;
      {
        ATerm o_8 = NULL;
        o_8 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, o_8), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = o_8;
        _fail(t);
      }
    }
  w_21 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(y_21);
  x_21 = t;
  t = w_21;
  t = fclose_0_0(t);
  t = x_21;
  return(t);
}
ATerm read_pp_tables_0_0 (ATerm t)
{
  ATerm b_22 = NULL;
  b_22 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue)));
  t = b_22;
  {
    ATerm u_4 (ATerm t)
    {
      ATerm c_22 = NULL,d_22 = NULL;
      ATerm v_4 (ATerm t)
      {
        ATerm y_8 = NULL;
        y_8 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, y_8), (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue))));
        t = y_8;
        return(t);
      }
      t = if_verbose1_1_0(v_4, t);
      t = ReadFromFile_0_0(t);
      d_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_t_26, d_22);
      {
        ATerm w_4 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("\"pp-tables-0\"", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        t = InId_1_0(w_4, t);
        if(match_cons(t, sym_PP_Table_1))
          {
            c_22 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = c_22;
        {
          ATerm x_4 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = reverse_acc_2_0(_id, x_4, t);
          {
            ATerm b_5 (ATerm t)
            {
              ATerm g_5 (ATerm t)
              {
                ATerm u_26 = t;
                int v_26 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = MakePPTerm_0_0(t);
                    ;
                    LocalPopChoice(v_26);
                  }
                else
                  {
                    t = u_26;
                  }
                return(t);
              }
              t = topdown_1_0(g_5, t);
              t = StoreEntry_0_0(t);
              return(t);
            }
            t = map_1_0(b_5, t);
          }
        }
      }
      return(t);
    }
    t = map_1_0(u_4, t);
  }
  return(t);
}
ATerm get_config_p_0_0 (ATerm t)
{
  ATerm w_26 = t;
  int x_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue)));
      {
        ATerm y_26 = t;
        int z_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_11 = NULL;
            t = eval_config_0_0(t);
            b_11 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue)), b_11);
            t = b_11;
            ;
            LocalPopChoice(z_26);
          }
        else
          {
            t = y_26;
          }
      }
      ;
      LocalPopChoice(x_26);
    }
  else
    {
      t = w_26;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm ast2abox_0_0 (ATerm t)
{
  ATerm f_22 = NULL;
  f_22 = t;
  t = get_config_p_0_0(t);
  {
    ATerm h_5 (ATerm t)
    {
      t = (ATerm) ATempty;
      return(t);
    }
    t = reverse_acc_2_0(_id, h_5, t);
    t = read_pp_tables_0_0(t);
    t = f_22;
    {
      ATerm j_5 (ATerm t)
      {
        ATerm k_5 (ATerm t)
        {
          t = trm2abox_0_0(t);
          {
            ATerm a_27 = t;
            int b_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_22 = NULL;
                g_22 = t;
                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                  {
                    t = g_22;
                  }
                else
                  {
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        ATerm c_27 = ATgetFirst((ATermList) t);
                        ATerm d_27 = (ATerm) ATgetNext((ATermList) t);
                      }
                    else
                      _fail(t);
                    t = g_22;
                  }
                LocalPopChoice(b_27);
                {
                  ATerm j_22 = NULL;
                  j_22 = t;
                  t = (ATerm) ATmakeAppl(sym_HV_2, (ATerm)ATempty, j_22);
                }
              }
            else
              {
                t = a_27;
              }
          }
          return(t);
        }
        t = xtc_io_transform_1_0(k_5, t);
        return(t);
      }
      t = xtc_io_1_0(j_5, t);
    }
  }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm k_22 = NULL,l_22 = NULL;
  k_22 = t;
  t = term_h_10;
  t = whoami_0_0(t);
  l_22 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), l_22), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = k_22;
  return(t);
}
ATerm extend_config_0_0 (ATerm t)
{
  ATerm n_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL;
  if(match_cons(t, sym__2))
    {
      n_22 = ATgetArgument(t, 0);
      o_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_22;
  {
    ATerm e_27 = t;
    int f_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), n_22);
        {
          ATerm g_27 = t;
          int h_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_11 = NULL;
              t = eval_config_0_0(t);
              n_11 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), n_22, n_11);
              t = n_11;
              ;
              LocalPopChoice(h_27);
            }
          else
            {
              t = g_27;
            }
        }
        ;
        LocalPopChoice(f_27);
      }
    else
      {
        t = e_27;
        t = (ATerm) ATempty;
      }
    p_22 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_22, p_22);
    {
      ATerm i_27 = t;
      int j_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm k_27 = ATgetArgument(t, 0);
              ATerm o_27 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = o_22;
          {
            ATerm m_5 (ATerm t)
            {
              t = p_22;
              return(t);
            }
            t = at_end_1_0(m_5, t);
          }
          ;
          LocalPopChoice(j_27);
        }
      else
        {
          t = i_27;
          {
            ATerm e_12 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, o_22, p_22));
            if(match_cons(t, sym__2))
              {
                ATerm p_27 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) p_27) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                e_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = e_12;
            t = concat_0_0(t);
          }
        }
      q_22 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), n_22, q_22);
      t = (ATerm) ATmakeAppl(sym__3, term_r_27, n_22, q_22);
    }
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm m_24 = NULL,n_24 = NULL,q_24 = NULL,v_24 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_24 = NULL;
      t = term_h_10;
      t = j_0(t);
      z_24 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_27, term_w_27, z_24);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm g_25 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_24 = ATgetFirst((ATermList) t);
          n_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_24;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_24 = ATgetFirst((ATermList) t);
          v_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_24;
      t = h_0(t);
      t = q_24;
      t = i_0(t);
      g_25 = t;
      t = (ATerm) ATinsert(CheckATermList(v_24), g_25);
    }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm n_5 (ATerm t)
  {
    ATerm w_22 = NULL;
    w_22 = t;
    if(match_string(t, "-k"))
      {
        t = w_22;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = w_22;
      }
    return(t);
  }
  ATerm o_5 (ATerm t)
  {
    ATerm x_22 = NULL,y_22 = NULL;
    x_22 = t;
    t = SSL_string_to_int(x_22);
    y_22 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), y_22);
    t = x_22;
    return(t);
  }
  ATerm t_5 (ATerm t)
  {
    t = term_z_27;
    return(t);
  }
  t = ArgOption_3_0(n_5, o_5, t_5, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm a_28 = t;
  int b_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_5 (ATerm t)
      {
        ATerm a_23 = NULL;
        a_23 = t;
        if(match_string(t, "-S"))
          {
            t = a_23;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = a_23;
          }
        return(t);
      }
      ATerm v_5 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_e_28;
        return(t);
      }
      ATerm z_5 (ATerm t)
      {
        t = term_f_28;
        return(t);
      }
      t = Option_3_0(u_5, v_5, z_5, t);
      ;
      LocalPopChoice(b_28);
    }
  else
    {
      t = a_28;
      {
        ATerm g_28 = t;
        int h_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_6 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm b_6 (ATerm t)
            {
              ATerm b_23 = NULL,c_23 = NULL;
              b_23 = t;
              t = SSL_string_to_int(b_23);
              c_23 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), c_23);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, b_23);
              return(t);
            }
            ATerm c_6 (ATerm t)
            {
              t = term_i_28;
              return(t);
            }
            t = ArgOption_3_0(a_6, b_6, c_6, t);
            ;
            LocalPopChoice(h_28);
          }
        else
          {
            t = g_28;
            {
              ATerm d_6 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm e_6 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_j_28;
                return(t);
              }
              ATerm f_6 (ATerm t)
              {
                t = term_m_28;
                return(t);
              }
              t = Option_3_0(d_6, e_6, f_6, t);
            }
          }
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL;
  if(match_cons(t, sym__3))
    {
      q_23 = ATgetArgument(t, 0);
      r_23 = ATgetArgument(t, 1);
      s_23 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_23, r_23);
  {
    ATerm n_28 = t;
    int q_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_28 = ATgetArgument(t, 0);
            ATerm s_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(q_23, r_23);
        ;
        LocalPopChoice(q_28);
      }
    else
      {
        t = n_28;
        t = (ATerm) ATempty;
      }
    t_23 = t;
    t = SSL_table_put(q_23, r_23, (ATerm) ATinsert(CheckATermList(t_23), s_23));
    t = (ATerm) ATmakeAppl(sym__3, q_23, r_23, s_23);
  }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm f_23 = NULL,g_23 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_23 = NULL;
      t = term_h_10;
      t = d_0(t);
      h_23 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_27, term_w_27, h_23);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm k_23 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_23 = ATgetFirst((ATermList) t);
          g_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_23;
      t = a_0(t);
      t = term_h_10;
      t = c_0(t);
      k_23 = t;
      t = (ATerm) ATinsert(CheckATermList(g_23), k_23);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm g_6 (ATerm t)
  {
    ATerm m_23 = NULL;
    m_23 = t;
    if(match_string(t, "-o"))
      {
        t = m_23;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = m_23;
      }
    return(t);
  }
  ATerm h_6 (ATerm t)
  {
    ATerm n_23 = NULL;
    n_23 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), n_23);
    t = (ATerm) ATmakeAppl(sym_Output_1, n_23);
    return(t);
  }
  ATerm i_6 (ATerm t)
  {
    t = term_v_28;
    return(t);
  }
  t = ArgOption_3_0(g_6, h_6, i_6, t);
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm j_6 (ATerm t)
  {
    ATerm t_25 = NULL;
    t_25 = t;
    if(match_string(t, "-i"))
      {
        t = t_25;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = t_25;
      }
    return(t);
  }
  ATerm n_6 (ATerm t)
  {
    ATerm u_25 = NULL;
    u_25 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), u_25);
    t = (ATerm) ATmakeAppl(sym_Input_1, u_25);
    return(t);
  }
  ATerm o_6 (ATerm t)
  {
    t = term_z_28;
    return(t);
  }
  t = ArgOption_3_0(j_6, n_6, o_6, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm a_26 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_10;
  t = whoami_0_0(t);
  a_26 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), a_26));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm a_29 = t;
    int c_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_13 = NULL;
        t = eval_config_0_0(t);
        g_13 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), g_13);
        t = g_13;
        ;
        LocalPopChoice(c_29);
      }
    else
      {
        t = a_29;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm n_89 (ATerm), ATerm o_89 (ATerm), ATerm t)
{
  ATerm f_29 = t;
  int g_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = n_89(t);
      ;
      LocalPopChoice(g_29);
    }
  else
    {
      t = f_29;
      {
        ATerm f_26 = NULL,g_26 = NULL,p_26 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_26 = ATgetFirst((ATermList) t);
            g_26 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = g_26;
        t = foldr_2_0(n_89, o_89, t);
        p_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_26, p_26);
        t = o_89(t);
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
  ATerm s_26 = NULL,n_13 = NULL,o_13 = NULL;
  t = times_0_0(t);
  n_13 = t;
  t = SSL_explode_term(n_13);
  if(match_cons(t, sym__2))
    {
      ATerm h_29 = ATgetArgument(t, 0);
      o_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_13;
  {
    ATerm p_6 (ATerm t)
    {
      t = term_h_13;
      return(t);
    }
    ATerm s_6 (ATerm t)
    {
      ATerm f_14 = NULL,g_14 = NULL;
      if(match_cons(t, sym__2))
        {
          f_14 = ATgetArgument(t, 0);
          g_14 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm i_29 = t;
        int j_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(f_14, g_14);
            ;
            LocalPopChoice(j_29);
          }
        else
          {
            t = i_29;
            t = SSL_addr(f_14, g_14);
          }
      }
      return(t);
    }
    t = foldr_2_0(p_6, s_6, t);
    s_26 = t;
    t = SSL_TicksToSeconds(s_26);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm l_27 = NULL,m_27 = NULL,n_27 = NULL;
  l_27 = t;
  if(match_cons(t, sym__2))
    {
      m_27 = ATgetArgument(t, 0);
      n_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_29 = t;
    int l_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_27;
        if((m_27 != t))
          {
            _fail(t);
          }
        t = l_27;
        ;
        LocalPopChoice(l_29);
      }
    else
      {
        t = k_29;
        t = l_27;
        {
          ATerm m_29 = t;
          int n_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(m_27, n_27);
              ;
              LocalPopChoice(n_29);
            }
          else
            {
              t = m_29;
              t = SSL_gtr(m_27, n_27);
            }
          t = (ATerm) ATmakeAppl(sym__2, m_27, n_27);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm k_75 (ATerm), ATerm t)
{
  ATerm o_29 = t;
  int r_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_27 = NULL,s_27 = NULL;
      q_27 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm s_29 = t;
        int t_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_15 = NULL;
            t = eval_config_0_0(t);
            n_15 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), n_15);
            t = n_15;
            ;
            LocalPopChoice(t_29);
          }
        else
          {
            t = s_29;
          }
        s_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_27, term_x_12);
        t = geq_0_0(t);
        t = q_27;
        t = k_75(t);
      }
      ;
      LocalPopChoice(r_29);
    }
  else
    {
      t = o_29;
    }
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm t_6 (ATerm t)
  {
    ATerm u_27 = NULL,v_27 = NULL;
    t = run_time_0_0(t);
    u_27 = t;
    t = term_h_10;
    t = whoami_0_0(t);
    v_27 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), u_27), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), v_27));
    t = (ATerm) ATmakeAppl(sym__2, term_u_29, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_30), u_27), term_v_29), v_27));
    return(t);
  }
  t = if_verbose1_1_0(t_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm v_94 (ATerm), ATerm t)
{
  ATerm e_30 = t;
  int f_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm i_30 = t;
        int j_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_15 = NULL;
            t = eval_config_0_0(t);
            v_15 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), v_15);
            t = v_15;
            ;
            LocalPopChoice(j_30);
          }
        else
          {
            t = i_30;
          }
      }
      ;
      LocalPopChoice(f_30);
    }
  else
    {
      t = e_30;
      {
        ATerm u_6 (ATerm t)
        {
          ATerm l_30 = t;
          int m_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(m_30);
            }
          else
            {
              t = l_30;
              {
                ATerm p_30 = t;
                int q_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(q_30);
                  }
                else
                  {
                    t = p_30;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = fetch_1_0(u_6, t);
      }
    }
  t = v_94(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm x_27 = NULL,y_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_27 = ATgetFirst((ATermList) t);
      y_27 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm c_28 = NULL,d_28 = NULL;
        t = y_27;
        t = g_0(t);
        c_28 = t;
        t = x_27;
        t = e_0(t);
        d_28 = t;
        t = y_27;
        {
          ATerm x_6 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(c_28), d_28);
            return(t);
          }
          t = reverse_acc_2_0(e_0, x_6, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_h_10;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm a_71 (ATerm), ATerm t)
{
  ATerm k_28 = NULL,l_28 = NULL,o_28 = NULL,p_28 = NULL;
  p_28 = t;
  if(match_cons(t, sym_Program_1))
    {
      l_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_28);
  k_28 = t;
  t = l_28;
  t = a_71(t);
  o_28 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, o_28), k_28);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm r_30 = t;
  int s_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm t_30 = t;
        int u_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_16 = NULL;
            t = eval_config_0_0(t);
            b_16 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), b_16);
            t = b_16;
            ;
            LocalPopChoice(u_30);
          }
        else
          {
            t = t_30;
          }
      }
      ;
      LocalPopChoice(s_30);
    }
  else
    {
      t = r_30;
      {
        ATerm z_6 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(z_6, t);
      }
    }
  t = term_w_30;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  {
    ATerm a_7 (ATerm t)
    {
      t = (ATerm) ATempty;
      return(t);
    }
    t = reverse_acc_2_0(_id, a_7, t);
    {
      ATerm b_7 (ATerm t)
      {
        ATerm t_28 = NULL;
        t_28 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, t_28), term_x_30);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(b_7, t);
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm b_71 (ATerm), ATerm t)
{
  ATerm u_28 = NULL,w_28 = NULL,x_28 = NULL,y_28 = NULL;
  y_28 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      w_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_28);
  u_28 = t;
  t = w_28;
  t = b_71(t);
  x_28 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, x_28), u_28);
  return(t);
}
ATerm fetch_1_0 (ATerm h_83 (ATerm), ATerm t)
{
  ATerm b_29 (ATerm t)
  {
    ATerm y_30 = t;
    int z_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(h_83, _id, t);
        ;
        LocalPopChoice(z_30);
      }
    else
      {
        t = y_30;
        t = Cons_2_0(_id, b_29, t);
      }
    return(t);
  }
  t = b_29(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm d_29 = NULL,e_29 = NULL;
  d_29 = t;
  {
    ATerm a_31 = t;
    int b_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = d_29;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm c_31 = ATgetFirst((ATermList) t);
                ATerm e_31 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = d_29;
          }
        ;
        LocalPopChoice(b_31);
      }
    else
      {
        t = a_31;
        t = (ATerm) ATinsert(ATempty, d_29);
      }
    e_29 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), e_29);
    t = d_29;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm f_31 = t;
    int g_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_16 = NULL;
        t = eval_config_0_0(t);
        t_16 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), t_16);
        t = t_16;
        ;
        LocalPopChoice(g_31);
      }
    else
      {
        t = f_31;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm k_31 = t;
  int l_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(l_31);
    }
  else
    {
      t = k_31;
      {
        ATerm p_29 = NULL,q_29 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_29 = ATgetFirst((ATermList) t);
            q_29 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = p_29;
        {
          ATerm c_7 (ATerm t)
          {
            t = q_29;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(c_7, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm n_83 (ATerm), ATerm t)
{
  ATerm w_29 (ATerm t)
  {
    ATerm m_31 = t;
    int p_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, w_29, t);
        ;
        LocalPopChoice(p_31);
      }
    else
      {
        t = m_31;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_83(t);
      }
    return(t);
  }
  t = w_29(t);
  return(t);
}
ATerm _2_0 (ATerm s_64 (ATerm), ATerm t_64 (ATerm), ATerm t)
{
  ATerm x_29 = NULL,y_29 = NULL,z_29 = NULL,a_30 = NULL,b_30 = NULL,c_30 = NULL;
  c_30 = t;
  if(match_cons(t, sym__2))
    {
      y_29 = ATgetArgument(t, 0);
      z_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_30);
  x_29 = t;
  t = y_29;
  t = s_64(t);
  a_30 = t;
  t = z_29;
  t = t_64(t);
  b_30 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, a_30, b_30), x_29);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm g_30 = NULL;
  ATerm d_7 (ATerm t)
  {
    ATerm h_30 = NULL;
    h_30 = t;
    t = SSL_explode_string(h_30);
    return(t);
  }
  ATerm e_7 (ATerm t)
  {
    ATerm k_30 = NULL;
    k_30 = t;
    t = SSL_explode_string(k_30);
    return(t);
  }
  t = _2_0(d_7, e_7, t);
  {
    ATerm q_31 = t;
    int r_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_30 = NULL,o_30 = NULL;
        if(match_cons(t, sym__2))
          {
            n_30 = ATgetArgument(t, 0);
            o_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_30;
        {
          ATerm f_7 (ATerm t)
          {
            t = o_30;
            return(t);
          }
          t = at_end_1_0(f_7, t);
        }
        ;
        LocalPopChoice(r_31);
      }
    else
      {
        t = q_31;
        {
          ATerm u_17 = NULL,v_17 = NULL;
          u_17 = t;
          t = SSL_explode_term(u_17);
          if(match_cons(t, sym__2))
            {
              ATerm s_31 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) s_31) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              v_17 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = v_17;
          t = concat_0_0(t);
        }
      }
    g_30 = t;
    t = SSL_implode_string(g_30);
  }
  return(t);
}
ATerm map_1_0 (ATerm w_82 (ATerm), ATerm t)
{
  ATerm v_30 (ATerm t)
  {
    ATerm v_31 = t;
    int a_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(a_32);
      }
    else
      {
        t = v_31;
        t = Cons_2_0(w_82, v_30, t);
      }
    return(t);
  }
  t = v_30(t);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm b_32 = t;
  int c_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_31 = NULL;
      d_31 = t;
      t = SSL_is_string(d_31);
      ;
      LocalPopChoice(c_32);
    }
  else
    {
      t = b_32;
      {
        ATerm f_32 = t;
        int i_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_7 (ATerm t)
            {
              ATerm j_32 = t;
              int k_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0_0(t);
                  ;
                  LocalPopChoice(k_32);
                }
              else
                {
                  t = j_32;
                }
              return(t);
            }
            t = map_1_0(g_7, t);
            ;
            LocalPopChoice(i_32);
          }
        else
          {
            t = f_32;
            {
              ATerm h_31 = NULL,i_31 = NULL,j_31 = NULL;
              h_31 = t;
              if(match_cons(t, sym_Path_1))
                {
                  i_31 = ATgetArgument(t, 0);
                  t = i_31;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      i_31 = ATgetArgument(t, 0);
                      t = i_31;
                      {
                        ATerm l_32 = t;
                        int m_32 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), i_31);
                            {
                              ATerm n_32 = t;
                              int r_32 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm u_20 = NULL;
                                  t = eval_config_0_0(t);
                                  u_20 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), i_31, u_20);
                                  t = u_20;
                                  ;
                                  LocalPopChoice(r_32);
                                }
                              else
                                {
                                  t = n_32;
                                }
                            }
                            ;
                            LocalPopChoice(m_32);
                          }
                        else
                          {
                            t = l_32;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, i_31), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = i_31;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm n_31 = NULL,o_31 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          i_31 = ATgetArgument(t, 0);
                          j_31 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = i_31;
                      t = eval_config_0_0(t);
                      n_31 = t;
                      t = j_31;
                      t = eval_config_0_0(t);
                      o_31 = t;
                      t = (ATerm) ATmakeAppl(sym__2, n_31, o_31);
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
  ATerm s_32 = t;
  int t_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_7 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm i_7 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_w_32;
        return(t);
      }
      ATerm j_7 (ATerm t)
      {
        t = term_x_32;
        return(t);
      }
      t = Option_3_0(h_7, i_7, j_7, t);
      ;
      LocalPopChoice(t_32);
    }
  else
    {
      t = s_32;
      {
        ATerm l_7 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm m_7 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_y_32;
          return(t);
        }
        ATerm n_7 (ATerm t)
        {
          t = term_a_33;
          return(t);
        }
        t = Option_3_0(l_7, m_7, n_7, t);
      }
    }
  return(t);
}
ATerm Cons_2_0 (ATerm b_66 (ATerm), ATerm c_66 (ATerm), ATerm t)
{
  ATerm t_31 = NULL,u_31 = NULL,w_31 = NULL,x_31 = NULL,y_31 = NULL,z_31 = NULL;
  z_31 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_31 = ATgetFirst((ATermList) t);
      w_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_31);
  t_31 = t;
  t = u_31;
  t = b_66(t);
  x_31 = t;
  t = w_31;
  t = c_66(t);
  y_31 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(y_31), x_31), t_31);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm t_96 (ATerm), ATerm t)
{
  ATerm d_32 = NULL;
  d_32 = t;
  {
    ATerm b_33 = t;
    int c_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_e_33;
        t = t_96(t);
        ;
        LocalPopChoice(c_33);
      }
    else
      {
        t = b_33;
      }
    t = d_32;
    {
      ATerm q_7 (ATerm t)
      {
        ATerm e_32 = NULL;
        e_32 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), e_32);
        t = (ATerm) ATmakeAppl(sym_Program_1, e_32);
        return(t);
      }
      ATerm r_7 (ATerm t)
      {
        ATerm f_33 = t;
        int g_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_33 = t;
            int i_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(i_33);
              }
            else
              {
                t = h_33;
                t = t_96(t);
                t = Cons_2_0(_id, r_7, t);
              }
            ;
            LocalPopChoice(g_33);
          }
        else
          {
            t = f_33;
            {
              ATerm g_32 = NULL,h_32 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  g_32 = ATgetFirst((ATermList) t);
                  h_32 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(h_32), (ATerm) ATmakeAppl(sym_Undefined_1, g_32));
            }
          }
        return(t);
      }
      t = Cons_2_0(q_7, r_7, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm s_96 (ATerm), ATerm t)
{
  ATerm o_32 = NULL,p_32 = NULL,q_32 = NULL;
  o_32 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = o_32;
  {
    ATerm s_7 (ATerm t)
    {
      ATerm j_33 = t;
      int k_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_96(t);
          ;
          LocalPopChoice(k_33);
        }
      else
        {
          t = j_33;
          {
            ATerm l_33 = t;
            int m_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_7 (ATerm t)
                {
                  ATerm u_32 = NULL;
                  u_32 = t;
                  if(match_string(t, "--help"))
                    {
                      t = u_32;
                    }
                  else
                    {
                      if(match_string(t, "-h"))
                        {
                          t = u_32;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
                            _fail(t);
                          t = u_32;
                        }
                    }
                  return(t);
                }
                ATerm w_7 (ATerm t)
                {
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                  t = term_n_33;
                  return(t);
                }
                ATerm z_7 (ATerm t)
                {
                  t = term_o_33;
                  return(t);
                }
                t = Option_3_0(v_7, w_7, z_7, t);
                ;
                LocalPopChoice(m_33);
              }
            else
              {
                t = l_33;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(s_7, t);
    {
      ATerm p_33 = t;
      int q_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_32 = NULL;
          z_32 = t;
          {
            ATerm r_33 = t;
            int s_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = z_32;
                {
                  ATerm t_33 = t;
                  int u_33 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm v_33 = t;
                        int w_33 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm f_24 = NULL;
                            t = eval_config_0_0(t);
                            f_24 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), f_24);
                            t = f_24;
                            ;
                            LocalPopChoice(w_33);
                          }
                        else
                          {
                            t = v_33;
                          }
                      }
                      ;
                      LocalPopChoice(u_33);
                    }
                  else
                    {
                      t = t_33;
                      {
                        ATerm a_8 (ATerm t)
                        {
                          if(!(match_cons(t, sym_Help_0)))
                            _fail(t);
                          return(t);
                        }
                        t = fetch_1_0(a_8, t);
                      }
                    }
                  t = z_32;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(s_33);
              }
            else
              {
                t = r_33;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm x_33 = t;
                  int y_33 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm l_24 = NULL;
                      t = eval_config_0_0(t);
                      l_24 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), l_24);
                      t = l_24;
                      ;
                      LocalPopChoice(y_33);
                    }
                  else
                    {
                      t = x_33;
                    }
                  t = z_32;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(q_33);
        }
      else
        {
          t = p_33;
          {
            ATerm z_33 = t;
            int a_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_8 (ATerm t)
                {
                  ATerm c_8 (ATerm t)
                  {
                    if(((p_32 != NULL) && (p_32 != t)))
                      _fail(t);
                    else
                      p_32 = t;
                    return(t);
                  }
                  t = Undefined_1_0(c_8, t);
                  return(t);
                }
                t = fetch_1_0(b_8, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(p_32)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_u_29, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_32)), term_b_34));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(a_34);
              }
            else
              {
                t = z_33;
              }
          }
        }
      q_32 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = q_32;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm x_94 (ATerm), ATerm y_94 (ATerm), ATerm z_94 (ATerm), ATerm a_95 (ATerm), ATerm t)
{
  ATerm d_33 = NULL;
  t = parse_options_1_0(x_94, t);
  d_33 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), d_33);
  t = d_33;
  t = z_94(t);
  {
    ATerm c_34 = t;
    int d_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(y_94, t);
        ;
        LocalPopChoice(d_34);
      }
    else
      {
        t = c_34;
        {
          ATerm e_34 = t;
          int f_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_95(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(f_34);
            }
          else
            {
              t = e_34;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm d_8 (ATerm t)
  {
    ATerm g_34 = t;
    int h_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = input_option_0_0(t);
        ;
        LocalPopChoice(h_34);
      }
    else
      {
        t = g_34;
        {
          ATerm i_34 = t;
          int j_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = output_option_0_0(t);
              ;
              LocalPopChoice(j_34);
            }
          else
            {
              t = i_34;
              {
                ATerm k_34 = t;
                int l_34 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm e_8 (ATerm t)
                    {
                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
                        _fail(t);
                      return(t);
                    }
                    ATerm h_8 (ATerm t)
                    {
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                      t = term_m_34;
                      return(t);
                    }
                    ATerm i_8 (ATerm t)
                    {
                      t = term_n_34;
                      return(t);
                    }
                    t = Option_3_0(e_8, h_8, i_8, t);
                    ;
                    LocalPopChoice(l_34);
                  }
                else
                  {
                    t = k_34;
                    {
                      ATerm o_34 = t;
                      int p_34 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = verbose_option_0_0(t);
                          ;
                          LocalPopChoice(p_34);
                        }
                      else
                        {
                          t = o_34;
                          {
                            ATerm q_34 = t;
                            int r_34 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = keep_option_0_0(t);
                                ;
                                LocalPopChoice(r_34);
                              }
                            else
                              {
                                t = q_34;
                                {
                                  ATerm s_8 (ATerm t)
                                  {
                                    if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
                                      _fail(t);
                                    return(t);
                                  }
                                  ATerm x_8 (ATerm t)
                                  {
                                    ATerm p_24 = NULL;
                                    p_24 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, term_s_34, (ATerm) ATinsert(ATempty, p_24));
                                    t = extend_config_0_0(t);
                                    t = p_24;
                                    return(t);
                                  }
                                  ATerm f_9 (ATerm t)
                                  {
                                    t = term_t_34;
                                    return(t);
                                  }
                                  t = ArgOption_3_0(s_8, x_8, f_9, t);
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
  t = option_wrap_4_0(d_8, default_usage_0_0, _id, ast2abox_0_0, t);
  return(t);
}
