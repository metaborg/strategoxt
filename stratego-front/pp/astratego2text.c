#include <srts/stratego.h>
#include <ssl/stratego-lib.h>
#include "conf.h"
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
ATerm term_q_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_x_14;
ATerm term_e_14;
ATerm term_c_14;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_i_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_s_11;
ATerm term_f_11;
ATerm term_d_11;
ATerm term_z_10;
ATerm term_v_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_b_10;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_c_9;
ATerm term_c_8;
ATerm term_v_7;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_a_7;
ATerm term_v_6;
ATerm term_a_6;
ATerm term_z_5;
ATerm term_x_5;
ATerm term_w_5;
ATerm term_u_5;
ATerm term_t_5;
ATerm term_n_5;
ATerm term_l_5;
ATerm term_k_5;
ATerm term_v_4;
ATerm term_r_4;
void init_constant_terms (void)
{
  ATprotect(&(term_r_4));
  term_r_4 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_v_4));
  term_v_4 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_5));
  term_k_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_5));
  term_l_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_n_5));
  term_n_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(ATmakeSymbol("rm", 0, ATtrue));
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-f", 0, ATtrue));
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(sym__2, term_t_5, term_k_7);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_7);
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i         Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(sym__2, term_f_9, term_z_5);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym__2, term_m_9, term_z_5);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym__2, term_r_9, term_z_5);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym__2, term_i_10, term_j_10);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym__3, term_i_10, term_j_10, (ATerm) ATempty);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("importing: ", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("astratego2text.config", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol(".txt", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-S", 0, ATtrue));
}
ATerm say_1 (ATerm, ATerm x_56 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm d_75 (ATerm));
ATerm call_out_4 (ATerm, ATerm l_52 (ATerm), ATerm m_52 (ATerm), ATerm n_52 (ATerm), ATerm o_52 (ATerm));
ATerm call_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm j_54 (ATerm));
ATerm rm_files_0 (ATerm);
ATerm split_2 (ATerm, ATerm h_59 (ATerm), ATerm i_59 (ATerm));
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm temp_file_1 (ATerm, ATerm l_57 (ATerm));
ATerm call_tmp_3 (ATerm, ATerm i_52 (ATerm), ATerm j_52 (ATerm), ATerm k_52 (ATerm));
ATerm conc_0 (ATerm);
ATerm _2 (ATerm, ATerm q_42 (ATerm), ATerm r_42 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm z_52 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm f_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm y_52 (ATerm));
ATerm Program_1 (ATerm, ATerm e_44 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm f_44 (ATerm));
ATerm option_defined_1 (ATerm, ATerm d_54 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm d_53 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm b_53 (ATerm));
ATerm parse_options_1 (ATerm, ATerm a_53 (ATerm));
ATerm file_exists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm y_66 (ATerm));
ATerm concat_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm s_66 (ATerm));
ATerm fetch_elem_1 (ATerm, ATerm u_66 (ATerm));
ATerm find_config_file_2 (ATerm, ATerm t_54 (ATerm), ATerm u_54 (ATerm));
ATerm table_put_0 (ATerm);
ATerm Nil_0 (ATerm);
ATerm map_1 (ATerm, ATerm j_66 (ATerm));
ATerm table_putlist_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm w_56 (ATerm));
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm g_54 (ATerm));
ATerm import_config_file_1 (ATerm, ATerm d_55 (ATerm));
ATerm implode_string_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm get_path_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm y_48 (ATerm), ATerm z_48 (ATerm));
ATerm astratego2text_0 (ATerm);
ATerm main_0 (ATerm);
ATerm say_1 (ATerm t, ATerm x_56 (ATerm))
{
  ATerm e_4;
  e_4 = t;
  {
    t = x_56(t);
    t = debug_0(t);
  }
  t = e_4;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm a_1 = NULL;
  a_1 = t;
  t = SSL_is_string(not_null(a_1));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm f_4 = t;
  int k_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(k_4);
    }
  else
    {
      t = f_4;
      {
        ATerm l_4 = t;
        int m_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, c_0);
            LocalPopChoice(m_4);
          }
        else
          {
            t = l_4;
            {
              ATerm w_1 = NULL,x_1 = NULL,y_1 = NULL;
              w_1 = t;
              v_1 :
              if(match_cons(w_1, sym_Path_1))
                {
                  x_1 = ATgetArgument(w_1, 0);
                  t = not_null(x_1);
                }
              else
                {
                  if(match_cons(w_1, sym_Var_1))
                    {
                      x_1 = ATgetArgument(w_1, 0);
                      {
                        t = not_null(x_1);
                        {
                          ATerm p_4 = t;
                          int q_4 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(q_4);
                            }
                          else
                            {
                              t = p_4;
                              {
                                ATerm d_0 (ATerm t)
                                {
                                  t = term_r_4;
                                  return(t);
                                }
                                t = debug_1(t, d_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(w_1, sym_Prefix_2))
                        {
                          x_1 = ATgetArgument(w_1, 0);
                          y_1 = ATgetArgument(w_1, 1);
                          {
                            ATerm d_2 = NULL,f_2 = NULL;
                            ATerm u_4;
                            u_4 = t;
                            {
                              ATerm e_2 = NULL;
                              t = not_null(x_1);
                              {
                                t = eval_config_0(t);
                                {
                                  e_2 = t;
                                  if(((d_2 != NULL) && (d_2 != e_2)))
                                    _fail(e_2);
                                  else
                                    d_2 = e_2;
                                }
                              }
                            }
                            t = u_4;
                            {
                              ATerm g_2 = NULL;
                              t = not_null(y_1);
                              {
                                t = eval_config_0(t);
                                {
                                  g_2 = t;
                                  if(((f_2 != NULL) && (f_2 != g_2)))
                                    _fail(g_2);
                                  else
                                    f_2 = g_2;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(d_2), not_null(f_2));
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
  ATerm o_2 = NULL;
  o_2 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_v_4, not_null(o_2));
    {
      t = table_get_0(t);
      {
        ATerm g_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm w_4;
            w_4 = t;
            {
              ATerm q_2 = NULL;
              ATerm r_2 = NULL;
              r_2 = t;
              if(((q_2 != NULL) && (q_2 != r_2)))
                _fail(r_2);
              else
                q_2 = r_2;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_v_4, not_null(o_2), not_null(q_2));
                t = table_put_0(t);
              }
            }
            t = w_4;
          }
          return(t);
        }
        t = try_1(t, g_0);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm d_75 (ATerm))
{
  ATerm x_4 = t;
  int y_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_75(t);
      LocalPopChoice(y_4);
    }
  else
    {
      t = x_4;
      {
      }
    }
  return(t);
}
ATerm call_out_4 (ATerm t, ATerm l_52 (ATerm), ATerm m_52 (ATerm), ATerm n_52 (ATerm), ATerm o_52 (ATerm))
{
  ATerm y_2 = NULL;
  ATerm a_3 = NULL,c_3 = NULL,e_3 = NULL;
  y_2 = t;
  {
    ATerm b_5;
    b_5 = t;
    {
      ATerm b_3 = NULL;
      t = l_52(t);
      {
        b_3 = t;
        if(((a_3 != NULL) && (a_3 != b_3)))
          _fail(b_3);
        else
          a_3 = b_3;
      }
    }
    t = b_5;
    {
      ATerm f_5;
      f_5 = t;
      {
        ATerm d_3 = NULL;
        t = n_52(t);
        {
          d_3 = t;
          if(((c_3 != NULL) && (c_3 != d_3)))
            _fail(d_3);
          else
            c_3 = d_3;
        }
      }
      t = f_5;
      {
        ATerm f_3 = NULL;
        t = m_52(t);
        {
          f_3 = t;
          if(((e_3 != NULL) && (e_3 != f_3)))
            _fail(f_3);
          else
            e_3 = f_3;
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_3), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(e_3)), not_null(c_3)), term_l_5), not_null(y_2)), term_k_5));
          {
            t = call_0(t);
            {
              t = n_52(t);
              t = o_52(t);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm m_3 = NULL,n_3 = NULL,o_3 = NULL;
  m_3 = t;
  l_3 :
  if(match_cons(m_3, sym__2))
    {
      n_3 = ATgetArgument(m_3, 0);
      o_3 = ATgetArgument(m_3, 1);
      t = SSL_call(not_null(n_3), not_null(o_3));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm m_5;
  m_5 = t;
  {
    ATerm t_3 = NULL;
    ATerm u_3 = NULL;
    u_3 = t;
    if(((t_3 != NULL) && (t_3 != u_3)))
      _fail(u_3);
    else
      t_3 = u_3;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_5, (ATerm) ATinsert(ATempty, not_null(t_3)));
      t = printnl_0(t);
    }
  }
  t = m_5;
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm j_54 (ATerm))
{
  ATerm h_0 (ATerm t)
  {
    ATerm o_5;
    o_5 = t;
    {
      ATerm x_3 = NULL;
      ATerm y_3 = NULL;
      t = term_t_5;
      {
        t = get_config_0(t);
        {
          y_3 = t;
          if(((x_3 != NULL) && (x_3 != y_3)))
            _fail(y_3);
          else
            x_3 = y_3;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_3), term_u_5);
        t = geq_0(t);
      }
    }
    t = o_5;
    t = j_54(t);
    return(t);
  }
  t = try_1(t, h_0);
  return(t);
}
ATerm rm_files_0 (ATerm t)
{
  ATerm b_4 = NULL;
  b_4 = t;
  {
    ATerm v_5;
    v_5 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_5, (ATerm) ATinsert(CheckATermList(not_null(b_4)), term_x_5));
      t = call_0(t);
    }
    t = v_5;
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm h_59 (ATerm), ATerm i_59 (ATerm))
{
  ATerm g_4 = NULL,i_4 = NULL;
  ATerm y_5;
  y_5 = t;
  {
    ATerm h_4 = NULL;
    t = h_59(t);
    {
      h_4 = t;
      if(((g_4 != NULL) && (g_4 != h_4)))
        _fail(h_4);
      else
        g_4 = h_4;
    }
  }
  t = y_5;
  {
    ATerm j_4 = NULL;
    t = i_59(t);
    {
      j_4 = t;
      if(((i_4 != NULL) && (i_4 != j_4)))
        _fail(j_4);
      else
        i_4 = j_4;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_4), not_null(i_4));
  }
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0 (ATerm t)
{
  ATerm n_4 = NULL;
  ATerm o_4 = NULL;
  t = term_z_5;
  {
    t = new_0(t);
    {
      o_4 = t;
      if(((n_4 != NULL) && (n_4 != o_4)))
        _fail(o_4);
      else
        n_4 = o_4;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(n_4), term_a_6);
    {
      t = conc_strings_0(t);
      {
        ATerm m_0 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, m_0);
      }
    }
  }
  return(t);
}
ATerm temp_file_1 (ATerm t, ATerm l_57 (ATerm))
{
  ATerm s_4 = NULL;
  ATerm f_6;
  f_6 = t;
  {
    ATerm t_4 = NULL;
    t = new_file_0(t);
    {
      t_4 = t;
      if(((s_4 != NULL) && (s_4 != t_4)))
        _fail(t_4);
      else
        s_4 = t_4;
    }
  }
  t = f_6;
  {
    ATerm n_0 (ATerm t)
    {
      t = not_null(s_4);
      return(t);
    }
    t = split_2(t, n_0, _id);
    {
      ATerm g_6 = t;
      int h_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_57(t);
          {
            ATerm l_6;
            l_6 = t;
            {
              t = (ATerm) ATinsert(ATempty, not_null(s_4));
              t = rm_files_0(t);
            }
            t = l_6;
          }
          LocalPopChoice(h_6);
        }
      else
        {
          t = g_6;
          {
            ATerm n_6;
            n_6 = t;
            {
              t = (ATerm) ATinsert(ATempty, not_null(s_4));
              t = rm_files_0(t);
            }
            t = n_6;
            _fail(t);
          }
        }
    }
  }
  return(t);
}
ATerm call_tmp_3 (ATerm t, ATerm i_52 (ATerm), ATerm j_52 (ATerm), ATerm k_52 (ATerm))
{
  ATerm a_5 = NULL;
  a_5 = t;
  {
    ATerm o_0 (ATerm t)
    {
      ATerm c_5 = NULL,d_5 = NULL,e_5 = NULL;
      c_5 = t;
      z_4 :
      if(match_cons(c_5, sym__2))
        {
          d_5 = ATgetArgument(c_5, 0);
          e_5 = ATgetArgument(c_5, 1);
          {
            ATerm g_5 = NULL,i_5 = NULL;
            ATerm q_6;
            q_6 = t;
            {
              ATerm h_5 = NULL;
              t = i_52(t);
              {
                h_5 = t;
                if(((g_5 != NULL) && (g_5 != h_5)))
                  _fail(h_5);
                else
                  g_5 = h_5;
              }
            }
            t = q_6;
            {
              ATerm j_5 = NULL;
              t = j_52(t);
              {
                j_5 = t;
                if(((i_5 != NULL) && (i_5 != j_5)))
                  _fail(j_5);
                else
                  i_5 = j_5;
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(g_5), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(i_5)), not_null(d_5)), term_l_5), not_null(a_5)), term_k_5));
                {
                  t = if_verbose5_1(t, debug_0);
                  {
                    t = call_0(t);
                    {
                      t = not_null(d_5);
                      t = k_52(t);
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
    t = temp_file_1(t, o_0);
  }
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm q_5 = NULL,r_5 = NULL,s_5 = NULL;
  q_5 = t;
  p_5 :
  if(match_cons(q_5, sym__2))
    {
      r_5 = ATgetArgument(q_5, 0);
      s_5 = ATgetArgument(q_5, 1);
      {
        t = not_null(r_5);
        {
          ATerm p_0 (ATerm t)
          {
            t = not_null(s_5);
            return(t);
          }
          t = at_end_1(t, p_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm q_42 (ATerm), ATerm r_42 (ATerm))
{
  ATerm c_6 = NULL,d_6 = NULL,e_6 = NULL;
  c_6 = t;
  b_6 :
  if(match_cons(c_6, sym__2))
    {
      d_6 = ATgetArgument(c_6, 0);
      e_6 = ATgetArgument(c_6, 1);
      {
        ATerm i_6 = NULL,k_6 = NULL;
        ATerm j_6 = NULL;
        t = SSLgetAnnotations(not_null(c_6));
        {
          j_6 = t;
          if(((i_6 != NULL) && (i_6 != j_6)))
            _fail(j_6);
          else
            i_6 = j_6;
        }
        {
          t = not_null(d_6);
          {
            ATerm m_6 = NULL;
            t = q_42(t);
            {
              k_6 = t;
              {
                t = not_null(e_6);
                {
                  ATerm o_6 = NULL;
                  t = r_42(t);
                  {
                    m_6 = t;
                    {
                      ATerm p_6 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(k_6), not_null(m_6)), not_null(i_6));
                      {
                        p_6 = t;
                        if(((o_6 != NULL) && (o_6 != p_6)))
                          _fail(p_6);
                        else
                          o_6 = p_6;
                      }
                      t = not_null(o_6);
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
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    t = conc_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm w_6 = NULL;
  w_6 = t;
  t = SSL_string_to_int(not_null(w_6));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm e_7 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL;
  e_7 = t;
  c_7 :
  if(match_string(e_7, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(e_7) == AT_LIST) && ((ATermList) e_7 != ATempty)))
        {
          f_7 = ATgetFirst((ATermList) e_7);
          g_7 = (ATerm) ATgetNext((ATermList) e_7);
          d_7 :
          if(((ATgetType(g_7) == AT_LIST) && ((ATermList) g_7 != ATempty)))
            {
              h_7 = ATgetFirst((ATermList) g_7);
              i_7 = (ATerm) ATgetNext((ATermList) g_7);
              {
                ATerm m_7 = NULL;
                ATerm r_6;
                r_6 = t;
                {
                  t = not_null(f_7);
                  t = j_0(t);
                }
                t = r_6;
                {
                  ATerm n_7 = NULL;
                  t = not_null(h_7);
                  {
                    t = k_0(t);
                    {
                      n_7 = t;
                      if(((m_7 != NULL) && (m_7 != n_7)))
                        _fail(n_7);
                      else
                        m_7 = n_7;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(i_7)), not_null(m_7));
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
  ATerm s_6 = t;
  int t_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_0 (ATerm t)
      {
        ATerm g_8 = NULL;
        g_8 = t;
        r_7 :
        if(!(match_string(g_8, "-i")))
          {
            if(!(match_string(g_8, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm r_0 (ATerm t)
      {
        ATerm j_8 = NULL;
        ATerm u_6;
        u_6 = t;
        {
          ATerm h_8 = NULL;
          ATerm i_8 = NULL;
          i_8 = t;
          if(((h_8 != NULL) && (h_8 != i_8)))
            _fail(i_8);
          else
            h_8 = i_8;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_k_5, not_null(h_8));
            t = set_config_0(t);
          }
        }
        t = u_6;
        {
          ATerm k_8 = NULL;
          k_8 = t;
          if(((j_8 != NULL) && (j_8 != k_8)))
            _fail(k_8);
          else
            j_8 = k_8;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(j_8));
        }
        return(t);
      }
      ATerm s_0 (ATerm t)
      {
        t = term_v_6;
        return(t);
      }
      t = ArgOption_3(t, q_0, r_0, s_0);
      LocalPopChoice(t_6);
    }
  else
    {
      t = s_6;
      {
        ATerm x_6 = t;
        int y_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_0 (ATerm t)
            {
              ATerm l_8 = NULL;
              l_8 = t;
              u_7 :
              if(!(match_string(l_8, "-o")))
                {
                  if(!(match_string(l_8, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm u_0 (ATerm t)
            {
              ATerm o_8 = NULL;
              ATerm z_6;
              z_6 = t;
              {
                ATerm m_8 = NULL;
                ATerm n_8 = NULL;
                n_8 = t;
                if(((m_8 != NULL) && (m_8 != n_8)))
                  _fail(n_8);
                else
                  m_8 = n_8;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_l_5, not_null(m_8));
                  t = set_config_0(t);
                }
              }
              t = z_6;
              {
                ATerm p_8 = NULL;
                p_8 = t;
                if(((o_8 != NULL) && (o_8 != p_8)))
                  _fail(p_8);
                else
                  o_8 = p_8;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(o_8));
              }
              return(t);
            }
            ATerm v_0 (ATerm t)
            {
              t = term_a_7;
              return(t);
            }
            t = ArgOption_3(t, t_0, u_0, v_0);
            LocalPopChoice(y_6);
          }
        else
          {
            t = x_6;
            {
              ATerm b_7 = t;
              int j_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_0 (ATerm t)
                  {
                    ATerm q_8 = NULL;
                    q_8 = t;
                    x_7 :
                    if(!(match_string(q_8, "-S")))
                      {
                        if(!(match_string(q_8, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm x_0 (ATerm t)
                  {
                    t = term_l_7;
                    t = set_config_0(t);
                    t = term_o_7;
                    return(t);
                  }
                  ATerm y_0 (ATerm t)
                  {
                    t = term_p_7;
                    return(t);
                  }
                  t = Option_3(t, w_0, x_0, y_0);
                  LocalPopChoice(j_7);
                }
              else
                {
                  t = b_7;
                  {
                    ATerm q_7 = t;
                    int s_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm z_0 (ATerm t)
                        {
                          ATerm r_8 = NULL;
                          r_8 = t;
                          y_7 :
                          if(!(match_string(r_8, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm b_1 (ATerm t)
                        {
                          ATerm u_8 = NULL;
                          ATerm t_7;
                          t_7 = t;
                          {
                            ATerm s_8 = NULL;
                            ATerm t_8 = NULL;
                            t = string_to_int_0(t);
                            {
                              t_8 = t;
                              if(((s_8 != NULL) && (s_8 != t_8)))
                                _fail(t_8);
                              else
                                s_8 = t_8;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_t_5, not_null(s_8));
                              t = set_config_0(t);
                            }
                          }
                          t = t_7;
                          {
                            ATerm v_8 = NULL;
                            v_8 = t;
                            if(((u_8 != NULL) && (u_8 != v_8)))
                              _fail(v_8);
                            else
                              u_8 = v_8;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(u_8));
                          }
                          return(t);
                        }
                        ATerm c_1 (ATerm t)
                        {
                          t = term_v_7;
                          return(t);
                        }
                        t = ArgOption_3(t, z_0, b_1, c_1);
                        LocalPopChoice(s_7);
                      }
                    else
                      {
                        t = q_7;
                        {
                          ATerm w_7 = t;
                          int z_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm d_1 (ATerm t)
                              {
                                ATerm w_8 = NULL;
                                w_8 = t;
                                b_8 :
                                if(!(match_string(w_8, "--keep")))
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              ATerm e_1 (ATerm t)
                              {
                                ATerm a_8;
                                a_8 = t;
                                {
                                  ATerm x_8 = NULL;
                                  ATerm y_8 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    y_8 = t;
                                    if(((x_8 != NULL) && (x_8 != y_8)))
                                      _fail(y_8);
                                    else
                                      x_8 = y_8;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_c_8, not_null(x_8));
                                    t = set_config_0(t);
                                  }
                                }
                                t = a_8;
                                return(t);
                              }
                              ATerm f_1 (ATerm t)
                              {
                                t = term_c_9;
                                return(t);
                              }
                              t = ArgOption_3(t, d_1, e_1, f_1);
                              LocalPopChoice(z_7);
                            }
                          else
                            {
                              t = w_7;
                              {
                                ATerm d_9 = t;
                                int e_9 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm g_1 (ATerm t)
                                    {
                                      ATerm z_8 = NULL;
                                      z_8 = t;
                                      d_8 :
                                      if(!(match_string(z_8, "-v")))
                                        {
                                          if(!(match_string(z_8, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm h_1 (ATerm t)
                                    {
                                      t = term_g_9;
                                      t = set_config_0(t);
                                      t = term_h_9;
                                      return(t);
                                    }
                                    ATerm i_1 (ATerm t)
                                    {
                                      t = term_i_9;
                                      return(t);
                                    }
                                    t = Option_3(t, g_1, h_1, i_1);
                                    LocalPopChoice(e_9);
                                  }
                                else
                                  {
                                    t = d_9;
                                    {
                                      ATerm j_9 = t;
                                      int l_9 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm j_1 (ATerm t)
                                          {
                                            ATerm a_9 = NULL;
                                            a_9 = t;
                                            e_8 :
                                            if(!(match_string(a_9, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm k_1 (ATerm t)
                                          {
                                            t = term_n_9;
                                            t = set_config_0(t);
                                            t = term_p_9;
                                            return(t);
                                          }
                                          ATerm l_1 (ATerm t)
                                          {
                                            t = term_q_9;
                                            return(t);
                                          }
                                          t = Option_3(t, j_1, k_1, l_1);
                                          LocalPopChoice(l_9);
                                        }
                                      else
                                        {
                                          t = j_9;
                                          {
                                            ATerm m_1 (ATerm t)
                                            {
                                              ATerm b_9 = NULL;
                                              b_9 = t;
                                              f_8 :
                                              if(!(match_string(b_9, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm n_1 (ATerm t)
                                            {
                                              t = term_s_9;
                                              t = set_config_0(t);
                                              t = term_t_9;
                                              return(t);
                                            }
                                            ATerm o_1 (ATerm t)
                                            {
                                              t = term_u_9;
                                              return(t);
                                            }
                                            t = Option_3(t, m_1, n_1, o_1);
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
    }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm k_9 = NULL;
  k_9 = t;
  t = SSL_table_destroy(not_null(k_9));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm o_9 = NULL;
  o_9 = t;
  t = SSL_exit(not_null(o_9));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm z_52 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm f_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm x_9 = NULL,y_9 = NULL,z_9 = NULL;
  z_9 = t;
  w_9 :
  if(((ATgetType(z_9) == AT_LIST) && ((ATermList) z_9 != ATempty)))
    {
      x_9 = ATgetFirst((ATermList) z_9);
      y_9 = (ATerm) ATgetNext((ATermList) z_9);
      {
        ATerm c_10 = NULL;
        t = not_null(y_9);
        {
          ATerm v_9;
          v_9 = t;
          {
            ATerm d_10 = NULL,f_10 = NULL,h_10 = NULL;
            ATerm a_10;
            a_10 = t;
            {
              ATerm e_10 = NULL;
              t = i_0(t);
              {
                e_10 = t;
                if(((d_10 != NULL) && (d_10 != e_10)))
                  _fail(e_10);
                else
                  d_10 = e_10;
              }
            }
            t = a_10;
            {
              ATerm g_10 = NULL;
              t = not_null(x_9);
              {
                t = f_0(t);
                {
                  g_10 = t;
                  if(((f_10 != NULL) && (f_10 != g_10)))
                    _fail(g_10);
                  else
                    f_10 = g_10;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(d_10)), not_null(f_10));
                {
                  h_10 = t;
                  if(((c_10 != NULL) && (c_10 != h_10)))
                    _fail(h_10);
                  else
                    c_10 = h_10;
                }
              }
            }
          }
          t = v_9;
          {
            ATerm p_1 (ATerm t)
            {
              t = not_null(c_10);
              return(t);
            }
            t = reverse_acc_2(t, f_0, p_1);
          }
        }
      }
    }
  else
    {
      if(((ATermList) z_9 == ATempty))
        {
          {
            t = term_z_5;
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
  ATerm q_1 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, q_1);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm y_52 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm e_44 (ATerm))
{
  ATerm s_10 = NULL,t_10 = NULL;
  s_10 = t;
  r_10 :
  if(match_cons(s_10, sym_Program_1))
    {
      t_10 = ATgetArgument(s_10, 0);
      {
        ATerm w_10 = NULL,y_10 = NULL;
        ATerm x_10 = NULL;
        t = SSLgetAnnotations(not_null(s_10));
        {
          x_10 = t;
          if(((w_10 != NULL) && (w_10 != x_10)))
            _fail(x_10);
          else
            w_10 = x_10;
        }
        {
          t = not_null(t_10);
          {
            ATerm a_11 = NULL;
            t = e_44(t);
            {
              y_10 = t;
              {
                ATerm b_11 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(y_10)), not_null(w_10));
                {
                  b_11 = t;
                  if(((a_11 != NULL) && (a_11 != b_11)))
                    _fail(b_11);
                  else
                    a_11 = b_11;
                }
                t = not_null(a_11);
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
  ATerm k_11 = NULL;
  ATerm r_1 (ATerm t)
  {
    ATerm s_1 (ATerm t)
    {
      ATerm l_11 = NULL;
      l_11 = t;
      if(((k_11 != NULL) && (k_11 != l_11)))
        _fail(l_11);
      else
        k_11 = l_11;
      return(t);
    }
    t = Program_1(t, s_1);
    return(t);
  }
  t = option_defined_1(t, r_1);
  {
    ATerm t_1 (ATerm t)
    {
      ATerm m_11 = NULL;
      ATerm n_11 = NULL;
      t = term_z_5;
      {
        ATerm u_1 (ATerm t)
        {
          t = not_null(k_11);
          return(t);
        }
        t = short_description_1(t, u_1);
        {
          t = concat_strings_0(t);
          {
            n_11 = t;
            if(((m_11 != NULL) && (m_11 != n_11)))
              _fail(n_11);
            else
              m_11 = n_11;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_5, (ATerm) ATinsert(ATempty, not_null(m_11)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, t_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_5, (ATerm) ATinsert(ATempty, term_b_10));
      {
        t = printnl_0(t);
        {
          t = term_k_10;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm z_1 (ATerm t)
                {
                  ATerm o_11 = NULL;
                  o_11 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_n_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_11)), term_l_10));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, z_1);
                {
                  ATerm a_2 (ATerm t)
                  {
                    ATerm q_11 = NULL;
                    ATerm r_11 = NULL;
                    t = term_z_5;
                    {
                      ATerm b_2 (ATerm t)
                      {
                        t = not_null(k_11);
                        return(t);
                      }
                      t = long_description_1(t, b_2);
                      {
                        t = concat_strings_0(t);
                        {
                          r_11 = t;
                          if(((q_11 != NULL) && (q_11 != r_11)))
                            _fail(r_11);
                          else
                            q_11 = r_11;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_n_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_11)), term_m_10));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, a_2);
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
ATerm Undefined_1 (ATerm t, ATerm f_44 (ATerm))
{
  ATerm b_12 = NULL,c_12 = NULL;
  b_12 = t;
  a_12 :
  if(match_cons(b_12, sym_Undefined_1))
    {
      c_12 = ATgetArgument(b_12, 0);
      {
        ATerm f_12 = NULL,h_12 = NULL;
        ATerm g_12 = NULL;
        t = SSLgetAnnotations(not_null(b_12));
        {
          g_12 = t;
          if(((f_12 != NULL) && (f_12 != g_12)))
            _fail(g_12);
          else
            f_12 = g_12;
        }
        {
          t = not_null(c_12);
          {
            ATerm j_12 = NULL;
            t = f_44(t);
            {
              h_12 = t;
              {
                ATerm k_12 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(h_12)), not_null(f_12));
                {
                  k_12 = t;
                  if(((j_12 != NULL) && (j_12 != k_12)))
                    _fail(k_12);
                  else
                    j_12 = k_12;
                }
                t = not_null(j_12);
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
ATerm option_defined_1 (ATerm t, ATerm d_54 (ATerm))
{
  t = fetch_1(t, d_54);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm t_12 = NULL;
  t_12 = t;
  s_12 :
  if(match_cons(t_12, sym_Help_0))
    {
      ATerm v_12 = NULL,x_12 = NULL;
      ATerm n_10;
      n_10 = t;
      {
        ATerm w_12 = NULL;
        t = SSLgetAnnotations(not_null(t_12));
        {
          w_12 = t;
          if(((v_12 != NULL) && (v_12 != w_12)))
            _fail(w_12);
          else
            v_12 = w_12;
        }
      }
      t = n_10;
      {
        ATerm y_12 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(v_12));
        {
          y_12 = t;
          if(((x_12 != NULL) && (x_12 != y_12)))
            _fail(y_12);
          else
            x_12 = y_12;
        }
        t = not_null(x_12);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL;
  e_13 = t;
  d_13 :
  if(match_cons(e_13, sym__2))
    {
      f_13 = ATgetArgument(e_13, 0);
      g_13 = ATgetArgument(e_13, 1);
      t = SSL_table_get(not_null(f_13), not_null(g_13));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL;
  n_13 = t;
  m_13 :
  if(match_cons(n_13, sym__3))
    {
      o_13 = ATgetArgument(n_13, 0);
      p_13 = ATgetArgument(n_13, 1);
      q_13 = ATgetArgument(n_13, 2);
      {
        ATerm o_10;
        o_10 = t;
        {
          ATerm u_13 = NULL;
          ATerm v_13 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_13), not_null(p_13));
          {
            ATerm p_10 = t;
            int q_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(q_10);
              }
            else
              {
                t = p_10;
                t = (ATerm) ATempty;
              }
            {
              v_13 = t;
              if(((u_13 != NULL) && (u_13 != v_13)))
                _fail(v_13);
              else
                u_13 = v_13;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(o_13), not_null(p_13), (ATerm) ATinsert(CheckATermList(not_null(u_13)), not_null(q_13)));
            t = table_put_0(t);
          }
        }
        t = o_10;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm d_53 (ATerm))
{
  ATerm z_13 = NULL;
  ATerm a_14 = NULL;
  t = term_z_5;
  {
    t = d_53(t);
    {
      a_14 = t;
      if(((z_13 != NULL) && (z_13 != a_14)))
        _fail(a_14);
      else
        z_13 = a_14;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_i_10, term_j_10, not_null(z_13));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm g_14 = NULL,h_14 = NULL,i_14 = NULL;
  g_14 = t;
  f_14 :
  if(match_string(g_14, "register-usage-info"))
    {
      t = register_usage_1(t, e_0);
    }
  else
    {
      if(((ATgetType(g_14) == AT_LIST) && ((ATermList) g_14 != ATempty)))
        {
          h_14 = ATgetFirst((ATermList) g_14);
          i_14 = (ATerm) ATgetNext((ATermList) g_14);
          {
            ATerm l_14 = NULL;
            ATerm u_10;
            u_10 = t;
            {
              t = not_null(h_14);
              t = a_0(t);
            }
            t = u_10;
            {
              ATerm m_14 = NULL;
              t = term_z_5;
              {
                t = b_0(t);
                {
                  m_14 = t;
                  if(((l_14 != NULL) && (l_14 != m_14)))
                    _fail(m_14);
                  else
                    l_14 = m_14;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(i_14)), not_null(l_14));
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
  ATerm c_2 (ATerm t)
  {
    ATerm r_14 = NULL;
    r_14 = t;
    q_14 :
    if(!(match_string(r_14, "--help")))
      {
        if(!(match_string(r_14, "-h")))
          {
            if(!(match_string(r_14, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm h_2 (ATerm t)
  {
    t = term_v_10;
    return(t);
  }
  ATerm i_2 (ATerm t)
  {
    t = term_z_10;
    return(t);
  }
  t = Option_3(t, c_2, h_2, i_2);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm u_14 = NULL,v_14 = NULL,w_14 = NULL;
  u_14 = t;
  t_14 :
  if(((ATgetType(u_14) == AT_LIST) && ((ATermList) u_14 != ATempty)))
    {
      v_14 = ATgetFirst((ATermList) u_14);
      w_14 = (ATerm) ATgetNext((ATermList) u_14);
      t = (ATerm) ATinsert(CheckATermList(not_null(w_14)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(v_14)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm c_15 = NULL,d_15 = NULL,e_15 = NULL;
  c_15 = t;
  b_15 :
  if(match_cons(c_15, sym__2))
    {
      d_15 = ATgetArgument(c_15, 0);
      e_15 = ATgetArgument(c_15, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_v_4, not_null(d_15), not_null(e_15));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm b_53 (ATerm))
{
  ATerm c_11;
  c_11 = t;
  {
    ATerm j_2 (ATerm t)
    {
      t = term_d_11;
      t = b_53(t);
      return(t);
    }
    t = try_1(t, j_2);
  }
  t = c_11;
  {
    ATerm k_2 (ATerm t)
    {
      ATerm m_15 = NULL;
      ATerm e_11;
      e_11 = t;
      {
        ATerm k_15 = NULL;
        ATerm l_15 = NULL;
        l_15 = t;
        if(((k_15 != NULL) && (k_15 != l_15)))
          _fail(l_15);
        else
          k_15 = l_15;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_f_11, not_null(k_15));
          t = set_config_0(t);
        }
      }
      t = e_11;
      {
        ATerm n_15 = NULL;
        n_15 = t;
        if(((m_15 != NULL) && (m_15 != n_15)))
          _fail(n_15);
        else
          m_15 = n_15;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(m_15));
      }
      return(t);
    }
    ATerm l_2 (ATerm t)
    {
      ATerm g_11 = t;
      int h_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_11 = t;
          int j_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(j_11);
            }
          else
            {
              t = i_11;
              {
                t = b_53(t);
                t = Cons_2(t, _id, l_2);
              }
            }
          LocalPopChoice(h_11);
        }
      else
        {
          t = g_11;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, k_2, l_2);
  }
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm a_53 (ATerm))
{
  ATerm s_15 = NULL;
  ATerm p_11;
  p_11 = t;
  {
    t = term_s_11;
    t = table_put_0(t);
  }
  t = p_11;
  {
    ATerm m_2 (ATerm t)
    {
      ATerm t_11 = t;
      int u_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_53(t);
          LocalPopChoice(u_11);
        }
      else
        {
          t = t_11;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, m_2);
    {
      ATerm n_2 (ATerm t)
      {
        ATerm v_11 = t;
        int w_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_k_7;
                t = exit_0(t);
              }
            }
            LocalPopChoice(w_11);
          }
        else
          {
            t = v_11;
            {
              ATerm p_2 (ATerm t)
              {
                ATerm s_2 (ATerm t)
                {
                  ATerm t_15 = NULL;
                  t_15 = t;
                  if(((s_15 != NULL) && (s_15 != t_15)))
                    _fail(t_15);
                  else
                    s_15 = t_15;
                  return(t);
                }
                t = Undefined_1(t, s_2);
                return(t);
              }
              t = option_defined_1(t, p_2);
              {
                ATerm x_11;
                x_11 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_n_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_15)), term_y_11));
                  t = printnl_0(t);
                }
                t = x_11;
                {
                  t = system_usage_0(t);
                  {
                    t = term_z_11;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, n_2);
      {
        ATerm d_12;
        d_12 = t;
        {
          t = term_i_10;
          t = table_destroy_0(t);
        }
        t = d_12;
      }
    }
  }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm x_15 = NULL;
  ATerm z_15 = NULL;
  x_15 = t;
  {
    ATerm e_12;
    e_12 = t;
    {
      ATerm a_16 = NULL;
      t = term_i_12;
      {
        a_16 = t;
        if(((z_15 != NULL) && (z_15 != a_16)))
          _fail(a_16);
        else
          z_15 = a_16;
      }
    }
    t = e_12;
    {
      t = SSL_open_file(not_null(x_15), not_null(z_15));
      t = SSL_close_file(not_null(x_15));
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm y_66 (ATerm))
{
  ATerm d_16 (ATerm t)
  {
    ATerm l_12 = t;
    int m_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, d_16);
        LocalPopChoice(m_12);
      }
    else
      {
        t = l_12;
        {
          t = Nil_0(t);
          t = y_66(t);
        }
      }
    return(t);
  }
  t = d_16(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm n_12 = t;
  int o_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(o_12);
    }
  else
    {
      t = n_12;
      {
        ATerm g_16 = NULL,h_16 = NULL,i_16 = NULL;
        g_16 = t;
        f_16 :
        if(((ATgetType(g_16) == AT_LIST) && ((ATermList) g_16 != ATempty)))
          {
            h_16 = ATgetFirst((ATermList) g_16);
            i_16 = (ATerm) ATgetNext((ATermList) g_16);
            {
              t = not_null(h_16);
              {
                ATerm t_2 (ATerm t)
                {
                  t = not_null(i_16);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, t_2);
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
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  {
    t = concat_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm s_66 (ATerm))
{
  ATerm n_16 (ATerm t)
  {
    ATerm p_12 = t;
    int q_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, s_66, _id);
        LocalPopChoice(q_12);
      }
    else
      {
        t = p_12;
        t = Cons_2(t, _id, n_16);
      }
    return(t);
  }
  t = n_16(t);
  return(t);
}
ATerm fetch_elem_1 (ATerm t, ATerm u_66 (ATerm))
{
  ATerm p_16 = NULL;
  ATerm u_2 (ATerm t)
  {
    ATerm q_16 = NULL;
    t = u_66(t);
    {
      q_16 = t;
      if(((p_16 != NULL) && (p_16 != q_16)))
        _fail(q_16);
      else
        p_16 = q_16;
    }
    return(t);
  }
  t = fetch_1(t, u_2);
  t = not_null(p_16);
  return(t);
}
ATerm find_config_file_2 (ATerm t, ATerm t_54 (ATerm), ATerm u_54 (ATerm))
{
  ATerm r_12 = t;
  int u_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_54(t);
      {
        ATerm v_2 (ATerm t)
        {
          ATerm u_16 = NULL,w_16 = NULL;
          ATerm z_12;
          z_12 = t;
          {
            ATerm v_16 = NULL;
            v_16 = t;
            if(((u_16 != NULL) && (u_16 != v_16)))
              _fail(v_16);
            else
              u_16 = v_16;
          }
          t = z_12;
          {
            ATerm x_16 = NULL;
            t = u_54(t);
            {
              x_16 = t;
              if(((w_16 != NULL) && (w_16 != x_16)))
                _fail(x_16);
              else
                w_16 = x_16;
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(w_16)), term_a_13), not_null(u_16));
              {
                t = concat_strings_0(t);
                t = file_exists_0(t);
              }
            }
          }
          return(t);
        }
        t = fetch_elem_1(t, v_2);
      }
      LocalPopChoice(u_12);
    }
  else
    {
      t = r_12;
      {
        t = term_b_13;
        {
          t = debug_1(t, u_54);
          _fail(t);
        }
      }
    }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL;
  ATerm c_13;
  c_13 = t;
  {
    ATerm f_17 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL;
    f_17 = t;
    b_17 :
    if(match_cons(f_17, sym__3))
      {
        g_17 = ATgetArgument(f_17, 0);
        h_17 = ATgetArgument(f_17, 1);
        i_17 = ATgetArgument(f_17, 2);
        {
          if(((c_17 != NULL) && (c_17 != g_17)))
            _fail(g_17);
          else
            c_17 = g_17;
          {
            if(((d_17 != NULL) && (d_17 != h_17)))
              _fail(h_17);
            else
              d_17 = h_17;
            {
              if(((e_17 != NULL) && (e_17 != i_17)))
                _fail(i_17);
              else
                e_17 = i_17;
              t = SSL_table_put(not_null(c_17), not_null(d_17), not_null(e_17));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = c_13;
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm o_17 = NULL;
  o_17 = t;
  n_17 :
  if(((ATermList) o_17 == ATempty))
    {
      {
        ATerm q_17 = NULL,s_17 = NULL;
        ATerm h_13;
        h_13 = t;
        {
          ATerm r_17 = NULL;
          t = SSLgetAnnotations(not_null(o_17));
          {
            r_17 = t;
            if(((q_17 != NULL) && (q_17 != r_17)))
              _fail(r_17);
            else
              q_17 = r_17;
          }
        }
        t = h_13;
        {
          ATerm t_17 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(q_17));
          {
            t_17 = t;
            if(((s_17 != NULL) && (s_17 != t_17)))
              _fail(t_17);
            else
              s_17 = t_17;
          }
          t = not_null(s_17);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm map_1 (ATerm t, ATerm j_66 (ATerm))
{
  ATerm d_18 (ATerm t)
  {
    ATerm i_13 = t;
    int j_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(j_13);
      }
    else
      {
        t = i_13;
        t = Cons_2(t, j_66, d_18);
      }
    return(t);
  }
  t = d_18(t);
  return(t);
}
ATerm table_putlist_0 (ATerm t)
{
  ATerm i_18 = NULL,n_18 = NULL,o_18 = NULL;
  i_18 = t;
  h_18 :
  if(match_cons(i_18, sym__2))
    {
      n_18 = ATgetArgument(i_18, 0);
      o_18 = ATgetArgument(i_18, 1);
      {
        t = not_null(o_18);
        {
          ATerm w_2 (ATerm t)
          {
            ATerm u_18 = NULL,v_18 = NULL,w_18 = NULL;
            u_18 = t;
            g_18 :
            if(match_cons(u_18, sym__2))
              {
                v_18 = ATgetArgument(u_18, 0);
                w_18 = ATgetArgument(u_18, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(n_18), not_null(v_18), not_null(w_18));
                  t = table_put_0(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, w_2);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm c_19 = NULL;
  c_19 = t;
  t = SSL_ReadFromFile(not_null(c_19));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL;
  h_19 = t;
  g_19 :
  if(match_cons(h_19, sym__2))
    {
      i_19 = ATgetArgument(h_19, 0);
      j_19 = ATgetArgument(h_19, 1);
      {
        ATerm k_13;
        k_13 = t;
        t = SSL_printnl(not_null(i_19), not_null(j_19));
        t = k_13;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm w_56 (ATerm))
{
  ATerm l_13;
  l_13 = t;
  {
    ATerm q_19 = NULL,s_19 = NULL;
    ATerm r_13;
    r_13 = t;
    {
      ATerm r_19 = NULL;
      t = w_56(t);
      {
        r_19 = t;
        if(((q_19 != NULL) && (q_19 != r_19)))
          _fail(r_19);
        else
          q_19 = r_19;
      }
    }
    t = r_13;
    {
      ATerm t_19 = NULL;
      t_19 = t;
      if(((s_19 != NULL) && (s_19 != t_19)))
        _fail(t_19);
      else
        s_19 = t_19;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_19)), not_null(q_19)));
        t = printnl_0(t);
      }
    }
  }
  t = l_13;
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm y_19 = NULL,b_20 = NULL,c_20 = NULL;
  y_19 = t;
  x_19 :
  if(match_cons(y_19, sym__2))
    {
      b_20 = ATgetArgument(y_19, 0);
      c_20 = ATgetArgument(y_19, 1);
      {
        ATerm s_13;
        s_13 = t;
        {
          ATerm t_13 = t;
          int w_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(b_20), not_null(c_20));
              LocalPopChoice(w_13);
            }
          else
            {
              t = t_13;
              t = SSL_gtr(not_null(b_20), not_null(c_20));
            }
        }
        t = s_13;
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
  ATerm m_20 = NULL;
  ATerm x_13 = t;
  int y_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL;
      n_20 = t;
      i_20 :
      if(match_cons(n_20, sym__2))
        {
          o_20 = ATgetArgument(n_20, 0);
          p_20 = ATgetArgument(n_20, 1);
          {
            if(((m_20 != NULL) && (m_20 != o_20)))
              _fail(o_20);
            else
              m_20 = o_20;
            if(((m_20 != NULL) && (m_20 != p_20)))
              _fail(p_20);
            else
              m_20 = p_20;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(y_13);
    }
  else
    {
      t = x_13;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm g_54 (ATerm))
{
  ATerm x_2 (ATerm t)
  {
    ATerm b_14;
    b_14 = t;
    {
      ATerm s_20 = NULL;
      ATerm t_20 = NULL;
      t = term_t_5;
      {
        t = get_config_0(t);
        {
          t_20 = t;
          if(((s_20 != NULL) && (s_20 != t_20)))
            _fail(t_20);
          else
            s_20 = t_20;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_20), term_c_14);
        t = geq_0(t);
      }
    }
    t = b_14;
    t = g_54(t);
    return(t);
  }
  t = try_1(t, x_2);
  return(t);
}
ATerm import_config_file_1 (ATerm t, ATerm d_55 (ATerm))
{
  ATerm d_14;
  d_14 = t;
  {
    ATerm w_20 = NULL;
    t = d_55(t);
    {
      ATerm z_2 (ATerm t)
      {
        ATerm g_3 (ATerm t)
        {
          t = term_e_14;
          return(t);
        }
        t = debug_1(t, g_3);
        return(t);
      }
      t = if_verbose2_1(t, z_2);
      {
        t = ReadFromFile_0(t);
        {
          ATerm f_21 = NULL;
          f_21 = t;
          if(((w_20 != NULL) && (w_20 != f_21)))
            _fail(f_21);
          else
            w_20 = f_21;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_v_4, not_null(w_20));
            t = table_putlist_0(t);
          }
        }
      }
    }
  }
  t = d_14;
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm i_21 = NULL;
  i_21 = t;
  t = SSL_implode_string(not_null(i_21));
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm m_21 = NULL;
  m_21 = t;
  t = SSL_explode_string(not_null(m_21));
  return(t);
}
ATerm get_path_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm j_14 = t;
    int k_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_21 (ATerm t)
        {
          ATerm n_14 = t;
          int o_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, t_21);
              LocalPopChoice(o_14);
            }
          else
            {
              t = n_14;
              {
                ATerm h_3 (ATerm t)
                {
                  ATerm s_21 = NULL;
                  s_21 = t;
                  r_21 :
                  if(!(match_int(s_21, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                ATerm i_3 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = Cons_2(t, h_3, i_3);
              }
            }
          return(t);
        }
        t = t_21(t);
        LocalPopChoice(k_14);
      }
    else
      {
        t = j_14;
        t = (ATerm) ATempty;
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm y_48 (ATerm), ATerm z_48 (ATerm))
{
  ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL;
  c_22 = t;
  b_22 :
  if(((ATgetType(c_22) == AT_LIST) && ((ATermList) c_22 != ATempty)))
    {
      d_22 = ATgetFirst((ATermList) c_22);
      e_22 = (ATerm) ATgetNext((ATermList) c_22);
      {
        ATerm n_22 = NULL,p_22 = NULL;
        ATerm o_22 = NULL;
        t = SSLgetAnnotations(not_null(c_22));
        {
          o_22 = t;
          if(((n_22 != NULL) && (n_22 != o_22)))
            _fail(o_22);
          else
            n_22 = o_22;
        }
        {
          t = not_null(d_22);
          {
            ATerm r_22 = NULL;
            t = y_48(t);
            {
              p_22 = t;
              {
                t = not_null(e_22);
                {
                  ATerm t_22 = NULL;
                  t = z_48(t);
                  {
                    r_22 = t;
                    {
                      ATerm u_22 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(r_22)), not_null(p_22)), not_null(n_22));
                      {
                        u_22 = t;
                        if(((t_22 != NULL) && (t_22 != u_22)))
                          _fail(u_22);
                        else
                          t_22 = u_22;
                      }
                      t = not_null(t_22);
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
ATerm astratego2text_0 (ATerm t)
{
  ATerm g_23 = NULL,h_23 = NULL,k_23 = NULL,m_23 = NULL;
  ATerm p_14;
  p_14 = t;
  {
    ATerm j_3 (ATerm t)
    {
      ATerm i_23 = NULL;
      ATerm j_23 = NULL;
      i_23 = t;
      {
        if(((g_23 != NULL) && (g_23 != i_23)))
          _fail(i_23);
        else
          g_23 = i_23;
        {
          t = get_path_0(t);
          {
            j_23 = t;
            if(((h_23 != NULL) && (h_23 != j_23)))
              _fail(j_23);
            else
              h_23 = j_23;
          }
        }
      }
      return(t);
    }
    t = Cons_2(t, j_3, _id);
  }
  t = p_14;
  {
    ATerm s_14;
    s_14 = t;
    {
      ATerm l_23 = NULL;
      t = get_conf_pkgdatadir();
      {
        l_23 = t;
        if(((k_23 != NULL) && (k_23 != l_23)))
          _fail(l_23);
        else
          k_23 = l_23;
      }
    }
    t = s_14;
    {
      ATerm k_3 (ATerm t)
      {
        ATerm p_3 (ATerm t)
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_23)), not_null(h_23));
          return(t);
        }
        ATerm q_3 (ATerm t)
        {
          t = term_x_14;
          return(t);
        }
        t = find_config_file_2(t, p_3, q_3);
        return(t);
      }
      t = import_config_file_1(t, k_3);
      {
        t = parse_options_1(t, io_options_0);
        {
          t = term_k_5;
          {
            t = get_config_0(t);
            {
              ATerm y_14;
              y_14 = t;
              {
                ATerm p_23 = NULL;
                ATerm z_14 = t;
                int a_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_l_5;
                    t = get_config_0(t);
                    LocalPopChoice(a_15);
                  }
                else
                  {
                    t = z_14;
                    {
                      ATerm n_23 = NULL;
                      ATerm o_23 = NULL;
                      o_23 = t;
                      if(((n_23 != NULL) && (n_23 != o_23)))
                        _fail(o_23);
                      else
                        n_23 = o_23;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(n_23), term_f_15);
                        t = conc_strings_0(t);
                      }
                    }
                  }
                {
                  p_23 = t;
                  if(((m_23 != NULL) && (m_23 != p_23)))
                    _fail(p_23);
                  else
                    m_23 = p_23;
                }
              }
              t = y_14;
              {
                ATerm r_3 (ATerm t)
                {
                  t = term_g_15;
                  t = get_config_0(t);
                  return(t);
                }
                ATerm s_3 (ATerm t)
                {
                  ATerm q_23 = NULL;
                  ATerm r_23 = NULL;
                  t = term_h_15;
                  {
                    t = get_config_0(t);
                    {
                      r_23 = t;
                      if(((q_23 != NULL) && (q_23 != r_23)))
                        _fail(r_23);
                      else
                        q_23 = r_23;
                    }
                  }
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_23)), term_i_15);
                  return(t);
                }
                ATerm v_3 (ATerm t)
                {
                  ATerm w_3 (ATerm t)
                  {
                    t = term_j_15;
                    t = get_config_0(t);
                    return(t);
                  }
                  ATerm z_3 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  ATerm a_4 (ATerm t)
                  {
                    t = not_null(m_23);
                    return(t);
                  }
                  t = call_out_4(t, w_3, z_3, a_4, _id);
                  return(t);
                }
                t = call_tmp_3(t, r_3, s_3, v_3);
                {
                  ATerm c_4 (ATerm t)
                  {
                    ATerm o_15 = t;
                    int p_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_q_15;
                        t = get_config_0(t);
                        LocalPopChoice(p_15);
                      }
                    else
                      {
                        t = o_15;
                        {
                          ATerm d_4 (ATerm t)
                          {
                            t = not_null(g_23);
                            return(t);
                          }
                          t = say_1(t, d_4);
                        }
                      }
                    return(t);
                  }
                  t = try_1(t, c_4);
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
ATerm main_0 (ATerm t)
{
  t = astratego2text_0(t);
  return(t);
}
