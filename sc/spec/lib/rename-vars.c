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
ATerm term_z_25;
ATerm term_r_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_d_21;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_e_19;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_f_18;
ATerm term_c_18;
ATerm term_z_17;
ATerm term_u_17;
ATerm term_r_17;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_p_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_g_16;
ATerm term_c_16;
ATerm term_b_14;
ATerm term_w_13;
ATerm term_t_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_w_11;
void init_constant_terms (void)
{
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_Verbose_1, term_p_16);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(sym__3, term_q_23, term_r_23, term_w_11);
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm spaste_1_0 (ATerm y_77 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm n_69 (ATerm), ATerm o_69 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm f_71 (ATerm), ATerm g_71 (ATerm), ATerm h_71 (ATerm), ATerm);
ATerm Let_2_0 (ATerm q_68 (ATerm), ATerm r_68 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm z_77 (ATerm), ATerm a_78 (ATerm), ATerm b_78 (ATerm), ATerm);
ATerm Bind7_0_0 (ATerm);
ATerm Bind5_0_0 (ATerm);
ATerm Bind2_0_0 (ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm SVar_1_0 (ATerm p_68 (ATerm), ATerm);
ATerm srename_0_0 (ATerm);
ATerm tpaste_1_0 (ATerm u_77 (ATerm), ATerm);
ATerm DynamicRules_1_0 (ATerm x_67 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm o_67 (ATerm), ATerm p_67 (ATerm), ATerm q_67 (ATerm), ATerm r_67 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm i_71 (ATerm), ATerm j_71 (ATerm), ATerm k_71 (ATerm), ATerm l_71 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm a_69 (ATerm), ATerm b_69 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm v_77 (ATerm), ATerm w_77 (ATerm), ATerm x_77 (ATerm), ATerm);
ATerm Bind8_0_0 (ATerm);
ATerm declared_vars_0_0 (ATerm);
ATerm Bind6_0_0 (ATerm);
ATerm Bind4_0_0 (ATerm);
ATerm union_1_0 (ATerm i_87 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm foldr_3_0 (ATerm x_89 (ATerm), ATerm y_89 (ATerm), ATerm z_89 (ATerm), ATerm);
ATerm crush_3_0 (ATerm v_87 (ATerm), ATerm w_87 (ATerm), ATerm x_87 (ATerm), ATerm);
ATerm HdMember_p__2_0 (ATerm m_87 (ATerm), ATerm n_87 (ATerm), ATerm);
ATerm diff_1_0 (ATerm e_87 (ATerm), ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm while_not_2_0 (ATerm f_96 (ATerm), ATerm g_96 (ATerm), ATerm);
ATerm for_3_0 (ATerm i_96 (ATerm), ATerm j_96 (ATerm), ATerm k_96 (ATerm), ATerm);
ATerm diff_0_0 (ATerm);
ATerm free_vars_3_0 (ATerm z_93 (ATerm), ATerm a_94 (ATerm), ATerm b_94 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm tvars_0_0 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm Var_1_0 (ATerm g_65 (ATerm), ATerm);
ATerm DistBinding_2_0 (ATerm h_92 (ATerm), ATerm i_92 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm genzip_4_0 (ATerm g_83 (ATerm), ATerm h_83 (ATerm), ATerm i_83 (ATerm), ATerm j_83 (ATerm), ATerm);
ATerm zip_1_0 (ATerm l_83 (ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm RnBinding_2_0 (ATerm b_92 (ATerm), ATerm c_92 (ATerm (ATerm), ATerm), ATerm);
ATerm lookup_0_0 (ATerm);
ATerm RnVar_1_0 (ATerm m_92 (ATerm (ATerm), ATerm), ATerm);
ATerm all_dist_1_0 (ATerm f_93 (ATerm), ATerm);
ATerm env_alltd_1_0 (ATerm p_92 (ATerm), ATerm);
ATerm rename_4_0 (ATerm w_91 (ATerm (ATerm), ATerm), ATerm x_91 (ATerm), ATerm y_91 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm z_91 (ATerm (ATerm), ATerm), ATerm);
ATerm trename_0_0 (ATerm);
ATerm strename_0_0 (ATerm);
ATerm _2_0 (ATerm v_62 (ATerm), ATerm w_62 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm m_85 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm a_106 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm z_99 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm m_96 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm l_99 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm g_82 (ATerm), ATerm h_82 (ATerm), ATerm);
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
ATerm foldr_2_0 (ATerm v_89 (ATerm), ATerm w_89 (ATerm), ATerm);
ATerm crush_2_0 (ATerm t_87 (ATerm), ATerm u_87 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm z_105 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm k_97 (ATerm), ATerm);
ATerm map_1_0 (ATerm v_84 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm i_76 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm j_76 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm g_85 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm d_101 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm try_1_0 (ATerm m_81 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm i_102 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm e_64 (ATerm), ATerm f_64 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm g_102 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm f_102 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm m_97 (ATerm), ATerm n_97 (ATerm), ATerm o_97 (ATerm), ATerm p_97 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm b_97 (ATerm), ATerm c_97 (ATerm), ATerm d_97 (ATerm), ATerm e_97 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm v_96 (ATerm), ATerm w_96 (ATerm), ATerm x_96 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm t_96 (ATerm), ATerm u_96 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm q_96 (ATerm), ATerm);
ATerm rename_vars_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm spaste_1_0 (ATerm y_77 (ATerm), ATerm t)
{
  ATerm f_6 = t;
  int g_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_0 (ATerm t)
      {
        t = split_2_0(_id, y_77, t);
        {
          ATerm f_0 (ATerm t)
          {
            ATerm s_0 = NULL,w_0 = NULL,x_0 = NULL,y_0 = NULL,a_1 = NULL;
            if(match_cons(t, sym__2))
              {
                s_0 = ATgetArgument(t, 0);
                a_1 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = s_0;
            {
              ATerm h_6 = t;
              int i_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDef_3))
                    {
                      ATerm j_6 = ATgetArgument(t, 0);
                      w_0 = ATgetArgument(t, 1);
                      x_0 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(i_6);
                  t = (ATerm) ATmakeAppl(sym_SDef_3, a_1, w_0, x_0);
                }
              else
                {
                  t = h_6;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm k_6 = ATgetArgument(t, 0);
                      w_0 = ATgetArgument(t, 1);
                      x_0 = ATgetArgument(t, 2);
                      y_0 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_SDefT_4, a_1, w_0, x_0, y_0);
                }
            }
            return(t);
          }
          t = zip_1_0(f_0, t);
        }
        return(t);
      }
      t = Let_2_0(b_0, _id, t);
      ;
      LocalPopChoice(g_6);
    }
  else
    {
      t = f_6;
      {
        ATerm l_6 = t;
        int m_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_0 (ATerm t)
            {
              t = split_2_0(_id, y_77, t);
              {
                ATerm l_0 (ATerm t)
                {
                  ATerm d_2 = NULL,f_2 = NULL,h_2 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      d_2 = ATgetArgument(t, 0);
                      h_2 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = d_2;
                  {
                    ATerm n_6 = t;
                    int o_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_DefaultVarDec_1))
                          {
                            ATerm q_6 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(o_6);
                        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, h_2);
                      }
                    else
                      {
                        t = n_6;
                        if(match_cons(t, sym_VarDec_2))
                          {
                            ATerm r_6 = ATgetArgument(t, 0);
                            f_2 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_VarDec_2, h_2, f_2);
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
            LocalPopChoice(m_6);
          }
        else
          {
            t = l_6;
            {
              ATerm s_6 = t;
              int t_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_0 (ATerm t)
                  {
                    t = split_2_0(_id, y_77, t);
                    {
                      ATerm n_0 (ATerm t)
                      {
                        ATerm n_2 = NULL,p_2 = NULL,q_2 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            n_2 = ATgetArgument(t, 0);
                            q_2 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = n_2;
                        {
                          ATerm u_6 = t;
                          int v_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_DefaultVarDec_1))
                                {
                                  ATerm w_6 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(v_6);
                              t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, q_2);
                            }
                          else
                            {
                              t = u_6;
                              if(match_cons(t, sym_VarDec_2))
                                {
                                  ATerm x_6 = ATgetArgument(t, 0);
                                  p_2 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_VarDec_2, q_2, p_2);
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
                  LocalPopChoice(t_6);
                }
              else
                {
                  t = s_6;
                  {
                    ATerm y_6 = t;
                    int z_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm o_0 (ATerm t)
                        {
                          t = split_2_0(_id, y_77, t);
                          {
                            ATerm p_0 (ATerm t)
                            {
                              ATerm y_2 = NULL,a_3 = NULL,c_3 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  y_2 = ATgetArgument(t, 0);
                                  c_3 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = y_2;
                              {
                                ATerm a_7 = t;
                                int b_7 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        ATerm c_7 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(b_7);
                                    t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, c_3);
                                  }
                                else
                                  {
                                    t = a_7;
                                    if(match_cons(t, sym_VarDec_2))
                                      {
                                        ATerm d_7 = ATgetArgument(t, 0);
                                        a_3 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, c_3, a_3);
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
                        LocalPopChoice(z_6);
                      }
                    else
                      {
                        t = y_6;
                        {
                          ATerm q_0 (ATerm t)
                          {
                            ATerm h_3 = NULL;
                            t = y_77(t);
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                h_3 = ATgetFirst((ATermList) t);
                                {
                                  ATerm e_7 = (ATerm) ATgetNext((ATermList) t);
                                }
                              }
                            else
                              _fail(t);
                            t = h_3;
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
ATerm Rec_2_0 (ATerm n_69 (ATerm), ATerm o_69 (ATerm), ATerm t)
{
  ATerm i_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL,o_3 = NULL,p_3 = NULL;
  p_3 = t;
  if(match_cons(t, sym_Rec_2))
    {
      j_3 = ATgetArgument(t, 0);
      k_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_3);
  i_3 = t;
  t = j_3;
  t = n_69(t);
  l_3 = t;
  t = k_3;
  t = o_69(t);
  o_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, l_3, o_3), i_3);
  return(t);
}
ATerm SDef_3_0 (ATerm f_71 (ATerm), ATerm g_71 (ATerm), ATerm h_71 (ATerm), ATerm t)
{
  ATerm c_4 = NULL,e_4 = NULL,m_4 = NULL,o_4 = NULL,t_4 = NULL,w_4 = NULL,y_4 = NULL,f_5 = NULL;
  f_5 = t;
  if(match_cons(t, sym_SDef_3))
    {
      e_4 = ATgetArgument(t, 0);
      m_4 = ATgetArgument(t, 1);
      o_4 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_5);
  c_4 = t;
  t = e_4;
  t = f_71(t);
  t_4 = t;
  t = m_4;
  t = g_71(t);
  w_4 = t;
  t = o_4;
  t = h_71(t);
  y_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, t_4, w_4, y_4), c_4);
  return(t);
}
ATerm Let_2_0 (ATerm q_68 (ATerm), ATerm r_68 (ATerm), ATerm t)
{
  ATerm o_5 = NULL,w_5 = NULL,y_5 = NULL,b_6 = NULL,p_6 = NULL,n_7 = NULL;
  n_7 = t;
  if(match_cons(t, sym_Let_2))
    {
      w_5 = ATgetArgument(t, 0);
      y_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_7);
  o_5 = t;
  t = w_5;
  t = q_68(t);
  b_6 = t;
  t = y_5;
  t = r_68(t);
  p_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, b_6, p_6), o_5);
  return(t);
}
ATerm sboundin_3_0 (ATerm z_77 (ATerm), ATerm a_78 (ATerm), ATerm b_78 (ATerm), ATerm t)
{
  ATerm f_7 = t;
  int g_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(z_77, z_77, t);
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
            t = SDef_3_0(b_78, b_78, z_77, t);
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
                  t = SDefT_4_0(b_78, b_78, b_78, z_77, t);
                  ;
                  LocalPopChoice(k_7);
                }
              else
                {
                  t = j_7;
                  t = Rec_2_0(b_78, z_77, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm q_7 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      ATerm l_7 = ATgetArgument(t, 0);
      q_7 = ATgetArgument(t, 1);
      {
        ATerm m_7 = ATgetArgument(t, 2);
      }
      {
        ATerm o_7 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = q_7;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind5_0_0 (ATerm t)
{
  ATerm s_7 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm p_7 = ATgetArgument(t, 0);
      s_7 = ATgetArgument(t, 1);
      {
        ATerm r_7 = ATgetArgument(t, 2);
      }
      {
        ATerm t_7 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = s_7;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind2_0_0 (ATerm t)
{
  ATerm d_8 = NULL;
  if(match_cons(t, sym_SDef_3))
    {
      ATerm u_7 = ATgetArgument(t, 0);
      d_8 = ATgetArgument(t, 1);
      {
        ATerm v_7 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = d_8;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm j_8 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      j_8 = ATgetArgument(t, 0);
      {
        ATerm w_7 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = j_8;
  {
    ATerm r_0 (ATerm t)
    {
      ATerm l_8 = NULL;
      ATerm x_7 = t;
      int y_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_SDef_3))
            {
              l_8 = ATgetArgument(t, 0);
              {
                ATerm z_7 = ATgetArgument(t, 1);
              }
              {
                ATerm a_8 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          LocalPopChoice(y_7);
          t = l_8;
        }
      else
        {
          t = x_7;
          if(match_cons(t, sym_SDefT_4))
            {
              l_8 = ATgetArgument(t, 0);
              {
                ATerm b_8 = ATgetArgument(t, 1);
              }
              {
                ATerm c_8 = ATgetArgument(t, 2);
              }
              {
                ATerm e_8 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          t = l_8;
        }
      return(t);
    }
    t = map_1_0(r_0, t);
  }
  return(t);
}
ATerm SVar_1_0 (ATerm p_68 (ATerm), ATerm t)
{
  ATerm c_9 = NULL,f_9 = NULL,k_9 = NULL,o_9 = NULL;
  o_9 = t;
  if(match_cons(t, sym_SVar_1))
    {
      f_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_9);
  c_9 = t;
  t = f_9;
  t = p_68(t);
  k_9 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, k_9), c_9);
  return(t);
}
ATerm srename_0_0 (ATerm t)
{
  ATerm t_0 (ATerm t)
  {
    ATerm f_8 = t;
    int g_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0_0(t);
        ;
        LocalPopChoice(g_8);
      }
    else
      {
        t = f_8;
        {
          ATerm h_8 = t;
          int i_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0_0(t);
              ;
              LocalPopChoice(i_8);
            }
          else
            {
              t = h_8;
              {
                ATerm k_8 = t;
                int m_8 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm i_10 = NULL;
                    if(match_cons(t, sym_Rec_2))
                      {
                        i_10 = ATgetArgument(t, 0);
                        {
                          ATerm n_8 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATempty, i_10);
                    ;
                    LocalPopChoice(m_8);
                  }
                else
                  {
                    t = k_8;
                    {
                      ATerm o_8 = t;
                      int p_8 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Bind5_0_0(t);
                          ;
                          LocalPopChoice(p_8);
                        }
                      else
                        {
                          t = o_8;
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
  t = rename_4_0(SVar_1_0, t_0, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm tpaste_1_0 (ATerm u_77 (ATerm), ATerm t)
{
  ATerm q_8 = t;
  int r_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(u_77, _id, t);
      ;
      LocalPopChoice(r_8);
    }
  else
    {
      t = q_8;
      {
        ATerm s_8 = t;
        int t_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_0 (ATerm t)
            {
              t = split_2_0(_id, u_77, t);
              {
                ATerm v_0 (ATerm t)
                {
                  ATerm b_11 = NULL,m_11 = NULL,n_11 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      b_11 = ATgetArgument(t, 0);
                      n_11 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = b_11;
                  {
                    ATerm u_8 = t;
                    int v_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_DefaultVarDec_1))
                          {
                            ATerm w_8 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(v_8);
                        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, n_11);
                      }
                    else
                      {
                        t = u_8;
                        if(match_cons(t, sym_VarDec_2))
                          {
                            ATerm x_8 = ATgetArgument(t, 0);
                            m_11 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_VarDec_2, n_11, m_11);
                      }
                  }
                  return(t);
                }
                t = zip_1_0(v_0, t);
              }
              return(t);
            }
            t = SDefT_4_0(_id, _id, u_0, _id, t);
            ;
            LocalPopChoice(t_8);
          }
        else
          {
            t = s_8;
            {
              ATerm z_0 (ATerm t)
              {
                t = split_2_0(_id, u_77, t);
                {
                  ATerm b_1 (ATerm t)
                  {
                    ATerm x_11 = NULL,z_11 = NULL,a_12 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        x_11 = ATgetArgument(t, 0);
                        a_12 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = x_11;
                    {
                      ATerm y_8 = t;
                      int z_8 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_DefaultVarDec_1))
                            {
                              ATerm a_9 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(z_8);
                          t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, a_12);
                        }
                      else
                        {
                          t = y_8;
                          if(match_cons(t, sym_VarDec_2))
                            {
                              ATerm b_9 = ATgetArgument(t, 0);
                              z_11 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, a_12, z_11);
                        }
                    }
                    return(t);
                  }
                  t = zip_1_0(b_1, t);
                }
                return(t);
              }
              t = RDefT_4_0(_id, _id, z_0, _id, t);
            }
          }
      }
    }
  return(t);
}
ATerm DynamicRules_1_0 (ATerm x_67 (ATerm), ATerm t)
{
  ATerm h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL;
  k_12 = t;
  if(match_cons(t, sym_DynamicRules_1))
    {
      i_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_12);
  h_12 = t;
  t = i_12;
  t = x_67(t);
  j_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, j_12), h_12);
  return(t);
}
ATerm RDefT_4_0 (ATerm o_67 (ATerm), ATerm p_67 (ATerm), ATerm q_67 (ATerm), ATerm r_67 (ATerm), ATerm t)
{
  ATerm n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL;
  w_12 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      o_12 = ATgetArgument(t, 0);
      p_12 = ATgetArgument(t, 1);
      q_12 = ATgetArgument(t, 2);
      r_12 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_12);
  n_12 = t;
  t = o_12;
  t = o_67(t);
  s_12 = t;
  t = p_12;
  t = p_67(t);
  t_12 = t;
  t = q_12;
  t = q_67(t);
  u_12 = t;
  t = r_12;
  t = r_67(t);
  v_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDefT_4, s_12, t_12, u_12, v_12), n_12);
  return(t);
}
ATerm SDefT_4_0 (ATerm i_71 (ATerm), ATerm j_71 (ATerm), ATerm k_71 (ATerm), ATerm l_71 (ATerm), ATerm t)
{
  ATerm z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL;
  i_13 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      a_13 = ATgetArgument(t, 0);
      b_13 = ATgetArgument(t, 1);
      c_13 = ATgetArgument(t, 2);
      d_13 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_13);
  z_12 = t;
  t = a_13;
  t = i_71(t);
  e_13 = t;
  t = b_13;
  t = j_71(t);
  f_13 = t;
  t = c_13;
  t = k_71(t);
  g_13 = t;
  t = d_13;
  t = l_71(t);
  h_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, e_13, f_13, g_13, h_13), z_12);
  return(t);
}
ATerm Scope_2_0 (ATerm a_69 (ATerm), ATerm b_69 (ATerm), ATerm t)
{
  ATerm n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL;
  s_13 = t;
  if(match_cons(t, sym_Scope_2))
    {
      o_13 = ATgetArgument(t, 0);
      p_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_13);
  n_13 = t;
  t = o_13;
  t = a_69(t);
  q_13 = t;
  t = p_13;
  t = b_69(t);
  r_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, q_13, r_13), n_13);
  return(t);
}
ATerm tboundin_3_0 (ATerm v_77 (ATerm), ATerm w_77 (ATerm), ATerm x_77 (ATerm), ATerm t)
{
  ATerm d_9 = t;
  int e_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(x_77, v_77, t);
      ;
      LocalPopChoice(e_9);
    }
  else
    {
      t = d_9;
      {
        ATerm g_9 = t;
        int h_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(x_77, x_77, x_77, v_77, t);
            ;
            LocalPopChoice(h_9);
          }
        else
          {
            t = g_9;
            {
              ATerm i_9 = t;
              int j_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(x_77, x_77, x_77, v_77, t);
                  ;
                  LocalPopChoice(j_9);
                }
              else
                {
                  t = i_9;
                  t = DynamicRules_1_0(v_77, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm v_13 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      ATerm l_9 = ATgetArgument(t, 0);
      ATerm m_9 = ATgetArgument(t, 1);
      v_13 = ATgetArgument(t, 2);
      {
        ATerm n_9 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = v_13;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm declared_vars_0_0 (ATerm t)
{
  ATerm c_1 (ATerm t)
  {
    ATerm z_13 = NULL;
    ATerm p_9 = t;
    int q_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_VarDec_2))
          {
            z_13 = ATgetArgument(t, 0);
            {
              ATerm r_9 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(q_9);
        t = z_13;
      }
    else
      {
        t = p_9;
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            z_13 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = z_13;
      }
    return(t);
  }
  t = map_1_0(c_1, t);
  return(t);
}
ATerm Bind6_0_0 (ATerm t)
{
  ATerm c_14 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm s_9 = ATgetArgument(t, 0);
      ATerm t_9 = ATgetArgument(t, 1);
      c_14 = ATgetArgument(t, 2);
      {
        ATerm u_9 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = c_14;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm d_14 = NULL;
  if(match_cons(t, sym_DynamicRules_1))
    {
      d_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_14;
  t = tvars_0_0(t);
  return(t);
}
ATerm union_1_0 (ATerm i_87 (ATerm), ATerm t)
{
  ATerm e_14 = NULL,f_14 = NULL;
  if(match_cons(t, sym__2))
    {
      f_14 = ATgetArgument(t, 0);
      e_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_14;
  {
    ATerm g_14 (ATerm t)
    {
      ATerm v_9 = t;
      int w_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = e_14;
          ;
          LocalPopChoice(w_9);
        }
      else
        {
          t = v_9;
          {
            ATerm x_9 = t;
            int y_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_1 (ATerm t)
                {
                  t = e_14;
                  return(t);
                }
                t = HdMember_p__2_0(i_87, f_1, t);
                t = g_14(t);
                ;
                LocalPopChoice(y_9);
              }
            else
              {
                t = x_9;
                t = Cons_2_0(_id, g_14, t);
              }
          }
        }
      return(t);
    }
    t = g_14(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  ATerm g_1 (ATerm t)
  {
    ATerm h_14 = NULL;
    if(match_cons(t, sym__2))
      {
        h_14 = ATgetArgument(t, 0);
        if((h_14 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = union_1_0(g_1, t);
  return(t);
}
ATerm foldr_3_0 (ATerm x_89 (ATerm), ATerm y_89 (ATerm), ATerm z_89 (ATerm), ATerm t)
{
  ATerm z_9 = t;
  int a_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = x_89(t);
      ;
      LocalPopChoice(a_10);
    }
  else
    {
      t = z_9;
      {
        ATerm k_14 = NULL,l_14 = NULL,o_14 = NULL,p_14 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_14 = ATgetFirst((ATermList) t);
            l_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = k_14;
        t = z_89(t);
        o_14 = t;
        t = l_14;
        t = foldr_3_0(x_89, y_89, z_89, t);
        p_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_14, p_14);
        t = y_89(t);
      }
    }
  return(t);
}
ATerm crush_3_0 (ATerm v_87 (ATerm), ATerm w_87 (ATerm), ATerm x_87 (ATerm), ATerm t)
{
  ATerm q_14 = NULL,r_14 = NULL;
  q_14 = t;
  t = SSL_explode_term(q_14);
  if(match_cons(t, sym__2))
    {
      ATerm b_10 = ATgetArgument(t, 0);
      r_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_14;
  t = foldr_3_0(v_87, w_87, x_87, t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm m_87 (ATerm), ATerm n_87 (ATerm), ATerm t)
{
  ATerm s_14 = NULL,t_14 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_14 = ATgetFirst((ATermList) t);
      t_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_87(t);
  {
    ATerm h_1 (ATerm t)
    {
      ATerm u_14 = NULL;
      u_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_14, u_14);
      t = m_87(t);
      return(t);
    }
    t = fetch_1_0(h_1, t);
    t = t_14;
  }
  return(t);
}
ATerm diff_1_0 (ATerm e_87 (ATerm), ATerm t)
{
  ATerm v_14 = NULL,w_14 = NULL;
  if(match_cons(t, sym__2))
    {
      w_14 = ATgetArgument(t, 0);
      v_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_14;
  {
    ATerm x_14 (ATerm t)
    {
      ATerm c_10 = t;
      int d_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(d_10);
        }
      else
        {
          t = c_10;
          {
            ATerm e_10 = t;
            int f_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_1 (ATerm t)
                {
                  t = v_14;
                  return(t);
                }
                t = HdMember_p__2_0(e_87, i_1, t);
                t = x_14(t);
                ;
                LocalPopChoice(f_10);
              }
            else
              {
                t = e_10;
                t = Cons_2_0(_id, x_14, t);
              }
          }
        }
      return(t);
    }
    t = x_14(t);
  }
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm y_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm g_10 = ATgetFirst((ATermList) t);
      if(match_cons(g_10, sym__2))
        {
          y_14 = ATgetArgument(g_10, 0);
          z_14 = ATgetArgument(g_10, 1);
        }
      else
        _fail(t);
      a_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(z_14);
  if(match_cons(t, sym__2))
    {
      b_15 = ATgetArgument(t, 0);
      c_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(y_14);
  if(match_cons(t, sym__2))
    {
      if((b_15 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      d_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_15, c_15);
  t = zip_1_0(_id, t);
  e_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_15, a_15);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm f_96 (ATerm), ATerm g_96 (ATerm), ATerm t)
{
  ATerm f_15 (ATerm t)
  {
    ATerm h_10 = t;
    int j_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_96(t);
        ;
        LocalPopChoice(j_10);
      }
    else
      {
        t = h_10;
        t = g_96(t);
        t = f_15(t);
      }
    return(t);
  }
  t = f_15(t);
  return(t);
}
ATerm for_3_0 (ATerm i_96 (ATerm), ATerm j_96 (ATerm), ATerm k_96 (ATerm), ATerm t)
{
  t = i_96(t);
  t = while_not_2_0(j_96, k_96, t);
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm k_10 = t;
  int l_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_1 (ATerm t)
      {
        ATerm k_15 = NULL;
        k_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, k_15);
        return(t);
      }
      ATerm k_1 (ATerm t)
      {
        ATerm m_1 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = _2_0(_id, m_1, t);
        return(t);
      }
      ATerm l_1 (ATerm t)
      {
        ATerm m_10 = t;
        int n_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_1 (ATerm t)
            {
              ATerm o_10 = t;
              int p_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      m_15 = ATgetFirst((ATermList) t);
                      p_15 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = m_15;
                  if(match_cons(t, sym__2))
                    {
                      n_15 = ATgetArgument(t, 0);
                      o_15 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = o_15;
                  if((n_15 != t))
                    {
                      _fail(t);
                    }
                  t = p_15;
                  ;
                  LocalPopChoice(p_10);
                }
              else
                {
                  t = o_10;
                  t = UfDecompose_0_0(t);
                }
              return(t);
            }
            t = _2_0(_id, n_1, t);
            ;
            LocalPopChoice(n_10);
          }
        else
          {
            t = m_10;
            {
              ATerm t_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL;
              if(match_cons(t, sym__2))
                {
                  t_15 = ATgetArgument(t, 0);
                  u_15 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = u_15;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  v_15 = ATgetFirst((ATermList) t);
                  w_15 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_15), v_15), w_15);
            }
          }
        return(t);
      }
      t = for_3_0(j_1, k_1, l_1, t);
      ;
      LocalPopChoice(l_10);
    }
  else
    {
      t = k_10;
      {
        ATerm o_1 (ATerm t)
        {
          ATerm a_16 = NULL;
          if(match_cons(t, sym__2))
            {
              a_16 = ATgetArgument(t, 0);
              if((a_16 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
            }
          else
            _fail(t);
          return(t);
        }
        t = diff_1_0(o_1, t);
      }
    }
  return(t);
}
ATerm free_vars_3_0 (ATerm z_93 (ATerm), ATerm a_94 (ATerm), ATerm b_94 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm e_16 (ATerm t)
  {
    ATerm q_10 = t;
    int r_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_93(t);
        ;
        LocalPopChoice(r_10);
      }
    else
      {
        t = q_10;
        {
          ATerm s_10 = t;
          int t_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_16 = NULL,d_16 = NULL;
              b_16 = t;
              t = a_94(t);
              d_16 = t;
              t = b_16;
              {
                ATerm p_1 (ATerm t)
                {
                  ATerm r_1 (ATerm t)
                  {
                    t = d_16;
                    return(t);
                  }
                  t = split_2_0(e_16, r_1, t);
                  t = diff_0_0(t);
                  return(t);
                }
                ATerm q_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = b_94(p_1, e_16, q_1, t);
                {
                  ATerm s_1 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3_0(s_1, union_0_0, _id, t);
                }
              }
              ;
              LocalPopChoice(t_10);
            }
          else
            {
              t = s_10;
              {
                ATerm t_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3_0(t_1, union_0_0, e_16, t);
              }
            }
        }
      }
    return(t);
  }
  t = e_16(t);
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  ATerm u_1 (ATerm t)
  {
    ATerm f_16 = NULL;
    if(match_cons(t, sym_Var_1))
      {
        f_16 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(ATempty, f_16);
    return(t);
  }
  ATerm v_1 (ATerm t)
  {
    ATerm u_10 = t;
    int v_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0_0(t);
        ;
        LocalPopChoice(v_10);
      }
    else
      {
        t = u_10;
        {
          ATerm w_10 = t;
          int x_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind4_0_0(t);
              ;
              LocalPopChoice(x_10);
            }
          else
            {
              t = w_10;
              {
                ATerm y_10 = t;
                int z_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind6_0_0(t);
                    ;
                    LocalPopChoice(z_10);
                  }
                else
                  {
                    t = y_10;
                    t = Bind8_0_0(t);
                  }
              }
            }
        }
      }
    return(t);
  }
  t = free_vars_3_0(u_1, v_1, tboundin_3_0, t);
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm i_16 = NULL,m_16 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      m_16 = ATgetArgument(t, 0);
      t = m_16;
      if(match_cons(t, sym_Rule_3))
        {
          i_16 = ATgetArgument(t, 0);
          {
            ATerm a_11 = ATgetArgument(t, 1);
          }
          {
            ATerm c_11 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = i_16;
      t = tvars_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          m_16 = ATgetArgument(t, 0);
          {
            ATerm d_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = m_16;
    }
  return(t);
}
ATerm Var_1_0 (ATerm g_65 (ATerm), ATerm t)
{
  ATerm q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL;
  t_16 = t;
  if(match_cons(t, sym_Var_1))
    {
      r_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_16);
  q_16 = t;
  t = r_16;
  t = g_65(t);
  s_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, s_16), q_16);
  return(t);
}
ATerm DistBinding_2_0 (ATerm h_92 (ATerm), ATerm i_92 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL;
  if(match_cons(t, sym__3))
    {
      y_16 = ATgetArgument(t, 0);
      x_16 = ATgetArgument(t, 1);
      w_16 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = y_16;
  {
    ATerm w_1 (ATerm t)
    {
      ATerm z_16 = NULL;
      z_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_16, w_16);
      t = h_92(t);
      return(t);
    }
    ATerm x_1 (ATerm t)
    {
      ATerm a_17 = NULL;
      a_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_17, x_16);
      t = h_92(t);
      return(t);
    }
    t = i_92(w_1, x_1, _id, t);
  }
  return(t);
}
ATerm genzip_4_0 (ATerm g_83 (ATerm), ATerm h_83 (ATerm), ATerm i_83 (ATerm), ATerm j_83 (ATerm), ATerm t)
{
  ATerm b_17 (ATerm t)
  {
    ATerm e_11 = t;
    int f_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_83(t);
        ;
        LocalPopChoice(f_11);
      }
    else
      {
        t = e_11;
        t = h_83(t);
        t = _2_0(j_83, b_17, t);
        t = i_83(t);
      }
    return(t);
  }
  t = b_17(t);
  return(t);
}
ATerm zip_1_0 (ATerm l_83 (ATerm), ATerm t)
{
  ATerm y_1 (ATerm t)
  {
    if(match_cons(t, sym__2))
      {
        ATerm g_11 = ATgetArgument(t, 0);
        if(((ATgetType(g_11) != AT_LIST) || !(ATisEmpty(g_11))))
          _fail(t);
        {
          ATerm h_11 = ATgetArgument(t, 1);
          if(((ATgetType(h_11) != AT_LIST) || !(ATisEmpty(h_11))))
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm z_1 (ATerm t)
  {
    ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm i_11 = ATgetArgument(t, 0);
        if(((ATgetType(i_11) == AT_LIST) && !(ATisEmpty(i_11))))
          {
            c_17 = ATgetFirst((ATermList) i_11);
            e_17 = (ATerm) ATgetNext((ATermList) i_11);
          }
        else
          _fail(t);
        {
          ATerm j_11 = ATgetArgument(t, 1);
          if(((ATgetType(j_11) == AT_LIST) && !(ATisEmpty(j_11))))
            {
              d_17 = ATgetFirst((ATermList) j_11);
              f_17 = (ATerm) ATgetNext((ATermList) j_11);
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_17, d_17), (ATerm) ATmakeAppl(sym__2, e_17, f_17));
    return(t);
  }
  ATerm a_2 (ATerm t)
  {
    ATerm g_17 = NULL,h_17 = NULL;
    if(match_cons(t, sym__2))
      {
        g_17 = ATgetArgument(t, 0);
        h_17 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(CheckATermList(h_17), g_17);
    return(t);
  }
  t = genzip_4_0(y_1, z_1, a_2, l_83, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm RnBinding_2_0 (ATerm b_92 (ATerm), ATerm c_92 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL;
  if(match_cons(t, sym__2))
    {
      i_17 = ATgetArgument(t, 0);
      j_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_17;
  t = b_92(t);
  k_17 = t;
  t = map_1_0(new_0_0, t);
  l_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_17, l_17);
  t = zip_1_0(_id, t);
  m_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_17, j_17);
  t = conc_0_0(t);
  n_17 = t;
  t = i_17;
  {
    ATerm b_2 (ATerm t)
    {
      t = l_17;
      return(t);
    }
    t = c_92(b_2, t);
    o_17 = t;
    t = (ATerm) ATmakeAppl(sym__3, o_17, j_17, n_17);
  }
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm s_17 = NULL,t_17 = NULL,v_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL;
  if(match_cons(t, sym__2))
    {
      v_17 = ATgetArgument(t, 0);
      w_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_17;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_17 = ATgetFirst((ATermList) t);
      y_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = x_17;
  if(match_cons(t, sym__2))
    {
      s_17 = ATgetArgument(t, 0);
      t_17 = ATgetArgument(t, 1);
      {
        ATerm k_11 = t;
        int l_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_17;
            if((v_17 != t))
              {
                _fail(t);
              }
            t = t_17;
            ;
            LocalPopChoice(l_11);
          }
        else
          {
            t = k_11;
            t = (ATerm) ATmakeAppl(sym__2, v_17, y_17);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, v_17, y_17);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm RnVar_1_0 (ATerm m_92 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm g_18 = NULL,h_18 = NULL;
  if(match_cons(t, sym__2))
    {
      h_18 = ATgetArgument(t, 0);
      g_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_18;
  {
    ATerm c_2 (ATerm t)
    {
      ATerm e_2 (ATerm t)
      {
        t = g_18;
        return(t);
      }
      t = split_2_0(_id, e_2, t);
      t = lookup_0_0(t);
      return(t);
    }
    t = m_92(c_2, t);
  }
  return(t);
}
ATerm all_dist_1_0 (ATerm f_93 (ATerm), ATerm t)
{
  ATerm i_18 = NULL,j_18 = NULL;
  if(match_cons(t, sym__2))
    {
      j_18 = ATgetArgument(t, 0);
      i_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_18;
  {
    ATerm g_2 (ATerm t)
    {
      ATerm k_18 = NULL;
      k_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_18, i_18);
      t = f_93(t);
      return(t);
    }
    t = SRTS_all(g_2, t);
  }
  return(t);
}
ATerm env_alltd_1_0 (ATerm p_92 (ATerm), ATerm t)
{
  ATerm l_18 (ATerm t)
  {
    ATerm o_11 = t;
    int p_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_92(t);
        ;
        LocalPopChoice(p_11);
      }
    else
      {
        t = o_11;
        t = all_dist_1_0(l_18, t);
      }
    return(t);
  }
  t = l_18(t);
  return(t);
}
ATerm rename_4_0 (ATerm w_91 (ATerm (ATerm), ATerm), ATerm x_91 (ATerm), ATerm y_91 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm z_91 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm m_18 = NULL;
  m_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_18, (ATerm) ATempty);
  {
    ATerm n_18 (ATerm t)
    {
      ATerm i_2 (ATerm t)
      {
        ATerm q_11 = t;
        int r_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = RnVar_1_0(w_91, t);
            ;
            LocalPopChoice(r_11);
          }
        else
          {
            t = q_11;
            t = RnBinding_2_0(x_91, z_91, t);
            t = DistBinding_2_0(n_18, y_91, t);
          }
        return(t);
      }
      t = env_alltd_1_0(i_2, t);
      return(t);
    }
    t = n_18(t);
  }
  return(t);
}
ATerm trename_0_0 (ATerm t)
{
  ATerm j_2 (ATerm t)
  {
    ATerm s_11 = t;
    int t_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0_0(t);
        ;
        LocalPopChoice(t_11);
      }
    else
      {
        t = s_11;
        {
          ATerm u_11 = t;
          int v_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind6_0_0(t);
              ;
              LocalPopChoice(v_11);
            }
          else
            {
              t = u_11;
              t = Bind8_0_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4_0(Var_1_0, j_2, tboundin_3_0, tpaste_1_0, t);
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = trename_0_0(t);
  t = srename_0_0(t);
  return(t);
}
ATerm _2_0 (ATerm v_62 (ATerm), ATerm w_62 (ATerm), ATerm t)
{
  ATerm o_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL;
  t_18 = t;
  if(match_cons(t, sym__2))
    {
      p_18 = ATgetArgument(t, 0);
      q_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_18);
  o_18 = t;
  t = p_18;
  t = v_62(t);
  r_18 = t;
  t = q_18;
  t = w_62(t);
  s_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, r_18, s_18), o_18);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm w_18 = NULL,x_18 = NULL;
  w_18 = t;
  t = term_w_11;
  t = whoami_0_0(t);
  x_18 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), x_18), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = w_18;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm y_11 = t;
  int b_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(b_12);
    }
  else
    {
      t = y_11;
      {
        ATerm a_19 = NULL,b_19 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_19 = ATgetFirst((ATermList) t);
            b_19 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = a_19;
        {
          ATerm k_2 (ATerm t)
          {
            t = b_19;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(k_2, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm f_19 = NULL,g_19 = NULL;
  f_19 = t;
  t = SSL_explode_term(f_19);
  if(match_cons(t, sym__2))
    {
      ATerm c_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      g_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_19;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm m_85 (ATerm), ATerm t)
{
  ATerm h_19 (ATerm t)
  {
    ATerm d_12 = t;
    int e_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, h_19, t);
        ;
        LocalPopChoice(e_12);
      }
    else
      {
        t = d_12;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = m_85(t);
      }
    return(t);
  }
  t = h_19(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm i_19 = NULL,j_19 = NULL;
  if(match_cons(t, sym__2))
    {
      j_19 = ATgetArgument(t, 0);
      i_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_19;
  {
    ATerm l_2 (ATerm t)
    {
      t = i_19;
      return(t);
    }
    t = at_end_1_0(l_2, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm f_12 = t;
  int g_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(g_12);
    }
  else
    {
      t = f_12;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm k_19 = NULL;
  ATerm m_2 (ATerm t)
  {
    ATerm l_19 = NULL;
    l_19 = t;
    t = SSL_explode_string(l_19);
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    ATerm m_19 = NULL;
    m_19 = t;
    t = SSL_explode_string(m_19);
    return(t);
  }
  t = _2_0(m_2, o_2, t);
  t = conc_0_0(t);
  k_19 = t;
  t = SSL_implode_string(k_19);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm l_12 = t;
  int m_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_19 = NULL;
      s_19 = t;
      t = SSL_is_string(s_19);
      ;
      LocalPopChoice(m_12);
    }
  else
    {
      t = l_12;
      {
        ATerm x_12 = t;
        int y_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_2 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(r_2, t);
            ;
            LocalPopChoice(y_12);
          }
        else
          {
            t = x_12;
            {
              ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL;
              w_19 = t;
              if(match_cons(t, sym_Path_1))
                {
                  x_19 = ATgetArgument(t, 0);
                  t = x_19;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      x_19 = ATgetArgument(t, 0);
                      t = x_19;
                      {
                        ATerm j_13 = t;
                        int k_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(k_13);
                          }
                        else
                          {
                            t = j_13;
                            {
                              ATerm s_2 (ATerm t)
                              {
                                t = term_l_13;
                                return(t);
                              }
                              t = debug_1_0(s_2, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm c_20 = NULL,d_20 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          x_19 = ATgetArgument(t, 0);
                          y_19 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = x_19;
                      t = eval_config_0_0(t);
                      c_20 = t;
                      t = y_19;
                      t = eval_config_0_0(t);
                      d_20 = t;
                      t = (ATerm) ATmakeAppl(sym__2, c_20, d_20);
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
  ATerm g_20 = NULL;
  g_20 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), g_20);
  {
    ATerm t_2 (ATerm t)
    {
      ATerm h_20 = NULL;
      t = eval_config_0_0(t);
      h_20 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), g_20, h_20);
      t = h_20;
      return(t);
    }
    t = try_1_0(t_2, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm a_106 (ATerm), ATerm t)
{
  ATerm u_2 (ATerm t)
  {
    ATerm i_20 = NULL,j_20 = NULL;
    i_20 = t;
    t = term_m_13;
    t = get_config_0_0(t);
    j_20 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_20, term_t_13);
    t = geq_0_0(t);
    t = i_20;
    t = a_106(t);
    return(t);
  }
  t = try_1_0(u_2, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm v_2 (ATerm t)
  {
    ATerm k_20 = NULL,l_20 = NULL,m_20 = NULL,n_20 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm u_13 = ATgetArgument(t, 0);
        if(match_cons(u_13, sym_Stream_1))
          {
            k_20 = ATgetArgument(u_13, 0);
          }
        else
          _fail(t);
        l_20 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(k_20, l_20);
    m_20 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), m_20);
    n_20 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, n_20);
    return(t);
  }
  t = WriteToFile_1_0(v_2, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm z_99 (ATerm), ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL;
  if(match_cons(t, sym__2))
    {
      o_20 = ATgetArgument(t, 0);
      p_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_20, term_w_13);
  t = open_stream_0_0(t);
  q_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_20, p_20);
  t = z_99(t);
  t = fclose_0_0(t);
  t = p_20;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm w_2 (ATerm t)
  {
    ATerm r_20 = NULL,s_20 = NULL,t_20 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm x_13 = ATgetArgument(t, 0);
        if(match_cons(x_13, sym_Stream_1))
          {
            r_20 = ATgetArgument(x_13, 0);
          }
        else
          _fail(t);
        s_20 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(r_20, s_20);
    t_20 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, t_20);
    return(t);
  }
  t = WriteToFile_1_0(w_2, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm u_20 = NULL,v_20 = NULL;
  u_20 = t;
  {
    ATerm x_2 (ATerm t)
    {
      ATerm y_13 = t;
      int a_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_2 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                v_20 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(z_2, t);
          ;
          LocalPopChoice(a_14);
        }
      else
        {
          t = y_13;
          t = term_b_14;
          v_20 = t;
        }
      return(t);
    }
    t = _2_0(x_2, _id, t);
    t = u_20;
    {
      ATerm b_3 (ATerm t)
      {
        ATerm d_3 (ATerm t)
        {
          t = not_null(v_20);
          return(t);
        }
        t = split_2_0(d_3, _id, t);
        return(t);
      }
      t = _2_0(_id, b_3, t);
      {
        ATerm i_14 = t;
        int j_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_3 (ATerm t)
            {
              ATerm f_3 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(f_3, t);
              return(t);
            }
            t = _2_0(e_3, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(j_14);
          }
        else
          {
            t = i_14;
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
ATerm apply_strategy_1_0 (ATerm m_96 (ATerm), ATerm t)
{
  ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL;
  w_20 = t;
  t = dtime_0_0(t);
  t = w_20;
  t = m_96(t);
  x_20 = t;
  t = dtime_0_0(t);
  y_20 = t;
  t = x_20;
  if(match_cons(t, sym__2))
    {
      z_20 = ATgetArgument(t, 0);
      a_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_20), (ATerm) ATmakeAppl(sym_Runtime_1, y_20)), a_21);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm o_21 (ATerm i_21, ATerm t)
  {
    t = SSL_fclose(i_21);
    return(t);
  }
  ATerm l_21 = NULL,m_21 = NULL;
  m_21 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_21 = ATgetArgument(t, 0);
      {
        ATerm m_14 = t;
        int n_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(l_21);
            ;
            LocalPopChoice(n_14);
          }
        else
          {
            t = m_14;
            t = o_21(m_21, t);
          }
      }
    }
  else
    {
      t = o_21(m_21, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm l_99 (ATerm), ATerm t)
{
  ATerm p_21 = NULL,q_21 = NULL;
  p_21 = t;
  t = l_99(t);
  q_21 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, p_21), q_21));
  t = p_21;
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm r_21 = NULL;
  t = SSL_stdin_stream();
  r_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_21);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm s_21 = NULL;
  t = SSL_stdout_stream();
  s_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_21);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm t_21 = NULL;
  t = SSL_stderr_stream();
  t_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_21);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm v_21 = NULL;
  v_21 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = v_21;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = v_21;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = v_21;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm g_15 = ATgetArgument(t, 0);
      ATerm h_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_15 = t;
    int j_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_1 = NULL,e_1 = NULL;
        d_1 = t;
        t = SSL_explode_term(d_1);
        if(match_cons(t, sym__2))
          {
            ATerm l_15 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) l_15) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm q_15 = ATgetArgument(t, 1);
              if(((ATgetType(q_15) == AT_LIST) && !(ATisEmpty(q_15))))
                {
                  e_1 = ATgetFirst((ATermList) q_15);
                  {
                    ATerm r_15 = (ATerm) ATgetNext((ATermList) q_15);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = e_1;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(j_15);
      }
    else
      {
        t = i_15;
        {
          ATerm s_15 = t;
          int x_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_21 = NULL,z_21 = NULL,a_22 = NULL;
              ATerm g_3 (ATerm t)
              {
                ATerm b_22 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    b_22 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = b_22;
                return(t);
              }
              t = _2_0(g_3, _id, t);
              if(match_cons(t, sym__2))
                {
                  y_21 = ATgetArgument(t, 0);
                  z_21 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(y_21, z_21);
              a_22 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, a_22);
              ;
              LocalPopChoice(x_15);
            }
          else
            {
              t = s_15;
              {
                ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL;
                ATerm m_3 (ATerm t)
                {
                  ATerm f_22 = NULL;
                  f_22 = t;
                  t = SSL_is_string(f_22);
                  return(t);
                }
                t = _2_0(m_3, _id, t);
                if(match_cons(t, sym__2))
                  {
                    c_22 = ATgetArgument(t, 0);
                    d_22 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(c_22, d_22);
                e_22 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, e_22);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm g_22 = NULL,h_22 = NULL,i_22 = NULL;
  ATerm y_15 = t;
  int z_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_22 = NULL;
      j_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_22, term_c_16);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(z_15);
    }
  else
    {
      t = y_15;
      {
        ATerm n_3 (ATerm t)
        {
          t = term_g_16;
          return(t);
        }
        t = debug_1_0(n_3, t);
        _fail(t);
      }
    }
  g_22 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(i_22);
  h_22 = t;
  t = g_22;
  t = fclose_0_0(t);
  t = h_22;
  return(t);
}
ATerm split_2_0 (ATerm g_82 (ATerm), ATerm h_82 (ATerm), ATerm t)
{
  ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL;
  l_22 = t;
  t = g_82(t);
  m_22 = t;
  t = l_22;
  t = h_82(t);
  n_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_22, n_22);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm o_22 = NULL,p_22 = NULL;
  o_22 = t;
  {
    ATerm h_16 = t;
    int j_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_3 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              p_22 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(q_3, t);
        ;
        LocalPopChoice(j_16);
      }
    else
      {
        t = h_16;
        t = term_k_16;
        p_22 = t;
      }
    t = o_22;
    {
      ATerm r_3 (ATerm t)
      {
        t = not_null(p_22);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, r_3, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm s_3 (ATerm t)
  {
    ATerm r_22 = NULL;
    r_22 = t;
    if(match_string(t, "-k"))
      {
        t = r_22;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = r_22;
      }
    return(t);
  }
  ATerm t_3 (ATerm t)
  {
    ATerm s_22 = NULL,t_22 = NULL;
    s_22 = t;
    t = SSL_string_to_int(s_22);
    t_22 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), t_22);
    t = s_22;
    return(t);
  }
  ATerm u_3 (ATerm t)
  {
    t = term_l_16;
    return(t);
  }
  t = ArgOption_3_0(s_3, t_3, u_3, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm n_16 = t;
  int o_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_3 (ATerm t)
      {
        ATerm v_22 = NULL;
        v_22 = t;
        if(match_string(t, "-S"))
          {
            t = v_22;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = v_22;
          }
        return(t);
      }
      ATerm w_3 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_u_16;
        return(t);
      }
      ATerm x_3 (ATerm t)
      {
        t = term_v_16;
        return(t);
      }
      t = Option_3_0(v_3, w_3, x_3, t);
      ;
      LocalPopChoice(o_16);
    }
  else
    {
      t = n_16;
      {
        ATerm p_17 = t;
        int q_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_3 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm z_3 (ATerm t)
            {
              ATerm w_22 = NULL,x_22 = NULL;
              w_22 = t;
              t = SSL_string_to_int(w_22);
              x_22 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), x_22);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, w_22);
              return(t);
            }
            ATerm a_4 (ATerm t)
            {
              t = term_r_17;
              return(t);
            }
            t = ArgOption_3_0(y_3, z_3, a_4, t);
            ;
            LocalPopChoice(q_17);
          }
        else
          {
            t = p_17;
            {
              ATerm b_4 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm d_4 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_u_17;
                return(t);
              }
              ATerm f_4 (ATerm t)
              {
                t = term_z_17;
                return(t);
              }
              t = Option_3_0(b_4, d_4, f_4, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm a_18 = t;
  int b_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(b_18);
    }
  else
    {
      t = a_18;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm g_4 (ATerm t)
  {
    ATerm z_22 = NULL;
    z_22 = t;
    if(match_string(t, "-o"))
      {
        t = z_22;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = z_22;
      }
    return(t);
  }
  ATerm h_4 (ATerm t)
  {
    ATerm a_23 = NULL;
    a_23 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), a_23);
    t = (ATerm) ATmakeAppl(sym_Output_1, a_23);
    return(t);
  }
  ATerm i_4 (ATerm t)
  {
    t = term_c_18;
    return(t);
  }
  t = ArgOption_3_0(g_4, h_4, i_4, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm d_18 = t;
  int e_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(e_18);
    }
  else
    {
      t = d_18;
      {
        ATerm j_4 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm k_4 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_f_18;
          return(t);
        }
        ATerm l_4 (ATerm t)
        {
          t = term_u_18;
          return(t);
        }
        t = Option_3_0(j_4, k_4, l_4, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL,g_23 = NULL,h_23 = NULL;
  d_23 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = d_23;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm l_23 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_23 = ATgetFirst((ATermList) t);
          f_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_23;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_23 = ATgetFirst((ATermList) t);
          h_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_23;
      t = h_0(t);
      t = g_23;
      t = i_0(t);
      l_23 = t;
      t = (ATerm) ATinsert(CheckATermList(h_23), l_23);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm n_4 (ATerm t)
  {
    ATerm n_23 = NULL;
    n_23 = t;
    if(match_string(t, "-i"))
      {
        t = n_23;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = n_23;
      }
    return(t);
  }
  ATerm p_4 (ATerm t)
  {
    ATerm o_23 = NULL;
    o_23 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), o_23);
    t = (ATerm) ATmakeAppl(sym_Input_1, o_23);
    return(t);
  }
  ATerm q_4 (ATerm t)
  {
    t = term_v_18;
    return(t);
  }
  t = ArgOption_3_0(n_4, p_4, q_4, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm y_18 = t;
  int z_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(z_18);
    }
  else
    {
      t = y_18;
      {
        ATerm c_19 = t;
        int d_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(d_19);
          }
        else
          {
            t = c_19;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm p_23 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_11;
  t = whoami_0_0(t);
  p_23 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), p_23));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_e_19;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm v_89 (ATerm), ATerm w_89 (ATerm), ATerm t)
{
  ATerm n_19 = t;
  int o_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = v_89(t);
      ;
      LocalPopChoice(o_19);
    }
  else
    {
      t = n_19;
      {
        ATerm s_23 = NULL,t_23 = NULL,w_23 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_23 = ATgetFirst((ATermList) t);
            t_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = t_23;
        t = foldr_2_0(v_89, w_89, t);
        w_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_23, w_23);
        t = w_89(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm t_87 (ATerm), ATerm u_87 (ATerm), ATerm t)
{
  ATerm x_23 = NULL,y_23 = NULL;
  x_23 = t;
  t = SSL_explode_term(x_23);
  if(match_cons(t, sym__2))
    {
      ATerm p_19 = ATgetArgument(t, 0);
      y_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_23;
  t = foldr_2_0(t_87, u_87, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm z_23 = NULL;
  t = times_0_0(t);
  {
    ATerm r_4 (ATerm t)
    {
      t = term_p_16;
      return(t);
    }
    ATerm s_4 (ATerm t)
    {
      ATerm a_24 = NULL,b_24 = NULL;
      if(match_cons(t, sym__2))
        {
          a_24 = ATgetArgument(t, 0);
          b_24 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm q_19 = t;
        int r_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(a_24, b_24);
            ;
            LocalPopChoice(r_19);
          }
        else
          {
            t = q_19;
            t = SSL_addr(a_24, b_24);
          }
      }
      return(t);
    }
    t = crush_2_0(r_4, s_4, t);
    z_23 = t;
    t = SSL_TicksToSeconds(z_23);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm k_24 = NULL,l_24 = NULL,m_24 = NULL;
  k_24 = t;
  if(match_cons(t, sym__2))
    {
      l_24 = ATgetArgument(t, 0);
      m_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_19 = t;
    int u_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_24;
        if((l_24 != t))
          {
            _fail(t);
          }
        t = k_24;
        ;
        LocalPopChoice(u_19);
      }
    else
      {
        t = t_19;
        t = k_24;
        {
          ATerm v_19 = t;
          int z_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(l_24, m_24);
              ;
              LocalPopChoice(z_19);
            }
          else
            {
              t = v_19;
              t = SSL_gtr(l_24, m_24);
            }
          t = (ATerm) ATmakeAppl(sym__2, l_24, m_24);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm z_105 (ATerm), ATerm t)
{
  ATerm u_4 (ATerm t)
  {
    ATerm p_24 = NULL,q_24 = NULL;
    p_24 = t;
    t = term_m_13;
    t = get_config_0_0(t);
    q_24 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_24, term_a_20);
    t = geq_0_0(t);
    t = p_24;
    t = z_105(t);
    return(t);
  }
  t = try_1_0(u_4, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm v_4 (ATerm t)
  {
    ATerm s_24 = NULL,t_24 = NULL;
    t = run_time_0_0(t);
    s_24 = t;
    t = term_w_11;
    t = whoami_0_0(t);
    t_24 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), s_24), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), t_24));
    t = (ATerm) ATmakeAppl(sym__2, term_b_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_20), s_24), term_e_20), t_24));
    return(t);
  }
  t = if_verbose1_1_0(v_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm k_97 (ATerm), ATerm t)
{
  ATerm b_21 = t;
  int c_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_21;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(c_21);
    }
  else
    {
      t = b_21;
      {
        ATerm x_4 (ATerm t)
        {
          ATerm e_21 = t;
          int f_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(f_21);
            }
          else
            {
              t = e_21;
              {
                ATerm g_21 = t;
                int h_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(h_21);
                  }
                else
                  {
                    t = g_21;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(x_4, t);
      }
    }
  t = k_97(t);
  return(t);
}
ATerm map_1_0 (ATerm v_84 (ATerm), ATerm t)
{
  ATerm v_24 (ATerm t)
  {
    ATerm j_21 = t;
    int k_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(k_21);
      }
    else
      {
        t = j_21;
        t = Cons_2_0(v_84, v_24, t);
      }
    return(t);
  }
  t = v_24(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm x_24 = NULL,y_24 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_24 = ATgetFirst((ATermList) t);
      y_24 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm c_25 = NULL,d_25 = NULL;
        t = y_24;
        t = g_0(t);
        c_25 = t;
        t = x_24;
        t = e_0(t);
        d_25 = t;
        t = y_24;
        {
          ATerm z_4 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(c_25), d_25);
            return(t);
          }
          t = reverse_acc_2_0(e_0, z_4, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_w_11;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm a_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, a_5, t);
  return(t);
}
ATerm Program_1_0 (ATerm i_76 (ATerm), ATerm t)
{
  ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL;
  h_25 = t;
  if(match_cons(t, sym_Program_1))
    {
      f_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_25);
  e_25 = t;
  t = f_25;
  t = i_76(t);
  g_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, g_25), e_25);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm n_21 = t;
  int u_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_19;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(u_21);
    }
  else
    {
      t = n_21;
      {
        ATerm b_5 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(b_5, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_w_21;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm c_5 (ATerm t)
    {
      ATerm k_25 = NULL;
      k_25 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, k_25), term_x_21);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(c_5, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm j_76 (ATerm), ATerm t)
{
  ATerm l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL;
  o_25 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      m_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_25);
  l_25 = t;
  t = m_25;
  t = j_76(t);
  n_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, n_25), l_25);
  return(t);
}
ATerm fetch_1_0 (ATerm g_85 (ATerm), ATerm t)
{
  ATerm r_25 (ATerm t)
  {
    ATerm k_22 = t;
    int q_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(g_85, _id, t);
        ;
        LocalPopChoice(q_22);
      }
    else
      {
        t = k_22;
        t = Cons_2_0(_id, r_25, t);
      }
    return(t);
  }
  t = r_25(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm d_101 (ATerm), ATerm t)
{
  t = fetch_1_0(d_101, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm t_25 = NULL,u_25 = NULL;
  t_25 = t;
  {
    ATerm u_22 = t;
    int y_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = t_25;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm b_23 = ATgetFirst((ATermList) t);
                ATerm c_23 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = t_25;
          }
        ;
        LocalPopChoice(y_22);
      }
    else
      {
        t = u_22;
        t = (ATerm) ATinsert(ATempty, t_25);
      }
    u_25 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), u_25);
    t = t_25;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_e_19;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm try_1_0 (ATerm m_81 (ATerm), ATerm t)
{
  ATerm i_23 = t;
  int j_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_81(t);
      ;
      LocalPopChoice(j_23);
    }
  else
    {
      t = i_23;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm k_23 = t;
  int m_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_5 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm e_5 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_u_23;
        return(t);
      }
      ATerm g_5 (ATerm t)
      {
        t = term_v_23;
        return(t);
      }
      t = Option_3_0(d_5, e_5, g_5, t);
      ;
      LocalPopChoice(m_23);
    }
  else
    {
      t = k_23;
      {
        ATerm i_5 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm j_5 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_c_24;
          return(t);
        }
        ATerm k_5 (ATerm t)
        {
          t = term_d_24;
          return(t);
        }
        t = Option_3_0(i_5, j_5, k_5, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm a_26 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL;
  if(match_cons(t, sym__3))
    {
      a_26 = ATgetArgument(t, 0);
      b_26 = ATgetArgument(t, 1);
      c_26 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_26, b_26);
  {
    ATerm e_24 = t;
    int f_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_24 = ATgetArgument(t, 0);
            ATerm h_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(a_26, b_26);
        ;
        LocalPopChoice(f_24);
      }
    else
      {
        t = e_24;
        t = (ATerm) ATempty;
      }
    d_26 = t;
    t = SSL_table_put(a_26, b_26, (ATerm) ATinsert(CheckATermList(d_26), c_26));
    t = (ATerm) ATmakeAppl(sym__3, a_26, b_26, c_26);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm i_102 (ATerm), ATerm t)
{
  ATerm i_26 = NULL;
  t = term_w_11;
  t = i_102(t);
  i_26 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_i_24, term_j_24, i_26);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm k_26 = NULL,l_26 = NULL,m_26 = NULL;
  k_26 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = k_26;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm p_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_26 = ATgetFirst((ATermList) t);
          m_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_26;
      t = a_0(t);
      t = term_w_11;
      t = c_0(t);
      p_26 = t;
      t = (ATerm) ATinsert(CheckATermList(m_26), p_26);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm l_5 (ATerm t)
  {
    ATerm r_26 = NULL;
    r_26 = t;
    if(match_string(t, "--help"))
      {
        t = r_26;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = r_26;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = r_26;
          }
      }
    return(t);
  }
  ATerm m_5 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_n_24;
    return(t);
  }
  ATerm n_5 (ATerm t)
  {
    t = term_o_24;
    return(t);
  }
  t = Option_3_0(l_5, m_5, n_5, t);
  return(t);
}
ATerm Cons_2_0 (ATerm e_64 (ATerm), ATerm f_64 (ATerm), ATerm t)
{
  ATerm s_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL;
  x_26 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_26 = ATgetFirst((ATermList) t);
      u_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_26);
  s_26 = t;
  t = t_26;
  t = e_64(t);
  v_26 = t;
  t = u_26;
  t = f_64(t);
  w_26 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(w_26), v_26), s_26);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm g_102 (ATerm), ATerm t)
{
  ATerm d_27 = NULL;
  d_27 = t;
  {
    ATerm p_5 (ATerm t)
    {
      t = term_r_24;
      t = g_102(t);
      return(t);
    }
    t = try_1_0(p_5, t);
    t = d_27;
    {
      ATerm q_5 (ATerm t)
      {
        ATerm e_27 = NULL;
        e_27 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), e_27);
        t = (ATerm) ATmakeAppl(sym_Program_1, e_27);
        return(t);
      }
      ATerm r_5 (ATerm t)
      {
        ATerm u_24 = t;
        int w_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_24 = t;
            int a_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(a_25);
              }
            else
              {
                t = z_24;
                t = g_102(t);
                t = Cons_2_0(_id, r_5, t);
              }
            ;
            LocalPopChoice(w_24);
          }
        else
          {
            t = u_24;
            {
              ATerm o_27 = NULL,p_27 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  o_27 = ATgetFirst((ATermList) t);
                  p_27 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(p_27), (ATerm) ATmakeAppl(sym_Undefined_1, o_27));
            }
          }
        return(t);
      }
      t = Cons_2_0(q_5, r_5, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm f_102 (ATerm), ATerm t)
{
  ATerm z_27 = NULL,a_28 = NULL,b_28 = NULL;
  z_27 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = z_27;
  {
    ATerm s_5 (ATerm t)
    {
      ATerm b_25 = t;
      int i_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_102(t);
          ;
          LocalPopChoice(i_25);
        }
      else
        {
          t = b_25;
          {
            ATerm j_25 = t;
            int p_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(p_25);
              }
            else
              {
                t = j_25;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(s_5, t);
    {
      ATerm t_5 (ATerm t)
      {
        ATerm q_25 = t;
        int s_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_28 = NULL;
            i_28 = t;
            {
              ATerm v_25 = t;
              int w_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_28;
                  {
                    ATerm x_25 = t;
                    int y_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_d_21;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(y_25);
                      }
                    else
                      {
                        t = x_25;
                        {
                          ATerm u_5 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(u_5, t);
                        }
                      }
                    t = i_28;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(w_25);
                }
              else
                {
                  t = v_25;
                  t = term_r_23;
                  t = get_config_0_0(t);
                  t = i_28;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(s_25);
          }
        else
          {
            t = q_25;
            {
              ATerm v_5 (ATerm t)
              {
                ATerm x_5 (ATerm t)
                {
                  a_28 = t;
                  return(t);
                }
                t = Undefined_1_0(x_5, t);
                return(t);
              }
              t = option_defined_1_0(v_5, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(a_28)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_b_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_28)), term_z_25));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(t_5, t);
      b_28 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = b_28;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm m_97 (ATerm), ATerm n_97 (ATerm), ATerm o_97 (ATerm), ATerm p_97 (ATerm), ATerm t)
{
  ATerm h_5 = NULL;
  t = parse_options_1_0(m_97, t);
  h_5 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), h_5);
  t = h_5;
  t = o_97(t);
  {
    ATerm e_26 = t;
    int f_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(n_97, t);
        ;
        LocalPopChoice(f_26);
      }
    else
      {
        t = e_26;
        {
          ATerm g_26 = t;
          int h_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_97(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(h_26);
            }
          else
            {
              t = g_26;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm b_97 (ATerm), ATerm c_97 (ATerm), ATerm d_97 (ATerm), ATerm e_97 (ATerm), ATerm t)
{
  ATerm z_5 (ATerm t)
  {
    ATerm j_26 = t;
    int n_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_97(t);
        ;
        LocalPopChoice(n_26);
      }
    else
      {
        t = j_26;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm a_6 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(b_97, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(z_5, d_97, e_97, a_6, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm v_96 (ATerm), ATerm w_96 (ATerm), ATerm x_96 (ATerm), ATerm t)
{
  ATerm c_6 (ATerm t)
  {
    ATerm d_6 (ATerm t)
    {
      ATerm m_28 = NULL,n_28 = NULL;
      m_28 = t;
      t = term_e_19;
      t = get_config_0_0(t);
      n_28 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, n_28));
      t = m_28;
      return(t);
    }
    t = if_verbose2_1_0(d_6, t);
    return(t);
  }
  t = iowrap_4_0(v_96, w_96, x_96, c_6, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm t_96 (ATerm), ATerm u_96 (ATerm), ATerm t)
{
  t = iowrap_3_0(t_96, u_96, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm q_96 (ATerm), ATerm t)
{
  ATerm e_6 (ATerm t)
  {
    t = _2_0(_id, q_96, t);
    return(t);
  }
  t = iowrap_2_0(e_6, _fail, t);
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
