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
Symbol sym_Var_1;
Symbol sym_Rule_3;
Symbol sym_RDefT_4;
Symbol sym_DynamicRules_1;
Symbol sym_LRule_1;
Symbol sym_SVar_1;
Symbol sym_Let_2;
Symbol sym_Scope_2;
Symbol sym_Rec_2;
Symbol sym_Path_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_VarDec_2;
Symbol sym_SDef_3;
Symbol sym_SDefT_4;
Symbol sym_Undefined_0;
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_LRule_1 = ATmakeSymbol("LRule", 1, ATfalse);
  ATprotectSymbol(sym_LRule_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
ATerm term_b_25;
ATerm term_q_23;
ATerm term_m_23;
ATerm term_g_23;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_q_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_j_17;
ATerm term_d_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_s_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_f_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_h_15;
ATerm term_c_15;
ATerm term_v_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_v_12;
ATerm term_o_12;
ATerm term_m_12;
ATerm term_j_12;
ATerm term_h_12;
ATerm term_o_11;
void init_constant_terms (void)
{
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym__3, term_y_21, term_z_21, term_o_11);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm spaste_1_0 (ATerm r_77 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm g_69 (ATerm), ATerm h_69 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm y_70 (ATerm), ATerm z_70 (ATerm), ATerm a_71 (ATerm), ATerm);
ATerm Let_2_0 (ATerm j_68 (ATerm), ATerm k_68 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm s_77 (ATerm), ATerm t_77 (ATerm), ATerm u_77 (ATerm), ATerm);
ATerm Bind7_0_0 (ATerm);
ATerm Bind5_0_0 (ATerm);
ATerm Bind2_0_0 (ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm SVar_1_0 (ATerm i_68 (ATerm), ATerm);
ATerm srename_0_0 (ATerm);
ATerm tpaste_1_0 (ATerm n_77 (ATerm), ATerm);
ATerm DynamicRules_1_0 (ATerm q_67 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm h_67 (ATerm), ATerm i_67 (ATerm), ATerm j_67 (ATerm), ATerm k_67 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm b_71 (ATerm), ATerm c_71 (ATerm), ATerm d_71 (ATerm), ATerm e_71 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm t_68 (ATerm), ATerm u_68 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm o_77 (ATerm), ATerm p_77 (ATerm), ATerm q_77 (ATerm), ATerm);
ATerm Bind8_0_0 (ATerm);
ATerm declared_vars_0_0 (ATerm);
ATerm Bind6_0_0 (ATerm);
ATerm Bind4_0_0 (ATerm);
ATerm union_1_0 (ATerm a_87 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm foldr_3_0 (ATerm p_89 (ATerm), ATerm q_89 (ATerm), ATerm r_89 (ATerm), ATerm);
ATerm crush_3_0 (ATerm n_87 (ATerm), ATerm o_87 (ATerm), ATerm p_87 (ATerm), ATerm);
ATerm HdMember_p__2_0 (ATerm e_87 (ATerm), ATerm f_87 (ATerm), ATerm);
ATerm diff_1_0 (ATerm w_86 (ATerm), ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm while_not_2_0 (ATerm x_95 (ATerm), ATerm y_95 (ATerm), ATerm);
ATerm for_3_0 (ATerm a_96 (ATerm), ATerm b_96 (ATerm), ATerm c_96 (ATerm), ATerm);
ATerm diff_0_0 (ATerm);
ATerm free_vars_3_0 (ATerm r_93 (ATerm), ATerm s_93 (ATerm), ATerm t_93 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm tvars_0_0 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm Var_1_0 (ATerm z_64 (ATerm), ATerm);
ATerm DistBinding_2_0 (ATerm z_91 (ATerm), ATerm a_92 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm genzip_4_0 (ATerm z_82 (ATerm), ATerm a_83 (ATerm), ATerm b_83 (ATerm), ATerm c_83 (ATerm), ATerm);
ATerm zip_1_0 (ATerm e_83 (ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm RnBinding_2_0 (ATerm t_91 (ATerm), ATerm u_91 (ATerm (ATerm), ATerm), ATerm);
ATerm lookup_0_0 (ATerm);
ATerm RnVar_1_0 (ATerm e_92 (ATerm (ATerm), ATerm), ATerm);
ATerm all_dist_1_0 (ATerm x_92 (ATerm), ATerm);
ATerm env_alltd_1_0 (ATerm h_92 (ATerm), ATerm);
ATerm rename_4_0 (ATerm o_91 (ATerm (ATerm), ATerm), ATerm p_91 (ATerm), ATerm q_91 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm r_91 (ATerm (ATerm), ATerm), ATerm);
ATerm trename_0_0 (ATerm);
ATerm strename_0_0 (ATerm);
ATerm _2_0 (ATerm o_62 (ATerm), ATerm p_62 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm e_85 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm p_105 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm r_99 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm e_96 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm d_99 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm z_81 (ATerm), ATerm a_82 (ATerm), ATerm);
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
ATerm foldr_2_0 (ATerm n_89 (ATerm), ATerm o_89 (ATerm), ATerm);
ATerm crush_2_0 (ATerm l_87 (ATerm), ATerm m_87 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm o_105 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm c_97 (ATerm), ATerm);
ATerm map_1_0 (ATerm o_84 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm b_76 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm c_76 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm y_84 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm v_100 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm try_1_0 (ATerm f_81 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm a_102 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm x_63 (ATerm), ATerm y_63 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm y_101 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm x_101 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm e_97 (ATerm), ATerm f_97 (ATerm), ATerm g_97 (ATerm), ATerm h_97 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm t_96 (ATerm), ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm w_96 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm n_96 (ATerm), ATerm o_96 (ATerm), ATerm p_96 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm l_96 (ATerm), ATerm m_96 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm i_96 (ATerm), ATerm);
ATerm rename_vars_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm spaste_1_0 (ATerm r_77 (ATerm), ATerm t)
{
  ATerm j_5 = t;
  int k_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_0 (ATerm t)
      {
        t = split_2_0(_id, r_77, t);
        {
          ATerm e_0 (ATerm t)
          {
            ATerm q_2 = NULL,u_2 = NULL,w_2 = NULL,x_2 = NULL,y_2 = NULL;
            if(match_cons(t, sym__2))
              {
                q_2 = ATgetArgument(t, 0);
                y_2 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = q_2;
            {
              ATerm l_5 = t;
              int m_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDef_3))
                    {
                      ATerm n_5 = ATgetArgument(t, 0);
                      u_2 = ATgetArgument(t, 1);
                      w_2 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(m_5);
                  t = (ATerm) ATmakeAppl(sym_SDef_3, y_2, u_2, w_2);
                }
              else
                {
                  t = l_5;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm o_5 = ATgetArgument(t, 0);
                      u_2 = ATgetArgument(t, 1);
                      w_2 = ATgetArgument(t, 2);
                      x_2 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_SDefT_4, y_2, u_2, w_2, x_2);
                }
            }
            return(t);
          }
          t = zip_1_0(e_0, t);
        }
        return(t);
      }
      t = Let_2_0(c_0, _id, t);
      ;
      LocalPopChoice(k_5);
    }
  else
    {
      t = j_5;
      {
        ATerm p_5 = t;
        int q_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_0 (ATerm t)
            {
              t = split_2_0(_id, r_77, t);
              {
                ATerm l_0 (ATerm t)
                {
                  ATerm j_3 = NULL,l_3 = NULL,o_3 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      j_3 = ATgetArgument(t, 0);
                      o_3 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = j_3;
                  {
                    ATerm r_5 = t;
                    int s_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_DefaultVarDec_1))
                          {
                            ATerm t_5 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(s_5);
                        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, o_3);
                      }
                    else
                      {
                        t = r_5;
                        if(match_cons(t, sym_VarDec_2))
                          {
                            ATerm u_5 = ATgetArgument(t, 0);
                            l_3 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_VarDec_2, o_3, l_3);
                      }
                  }
                  return(t);
                }
                t = zip_1_0(l_0, t);
              }
              return(t);
            }
            t = SDef_3_0(_id, k_0, _id, t);
            ;
            LocalPopChoice(q_5);
          }
        else
          {
            t = p_5;
            {
              ATerm v_5 = t;
              int w_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_0 (ATerm t)
                  {
                    t = split_2_0(_id, r_77, t);
                    {
                      ATerm n_0 (ATerm t)
                      {
                        ATerm m_4 = NULL,w_4 = NULL,y_4 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            m_4 = ATgetArgument(t, 0);
                            y_4 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = m_4;
                        {
                          ATerm x_5 = t;
                          int z_5 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_DefaultVarDec_1))
                                {
                                  ATerm a_6 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(z_5);
                              t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, y_4);
                            }
                          else
                            {
                              t = x_5;
                              if(match_cons(t, sym_VarDec_2))
                                {
                                  ATerm b_6 = ATgetArgument(t, 0);
                                  w_4 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_VarDec_2, y_4, w_4);
                            }
                        }
                        return(t);
                      }
                      t = zip_1_0(n_0, t);
                    }
                    return(t);
                  }
                  t = SDefT_4_0(_id, m_0, _id, _id, t);
                  ;
                  LocalPopChoice(w_5);
                }
              else
                {
                  t = v_5;
                  {
                    ATerm c_6 = t;
                    int d_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm o_0 (ATerm t)
                        {
                          t = split_2_0(_id, r_77, t);
                          {
                            ATerm p_0 (ATerm t)
                            {
                              ATerm y_5 = NULL,p_7 = NULL,q_7 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  y_5 = ATgetArgument(t, 0);
                                  q_7 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = y_5;
                              {
                                ATerm e_6 = t;
                                int f_6 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        ATerm g_6 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(f_6);
                                    t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, q_7);
                                  }
                                else
                                  {
                                    t = e_6;
                                    if(match_cons(t, sym_VarDec_2))
                                      {
                                        ATerm h_6 = ATgetArgument(t, 0);
                                        p_7 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, q_7, p_7);
                                  }
                              }
                              return(t);
                            }
                            t = zip_1_0(p_0, t);
                          }
                          return(t);
                        }
                        t = RDefT_4_0(_id, o_0, _id, _id, t);
                        ;
                        LocalPopChoice(d_6);
                      }
                    else
                      {
                        t = c_6;
                        {
                          ATerm q_0 (ATerm t)
                          {
                            ATerm j_8 = NULL;
                            t = r_77(t);
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                j_8 = ATgetFirst((ATermList) t);
                                {
                                  ATerm i_6 = (ATerm) ATgetNext((ATermList) t);
                                }
                              }
                            else
                              _fail(t);
                            t = j_8;
                            return(t);
                          }
                          t = Rec_2_0(q_0, _id, t);
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
ATerm Rec_2_0 (ATerm g_69 (ATerm), ATerm h_69 (ATerm), ATerm t)
{
  ATerm k_8 = NULL,l_8 = NULL,m_8 = NULL,u_8 = NULL,z_8 = NULL,a_9 = NULL;
  a_9 = t;
  if(match_cons(t, sym_Rec_2))
    {
      l_8 = ATgetArgument(t, 0);
      m_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_9);
  k_8 = t;
  t = l_8;
  t = g_69(t);
  u_8 = t;
  t = m_8;
  t = h_69(t);
  z_8 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, u_8, z_8), k_8);
  return(t);
}
ATerm SDef_3_0 (ATerm y_70 (ATerm), ATerm z_70 (ATerm), ATerm a_71 (ATerm), ATerm t)
{
  ATerm p_9 = NULL,q_9 = NULL,y_9 = NULL,i_10 = NULL,j_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL;
  n_10 = t;
  if(match_cons(t, sym_SDef_3))
    {
      q_9 = ATgetArgument(t, 0);
      y_9 = ATgetArgument(t, 1);
      i_10 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_10);
  p_9 = t;
  t = q_9;
  t = y_70(t);
  j_10 = t;
  t = y_9;
  t = z_70(t);
  l_10 = t;
  t = i_10;
  t = a_71(t);
  m_10 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, j_10, l_10, m_10), p_9);
  return(t);
}
ATerm Let_2_0 (ATerm j_68 (ATerm), ATerm k_68 (ATerm), ATerm t)
{
  ATerm r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL;
  w_10 = t;
  if(match_cons(t, sym_Let_2))
    {
      s_10 = ATgetArgument(t, 0);
      t_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_10);
  r_10 = t;
  t = s_10;
  t = j_68(t);
  u_10 = t;
  t = t_10;
  t = k_68(t);
  v_10 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, u_10, v_10), r_10);
  return(t);
}
ATerm sboundin_3_0 (ATerm s_77 (ATerm), ATerm t_77 (ATerm), ATerm u_77 (ATerm), ATerm t)
{
  ATerm j_6 = t;
  int k_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(s_77, s_77, t);
      ;
      LocalPopChoice(k_6);
    }
  else
    {
      t = j_6;
      {
        ATerm l_6 = t;
        int m_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(u_77, u_77, s_77, t);
            ;
            LocalPopChoice(m_6);
          }
        else
          {
            t = l_6;
            {
              ATerm n_6 = t;
              int o_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(u_77, u_77, u_77, s_77, t);
                  ;
                  LocalPopChoice(o_6);
                }
              else
                {
                  t = n_6;
                  t = Rec_2_0(u_77, s_77, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm d_11 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      ATerm p_6 = ATgetArgument(t, 0);
      d_11 = ATgetArgument(t, 1);
      {
        ATerm q_6 = ATgetArgument(t, 2);
      }
      {
        ATerm r_6 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = d_11;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind5_0_0 (ATerm t)
{
  ATerm e_11 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm s_6 = ATgetArgument(t, 0);
      e_11 = ATgetArgument(t, 1);
      {
        ATerm t_6 = ATgetArgument(t, 2);
      }
      {
        ATerm u_6 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = e_11;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind2_0_0 (ATerm t)
{
  ATerm f_11 = NULL;
  if(match_cons(t, sym_SDef_3))
    {
      ATerm v_6 = ATgetArgument(t, 0);
      f_11 = ATgetArgument(t, 1);
      {
        ATerm w_6 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = f_11;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm j_11 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      j_11 = ATgetArgument(t, 0);
      {
        ATerm x_6 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = j_11;
  {
    ATerm r_0 (ATerm t)
    {
      ATerm l_11 = NULL;
      ATerm y_6 = t;
      int z_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_SDef_3))
            {
              l_11 = ATgetArgument(t, 0);
              {
                ATerm a_7 = ATgetArgument(t, 1);
              }
              {
                ATerm b_7 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          LocalPopChoice(z_6);
          t = l_11;
        }
      else
        {
          t = y_6;
          if(match_cons(t, sym_SDefT_4))
            {
              l_11 = ATgetArgument(t, 0);
              {
                ATerm c_7 = ATgetArgument(t, 1);
              }
              {
                ATerm d_7 = ATgetArgument(t, 2);
              }
              {
                ATerm e_7 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          t = l_11;
        }
      return(t);
    }
    t = map_1_0(r_0, t);
  }
  return(t);
}
ATerm SVar_1_0 (ATerm i_68 (ATerm), ATerm t)
{
  ATerm r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL;
  u_11 = t;
  if(match_cons(t, sym_SVar_1))
    {
      s_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_11);
  r_11 = t;
  t = s_11;
  t = i_68(t);
  t_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, t_11), r_11);
  return(t);
}
ATerm srename_0_0 (ATerm t)
{
  ATerm s_0 (ATerm t)
  {
    ATerm f_7 = t;
    int g_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0_0(t);
        ;
        LocalPopChoice(g_7);
      }
    else
      {
        t = f_7;
        {
          ATerm h_7 = t;
          int i_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0_0(t);
              ;
              LocalPopChoice(i_7);
            }
          else
            {
              t = h_7;
              {
                ATerm j_7 = t;
                int k_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm a_12 = NULL;
                    if(match_cons(t, sym_Rec_2))
                      {
                        a_12 = ATgetArgument(t, 0);
                        {
                          ATerm l_7 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATempty, a_12);
                    ;
                    LocalPopChoice(k_7);
                  }
                else
                  {
                    t = j_7;
                    {
                      ATerm m_7 = t;
                      int n_7 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Bind5_0_0(t);
                          ;
                          LocalPopChoice(n_7);
                        }
                      else
                        {
                          t = m_7;
                          t = Bind7_0_0(t);
                        }
                    }
                  }
              }
            }
        }
      }
    return(t);
  }
  t = rename_4_0(SVar_1_0, s_0, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm tpaste_1_0 (ATerm n_77 (ATerm), ATerm t)
{
  ATerm o_7 = t;
  int r_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(n_77, _id, t);
      ;
      LocalPopChoice(r_7);
    }
  else
    {
      t = o_7;
      {
        ATerm s_7 = t;
        int t_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_0 (ATerm t)
            {
              t = split_2_0(_id, n_77, t);
              {
                ATerm u_0 (ATerm t)
                {
                  ATerm i_12 = NULL,k_12 = NULL,l_12 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      i_12 = ATgetArgument(t, 0);
                      l_12 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = i_12;
                  {
                    ATerm u_7 = t;
                    int v_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_DefaultVarDec_1))
                          {
                            ATerm w_7 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(v_7);
                        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, l_12);
                      }
                    else
                      {
                        t = u_7;
                        if(match_cons(t, sym_VarDec_2))
                          {
                            ATerm x_7 = ATgetArgument(t, 0);
                            k_12 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_VarDec_2, l_12, k_12);
                      }
                  }
                  return(t);
                }
                t = zip_1_0(u_0, t);
              }
              return(t);
            }
            t = SDefT_4_0(_id, _id, t_0, _id, t);
            ;
            LocalPopChoice(t_7);
          }
        else
          {
            t = s_7;
            {
              ATerm x_0 (ATerm t)
              {
                t = split_2_0(_id, n_77, t);
                {
                  ATerm y_0 (ATerm t)
                  {
                    ATerm q_12 = NULL,s_12 = NULL,t_12 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        q_12 = ATgetArgument(t, 0);
                        t_12 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = q_12;
                    {
                      ATerm y_7 = t;
                      int z_7 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_DefaultVarDec_1))
                            {
                              ATerm a_8 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(z_7);
                          t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, t_12);
                        }
                      else
                        {
                          t = y_7;
                          if(match_cons(t, sym_VarDec_2))
                            {
                              ATerm b_8 = ATgetArgument(t, 0);
                              s_12 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, t_12, s_12);
                        }
                    }
                    return(t);
                  }
                  t = zip_1_0(y_0, t);
                }
                return(t);
              }
              t = RDefT_4_0(_id, _id, x_0, _id, t);
            }
          }
      }
    }
  return(t);
}
ATerm DynamicRules_1_0 (ATerm q_67 (ATerm), ATerm t)
{
  ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL;
  a_13 = t;
  if(match_cons(t, sym_DynamicRules_1))
    {
      y_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_13);
  x_12 = t;
  t = y_12;
  t = q_67(t);
  z_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, z_12), x_12);
  return(t);
}
ATerm RDefT_4_0 (ATerm h_67 (ATerm), ATerm i_67 (ATerm), ATerm j_67 (ATerm), ATerm k_67 (ATerm), ATerm t)
{
  ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL;
  p_13 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      f_13 = ATgetArgument(t, 0);
      g_13 = ATgetArgument(t, 1);
      h_13 = ATgetArgument(t, 2);
      i_13 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_13);
  e_13 = t;
  t = f_13;
  t = h_67(t);
  l_13 = t;
  t = g_13;
  t = i_67(t);
  m_13 = t;
  t = h_13;
  t = j_67(t);
  n_13 = t;
  t = i_13;
  t = k_67(t);
  o_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDefT_4, l_13, m_13, n_13, o_13), e_13);
  return(t);
}
ATerm SDefT_4_0 (ATerm b_71 (ATerm), ATerm c_71 (ATerm), ATerm d_71 (ATerm), ATerm e_71 (ATerm), ATerm t)
{
  ATerm t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL;
  c_14 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      u_13 = ATgetArgument(t, 0);
      v_13 = ATgetArgument(t, 1);
      w_13 = ATgetArgument(t, 2);
      x_13 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_14);
  t_13 = t;
  t = u_13;
  t = b_71(t);
  y_13 = t;
  t = v_13;
  t = c_71(t);
  z_13 = t;
  t = w_13;
  t = d_71(t);
  a_14 = t;
  t = x_13;
  t = e_71(t);
  b_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, y_13, z_13, a_14, b_14), t_13);
  return(t);
}
ATerm Scope_2_0 (ATerm t_68 (ATerm), ATerm u_68 (ATerm), ATerm t)
{
  ATerm g_14 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL;
  l_14 = t;
  if(match_cons(t, sym_Scope_2))
    {
      h_14 = ATgetArgument(t, 0);
      i_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_14);
  g_14 = t;
  t = h_14;
  t = t_68(t);
  j_14 = t;
  t = i_14;
  t = u_68(t);
  k_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, j_14, k_14), g_14);
  return(t);
}
ATerm tboundin_3_0 (ATerm o_77 (ATerm), ATerm p_77 (ATerm), ATerm q_77 (ATerm), ATerm t)
{
  ATerm c_8 = t;
  int d_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(q_77, o_77, t);
      ;
      LocalPopChoice(d_8);
    }
  else
    {
      t = c_8;
      {
        ATerm e_8 = t;
        int f_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(q_77, q_77, q_77, o_77, t);
            ;
            LocalPopChoice(f_8);
          }
        else
          {
            t = e_8;
            {
              ATerm g_8 = t;
              int h_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(q_77, q_77, q_77, o_77, t);
                  ;
                  LocalPopChoice(h_8);
                }
              else
                {
                  t = g_8;
                  t = DynamicRules_1_0(o_77, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm p_14 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      ATerm i_8 = ATgetArgument(t, 0);
      ATerm n_8 = ATgetArgument(t, 1);
      p_14 = ATgetArgument(t, 2);
      {
        ATerm o_8 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = p_14;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm declared_vars_0_0 (ATerm t)
{
  ATerm z_0 (ATerm t)
  {
    ATerm t_14 = NULL;
    ATerm p_8 = t;
    int q_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_VarDec_2))
          {
            t_14 = ATgetArgument(t, 0);
            {
              ATerm r_8 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(q_8);
        t = t_14;
      }
    else
      {
        t = p_8;
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            t_14 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = t_14;
      }
    return(t);
  }
  t = map_1_0(z_0, t);
  return(t);
}
ATerm Bind6_0_0 (ATerm t)
{
  ATerm w_14 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm s_8 = ATgetArgument(t, 0);
      ATerm t_8 = ATgetArgument(t, 1);
      w_14 = ATgetArgument(t, 2);
      {
        ATerm v_8 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = w_14;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm x_14 = NULL;
  if(match_cons(t, sym_DynamicRules_1))
    {
      x_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_14;
  t = tvars_0_0(t);
  return(t);
}
ATerm union_1_0 (ATerm a_87 (ATerm), ATerm t)
{
  ATerm y_14 = NULL,z_14 = NULL;
  if(match_cons(t, sym__2))
    {
      z_14 = ATgetArgument(t, 0);
      y_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_14;
  {
    ATerm a_15 (ATerm t)
    {
      ATerm w_8 = t;
      int x_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = y_14;
          ;
          LocalPopChoice(x_8);
        }
      else
        {
          t = w_8;
          {
            ATerm y_8 = t;
            int b_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_1 (ATerm t)
                {
                  t = y_14;
                  return(t);
                }
                t = HdMember_p__2_0(a_87, a_1, t);
                t = a_15(t);
                ;
                LocalPopChoice(b_9);
              }
            else
              {
                t = y_8;
                t = Cons_2_0(_id, a_15, t);
              }
          }
        }
      return(t);
    }
    t = a_15(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  ATerm b_1 (ATerm t)
  {
    ATerm b_15 = NULL;
    if(match_cons(t, sym__2))
      {
        b_15 = ATgetArgument(t, 0);
        if((b_15 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = union_1_0(b_1, t);
  return(t);
}
ATerm foldr_3_0 (ATerm p_89 (ATerm), ATerm q_89 (ATerm), ATerm r_89 (ATerm), ATerm t)
{
  ATerm c_9 = t;
  int d_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = p_89(t);
      ;
      LocalPopChoice(d_9);
    }
  else
    {
      t = c_9;
      {
        ATerm e_15 = NULL,f_15 = NULL,i_15 = NULL,j_15 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_15 = ATgetFirst((ATermList) t);
            f_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = e_15;
        t = r_89(t);
        i_15 = t;
        t = f_15;
        t = foldr_3_0(p_89, q_89, r_89, t);
        j_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_15, j_15);
        t = q_89(t);
      }
    }
  return(t);
}
ATerm crush_3_0 (ATerm n_87 (ATerm), ATerm o_87 (ATerm), ATerm p_87 (ATerm), ATerm t)
{
  ATerm k_15 = NULL,l_15 = NULL;
  k_15 = t;
  t = SSL_explode_term(k_15);
  if(match_cons(t, sym__2))
    {
      ATerm e_9 = ATgetArgument(t, 0);
      l_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_15;
  t = foldr_3_0(n_87, o_87, p_87, t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm e_87 (ATerm), ATerm f_87 (ATerm), ATerm t)
{
  ATerm m_15 = NULL,n_15 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_15 = ATgetFirst((ATermList) t);
      n_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = f_87(t);
  {
    ATerm c_1 (ATerm t)
    {
      ATerm o_15 = NULL;
      o_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_15, o_15);
      t = e_87(t);
      return(t);
    }
    t = fetch_1_0(c_1, t);
    t = n_15;
  }
  return(t);
}
ATerm diff_1_0 (ATerm w_86 (ATerm), ATerm t)
{
  ATerm p_15 = NULL,q_15 = NULL;
  if(match_cons(t, sym__2))
    {
      q_15 = ATgetArgument(t, 0);
      p_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_15;
  {
    ATerm r_15 (ATerm t)
    {
      ATerm f_9 = t;
      int g_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(g_9);
        }
      else
        {
          t = f_9;
          {
            ATerm h_9 = t;
            int i_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_1 (ATerm t)
                {
                  t = p_15;
                  return(t);
                }
                t = HdMember_p__2_0(w_86, d_1, t);
                t = r_15(t);
                ;
                LocalPopChoice(i_9);
              }
            else
              {
                t = h_9;
                t = Cons_2_0(_id, r_15, t);
              }
          }
        }
      return(t);
    }
    t = r_15(t);
  }
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm s_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm j_9 = ATgetFirst((ATermList) t);
      if(match_cons(j_9, sym__2))
        {
          s_15 = ATgetArgument(j_9, 0);
          t_15 = ATgetArgument(j_9, 1);
        }
      else
        _fail(t);
      u_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(t_15);
  if(match_cons(t, sym__2))
    {
      v_15 = ATgetArgument(t, 0);
      w_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(s_15);
  if(match_cons(t, sym__2))
    {
      if((v_15 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      x_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_15, w_15);
  t = zip_1_0(_id, t);
  y_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_15, u_15);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm x_95 (ATerm), ATerm y_95 (ATerm), ATerm t)
{
  ATerm z_15 (ATerm t)
  {
    ATerm k_9 = t;
    int l_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_95(t);
        ;
        LocalPopChoice(l_9);
      }
    else
      {
        t = k_9;
        t = y_95(t);
        t = z_15(t);
      }
    return(t);
  }
  t = z_15(t);
  return(t);
}
ATerm for_3_0 (ATerm a_96 (ATerm), ATerm b_96 (ATerm), ATerm c_96 (ATerm), ATerm t)
{
  t = a_96(t);
  t = while_not_2_0(b_96, c_96, t);
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm m_9 = t;
  int n_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_1 (ATerm t)
      {
        ATerm e_16 = NULL;
        e_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, e_16);
        return(t);
      }
      ATerm f_1 (ATerm t)
      {
        ATerm h_1 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = _2_0(_id, h_1, t);
        return(t);
      }
      ATerm g_1 (ATerm t)
      {
        ATerm o_9 = t;
        int r_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_1 (ATerm t)
            {
              ATerm s_9 = t;
              int t_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      g_16 = ATgetFirst((ATermList) t);
                      j_16 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = g_16;
                  if(match_cons(t, sym__2))
                    {
                      h_16 = ATgetArgument(t, 0);
                      i_16 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = i_16;
                  if((h_16 != t))
                    {
                      _fail(t);
                    }
                  t = j_16;
                  ;
                  LocalPopChoice(t_9);
                }
              else
                {
                  t = s_9;
                  t = UfDecompose_0_0(t);
                }
              return(t);
            }
            t = _2_0(_id, i_1, t);
            ;
            LocalPopChoice(r_9);
          }
        else
          {
            t = o_9;
            {
              ATerm n_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL;
              if(match_cons(t, sym__2))
                {
                  n_16 = ATgetArgument(t, 0);
                  o_16 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = o_16;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  p_16 = ATgetFirst((ATermList) t);
                  q_16 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_16), p_16), q_16);
            }
          }
        return(t);
      }
      t = for_3_0(e_1, f_1, g_1, t);
      ;
      LocalPopChoice(n_9);
    }
  else
    {
      t = m_9;
      {
        ATerm j_1 (ATerm t)
        {
          ATerm u_16 = NULL;
          if(match_cons(t, sym__2))
            {
              u_16 = ATgetArgument(t, 0);
              if((u_16 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
            }
          else
            _fail(t);
          return(t);
        }
        t = diff_1_0(j_1, t);
      }
    }
  return(t);
}
ATerm free_vars_3_0 (ATerm r_93 (ATerm), ATerm s_93 (ATerm), ATerm t_93 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm y_16 (ATerm t)
  {
    ATerm u_9 = t;
    int v_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_93(t);
        ;
        LocalPopChoice(v_9);
      }
    else
      {
        t = u_9;
        {
          ATerm w_9 = t;
          int x_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_16 = NULL,x_16 = NULL;
              v_16 = t;
              t = s_93(t);
              x_16 = t;
              t = v_16;
              {
                ATerm k_1 (ATerm t)
                {
                  ATerm m_1 (ATerm t)
                  {
                    t = x_16;
                    return(t);
                  }
                  t = split_2_0(y_16, m_1, t);
                  t = diff_0_0(t);
                  return(t);
                }
                ATerm l_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = t_93(k_1, y_16, l_1, t);
                {
                  ATerm n_1 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3_0(n_1, union_0_0, _id, t);
                }
              }
              ;
              LocalPopChoice(x_9);
            }
          else
            {
              t = w_9;
              {
                ATerm o_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3_0(o_1, union_0_0, y_16, t);
              }
            }
        }
      }
    return(t);
  }
  t = y_16(t);
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  ATerm p_1 (ATerm t)
  {
    ATerm z_16 = NULL;
    if(match_cons(t, sym_Var_1))
      {
        z_16 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(ATempty, z_16);
    return(t);
  }
  ATerm q_1 (ATerm t)
  {
    ATerm z_9 = t;
    int a_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0_0(t);
        ;
        LocalPopChoice(a_10);
      }
    else
      {
        t = z_9;
        {
          ATerm b_10 = t;
          int c_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind4_0_0(t);
              ;
              LocalPopChoice(c_10);
            }
          else
            {
              t = b_10;
              {
                ATerm d_10 = t;
                int e_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind6_0_0(t);
                    ;
                    LocalPopChoice(e_10);
                  }
                else
                  {
                    t = d_10;
                    t = Bind8_0_0(t);
                  }
              }
            }
        }
      }
    return(t);
  }
  t = free_vars_3_0(p_1, q_1, tboundin_3_0, t);
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm c_17 = NULL,g_17 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      g_17 = ATgetArgument(t, 0);
      t = g_17;
      if(match_cons(t, sym_Rule_3))
        {
          c_17 = ATgetArgument(t, 0);
          {
            ATerm f_10 = ATgetArgument(t, 1);
          }
          {
            ATerm g_10 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = c_17;
      t = tvars_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          g_17 = ATgetArgument(t, 0);
          {
            ATerm h_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = g_17;
    }
  return(t);
}
ATerm Var_1_0 (ATerm z_64 (ATerm), ATerm t)
{
  ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL;
  n_17 = t;
  if(match_cons(t, sym_Var_1))
    {
      l_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_17);
  k_17 = t;
  t = l_17;
  t = z_64(t);
  m_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, m_17), k_17);
  return(t);
}
ATerm DistBinding_2_0 (ATerm z_91 (ATerm), ATerm a_92 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm r_17 = NULL,s_17 = NULL,t_17 = NULL;
  if(match_cons(t, sym__3))
    {
      t_17 = ATgetArgument(t, 0);
      s_17 = ATgetArgument(t, 1);
      r_17 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = t_17;
  {
    ATerm r_1 (ATerm t)
    {
      ATerm u_17 = NULL;
      u_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_17, r_17);
      t = z_91(t);
      return(t);
    }
    ATerm s_1 (ATerm t)
    {
      ATerm v_17 = NULL;
      v_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_17, s_17);
      t = z_91(t);
      return(t);
    }
    t = a_92(r_1, s_1, _id, t);
  }
  return(t);
}
ATerm genzip_4_0 (ATerm z_82 (ATerm), ATerm a_83 (ATerm), ATerm b_83 (ATerm), ATerm c_83 (ATerm), ATerm t)
{
  ATerm w_17 (ATerm t)
  {
    ATerm k_10 = t;
    int o_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_82(t);
        ;
        LocalPopChoice(o_10);
      }
    else
      {
        t = k_10;
        t = a_83(t);
        t = _2_0(c_83, w_17, t);
        t = b_83(t);
      }
    return(t);
  }
  t = w_17(t);
  return(t);
}
ATerm zip_1_0 (ATerm e_83 (ATerm), ATerm t)
{
  ATerm t_1 (ATerm t)
  {
    if(match_cons(t, sym__2))
      {
        ATerm p_10 = ATgetArgument(t, 0);
        if(((ATgetType(p_10) != AT_LIST) || !(ATisEmpty(p_10))))
          _fail(t);
        {
          ATerm q_10 = ATgetArgument(t, 1);
          if(((ATgetType(q_10) != AT_LIST) || !(ATisEmpty(q_10))))
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm u_1 (ATerm t)
  {
    ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm x_10 = ATgetArgument(t, 0);
        if(((ATgetType(x_10) == AT_LIST) && !(ATisEmpty(x_10))))
          {
            x_17 = ATgetFirst((ATermList) x_10);
            z_17 = (ATerm) ATgetNext((ATermList) x_10);
          }
        else
          _fail(t);
        {
          ATerm y_10 = ATgetArgument(t, 1);
          if(((ATgetType(y_10) == AT_LIST) && !(ATisEmpty(y_10))))
            {
              y_17 = ATgetFirst((ATermList) y_10);
              a_18 = (ATerm) ATgetNext((ATermList) y_10);
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_17, y_17), (ATerm) ATmakeAppl(sym__2, z_17, a_18));
    return(t);
  }
  ATerm v_1 (ATerm t)
  {
    ATerm b_18 = NULL,c_18 = NULL;
    if(match_cons(t, sym__2))
      {
        b_18 = ATgetArgument(t, 0);
        c_18 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(CheckATermList(c_18), b_18);
    return(t);
  }
  t = genzip_4_0(t_1, u_1, v_1, e_83, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm RnBinding_2_0 (ATerm t_91 (ATerm), ATerm u_91 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm d_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL;
  if(match_cons(t, sym__2))
    {
      d_18 = ATgetArgument(t, 0);
      e_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_18;
  t = t_91(t);
  f_18 = t;
  t = map_1_0(new_0_0, t);
  g_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_18, g_18);
  t = zip_1_0(_id, t);
  h_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_18, e_18);
  t = conc_0_0(t);
  i_18 = t;
  t = d_18;
  {
    ATerm w_1 (ATerm t)
    {
      t = g_18;
      return(t);
    }
    t = u_91(w_1, t);
    j_18 = t;
    t = (ATerm) ATmakeAppl(sym__3, j_18, e_18, i_18);
  }
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm n_18 = NULL,o_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL;
  if(match_cons(t, sym__2))
    {
      q_18 = ATgetArgument(t, 0);
      r_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_18;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_18 = ATgetFirst((ATermList) t);
      t_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_18;
  if(match_cons(t, sym__2))
    {
      n_18 = ATgetArgument(t, 0);
      o_18 = ATgetArgument(t, 1);
      {
        ATerm z_10 = t;
        int a_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_18;
            if((q_18 != t))
              {
                _fail(t);
              }
            t = o_18;
            ;
            LocalPopChoice(a_11);
          }
        else
          {
            t = z_10;
            t = (ATerm) ATmakeAppl(sym__2, q_18, t_18);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, q_18, t_18);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm RnVar_1_0 (ATerm e_92 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm b_19 = NULL,c_19 = NULL;
  if(match_cons(t, sym__2))
    {
      c_19 = ATgetArgument(t, 0);
      b_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_19;
  {
    ATerm x_1 (ATerm t)
    {
      ATerm y_1 (ATerm t)
      {
        t = b_19;
        return(t);
      }
      t = split_2_0(_id, y_1, t);
      t = lookup_0_0(t);
      return(t);
    }
    t = e_92(x_1, t);
  }
  return(t);
}
ATerm all_dist_1_0 (ATerm x_92 (ATerm), ATerm t)
{
  ATerm d_19 = NULL,e_19 = NULL;
  if(match_cons(t, sym__2))
    {
      e_19 = ATgetArgument(t, 0);
      d_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_19;
  {
    ATerm z_1 (ATerm t)
    {
      ATerm f_19 = NULL;
      f_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_19, d_19);
      t = x_92(t);
      return(t);
    }
    t = SRTS_all(z_1, t);
  }
  return(t);
}
ATerm env_alltd_1_0 (ATerm h_92 (ATerm), ATerm t)
{
  ATerm g_19 (ATerm t)
  {
    ATerm b_11 = t;
    int c_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_92(t);
        ;
        LocalPopChoice(c_11);
      }
    else
      {
        t = b_11;
        t = all_dist_1_0(g_19, t);
      }
    return(t);
  }
  t = g_19(t);
  return(t);
}
ATerm rename_4_0 (ATerm o_91 (ATerm (ATerm), ATerm), ATerm p_91 (ATerm), ATerm q_91 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm r_91 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm h_19 = NULL;
  h_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_19, (ATerm) ATempty);
  {
    ATerm i_19 (ATerm t)
    {
      ATerm a_2 (ATerm t)
      {
        ATerm g_11 = t;
        int h_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = RnVar_1_0(o_91, t);
            ;
            LocalPopChoice(h_11);
          }
        else
          {
            t = g_11;
            t = RnBinding_2_0(p_91, r_91, t);
            t = DistBinding_2_0(i_19, q_91, t);
          }
        return(t);
      }
      t = env_alltd_1_0(a_2, t);
      return(t);
    }
    t = i_19(t);
  }
  return(t);
}
ATerm trename_0_0 (ATerm t)
{
  ATerm b_2 (ATerm t)
  {
    ATerm i_11 = t;
    int k_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0_0(t);
        ;
        LocalPopChoice(k_11);
      }
    else
      {
        t = i_11;
        {
          ATerm m_11 = t;
          int n_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind6_0_0(t);
              ;
              LocalPopChoice(n_11);
            }
          else
            {
              t = m_11;
              t = Bind8_0_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4_0(Var_1_0, b_2, tboundin_3_0, tpaste_1_0, t);
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = trename_0_0(t);
  t = srename_0_0(t);
  return(t);
}
ATerm _2_0 (ATerm o_62 (ATerm), ATerm p_62 (ATerm), ATerm t)
{
  ATerm j_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL;
  o_19 = t;
  if(match_cons(t, sym__2))
    {
      k_19 = ATgetArgument(t, 0);
      l_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_19);
  j_19 = t;
  t = k_19;
  t = o_62(t);
  m_19 = t;
  t = l_19;
  t = p_62(t);
  n_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, m_19, n_19), j_19);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm s_19 = NULL,t_19 = NULL;
  s_19 = t;
  t = term_o_11;
  t = whoami_0_0(t);
  t_19 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), t_19), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = s_19;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm p_11 = t;
  int q_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(q_11);
    }
  else
    {
      t = p_11;
      {
        ATerm w_19 = NULL,x_19 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_19 = ATgetFirst((ATermList) t);
            x_19 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = w_19;
        {
          ATerm c_2 (ATerm t)
          {
            t = x_19;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(c_2, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm b_20 = NULL,c_20 = NULL;
  b_20 = t;
  t = SSL_explode_term(b_20);
  if(match_cons(t, sym__2))
    {
      ATerm v_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_11) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      c_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_20;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm e_85 (ATerm), ATerm t)
{
  ATerm d_20 (ATerm t)
  {
    ATerm w_11 = t;
    int x_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, d_20, t);
        ;
        LocalPopChoice(x_11);
      }
    else
      {
        t = w_11;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = e_85(t);
      }
    return(t);
  }
  t = d_20(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm e_20 = NULL,f_20 = NULL;
  if(match_cons(t, sym__2))
    {
      f_20 = ATgetArgument(t, 0);
      e_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_20;
  {
    ATerm d_2 (ATerm t)
    {
      t = e_20;
      return(t);
    }
    t = at_end_1_0(d_2, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm y_11 = t;
  int z_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(z_11);
    }
  else
    {
      t = y_11;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm g_20 = NULL;
  ATerm e_2 (ATerm t)
  {
    ATerm h_20 = NULL;
    h_20 = t;
    t = SSL_explode_string(h_20);
    return(t);
  }
  ATerm f_2 (ATerm t)
  {
    ATerm i_20 = NULL;
    i_20 = t;
    t = SSL_explode_string(i_20);
    return(t);
  }
  t = _2_0(e_2, f_2, t);
  t = conc_0_0(t);
  g_20 = t;
  t = SSL_implode_string(g_20);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm b_12 = t;
  int c_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_20 = NULL;
      o_20 = t;
      t = SSL_is_string(o_20);
      ;
      LocalPopChoice(c_12);
    }
  else
    {
      t = b_12;
      {
        ATerm d_12 = t;
        int e_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_2 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(g_2, t);
            ;
            LocalPopChoice(e_12);
          }
        else
          {
            t = d_12;
            {
              ATerm s_20 = NULL,t_20 = NULL,u_20 = NULL;
              s_20 = t;
              if(match_cons(t, sym_Path_1))
                {
                  t_20 = ATgetArgument(t, 0);
                  t = t_20;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      t_20 = ATgetArgument(t, 0);
                      t = t_20;
                      {
                        ATerm f_12 = t;
                        int g_12 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(g_12);
                          }
                        else
                          {
                            t = f_12;
                            {
                              ATerm h_2 (ATerm t)
                              {
                                t = term_h_12;
                                return(t);
                              }
                              t = debug_1_0(h_2, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm y_20 = NULL,z_20 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          t_20 = ATgetArgument(t, 0);
                          u_20 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = t_20;
                      t = eval_config_0_0(t);
                      y_20 = t;
                      t = u_20;
                      t = eval_config_0_0(t);
                      z_20 = t;
                      t = (ATerm) ATmakeAppl(sym__2, y_20, z_20);
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
  ATerm c_21 = NULL;
  c_21 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), c_21);
  {
    ATerm i_2 (ATerm t)
    {
      ATerm d_21 = NULL;
      t = eval_config_0_0(t);
      d_21 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), c_21, d_21);
      t = d_21;
      return(t);
    }
    t = try_1_0(i_2, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm p_105 (ATerm), ATerm t)
{
  ATerm j_2 (ATerm t)
  {
    ATerm e_21 = NULL,f_21 = NULL;
    e_21 = t;
    t = term_j_12;
    t = get_config_0_0(t);
    f_21 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_21, term_m_12);
    t = geq_0_0(t);
    t = e_21;
    t = p_105(t);
    return(t);
  }
  t = try_1_0(j_2, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm k_2 (ATerm t)
  {
    ATerm g_21 = NULL,h_21 = NULL,i_21 = NULL,j_21 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm n_12 = ATgetArgument(t, 0);
        if(match_cons(n_12, sym_Stream_1))
          {
            g_21 = ATgetArgument(n_12, 0);
          }
        else
          _fail(t);
        h_21 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(g_21, h_21);
    i_21 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), i_21);
    j_21 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, j_21);
    return(t);
  }
  t = WriteToFile_1_0(k_2, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm r_99 (ATerm), ATerm t)
{
  ATerm k_21 = NULL,l_21 = NULL,m_21 = NULL;
  if(match_cons(t, sym__2))
    {
      k_21 = ATgetArgument(t, 0);
      l_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_21, term_o_12);
  t = open_stream_0_0(t);
  m_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_21, l_21);
  t = r_99(t);
  t = fclose_0_0(t);
  t = l_21;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm l_2 (ATerm t)
  {
    ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm p_12 = ATgetArgument(t, 0);
        if(match_cons(p_12, sym_Stream_1))
          {
            n_21 = ATgetArgument(p_12, 0);
          }
        else
          _fail(t);
        o_21 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(n_21, o_21);
    p_21 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, p_21);
    return(t);
  }
  t = WriteToFile_1_0(l_2, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm q_21 = NULL,r_21 = NULL;
  q_21 = t;
  {
    ATerm m_2 (ATerm t)
    {
      ATerm r_12 = t;
      int u_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_2 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                r_21 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(n_2, t);
          ;
          LocalPopChoice(u_12);
        }
      else
        {
          t = r_12;
          t = term_v_12;
          r_21 = t;
        }
      return(t);
    }
    t = _2_0(m_2, _id, t);
    t = q_21;
    {
      ATerm o_2 (ATerm t)
      {
        ATerm p_2 (ATerm t)
        {
          t = not_null(r_21);
          return(t);
        }
        t = split_2_0(p_2, _id, t);
        return(t);
      }
      t = _2_0(_id, o_2, t);
      {
        ATerm w_12 = t;
        int b_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_2 (ATerm t)
            {
              ATerm s_2 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(s_2, t);
              return(t);
            }
            t = _2_0(r_2, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(b_13);
          }
        else
          {
            t = w_12;
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
ATerm apply_strategy_1_0 (ATerm e_96 (ATerm), ATerm t)
{
  ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL,v_21 = NULL,w_21 = NULL;
  s_21 = t;
  t = dtime_0_0(t);
  t = s_21;
  t = e_96(t);
  t_21 = t;
  t = dtime_0_0(t);
  u_21 = t;
  t = t_21;
  if(match_cons(t, sym__2))
    {
      v_21 = ATgetArgument(t, 0);
      w_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_21), (ATerm) ATmakeAppl(sym_Runtime_1, u_21)), w_21);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm k_22 (ATerm e_22, ATerm t)
  {
    t = SSL_fclose(e_22);
    return(t);
  }
  ATerm h_22 = NULL,i_22 = NULL;
  i_22 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_22 = ATgetArgument(t, 0);
      {
        ATerm c_13 = t;
        int d_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(h_22);
            ;
            LocalPopChoice(d_13);
          }
        else
          {
            t = c_13;
            t = k_22(i_22, t);
          }
      }
    }
  else
    {
      t = k_22(i_22, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm d_99 (ATerm), ATerm t)
{
  ATerm l_22 = NULL,m_22 = NULL;
  l_22 = t;
  t = d_99(t);
  m_22 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, l_22), m_22));
  t = l_22;
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm n_22 = NULL;
  t = SSL_stdin_stream();
  n_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_22);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm o_22 = NULL;
  t = SSL_stdout_stream();
  o_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_22);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm p_22 = NULL;
  t = SSL_stderr_stream();
  p_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_22);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm r_22 = NULL;
  r_22 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = r_22;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = r_22;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = r_22;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_13 = ATgetArgument(t, 0);
      ATerm k_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_13 = t;
    int r_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_0 = NULL,w_0 = NULL;
        v_0 = t;
        t = SSL_explode_term(v_0);
        if(match_cons(t, sym__2))
          {
            ATerm s_13 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) s_13) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm d_14 = ATgetArgument(t, 1);
              if(((ATgetType(d_14) == AT_LIST) && !(ATisEmpty(d_14))))
                {
                  w_0 = ATgetFirst((ATermList) d_14);
                  {
                    ATerm e_14 = (ATerm) ATgetNext((ATermList) d_14);
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
        LocalPopChoice(r_13);
      }
    else
      {
        t = q_13;
        {
          ATerm f_14 = t;
          int m_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_22 = NULL,v_22 = NULL,w_22 = NULL;
              ATerm t_2 (ATerm t)
              {
                ATerm x_22 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    x_22 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = x_22;
                return(t);
              }
              t = _2_0(t_2, _id, t);
              if(match_cons(t, sym__2))
                {
                  u_22 = ATgetArgument(t, 0);
                  v_22 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(u_22, v_22);
              w_22 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, w_22);
              ;
              LocalPopChoice(m_14);
            }
          else
            {
              t = f_14;
              {
                ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL;
                ATerm v_2 (ATerm t)
                {
                  ATerm b_23 = NULL;
                  b_23 = t;
                  t = SSL_is_string(b_23);
                  return(t);
                }
                t = _2_0(v_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    y_22 = ATgetArgument(t, 0);
                    z_22 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(y_22, z_22);
                a_23 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, a_23);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm c_23 = NULL,d_23 = NULL,e_23 = NULL;
  ATerm n_14 = t;
  int o_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_23 = NULL;
      f_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_23, term_q_14);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(o_14);
    }
  else
    {
      t = n_14;
      {
        ATerm z_2 (ATerm t)
        {
          t = term_r_14;
          return(t);
        }
        t = debug_1_0(z_2, t);
        _fail(t);
      }
    }
  c_23 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(e_23);
  d_23 = t;
  t = c_23;
  t = fclose_0_0(t);
  t = d_23;
  return(t);
}
ATerm split_2_0 (ATerm z_81 (ATerm), ATerm a_82 (ATerm), ATerm t)
{
  ATerm h_23 = NULL,i_23 = NULL,j_23 = NULL;
  h_23 = t;
  t = z_81(t);
  i_23 = t;
  t = h_23;
  t = a_82(t);
  j_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_23, j_23);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm k_23 = NULL,l_23 = NULL;
  k_23 = t;
  {
    ATerm s_14 = t;
    int u_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_3 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              l_23 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(a_3, t);
        ;
        LocalPopChoice(u_14);
      }
    else
      {
        t = s_14;
        t = term_v_14;
        l_23 = t;
      }
    t = k_23;
    {
      ATerm b_3 (ATerm t)
      {
        t = not_null(l_23);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, b_3, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm c_3 (ATerm t)
  {
    ATerm n_23 = NULL;
    n_23 = t;
    if(match_string(t, "-k"))
      {
        t = n_23;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = n_23;
      }
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    ATerm o_23 = NULL,p_23 = NULL;
    o_23 = t;
    t = SSL_string_to_int(o_23);
    p_23 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), p_23);
    t = o_23;
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    t = term_c_15;
    return(t);
  }
  t = ArgOption_3_0(c_3, d_3, e_3, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm d_15 = t;
  int g_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_3 (ATerm t)
      {
        ATerm r_23 = NULL;
        r_23 = t;
        if(match_string(t, "-S"))
          {
            t = r_23;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = r_23;
          }
        return(t);
      }
      ATerm g_3 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_a_16;
        return(t);
      }
      ATerm h_3 (ATerm t)
      {
        t = term_b_16;
        return(t);
      }
      t = Option_3_0(f_3, g_3, h_3, t);
      ;
      LocalPopChoice(g_15);
    }
  else
    {
      t = d_15;
      {
        ATerm c_16 = t;
        int d_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_3 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm k_3 (ATerm t)
            {
              ATerm s_23 = NULL,t_23 = NULL;
              s_23 = t;
              t = SSL_string_to_int(s_23);
              t_23 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), t_23);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, s_23);
              return(t);
            }
            ATerm m_3 (ATerm t)
            {
              t = term_f_16;
              return(t);
            }
            t = ArgOption_3_0(i_3, k_3, m_3, t);
            ;
            LocalPopChoice(d_16);
          }
        else
          {
            t = c_16;
            {
              ATerm n_3 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm p_3 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_k_16;
                return(t);
              }
              ATerm q_3 (ATerm t)
              {
                t = term_l_16;
                return(t);
              }
              t = Option_3_0(n_3, p_3, q_3, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm m_16 = t;
  int r_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(r_16);
    }
  else
    {
      t = m_16;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm r_3 (ATerm t)
  {
    ATerm v_23 = NULL;
    v_23 = t;
    if(match_string(t, "-o"))
      {
        t = v_23;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = v_23;
      }
    return(t);
  }
  ATerm s_3 (ATerm t)
  {
    ATerm w_23 = NULL;
    w_23 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), w_23);
    t = (ATerm) ATmakeAppl(sym_Output_1, w_23);
    return(t);
  }
  ATerm t_3 (ATerm t)
  {
    t = term_s_16;
    return(t);
  }
  t = ArgOption_3_0(r_3, s_3, t_3, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm t_16 = t;
  int w_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(w_16);
    }
  else
    {
      t = t_16;
      {
        ATerm u_3 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm v_3 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_a_17;
          return(t);
        }
        ATerm w_3 (ATerm t)
        {
          t = term_b_17;
          return(t);
        }
        t = Option_3_0(u_3, v_3, w_3, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm z_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL;
  z_23 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = z_23;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm h_24 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_24 = ATgetFirst((ATermList) t);
          b_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_24;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_24 = ATgetFirst((ATermList) t);
          d_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_24;
      t = h_0(t);
      t = c_24;
      t = i_0(t);
      h_24 = t;
      t = (ATerm) ATinsert(CheckATermList(d_24), h_24);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm x_3 (ATerm t)
  {
    ATerm j_24 = NULL;
    j_24 = t;
    if(match_string(t, "-i"))
      {
        t = j_24;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = j_24;
      }
    return(t);
  }
  ATerm y_3 (ATerm t)
  {
    ATerm k_24 = NULL;
    k_24 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), k_24);
    t = (ATerm) ATmakeAppl(sym_Input_1, k_24);
    return(t);
  }
  ATerm a_4 (ATerm t)
  {
    t = term_d_17;
    return(t);
  }
  t = ArgOption_3_0(x_3, y_3, a_4, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm e_17 = t;
  int f_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(f_17);
    }
  else
    {
      t = e_17;
      {
        ATerm h_17 = t;
        int i_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(i_17);
          }
        else
          {
            t = h_17;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm l_24 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_11;
  t = whoami_0_0(t);
  l_24 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), l_24));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_j_17;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm n_89 (ATerm), ATerm o_89 (ATerm), ATerm t)
{
  ATerm o_17 = t;
  int p_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = n_89(t);
      ;
      LocalPopChoice(p_17);
    }
  else
    {
      t = o_17;
      {
        ATerm o_24 = NULL,p_24 = NULL,s_24 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_24 = ATgetFirst((ATermList) t);
            p_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = p_24;
        t = foldr_2_0(n_89, o_89, t);
        s_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_24, s_24);
        t = o_89(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm l_87 (ATerm), ATerm m_87 (ATerm), ATerm t)
{
  ATerm t_24 = NULL,u_24 = NULL;
  t_24 = t;
  t = SSL_explode_term(t_24);
  if(match_cons(t, sym__2))
    {
      ATerm q_17 = ATgetArgument(t, 0);
      u_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_24;
  t = foldr_2_0(l_87, m_87, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm v_24 = NULL;
  t = times_0_0(t);
  {
    ATerm b_4 (ATerm t)
    {
      t = term_h_15;
      return(t);
    }
    ATerm c_4 (ATerm t)
    {
      ATerm w_24 = NULL,x_24 = NULL;
      if(match_cons(t, sym__2))
        {
          w_24 = ATgetArgument(t, 0);
          x_24 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm k_18 = t;
        int l_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(w_24, x_24);
            ;
            LocalPopChoice(l_18);
          }
        else
          {
            t = k_18;
            t = SSL_addr(w_24, x_24);
          }
      }
      return(t);
    }
    t = crush_2_0(b_4, c_4, t);
    v_24 = t;
    t = SSL_TicksToSeconds(v_24);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm g_25 = NULL,h_25 = NULL,i_25 = NULL;
  g_25 = t;
  if(match_cons(t, sym__2))
    {
      h_25 = ATgetArgument(t, 0);
      i_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_18 = t;
    int p_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_25;
        if((h_25 != t))
          {
            _fail(t);
          }
        t = g_25;
        ;
        LocalPopChoice(p_18);
      }
    else
      {
        t = m_18;
        t = g_25;
        {
          ATerm u_18 = t;
          int v_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(h_25, i_25);
              ;
              LocalPopChoice(v_18);
            }
          else
            {
              t = u_18;
              t = SSL_gtr(h_25, i_25);
            }
          t = (ATerm) ATmakeAppl(sym__2, h_25, i_25);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm o_105 (ATerm), ATerm t)
{
  ATerm d_4 (ATerm t)
  {
    ATerm l_25 = NULL,m_25 = NULL;
    l_25 = t;
    t = term_j_12;
    t = get_config_0_0(t);
    m_25 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_25, term_w_18);
    t = geq_0_0(t);
    t = l_25;
    t = o_105(t);
    return(t);
  }
  t = try_1_0(d_4, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm e_4 (ATerm t)
  {
    ATerm o_25 = NULL,p_25 = NULL;
    t = run_time_0_0(t);
    o_25 = t;
    t = term_o_11;
    t = whoami_0_0(t);
    p_25 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), o_25), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), p_25));
    t = (ATerm) ATmakeAppl(sym__2, term_x_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_18), o_25), term_y_18), p_25));
    return(t);
  }
  t = if_verbose1_1_0(e_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm c_97 (ATerm), ATerm t)
{
  ATerm a_19 = t;
  int p_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_19;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(p_19);
    }
  else
    {
      t = a_19;
      {
        ATerm f_4 (ATerm t)
        {
          ATerm r_19 = t;
          int u_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(u_19);
            }
          else
            {
              t = r_19;
              {
                ATerm v_19 = t;
                int y_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(y_19);
                  }
                else
                  {
                    t = v_19;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(f_4, t);
      }
    }
  t = c_97(t);
  return(t);
}
ATerm map_1_0 (ATerm o_84 (ATerm), ATerm t)
{
  ATerm r_25 (ATerm t)
  {
    ATerm z_19 = t;
    int a_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(a_20);
      }
    else
      {
        t = z_19;
        t = Cons_2_0(o_84, r_25, t);
      }
    return(t);
  }
  t = r_25(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm t_25 = NULL,u_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_25 = ATgetFirst((ATermList) t);
      u_25 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_25 = NULL,z_25 = NULL;
        t = u_25;
        t = g_0(t);
        y_25 = t;
        t = t_25;
        t = f_0(t);
        z_25 = t;
        t = u_25;
        {
          ATerm g_4 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(y_25), z_25);
            return(t);
          }
          t = reverse_acc_2_0(f_0, g_4, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_o_11;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm h_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, h_4, t);
  return(t);
}
ATerm Program_1_0 (ATerm b_76 (ATerm), ATerm t)
{
  ATerm a_26 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL;
  d_26 = t;
  if(match_cons(t, sym_Program_1))
    {
      b_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_26);
  a_26 = t;
  t = b_26;
  t = b_76(t);
  c_26 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, c_26), a_26);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm j_20 = t;
  int k_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_17;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(k_20);
    }
  else
    {
      t = j_20;
      {
        ATerm i_4 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(i_4, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_l_20;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm j_4 (ATerm t)
    {
      ATerm h_26 = NULL;
      h_26 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, h_26), term_m_20);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(j_4, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm c_76 (ATerm), ATerm t)
{
  ATerm i_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL;
  l_26 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      j_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_26);
  i_26 = t;
  t = j_26;
  t = c_76(t);
  k_26 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, k_26), i_26);
  return(t);
}
ATerm fetch_1_0 (ATerm y_84 (ATerm), ATerm t)
{
  ATerm p_26 (ATerm t)
  {
    ATerm n_20 = t;
    int p_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(y_84, _id, t);
        ;
        LocalPopChoice(p_20);
      }
    else
      {
        t = n_20;
        t = Cons_2_0(_id, p_26, t);
      }
    return(t);
  }
  t = p_26(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm v_100 (ATerm), ATerm t)
{
  t = fetch_1_0(v_100, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm r_26 = NULL,s_26 = NULL;
  r_26 = t;
  {
    ATerm q_20 = t;
    int r_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = r_26;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm v_20 = ATgetFirst((ATermList) t);
                ATerm w_20 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = r_26;
          }
        ;
        LocalPopChoice(r_20);
      }
    else
      {
        t = q_20;
        t = (ATerm) ATinsert(ATempty, r_26);
      }
    s_26 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), s_26);
    t = r_26;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_j_17;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm try_1_0 (ATerm f_81 (ATerm), ATerm t)
{
  ATerm x_20 = t;
  int a_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_81(t);
      ;
      LocalPopChoice(a_21);
    }
  else
    {
      t = x_20;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm b_21 = t;
  int x_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_4 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm l_4 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_a_22;
        return(t);
      }
      ATerm n_4 (ATerm t)
      {
        t = term_b_22;
        return(t);
      }
      t = Option_3_0(k_4, l_4, n_4, t);
      ;
      LocalPopChoice(x_21);
    }
  else
    {
      t = b_21;
      {
        ATerm o_4 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm p_4 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_c_22;
          return(t);
        }
        ATerm q_4 (ATerm t)
        {
          t = term_d_22;
          return(t);
        }
        t = Option_3_0(o_4, p_4, q_4, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm y_26 = NULL,z_26 = NULL,a_27 = NULL,b_27 = NULL;
  if(match_cons(t, sym__3))
    {
      y_26 = ATgetArgument(t, 0);
      z_26 = ATgetArgument(t, 1);
      a_27 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_26, z_26);
  {
    ATerm f_22 = t;
    int g_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_22 = ATgetArgument(t, 0);
            ATerm q_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(y_26, z_26);
        ;
        LocalPopChoice(g_22);
      }
    else
      {
        t = f_22;
        t = (ATerm) ATempty;
      }
    b_27 = t;
    t = SSL_table_put(y_26, z_26, (ATerm) ATinsert(CheckATermList(b_27), a_27));
    t = (ATerm) ATmakeAppl(sym__3, y_26, z_26, a_27);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm a_102 (ATerm), ATerm t)
{
  ATerm o_27 = NULL;
  t = term_o_11;
  t = a_102(t);
  o_27 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_s_22, term_t_22, o_27);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm s_27 = NULL,t_27 = NULL,v_27 = NULL;
  s_27 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = s_27;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm z_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_27 = ATgetFirst((ATermList) t);
          v_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_27;
      t = a_0(t);
      t = term_o_11;
      t = b_0(t);
      z_27 = t;
      t = (ATerm) ATinsert(CheckATermList(v_27), z_27);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm r_4 (ATerm t)
  {
    ATerm c_28 = NULL;
    c_28 = t;
    if(match_string(t, "--help"))
      {
        t = c_28;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = c_28;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = c_28;
          }
      }
    return(t);
  }
  ATerm s_4 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_g_23;
    return(t);
  }
  ATerm t_4 (ATerm t)
  {
    t = term_m_23;
    return(t);
  }
  t = Option_3_0(r_4, s_4, t_4, t);
  return(t);
}
ATerm Cons_2_0 (ATerm x_63 (ATerm), ATerm y_63 (ATerm), ATerm t)
{
  ATerm d_28 = NULL,e_28 = NULL,g_28 = NULL,h_28 = NULL,i_28 = NULL,k_28 = NULL;
  k_28 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_28 = ATgetFirst((ATermList) t);
      g_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_28);
  d_28 = t;
  t = e_28;
  t = x_63(t);
  h_28 = t;
  t = g_28;
  t = y_63(t);
  i_28 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(i_28), h_28), d_28);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm y_101 (ATerm), ATerm t)
{
  ATerm s_28 = NULL;
  s_28 = t;
  {
    ATerm u_4 (ATerm t)
    {
      t = term_q_23;
      t = y_101(t);
      return(t);
    }
    t = try_1_0(u_4, t);
    t = s_28;
    {
      ATerm v_4 (ATerm t)
      {
        ATerm t_28 = NULL;
        t_28 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), t_28);
        t = (ATerm) ATmakeAppl(sym_Program_1, t_28);
        return(t);
      }
      ATerm x_4 (ATerm t)
      {
        ATerm u_23 = t;
        int x_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_23 = t;
            int e_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(e_24);
              }
            else
              {
                t = y_23;
                t = y_101(t);
                t = Cons_2_0(_id, x_4, t);
              }
            ;
            LocalPopChoice(x_23);
          }
        else
          {
            t = u_23;
            {
              ATerm v_28 = NULL,w_28 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  v_28 = ATgetFirst((ATermList) t);
                  w_28 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(w_28), (ATerm) ATmakeAppl(sym_Undefined_1, v_28));
            }
          }
        return(t);
      }
      t = Cons_2_0(v_4, x_4, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm x_101 (ATerm), ATerm t)
{
  ATerm c_29 = NULL,d_29 = NULL,e_29 = NULL;
  c_29 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = c_29;
  {
    ATerm z_4 (ATerm t)
    {
      ATerm f_24 = t;
      int g_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_101(t);
          ;
          LocalPopChoice(g_24);
        }
      else
        {
          t = f_24;
          {
            ATerm i_24 = t;
            int m_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(m_24);
              }
            else
              {
                t = i_24;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(z_4, t);
    {
      ATerm a_5 (ATerm t)
      {
        ATerm n_24 = t;
        int q_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_29 = NULL;
            j_29 = t;
            {
              ATerm r_24 = t;
              int y_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_29;
                  {
                    ATerm z_24 = t;
                    int a_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_q_19;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(a_25);
                      }
                    else
                      {
                        t = z_24;
                        {
                          ATerm b_5 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(b_5, t);
                        }
                      }
                    t = j_29;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(y_24);
                }
              else
                {
                  t = r_24;
                  t = term_z_21;
                  t = get_config_0_0(t);
                  t = j_29;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(q_24);
          }
        else
          {
            t = n_24;
            {
              ATerm c_5 (ATerm t)
              {
                ATerm d_5 (ATerm t)
                {
                  d_29 = t;
                  return(t);
                }
                t = Undefined_1_0(d_5, t);
                return(t);
              }
              t = option_defined_1_0(c_5, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(d_29)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_x_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_29)), term_b_25));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(a_5, t);
      e_29 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = e_29;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm e_97 (ATerm), ATerm f_97 (ATerm), ATerm g_97 (ATerm), ATerm h_97 (ATerm), ATerm t)
{
  ATerm z_3 = NULL;
  t = parse_options_1_0(e_97, t);
  z_3 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), z_3);
  t = z_3;
  t = g_97(t);
  {
    ATerm c_25 = t;
    int d_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(f_97, t);
        ;
        LocalPopChoice(d_25);
      }
    else
      {
        t = c_25;
        {
          ATerm e_25 = t;
          int f_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_97(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(f_25);
            }
          else
            {
              t = e_25;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm t_96 (ATerm), ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm w_96 (ATerm), ATerm t)
{
  ATerm e_5 (ATerm t)
  {
    ATerm j_25 = t;
    int k_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_96(t);
        ;
        LocalPopChoice(k_25);
      }
    else
      {
        t = j_25;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm f_5 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(t_96, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(e_5, v_96, w_96, f_5, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm n_96 (ATerm), ATerm o_96 (ATerm), ATerm p_96 (ATerm), ATerm t)
{
  ATerm g_5 (ATerm t)
  {
    ATerm h_5 (ATerm t)
    {
      ATerm m_29 = NULL,n_29 = NULL;
      m_29 = t;
      t = term_j_17;
      t = get_config_0_0(t);
      n_29 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, n_29));
      t = m_29;
      return(t);
    }
    t = if_verbose2_1_0(h_5, t);
    return(t);
  }
  t = iowrap_4_0(n_96, o_96, p_96, g_5, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm l_96 (ATerm), ATerm m_96 (ATerm), ATerm t)
{
  t = iowrap_3_0(l_96, m_96, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm i_96 (ATerm), ATerm t)
{
  ATerm i_5 (ATerm t)
  {
    t = _2_0(_id, i_96, t);
    return(t);
  }
  t = iowrap_2_0(i_5, _fail, t);
  return(t);
}
ATerm rename_vars_0_0 (ATerm t)
{
  t = iowrap_1_0(strename_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = rename_vars_0_0(t);
  return(t);
}
