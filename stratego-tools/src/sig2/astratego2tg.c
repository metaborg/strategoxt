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
Symbol sym_Scopes_0;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_OpDecl_2;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Int_1;
Symbol sym_Op_2;
Symbol sym_Id_0;
Symbol sym_Path_2;
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
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_OpDecl_2 = ATmakeSymbol("OpDecl", 2, ATfalse);
  ATprotectSymbol(sym_OpDecl_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
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
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_z_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_r_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_f_18;
ATerm term_m_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_x_16;
ATerm term_o_16;
ATerm term_j_16;
ATerm term_h_16;
ATerm term_e_16;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_h_13;
ATerm term_u_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_d_9;
ATerm term_x_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_x_6;
ATerm term_v_6;
ATerm term_g_6;
ATerm term_d_6;
void init_constant_terms (void)
{
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Param", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(sym_String_0);
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(sym_Int_0);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_Verbose_1, term_d_9);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym__3, term_w_19, term_x_19, term_d_6);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm filter_1_0 (ATerm o_87 (ATerm), ATerm);
ATerm build_group_by_pairs_4_0 (ATerm z_76 (ATerm), ATerm a_77 (ATerm), ATerm b_77 (ATerm), ATerm c_77 (ATerm), ATerm);
ATerm make_set_0_0 (ATerm);
ATerm group_by_3_0 (ATerm w_76 (ATerm), ATerm x_76 (ATerm), ATerm y_76 (ATerm), ATerm);
ATerm rewrite_1_0 (ATerm w_105 (ATerm), ATerm);
ATerm Param_0_0 (ATerm);
ATerm to_dec_prod_item_0_0 (ATerm);
ATerm to_prod_item_0_0 (ATerm);
ATerm assert_1_0 (ATerm u_105 (ATerm), ATerm);
ATerm add_param_rule_0_0 (ATerm);
ATerm map_with_index_1_0 (ATerm i_85 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm r_105 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm i_82 (ATerm), ATerm j_82 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm q_105 (ATerm), ATerm);
ATerm scope_2_0 (ATerm s_105 (ATerm), ATerm t_105 (ATerm), ATerm);
ATerm to_prod_items_0_0 (ATerm);
ATerm length_0_0 (ATerm);
ATerm get_nt_params_0_0 (ATerm);
ATerm to_NonTermDec_0_0 (ATerm);
ATerm HdMember_p__2_0 (ATerm x_102 (ATerm), ATerm y_102 (ATerm), ATerm);
ATerm union_1_0 (ATerm t_102 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm foldr_3_0 (ATerm n_104 (ATerm), ATerm o_104 (ATerm), ATerm p_104 (ATerm), ATerm);
ATerm crush_3_0 (ATerm i_97 (ATerm), ATerm j_97 (ATerm), ATerm k_97 (ATerm), ATerm);
ATerm collect_om_1_0 (ATerm p_103 (ATerm), ATerm);
ATerm collect_1_0 (ATerm q_103 (ATerm), ATerm);
ATerm stratego_ast_to_tg_0_0 (ATerm);
ATerm _2_0 (ATerm e_62 (ATerm), ATerm f_62 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm b_84 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm m_101 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm t_91 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm d_77 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm f_91 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm n_82 (ATerm), ATerm o_82 (ATerm), ATerm);
ATerm input_file_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm l_104 (ATerm), ATerm m_104 (ATerm), ATerm);
ATerm crush_2_0 (ATerm g_97 (ATerm), ATerm h_97 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm l_101 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm b_78 (ATerm), ATerm);
ATerm map_1_0 (ATerm l_83 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm g_64 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm h_64 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm v_83 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm z_92 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm try_1_0 (ATerm t_81 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm e_94 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm n_63 (ATerm), ATerm o_63 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm c_94 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm b_94 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm d_78 (ATerm), ATerm e_78 (ATerm), ATerm f_78 (ATerm), ATerm g_78 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm s_77 (ATerm), ATerm t_77 (ATerm), ATerm u_77 (ATerm), ATerm v_77 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm m_77 (ATerm), ATerm n_77 (ATerm), ATerm o_77 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm k_77 (ATerm), ATerm l_77 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm h_77 (ATerm), ATerm);
ATerm io_astratego2tg_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm filter_1_0 (ATerm o_87 (ATerm), ATerm t)
{
  ATerm r_5 = t;
  int s_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(s_5);
    }
  else
    {
      t = r_5;
      {
        ATerm t_5 = t;
        int y_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_0 (ATerm t)
            {
              t = filter_1_0(o_87, t);
              return(t);
            }
            t = Cons_2_0(o_87, e_0, t);
            ;
            LocalPopChoice(y_5);
          }
        else
          {
            t = t_5;
            {
              ATerm y_0 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm z_5 = ATgetFirst((ATermList) t);
                  y_0 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = y_0;
              t = filter_1_0(o_87, t);
            }
          }
      }
    }
  return(t);
}
ATerm build_group_by_pairs_4_0 (ATerm z_76 (ATerm), ATerm a_77 (ATerm), ATerm b_77 (ATerm), ATerm c_77 (ATerm), ATerm t)
{
  ATerm c_1 = NULL,d_1 = NULL;
  c_1 = t;
  t = term_d_6;
  t = c_77(t);
  {
    ATerm h_0 (ATerm t)
    {
      ATerm e_1 = NULL;
      e_1 = t;
      t = z_76(t);
      if((c_1 != t))
        {
          _fail(t);
        }
      t = e_1;
      return(t);
    }
    t = filter_1_0(h_0, t);
    t = map_1_0(a_77, t);
    d_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_1, d_1);
    t = b_77(t);
  }
  return(t);
}
ATerm make_set_0_0 (ATerm t)
{
  ATerm l_0 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm m_0 (ATerm t)
  {
    ATerm g_1 = NULL;
    g_1 = t;
    t = (ATerm) ATinsert(ATempty, g_1);
    return(t);
  }
  t = foldr_3_0(l_0, union_0_0, m_0, t);
  return(t);
}
ATerm group_by_3_0 (ATerm w_76 (ATerm), ATerm x_76 (ATerm), ATerm y_76 (ATerm), ATerm t)
{
  ATerm h_1 = NULL;
  h_1 = t;
  t = map_1_0(w_76, t);
  t = make_set_0_0(t);
  {
    ATerm n_0 (ATerm t)
    {
      ATerm o_0 (ATerm t)
      {
        t = h_1;
        return(t);
      }
      t = build_group_by_pairs_4_0(w_76, x_76, y_76, o_0, t);
      return(t);
    }
    t = map_1_0(n_0, t);
  }
  return(t);
}
ATerm rewrite_1_0 (ATerm w_105 (ATerm), ATerm t)
{
  ATerm o_1 = NULL,p_1 = NULL,p_0 = NULL;
  o_1 = t;
  t = term_d_6;
  t = w_105(t);
  p_1 = t;
  t = SSL_table_get(p_1, o_1);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_0 = ATgetFirst((ATermList) t);
      {
        ATerm e_6 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = p_0;
  return(t);
}
ATerm Param_0_0 (ATerm t)
{
  ATerm q_1 = NULL,s_1 = NULL;
  q_1 = t;
  if(match_cons(t, sym_Var_1))
    {
      ATerm f_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_1;
  {
    ATerm q_0 (ATerm t)
    {
      t = term_g_6;
      return(t);
    }
    t = rewrite_1_0(q_0, t);
    if(match_cons(t, sym_Defined_2))
      {
        ATerm h_6 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) h_6) != ATmakeSymbol("c_0", 0, ATtrue)))
          _fail(t);
        s_1 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = s_1;
  }
  return(t);
}
ATerm to_dec_prod_item_0_0 (ATerm t)
{
  ATerm l_2 = NULL,p_2 = NULL,s_2 = NULL;
  p_2 = t;
  if(match_cons(t, sym_Op_2))
    {
      s_2 = ATgetArgument(t, 0);
      l_2 = ATgetArgument(t, 1);
      {
        ATerm w_2 = NULL;
        t = l_2;
        t = map_1_0(to_prod_item_0_0, t);
        w_2 = t;
        t = (ATerm) ATmakeAppl(sym_NonTermRef_2, (ATerm)ATmakeAppl(sym_Id_1, s_2), w_2);
      }
    }
  else
    {
      if(match_cons(t, sym_Var_1))
        {
          s_2 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      {
        ATerm i_6 = t;
        int k_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_2 = NULL;
            t = p_2;
            t = Param_0_0(t);
            z_2 = t;
            t = (ATerm) ATmakeAppl(sym_Param_1, z_2);
            ;
            LocalPopChoice(k_6);
          }
        else
          {
            t = i_6;
            t = p_2;
            {
              ATerm n_6 = t;
              if((PushChoice() == 0))
                {
                  t = (ATerm) ATmakeAppl(sym_Var_1, s_2);
                  t = Param_0_0(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = n_6;
                }
              t = (ATerm) ATmakeAppl(sym_NonTermRef_2, (ATerm)ATmakeAppl(sym_Id_1, s_2), (ATerm) ATempty);
            }
          }
      }
    }
  return(t);
}
ATerm to_prod_item_0_0 (ATerm t)
{
  ATerm o_6 = t;
  int p_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_3 = NULL;
      if(match_cons(t, sym_Var_1))
        {
          f_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_3;
      if(match_string(t, "String"))
        {
          t = term_v_6;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Int", 0, ATtrue)))
            _fail(t);
          t = term_x_6;
        }
      ;
      LocalPopChoice(p_6);
    }
  else
    {
      t = o_6;
      t = to_dec_prod_item_0_0(t);
    }
  return(t);
}
ATerm assert_1_0 (ATerm u_105 (ATerm), ATerm t)
{
  ATerm g_3 = NULL,h_3 = NULL,i_3 = NULL,j_3 = NULL,m_3 = NULL;
  if(match_cons(t, sym__2))
    {
      g_3 = ATgetArgument(t, 0);
      h_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_105(t);
  i_3 = t;
  t = (ATerm) ATmakeAppl(sym__3, i_3, g_3, h_3);
  t = table_push_0_0(t);
  {
    ATerm y_6 = t;
    int a_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(i_3, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(a_7);
      }
    else
      {
        t = y_6;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_3 = ATgetFirst((ATermList) t);
        m_3 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(i_3, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(m_3), (ATerm) ATinsert(CheckATermList(j_3), g_3)));
    t = (ATerm) ATmakeAppl(sym__2, g_3, h_3);
  }
  return(t);
}
ATerm add_param_rule_0_0 (ATerm t)
{
  ATerm o_3 = NULL,p_3 = NULL;
  if(match_cons(t, sym__2))
    {
      o_3 = ATgetArgument(t, 0);
      {
        ATerm b_7 = ATgetArgument(t, 1);
        if(match_cons(b_7, sym_Var_1))
          {
            p_3 = ATgetArgument(b_7, 0);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, p_3), (ATerm) ATmakeAppl(sym_Defined_2, term_c_7, o_3));
  {
    ATerm r_0 (ATerm t)
    {
      t = term_g_6;
      return(t);
    }
    t = assert_1_0(r_0, t);
    t = (ATerm) ATmakeAppl(sym__2, o_3, (ATerm) ATmakeAppl(sym_Var_1, p_3));
  }
  return(t);
}
ATerm map_with_index_1_0 (ATerm i_85 (ATerm), ATerm t)
{
  ATerm u_3 = NULL;
  u_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_7, u_3);
  {
    ATerm r_4 (ATerm t)
    {
      ATerm x_3 = NULL,y_3 = NULL,z_3 = NULL,a_4 = NULL;
      if(match_cons(t, sym__2))
        {
          x_3 = ATgetArgument(t, 0);
          y_3 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = y_3;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          ATerm g_4 = NULL,h_4 = NULL,o_4 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              z_3 = ATgetFirst((ATermList) t);
              a_4 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, x_3, z_3);
          t = i_85(t);
          g_4 = t;
          t = (ATerm) ATmakeAppl(sym__2, x_3, term_d_7);
          {
            ATerm e_7 = t;
            int f_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SSL_addi(x_3, (ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(f_7);
              }
            else
              {
                t = e_7;
                t = SSL_addr(x_3, (ATerm) ATmakeInt(1));
              }
            h_4 = t;
            t = (ATerm) ATmakeAppl(sym__2, h_4, a_4);
            t = r_4(t);
            o_4 = t;
            t = (ATerm) ATinsert(CheckATermList(o_4), g_4);
          }
        }
      return(t);
    }
    t = r_4(t);
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm y_4 = NULL,d_5 = NULL,e_5 = NULL;
  if(match_cons(t, sym__2))
    {
      y_4 = ATgetArgument(t, 0);
      d_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_7 = t;
    int j_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_1 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm k_7 = ATgetArgument(t, 0);
            ATerm m_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(y_4, d_5);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm n_7 = ATgetFirst((ATermList) t);
            a_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = a_1;
        ;
        LocalPopChoice(j_7);
      }
    else
      {
        t = g_7;
        t = (ATerm) ATempty;
      }
    e_5 = t;
    t = SSL_table_put(y_4, d_5, e_5);
    t = (ATerm) ATmakeAppl(sym__2, y_4, d_5);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm r_105 (ATerm), ATerm t)
{
  ATerm o_5 = NULL,u_5 = NULL,v_5 = NULL,w_5 = NULL;
  o_5 = t;
  t = r_105(t);
  u_5 = t;
  {
    ATerm q_7 = t;
    int u_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(u_5, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(u_7);
      }
    else
      {
        t = q_7;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_5 = ATgetFirst((ATermList) t);
        v_5 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(u_5, (ATerm)ATmakeAppl(sym_Scopes_0), v_5);
    t = w_5;
    {
      ATerm s_0 (ATerm t)
      {
        ATerm x_5 = NULL;
        x_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_5, x_5);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(s_0, t);
      t = o_5;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm i_82 (ATerm), ATerm j_82 (ATerm), ATerm t)
{
  ATerm v_7 = t;
  int w_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_82(t);
      t = j_82(t);
      ;
      LocalPopChoice(w_7);
    }
  else
    {
      t = v_7;
      t = j_82(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm q_105 (ATerm), ATerm t)
{
  ATerm a_6 = NULL,b_6 = NULL,c_6 = NULL;
  a_6 = t;
  t = q_105(t);
  b_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_6, term_x_7);
  {
    ATerm y_7 = t;
    int z_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_8 = ATgetArgument(t, 0);
            ATerm c_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(b_6, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(z_7);
      }
    else
      {
        t = y_7;
        t = (ATerm) ATempty;
      }
    c_6 = t;
    t = SSL_table_put(b_6, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(c_6), (ATerm) ATempty));
    t = a_6;
  }
  return(t);
}
ATerm scope_2_0 (ATerm s_105 (ATerm), ATerm t_105 (ATerm), ATerm t)
{
  t = begin_scope_1_0(s_105, t);
  {
    ATerm t_0 (ATerm t)
    {
      t = end_scope_1_0(s_105, t);
      return(t);
    }
    t = restore_always_2_0(t_105, t_0, t);
  }
  return(t);
}
ATerm to_prod_items_0_0 (ATerm t)
{
  ATerm j_6 = NULL,l_6 = NULL,m_6 = NULL;
  l_6 = t;
  if(match_cons(t, sym_FunType_2))
    {
      m_6 = ATgetArgument(t, 0);
      j_6 = ATgetArgument(t, 1);
      {
        ATerm q_6 = NULL;
        t = l_6;
        {
          ATerm u_0 (ATerm t)
          {
            t = term_g_6;
            return(t);
          }
          ATerm v_0 (ATerm t)
          {
            t = j_6;
            {
              ATerm d_8 = t;
              int e_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_6 = NULL;
                  if(match_cons(t, sym_ConstType_1))
                    {
                      ATerm m_8 = ATgetArgument(t, 0);
                      if(match_cons(m_8, sym_Op_2))
                        {
                          ATerm n_8 = ATgetArgument(m_8, 0);
                          r_6 = ATgetArgument(m_8, 1);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                  t = r_6;
                  LocalPopChoice(e_8);
                  t = map_with_index_1_0(add_param_rule_0_0, t);
                }
              else
                {
                  t = d_8;
                }
              t = m_6;
              {
                ATerm w_0 (ATerm t)
                {
                  ATerm s_6 = NULL;
                  if(match_cons(t, sym_ConstType_1))
                    {
                      s_6 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = s_6;
                  t = to_prod_item_0_0(t);
                  return(t);
                }
                t = map_1_0(w_0, t);
                q_6 = t;
              }
            }
            return(t);
          }
          t = scope_2_0(u_0, v_0, t);
          t = not_null(q_6);
        }
      }
    }
  else
    {
      if(match_cons(t, sym_ConstType_1))
        {
          m_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_6;
      {
        ATerm q_8 = t;
        int r_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm t_8 = ATgetArgument(t, 0);
                ATerm u_8 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            LocalPopChoice(r_8);
            t = (ATerm) ATempty;
          }
        else
          {
            t = q_8;
            if(match_cons(t, sym_Var_1))
              {
                ATerm v_8 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATempty;
          }
      }
    }
  return(t);
}
ATerm length_0_0 (ATerm t)
{
  ATerm x_0 (ATerm t)
  {
    t = term_d_9;
    return(t);
  }
  ATerm z_0 (ATerm t)
  {
    ATerm t_6 = NULL,u_6 = NULL;
    if(match_cons(t, sym__2))
      {
        t_6 = ATgetArgument(t, 0);
        u_6 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm j_9 = t;
      int k_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(t_6, u_6);
          ;
          LocalPopChoice(k_9);
        }
      else
        {
          t = j_9;
          t = SSL_addr(t_6, u_6);
        }
    }
    return(t);
  }
  ATerm b_1 (ATerm t)
  {
    t = term_d_7;
    return(t);
  }
  t = foldr_3_0(x_0, z_0, b_1, t);
  return(t);
}
ATerm get_nt_params_0_0 (ATerm t)
{
  ATerm w_6 = NULL;
  ATerm l_9 = t;
  int r_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Op_2))
        {
          ATerm s_9 = ATgetArgument(t, 0);
          w_6 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      LocalPopChoice(r_9);
      t = w_6;
      t = length_0_0(t);
    }
  else
    {
      t = l_9;
      if(match_cons(t, sym_Var_1))
        {
          ATerm t_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = term_d_9;
    }
  return(t);
}
ATerm to_NonTermDec_0_0 (ATerm t)
{
  ATerm h_7 = NULL,i_7 = NULL,l_7 = NULL,o_7 = NULL,p_7 = NULL,r_7 = NULL,s_7 = NULL,t_7 = NULL,b_8 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      h_7 = ATgetArgument(t, 0);
      i_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_7;
  if(match_cons(t, sym_ConstType_1))
    {
      r_7 = ATgetArgument(t, 0);
      t = r_7;
    }
  else
    {
      if(match_cons(t, sym_FunType_2))
        {
          ATerm w_9 = ATgetArgument(t, 0);
          s_7 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = s_7;
      if(match_cons(t, sym_ConstType_1))
        {
          t_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_7;
    }
  l_7 = t;
  {
    ATerm x_9 = t;
    int y_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Op_2))
          {
            b_8 = ATgetArgument(t, 0);
            {
              ATerm z_9 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(y_9);
        t = b_8;
      }
    else
      {
        t = x_9;
        if(match_cons(t, sym_Var_1))
          {
            b_8 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = b_8;
      }
    t = l_7;
    t = get_nt_params_0_0(t);
    o_7 = t;
    t = i_7;
    t = to_prod_items_0_0(t);
    p_7 = t;
    t = (ATerm) ATmakeAppl(sym_NonTermDec_3, (ATerm)ATmakeAppl(sym_Id_1, b_8), o_7, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Prod_2, (ATerm)ATmakeAppl(sym_Id_1, h_7), p_7)));
  }
  return(t);
}
ATerm HdMember_p__2_0 (ATerm x_102 (ATerm), ATerm y_102 (ATerm), ATerm t)
{
  ATerm f_8 = NULL,g_8 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_8 = ATgetFirst((ATermList) t);
      g_8 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = y_102(t);
  {
    ATerm f_1 (ATerm t)
    {
      ATerm h_8 = NULL;
      h_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_8, h_8);
      t = x_102(t);
      return(t);
    }
    t = fetch_1_0(f_1, t);
    t = g_8;
  }
  return(t);
}
ATerm union_1_0 (ATerm t_102 (ATerm), ATerm t)
{
  ATerm i_8 = NULL,j_8 = NULL;
  if(match_cons(t, sym__2))
    {
      j_8 = ATgetArgument(t, 0);
      i_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_8;
  {
    ATerm k_8 (ATerm t)
    {
      ATerm a_10 = t;
      int c_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = i_8;
          ;
          LocalPopChoice(c_10);
        }
      else
        {
          t = a_10;
          {
            ATerm e_10 = t;
            int f_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_1 (ATerm t)
                {
                  t = i_8;
                  return(t);
                }
                t = HdMember_p__2_0(t_102, i_1, t);
                t = k_8(t);
                ;
                LocalPopChoice(f_10);
              }
            else
              {
                t = e_10;
                t = Cons_2_0(_id, k_8, t);
              }
          }
        }
      return(t);
    }
    t = k_8(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  ATerm j_1 (ATerm t)
  {
    ATerm l_8 = NULL;
    if(match_cons(t, sym__2))
      {
        l_8 = ATgetArgument(t, 0);
        if((l_8 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = union_1_0(j_1, t);
  return(t);
}
ATerm foldr_3_0 (ATerm n_104 (ATerm), ATerm o_104 (ATerm), ATerm p_104 (ATerm), ATerm t)
{
  ATerm g_10 = t;
  int h_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = n_104(t);
      ;
      LocalPopChoice(h_10);
    }
  else
    {
      t = g_10;
      {
        ATerm o_8 = NULL,p_8 = NULL,s_8 = NULL,w_8 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_8 = ATgetFirst((ATermList) t);
            p_8 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = o_8;
        t = p_104(t);
        s_8 = t;
        t = p_8;
        t = foldr_3_0(n_104, o_104, p_104, t);
        w_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_8, w_8);
        t = o_104(t);
      }
    }
  return(t);
}
ATerm crush_3_0 (ATerm i_97 (ATerm), ATerm j_97 (ATerm), ATerm k_97 (ATerm), ATerm t)
{
  ATerm x_8 = NULL,y_8 = NULL;
  x_8 = t;
  t = SSL_explode_term(x_8);
  if(match_cons(t, sym__2))
    {
      ATerm i_10 = ATgetArgument(t, 0);
      y_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_8;
  t = foldr_3_0(i_97, j_97, k_97, t);
  return(t);
}
ATerm collect_om_1_0 (ATerm p_103 (ATerm), ATerm t)
{
  ATerm j_10 = t;
  int m_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_8 = NULL;
      t = p_103(t);
      z_8 = t;
      t = (ATerm) ATinsert(ATempty, z_8);
      ;
      LocalPopChoice(m_10);
    }
  else
    {
      t = j_10;
      {
        ATerm k_1 (ATerm t)
        {
          t = (ATerm) ATempty;
          return(t);
        }
        ATerm l_1 (ATerm t)
        {
          t = collect_om_1_0(p_103, t);
          return(t);
        }
        t = crush_3_0(k_1, union_0_0, l_1, t);
      }
    }
  return(t);
}
ATerm collect_1_0 (ATerm q_103 (ATerm), ATerm t)
{
  t = collect_om_1_0(q_103, t);
  return(t);
}
ATerm stratego_ast_to_tg_0_0 (ATerm t)
{
  ATerm a_9 = NULL;
  ATerm m_1 (ATerm t)
  {
    if(match_cons(t, sym_OpDecl_2))
      {
        ATerm t_10 = ATgetArgument(t, 0);
        ATerm u_10 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    return(t);
  }
  t = collect_1_0(m_1, t);
  t = map_1_0(to_NonTermDec_0_0, t);
  {
    ATerm n_1 (ATerm t)
    {
      ATerm b_9 = NULL,c_9 = NULL;
      if(match_cons(t, sym_NonTermDec_3))
        {
          b_9 = ATgetArgument(t, 0);
          c_9 = ATgetArgument(t, 1);
          {
            ATerm v_10 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, b_9, c_9);
      return(t);
    }
    ATerm r_1 (ATerm t)
    {
      ATerm e_9 = NULL;
      if(match_cons(t, sym_NonTermDec_3))
        {
          ATerm w_10 = ATgetArgument(t, 0);
          ATerm x_10 = ATgetArgument(t, 1);
          ATerm z_10 = ATgetArgument(t, 2);
          if(((ATgetType(z_10) == AT_LIST) && !(ATisEmpty(z_10))))
            {
              e_9 = ATgetFirst((ATermList) z_10);
              {
                ATerm a_11 = (ATerm) ATgetNext((ATermList) z_10);
                if(((ATgetType(a_11) != AT_LIST) || !(ATisEmpty(a_11))))
                  _fail(t);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      t = e_9;
      return(t);
    }
    ATerm t_1 (ATerm t)
    {
      ATerm f_9 = NULL,g_9 = NULL,h_9 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm b_11 = ATgetArgument(t, 0);
          if(match_cons(b_11, sym__2))
            {
              f_9 = ATgetArgument(b_11, 0);
              g_9 = ATgetArgument(b_11, 1);
            }
          else
            _fail(t);
          h_9 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_NonTermDec_3, f_9, g_9, h_9);
      return(t);
    }
    t = group_by_3_0(n_1, r_1, t_1, t);
    a_9 = t;
    t = (ATerm) ATmakeAppl(sym_TreeGrammar_1, a_9);
  }
  return(t);
}
ATerm _2_0 (ATerm e_62 (ATerm), ATerm f_62 (ATerm), ATerm t)
{
  ATerm i_9 = NULL,m_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL;
  q_9 = t;
  if(match_cons(t, sym__2))
    {
      m_9 = ATgetArgument(t, 0);
      n_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_9);
  i_9 = t;
  t = m_9;
  t = e_62(t);
  o_9 = t;
  t = n_9;
  t = f_62(t);
  p_9 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, o_9, p_9), i_9);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm u_9 = NULL,v_9 = NULL;
  u_9 = t;
  t = term_d_6;
  t = whoami_0_0(t);
  v_9 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), v_9), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = u_9;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm c_11 = t;
  int d_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(d_11);
    }
  else
    {
      t = c_11;
      {
        ATerm b_10 = NULL,d_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_10 = ATgetFirst((ATermList) t);
            d_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = b_10;
        {
          ATerm u_1 (ATerm t)
          {
            t = d_10;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(u_1, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm k_10 = NULL,l_10 = NULL;
  k_10 = t;
  t = SSL_explode_term(k_10);
  if(match_cons(t, sym__2))
    {
      ATerm e_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_11) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      l_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_10;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm b_84 (ATerm), ATerm t)
{
  ATerm n_10 (ATerm t)
  {
    ATerm i_11 = t;
    int j_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, n_10, t);
        ;
        LocalPopChoice(j_11);
      }
    else
      {
        t = i_11;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = b_84(t);
      }
    return(t);
  }
  t = n_10(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm o_10 = NULL,p_10 = NULL;
  if(match_cons(t, sym__2))
    {
      p_10 = ATgetArgument(t, 0);
      o_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_10;
  {
    ATerm v_1 (ATerm t)
    {
      t = o_10;
      return(t);
    }
    t = at_end_1_0(v_1, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm k_11 = t;
  int l_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(l_11);
    }
  else
    {
      t = k_11;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm q_10 = NULL;
  ATerm w_1 (ATerm t)
  {
    ATerm r_10 = NULL;
    r_10 = t;
    t = SSL_explode_string(r_10);
    return(t);
  }
  ATerm x_1 (ATerm t)
  {
    ATerm s_10 = NULL;
    s_10 = t;
    t = SSL_explode_string(s_10);
    return(t);
  }
  t = _2_0(w_1, x_1, t);
  t = conc_0_0(t);
  q_10 = t;
  t = SSL_implode_string(q_10);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm m_11 = t;
  int p_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_10 = NULL;
      y_10 = t;
      t = SSL_is_string(y_10);
      ;
      LocalPopChoice(p_11);
    }
  else
    {
      t = m_11;
      {
        ATerm q_11 = t;
        int m_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_1 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(z_1, t);
            ;
            LocalPopChoice(m_12);
          }
        else
          {
            t = q_11;
            {
              ATerm f_11 = NULL,g_11 = NULL,h_11 = NULL;
              f_11 = t;
              if(match_cons(t, sym_Path_1))
                {
                  g_11 = ATgetArgument(t, 0);
                  t = g_11;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      g_11 = ATgetArgument(t, 0);
                      t = g_11;
                      {
                        ATerm n_12 = t;
                        int o_12 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(o_12);
                          }
                        else
                          {
                            t = n_12;
                            {
                              ATerm b_2 (ATerm t)
                              {
                                t = term_p_12;
                                return(t);
                              }
                              t = debug_1_0(b_2, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm n_11 = NULL,o_11 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          g_11 = ATgetArgument(t, 0);
                          h_11 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = g_11;
                      t = eval_config_0_0(t);
                      n_11 = t;
                      t = h_11;
                      t = eval_config_0_0(t);
                      o_11 = t;
                      t = (ATerm) ATmakeAppl(sym__2, n_11, o_11);
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
  ATerm r_11 = NULL;
  r_11 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), r_11);
  {
    ATerm c_2 (ATerm t)
    {
      ATerm s_11 = NULL;
      t = eval_config_0_0(t);
      s_11 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), r_11, s_11);
      t = s_11;
      return(t);
    }
    t = try_1_0(c_2, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm m_101 (ATerm), ATerm t)
{
  ATerm d_2 (ATerm t)
  {
    ATerm t_11 = NULL,u_11 = NULL;
    t_11 = t;
    t = term_q_12;
    t = get_config_0_0(t);
    u_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_11, term_r_12);
    t = geq_0_0(t);
    t = t_11;
    t = m_101(t);
    return(t);
  }
  t = try_1_0(d_2, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm e_2 (ATerm t)
  {
    ATerm v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm s_12 = ATgetArgument(t, 0);
        if(match_cons(s_12, sym_Stream_1))
          {
            v_11 = ATgetArgument(s_12, 0);
          }
        else
          _fail(t);
        w_11 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(v_11, w_11);
    x_11 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), x_11);
    y_11 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, y_11);
    return(t);
  }
  t = WriteToFile_1_0(e_2, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm t_91 (ATerm), ATerm t)
{
  ATerm z_11 = NULL,a_12 = NULL,b_12 = NULL;
  if(match_cons(t, sym__2))
    {
      z_11 = ATgetArgument(t, 0);
      a_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_11, term_u_12);
  t = open_stream_0_0(t);
  b_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_12, a_12);
  t = t_91(t);
  t = fclose_0_0(t);
  t = a_12;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm f_2 (ATerm t)
  {
    ATerm c_12 = NULL,d_12 = NULL,e_12 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm v_12 = ATgetArgument(t, 0);
        if(match_cons(v_12, sym_Stream_1))
          {
            c_12 = ATgetArgument(v_12, 0);
          }
        else
          _fail(t);
        d_12 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(c_12, d_12);
    e_12 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, e_12);
    return(t);
  }
  t = WriteToFile_1_0(f_2, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm f_12 = NULL,g_12 = NULL;
  f_12 = t;
  {
    ATerm g_2 (ATerm t)
    {
      ATerm y_12 = t;
      int f_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_2 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                g_12 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(h_2, t);
          ;
          LocalPopChoice(f_13);
        }
      else
        {
          t = y_12;
          t = term_h_13;
          g_12 = t;
        }
      return(t);
    }
    t = _2_0(g_2, _id, t);
    t = f_12;
    {
      ATerm i_2 (ATerm t)
      {
        ATerm j_2 (ATerm t)
        {
          t = not_null(g_12);
          return(t);
        }
        t = split_2_0(j_2, _id, t);
        return(t);
      }
      t = _2_0(_id, i_2, t);
      {
        ATerm i_13 = t;
        int l_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_2 (ATerm t)
            {
              ATerm m_2 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(m_2, t);
              return(t);
            }
            t = _2_0(k_2, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(l_13);
          }
        else
          {
            t = i_13;
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
ATerm apply_strategy_1_0 (ATerm d_77 (ATerm), ATerm t)
{
  ATerm h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL;
  h_12 = t;
  t = dtime_0_0(t);
  t = h_12;
  t = d_77(t);
  i_12 = t;
  t = dtime_0_0(t);
  j_12 = t;
  t = i_12;
  if(match_cons(t, sym__2))
    {
      k_12 = ATgetArgument(t, 0);
      l_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_12), (ATerm) ATmakeAppl(sym_Runtime_1, j_12)), l_12);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm z_12 (ATerm t_12, ATerm t)
  {
    t = SSL_fclose(t_12);
    return(t);
  }
  ATerm w_12 = NULL,x_12 = NULL;
  x_12 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_12 = ATgetArgument(t, 0);
      {
        ATerm m_13 = t;
        int x_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(w_12);
            ;
            LocalPopChoice(x_13);
          }
        else
          {
            t = m_13;
            t = z_12(x_12, t);
          }
      }
    }
  else
    {
      t = z_12(x_12, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm f_91 (ATerm), ATerm t)
{
  ATerm a_13 = NULL,b_13 = NULL;
  a_13 = t;
  t = f_91(t);
  b_13 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, a_13), b_13));
  t = a_13;
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm c_13 = NULL;
  t = SSL_stdin_stream();
  c_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_13);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm d_13 = NULL;
  t = SSL_stdout_stream();
  d_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_13);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm e_13 = NULL;
  t = SSL_stderr_stream();
  e_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_13);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm g_13 = NULL;
  g_13 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = g_13;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = g_13;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = g_13;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_14 = ATgetArgument(t, 0);
      ATerm h_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_14 = t;
    int o_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_1 = NULL,a_2 = NULL;
        y_1 = t;
        t = SSL_explode_term(y_1);
        if(match_cons(t, sym__2))
          {
            ATerm p_14 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) p_14) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm v_14 = ATgetArgument(t, 1);
              if(((ATgetType(v_14) == AT_LIST) && !(ATisEmpty(v_14))))
                {
                  a_2 = ATgetFirst((ATermList) v_14);
                  {
                    ATerm w_14 = (ATerm) ATgetNext((ATermList) v_14);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = a_2;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(o_14);
      }
    else
      {
        t = l_14;
        {
          ATerm x_14 = t;
          int z_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_13 = NULL,k_13 = NULL,n_13 = NULL;
              ATerm n_2 (ATerm t)
              {
                ATerm o_13 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    o_13 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = o_13;
                return(t);
              }
              t = _2_0(n_2, _id, t);
              if(match_cons(t, sym__2))
                {
                  j_13 = ATgetArgument(t, 0);
                  k_13 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(j_13, k_13);
              n_13 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, n_13);
              ;
              LocalPopChoice(z_14);
            }
          else
            {
              t = x_14;
              {
                ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL;
                ATerm o_2 (ATerm t)
                {
                  ATerm s_13 = NULL;
                  s_13 = t;
                  t = SSL_is_string(s_13);
                  return(t);
                }
                t = _2_0(o_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    p_13 = ATgetArgument(t, 0);
                    q_13 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(p_13, q_13);
                r_13 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, r_13);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm t_13 = NULL,u_13 = NULL,v_13 = NULL;
  ATerm d_15 = t;
  int e_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_13 = NULL;
      w_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_13, term_h_15);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(e_15);
    }
  else
    {
      t = d_15;
      {
        ATerm q_2 (ATerm t)
        {
          t = term_i_15;
          return(t);
        }
        t = debug_1_0(q_2, t);
        _fail(t);
      }
    }
  t_13 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(v_13);
  u_13 = t;
  t = t_13;
  t = fclose_0_0(t);
  t = u_13;
  return(t);
}
ATerm split_2_0 (ATerm n_82 (ATerm), ATerm o_82 (ATerm), ATerm t)
{
  ATerm y_13 = NULL,z_13 = NULL,a_14 = NULL;
  y_13 = t;
  t = n_82(t);
  z_13 = t;
  t = y_13;
  t = o_82(t);
  a_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_13, a_14);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm b_14 = NULL,c_14 = NULL;
  b_14 = t;
  {
    ATerm p_15 = t;
    int q_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_2 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              c_14 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(r_2, t);
        ;
        LocalPopChoice(q_15);
      }
    else
      {
        t = p_15;
        t = term_r_15;
        c_14 = t;
      }
    t = b_14;
    {
      ATerm t_2 (ATerm t)
      {
        t = not_null(c_14);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, t_2, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm u_2 (ATerm t)
  {
    ATerm e_14 = NULL;
    e_14 = t;
    if(match_string(t, "-k"))
      {
        t = e_14;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = e_14;
      }
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    ATerm f_14 = NULL,g_14 = NULL;
    f_14 = t;
    t = SSL_string_to_int(f_14);
    g_14 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), g_14);
    t = f_14;
    return(t);
  }
  ATerm x_2 (ATerm t)
  {
    t = term_s_15;
    return(t);
  }
  t = ArgOption_3_0(u_2, v_2, x_2, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm t_15 = t;
  int u_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_2 (ATerm t)
      {
        ATerm i_14 = NULL;
        i_14 = t;
        if(match_string(t, "-S"))
          {
            t = i_14;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = i_14;
          }
        return(t);
      }
      ATerm a_3 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_v_15;
        return(t);
      }
      ATerm b_3 (ATerm t)
      {
        t = term_w_15;
        return(t);
      }
      t = Option_3_0(y_2, a_3, b_3, t);
      ;
      LocalPopChoice(u_15);
    }
  else
    {
      t = t_15;
      {
        ATerm a_16 = t;
        int b_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_3 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm d_3 (ATerm t)
            {
              ATerm j_14 = NULL,k_14 = NULL;
              j_14 = t;
              t = SSL_string_to_int(j_14);
              k_14 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), k_14);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, j_14);
              return(t);
            }
            ATerm e_3 (ATerm t)
            {
              t = term_e_16;
              return(t);
            }
            t = ArgOption_3_0(c_3, d_3, e_3, t);
            ;
            LocalPopChoice(b_16);
          }
        else
          {
            t = a_16;
            {
              ATerm k_3 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm l_3 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_h_16;
                return(t);
              }
              ATerm n_3 (ATerm t)
              {
                t = term_j_16;
                return(t);
              }
              t = Option_3_0(k_3, l_3, n_3, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm m_16 = t;
  int n_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(n_16);
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
  ATerm q_3 (ATerm t)
  {
    ATerm m_14 = NULL;
    m_14 = t;
    if(match_string(t, "-o"))
      {
        t = m_14;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = m_14;
      }
    return(t);
  }
  ATerm r_3 (ATerm t)
  {
    ATerm n_14 = NULL;
    n_14 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), n_14);
    t = (ATerm) ATmakeAppl(sym_Output_1, n_14);
    return(t);
  }
  ATerm s_3 (ATerm t)
  {
    t = term_o_16;
    return(t);
  }
  t = ArgOption_3_0(q_3, r_3, s_3, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm v_16 = t;
  int w_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(w_16);
    }
  else
    {
      t = v_16;
      {
        ATerm t_3 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm v_3 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_x_16;
          return(t);
        }
        ATerm w_3 (ATerm t)
        {
          t = term_d_17;
          return(t);
        }
        t = Option_3_0(t_3, v_3, w_3, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm q_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL,u_14 = NULL;
  q_14 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = q_14;
      t = register_usage_1_0(k_0, t);
    }
  else
    {
      ATerm y_14 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_14 = ATgetFirst((ATermList) t);
          s_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_14;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_14 = ATgetFirst((ATermList) t);
          u_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_14;
      t = i_0(t);
      t = t_14;
      t = j_0(t);
      y_14 = t;
      t = (ATerm) ATinsert(CheckATermList(u_14), y_14);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm b_4 (ATerm t)
  {
    ATerm a_15 = NULL;
    a_15 = t;
    if(match_string(t, "-i"))
      {
        t = a_15;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = a_15;
      }
    return(t);
  }
  ATerm c_4 (ATerm t)
  {
    ATerm b_15 = NULL;
    b_15 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), b_15);
    t = (ATerm) ATmakeAppl(sym_Input_1, b_15);
    return(t);
  }
  ATerm d_4 (ATerm t)
  {
    t = term_e_17;
    return(t);
  }
  t = ArgOption_3_0(b_4, c_4, d_4, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm f_17 = t;
  int h_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(h_17);
    }
  else
    {
      t = f_17;
      {
        ATerm k_17 = t;
        int l_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(l_17);
          }
        else
          {
            t = k_17;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm c_15 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_6;
  t = whoami_0_0(t);
  c_15 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), c_15));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_m_17;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm l_104 (ATerm), ATerm m_104 (ATerm), ATerm t)
{
  ATerm n_17 = t;
  int o_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = l_104(t);
      ;
      LocalPopChoice(o_17);
    }
  else
    {
      t = n_17;
      {
        ATerm f_15 = NULL,g_15 = NULL,j_15 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_15 = ATgetFirst((ATermList) t);
            g_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = g_15;
        t = foldr_2_0(l_104, m_104, t);
        j_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_15, j_15);
        t = m_104(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm g_97 (ATerm), ATerm h_97 (ATerm), ATerm t)
{
  ATerm k_15 = NULL,l_15 = NULL;
  k_15 = t;
  t = SSL_explode_term(k_15);
  if(match_cons(t, sym__2))
    {
      ATerm t_17 = ATgetArgument(t, 0);
      l_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_15;
  t = foldr_2_0(g_97, h_97, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm m_15 = NULL;
  t = times_0_0(t);
  {
    ATerm e_4 (ATerm t)
    {
      t = term_d_9;
      return(t);
    }
    ATerm f_4 (ATerm t)
    {
      ATerm n_15 = NULL,o_15 = NULL;
      if(match_cons(t, sym__2))
        {
          n_15 = ATgetArgument(t, 0);
          o_15 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm u_17 = t;
        int v_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(n_15, o_15);
            ;
            LocalPopChoice(v_17);
          }
        else
          {
            t = u_17;
            t = SSL_addr(n_15, o_15);
          }
      }
      return(t);
    }
    t = crush_2_0(e_4, f_4, t);
    m_15 = t;
    t = SSL_TicksToSeconds(m_15);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm x_15 = NULL,y_15 = NULL,z_15 = NULL;
  x_15 = t;
  if(match_cons(t, sym__2))
    {
      y_15 = ATgetArgument(t, 0);
      z_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_17 = t;
    int y_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_15;
        if((y_15 != t))
          {
            _fail(t);
          }
        t = x_15;
        ;
        LocalPopChoice(y_17);
      }
    else
      {
        t = w_17;
        t = x_15;
        {
          ATerm c_18 = t;
          int d_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(y_15, z_15);
              ;
              LocalPopChoice(d_18);
            }
          else
            {
              t = c_18;
              t = SSL_gtr(y_15, z_15);
            }
          t = (ATerm) ATmakeAppl(sym__2, y_15, z_15);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm l_101 (ATerm), ATerm t)
{
  ATerm i_4 (ATerm t)
  {
    ATerm c_16 = NULL,d_16 = NULL;
    c_16 = t;
    t = term_q_12;
    t = get_config_0_0(t);
    d_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_16, term_d_7);
    t = geq_0_0(t);
    t = c_16;
    t = l_101(t);
    return(t);
  }
  t = try_1_0(i_4, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm j_4 (ATerm t)
  {
    ATerm f_16 = NULL,g_16 = NULL;
    t = run_time_0_0(t);
    f_16 = t;
    t = term_d_6;
    t = whoami_0_0(t);
    g_16 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), f_16), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), g_16));
    t = (ATerm) ATmakeAppl(sym__2, term_f_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_18), f_16), term_n_18), g_16));
    return(t);
  }
  t = if_verbose1_1_0(j_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm b_78 (ATerm), ATerm t)
{
  ATerm p_18 = t;
  int q_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_18;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(q_18);
    }
  else
    {
      t = p_18;
      {
        ATerm k_4 (ATerm t)
        {
          ATerm s_18 = t;
          int v_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(v_18);
            }
          else
            {
              t = s_18;
              {
                ATerm y_18 = t;
                int z_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(z_18);
                  }
                else
                  {
                    t = y_18;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(k_4, t);
      }
    }
  t = b_78(t);
  return(t);
}
ATerm map_1_0 (ATerm l_83 (ATerm), ATerm t)
{
  ATerm i_16 (ATerm t)
  {
    ATerm a_19 = t;
    int b_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(b_19);
      }
    else
      {
        t = a_19;
        t = Cons_2_0(l_83, i_16, t);
      }
    return(t);
  }
  t = i_16(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm k_16 = NULL,l_16 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_16 = ATgetFirst((ATermList) t);
      l_16 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_16 = NULL,q_16 = NULL;
        t = l_16;
        t = g_0(t);
        p_16 = t;
        t = k_16;
        t = f_0(t);
        q_16 = t;
        t = l_16;
        {
          ATerm l_4 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(p_16), q_16);
            return(t);
          }
          t = reverse_acc_2_0(f_0, l_4, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_d_6;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm m_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, m_4, t);
  return(t);
}
ATerm Program_1_0 (ATerm g_64 (ATerm), ATerm t)
{
  ATerm r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL;
  u_16 = t;
  if(match_cons(t, sym_Program_1))
    {
      s_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_16);
  r_16 = t;
  t = s_16;
  t = g_64(t);
  t_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, t_16), r_16);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm c_19 = t;
  int g_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_17;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(g_19);
    }
  else
    {
      t = c_19;
      {
        ATerm n_4 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(n_4, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_h_19;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm p_4 (ATerm t)
    {
      ATerm y_16 = NULL;
      y_16 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, y_16), term_i_19);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(p_4, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm h_64 (ATerm), ATerm t)
{
  ATerm z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL;
  c_17 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      a_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_17);
  z_16 = t;
  t = a_17;
  t = h_64(t);
  b_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, b_17), z_16);
  return(t);
}
ATerm fetch_1_0 (ATerm v_83 (ATerm), ATerm t)
{
  ATerm g_17 (ATerm t)
  {
    ATerm j_19 = t;
    int l_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(v_83, _id, t);
        ;
        LocalPopChoice(l_19);
      }
    else
      {
        t = j_19;
        t = Cons_2_0(_id, g_17, t);
      }
    return(t);
  }
  t = g_17(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm z_92 (ATerm), ATerm t)
{
  t = fetch_1_0(z_92, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm i_17 = NULL,j_17 = NULL;
  i_17 = t;
  {
    ATerm m_19 = t;
    int p_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = i_17;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm q_19 = ATgetFirst((ATermList) t);
                ATerm r_19 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = i_17;
          }
        ;
        LocalPopChoice(p_19);
      }
    else
      {
        t = m_19;
        t = (ATerm) ATinsert(ATempty, i_17);
      }
    j_17 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), j_17);
    t = i_17;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_m_17;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm try_1_0 (ATerm t_81 (ATerm), ATerm t)
{
  ATerm s_19 = t;
  int t_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_81(t);
      ;
      LocalPopChoice(t_19);
    }
  else
    {
      t = s_19;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm u_19 = t;
  int v_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_4 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm s_4 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_y_19;
        return(t);
      }
      ATerm t_4 (ATerm t)
      {
        t = term_z_19;
        return(t);
      }
      t = Option_3_0(q_4, s_4, t_4, t);
      ;
      LocalPopChoice(v_19);
    }
  else
    {
      t = u_19;
      {
        ATerm u_4 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm v_4 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_a_20;
          return(t);
        }
        ATerm w_4 (ATerm t)
        {
          t = term_b_20;
          return(t);
        }
        t = Option_3_0(u_4, v_4, w_4, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL;
  if(match_cons(t, sym__3))
    {
      p_17 = ATgetArgument(t, 0);
      q_17 = ATgetArgument(t, 1);
      r_17 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_17, q_17);
  {
    ATerm c_20 = t;
    int d_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_20 = ATgetArgument(t, 0);
            ATerm f_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(p_17, q_17);
        ;
        LocalPopChoice(d_20);
      }
    else
      {
        t = c_20;
        t = (ATerm) ATempty;
      }
    s_17 = t;
    t = SSL_table_put(p_17, q_17, (ATerm) ATinsert(CheckATermList(s_17), r_17));
    t = (ATerm) ATmakeAppl(sym__3, p_17, q_17, r_17);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm e_94 (ATerm), ATerm t)
{
  ATerm x_17 = NULL;
  t = term_d_6;
  t = e_94(t);
  x_17 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_g_20, term_h_20, x_17);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL;
  z_17 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = z_17;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm e_18 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_18 = ATgetFirst((ATermList) t);
          b_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_18;
      t = a_0(t);
      t = term_d_6;
      t = b_0(t);
      e_18 = t;
      t = (ATerm) ATinsert(CheckATermList(b_18), e_18);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm x_4 (ATerm t)
  {
    ATerm g_18 = NULL;
    g_18 = t;
    if(match_string(t, "--help"))
      {
        t = g_18;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = g_18;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = g_18;
          }
      }
    return(t);
  }
  ATerm z_4 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_i_20;
    return(t);
  }
  ATerm a_5 (ATerm t)
  {
    t = term_j_20;
    return(t);
  }
  t = Option_3_0(x_4, z_4, a_5, t);
  return(t);
}
ATerm Cons_2_0 (ATerm n_63 (ATerm), ATerm o_63 (ATerm), ATerm t)
{
  ATerm h_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL,l_18 = NULL,m_18 = NULL;
  m_18 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_18 = ATgetFirst((ATermList) t);
      j_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_18);
  h_18 = t;
  t = i_18;
  t = n_63(t);
  k_18 = t;
  t = j_18;
  t = o_63(t);
  l_18 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(l_18), k_18), h_18);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm c_94 (ATerm), ATerm t)
{
  ATerm t_18 = NULL;
  t_18 = t;
  {
    ATerm b_5 (ATerm t)
    {
      t = term_k_20;
      t = c_94(t);
      return(t);
    }
    t = try_1_0(b_5, t);
    t = t_18;
    {
      ATerm c_5 (ATerm t)
      {
        ATerm u_18 = NULL;
        u_18 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), u_18);
        t = (ATerm) ATmakeAppl(sym_Program_1, u_18);
        return(t);
      }
      ATerm f_5 (ATerm t)
      {
        ATerm l_20 = t;
        int m_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_20 = t;
            int o_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(o_20);
              }
            else
              {
                t = n_20;
                t = c_94(t);
                t = Cons_2_0(_id, f_5, t);
              }
            ;
            LocalPopChoice(m_20);
          }
        else
          {
            t = l_20;
            {
              ATerm w_18 = NULL,x_18 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  w_18 = ATgetFirst((ATermList) t);
                  x_18 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(x_18), (ATerm) ATmakeAppl(sym_Undefined_1, w_18));
            }
          }
        return(t);
      }
      t = Cons_2_0(c_5, f_5, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm b_94 (ATerm), ATerm t)
{
  ATerm d_19 = NULL,e_19 = NULL,f_19 = NULL;
  d_19 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = d_19;
  {
    ATerm g_5 (ATerm t)
    {
      ATerm p_20 = t;
      int q_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_94(t);
          ;
          LocalPopChoice(q_20);
        }
      else
        {
          t = p_20;
          {
            ATerm r_20 = t;
            int s_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(s_20);
              }
            else
              {
                t = r_20;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(g_5, t);
    {
      ATerm h_5 (ATerm t)
      {
        ATerm t_20 = t;
        int u_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_19 = NULL;
            k_19 = t;
            {
              ATerm v_20 = t;
              int w_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_19;
                  {
                    ATerm x_20 = t;
                    int y_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_r_18;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(y_20);
                      }
                    else
                      {
                        t = x_20;
                        {
                          ATerm i_5 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(i_5, t);
                        }
                      }
                    t = k_19;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(w_20);
                }
              else
                {
                  t = v_20;
                  t = term_x_19;
                  t = get_config_0_0(t);
                  t = k_19;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(u_20);
          }
        else
          {
            t = t_20;
            {
              ATerm j_5 (ATerm t)
              {
                ATerm k_5 (ATerm t)
                {
                  e_19 = t;
                  return(t);
                }
                t = Undefined_1_0(k_5, t);
                return(t);
              }
              t = option_defined_1_0(j_5, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(e_19)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_f_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_19)), term_z_20));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(h_5, t);
      f_19 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = f_19;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm d_78 (ATerm), ATerm e_78 (ATerm), ATerm f_78 (ATerm), ATerm g_78 (ATerm), ATerm t)
{
  ATerm z_6 = NULL;
  t = parse_options_1_0(d_78, t);
  z_6 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), z_6);
  t = z_6;
  t = f_78(t);
  {
    ATerm a_21 = t;
    int b_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(e_78, t);
        ;
        LocalPopChoice(b_21);
      }
    else
      {
        t = a_21;
        {
          ATerm c_21 = t;
          int d_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_78(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(d_21);
            }
          else
            {
              t = c_21;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm s_77 (ATerm), ATerm t_77 (ATerm), ATerm u_77 (ATerm), ATerm v_77 (ATerm), ATerm t)
{
  ATerm l_5 (ATerm t)
  {
    ATerm e_21 = t;
    int f_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_77(t);
        ;
        LocalPopChoice(f_21);
      }
    else
      {
        t = e_21;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm m_5 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(s_77, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(l_5, u_77, v_77, m_5, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm m_77 (ATerm), ATerm n_77 (ATerm), ATerm o_77 (ATerm), ATerm t)
{
  ATerm n_5 (ATerm t)
  {
    ATerm p_5 (ATerm t)
    {
      ATerm n_19 = NULL,o_19 = NULL;
      n_19 = t;
      t = term_m_17;
      t = get_config_0_0(t);
      o_19 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, o_19));
      t = n_19;
      return(t);
    }
    t = if_verbose2_1_0(p_5, t);
    return(t);
  }
  t = iowrap_4_0(m_77, n_77, o_77, n_5, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm k_77 (ATerm), ATerm l_77 (ATerm), ATerm t)
{
  t = iowrap_3_0(k_77, l_77, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm h_77 (ATerm), ATerm t)
{
  ATerm q_5 (ATerm t)
  {
    t = _2_0(_id, h_77, t);
    return(t);
  }
  t = iowrap_2_0(q_5, _fail, t);
  return(t);
}
ATerm io_astratego2tg_0_0 (ATerm t)
{
  t = iowrap_1_0(stratego_ast_to_tg_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_astratego2tg_0_0(t);
  return(t);
}
