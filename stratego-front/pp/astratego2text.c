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
ATerm term_a_15;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_m_14;
ATerm term_j_14;
ATerm term_d_14;
ATerm term_q_13;
ATerm term_m_13;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_q_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_z_10;
ATerm term_o_10;
ATerm term_j_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_u_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_w_7;
ATerm term_v_7;
ATerm term_q_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_b_7;
ATerm term_a_7;
ATerm term_x_6;
ATerm term_s_6;
ATerm term_x_5;
ATerm term_w_5;
ATerm term_u_5;
ATerm term_t_5;
ATerm term_n_5;
ATerm term_m_5;
ATerm term_k_5;
ATerm term_b_5;
ATerm term_y_4;
ATerm term_q_4;
ATerm term_m_4;
void init_constant_terms (void)
{
  ATprotect(&(term_m_4));
  term_m_4 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_q_4));
  term_q_4 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_4));
  term_y_4 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_5));
  term_b_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_k_5));
  term_k_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_m_5));
  term_m_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_n_5));
  term_n_5 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(ATmakeSymbol("rm", 0, ATtrue));
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-f", 0, ATtrue));
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(sym__2, term_m_5, term_a_7);
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_7);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(sym__2, term_v_7, term_w_5);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(sym__2, term_z_8, term_w_5);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(sym__2, term_d_9, term_w_5);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(sym__2, term_m_9, term_n_9);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym__3, term_m_9, term_n_9, (ATerm) ATempty);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("importing: ", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("astratego2text.config", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol(".txt", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-S", 0, ATtrue));
}
ATerm say_1 (ATerm, ATerm i_56 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm n_74 (ATerm));
ATerm call_out_4 (ATerm, ATerm c_52 (ATerm), ATerm d_52 (ATerm), ATerm e_52 (ATerm), ATerm f_52 (ATerm));
ATerm call_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm u_53 (ATerm));
ATerm rm_files_0 (ATerm);
ATerm split_2 (ATerm, ATerm s_58 (ATerm), ATerm t_58 (ATerm));
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm temp_file_1 (ATerm, ATerm w_56 (ATerm));
ATerm call_tmp_3 (ATerm, ATerm z_51 (ATerm), ATerm a_52 (ATerm), ATerm b_52 (ATerm));
ATerm conc_0 (ATerm);
ATerm _2 (ATerm, ATerm h_42 (ATerm), ATerm i_42 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm q_52 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm f_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm p_52 (ATerm));
ATerm Program_1 (ATerm, ATerm v_43 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm w_43 (ATerm));
ATerm option_defined_1 (ATerm, ATerm o_53 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm u_52 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm s_52 (ATerm));
ATerm parse_options_1 (ATerm, ATerm r_52 (ATerm));
ATerm file_exists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm i_66 (ATerm));
ATerm concat_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm c_66 (ATerm));
ATerm fetch_elem_1 (ATerm, ATerm e_66 (ATerm));
ATerm find_config_file_2 (ATerm, ATerm e_54 (ATerm), ATerm f_54 (ATerm));
ATerm table_put_0 (ATerm);
ATerm Nil_0 (ATerm);
ATerm map_1 (ATerm, ATerm t_65 (ATerm));
ATerm table_putlist_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm h_56 (ATerm));
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm r_53 (ATerm));
ATerm import_config_file_1 (ATerm, ATerm o_54 (ATerm));
ATerm implode_string_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm get_path_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm p_48 (ATerm), ATerm q_48 (ATerm));
ATerm astratego2text_0 (ATerm);
ATerm main_0 (ATerm);
ATerm say_1 (ATerm t, ATerm i_56 (ATerm))
{
  ATerm a_4;
  a_4 = t;
  {
    t = i_56(t);
    t = debug_0(t);
  }
  t = a_4;
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
  ATerm c_4 = t;
  int d_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(d_4);
    }
  else
    {
      t = c_4;
      {
        ATerm e_4 = t;
        int f_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, c_0);
            LocalPopChoice(f_4);
          }
        else
          {
            t = e_4;
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
                          ATerm k_4 = t;
                          int l_4 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(l_4);
                            }
                          else
                            {
                              t = k_4;
                              {
                                ATerm d_0 (ATerm t)
                                {
                                  t = term_m_4;
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
                            ATerm p_4;
                            p_4 = t;
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
                            t = p_4;
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
    t = (ATerm) ATmakeAppl(sym__2, term_q_4, not_null(o_2));
    {
      t = table_get_0(t);
      {
        ATerm g_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm r_4;
            r_4 = t;
            {
              ATerm q_2 = NULL;
              ATerm r_2 = NULL;
              r_2 = t;
              if(((q_2 != NULL) && (q_2 != r_2)))
                _fail(r_2);
              else
                q_2 = r_2;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_q_4, not_null(o_2), not_null(q_2));
                t = table_put_0(t);
              }
            }
            t = r_4;
          }
          return(t);
        }
        t = try_1(t, g_0);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm n_74 (ATerm))
{
  ATerm u_4 = t;
  int v_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_74(t);
      LocalPopChoice(v_4);
    }
  else
    {
      t = u_4;
      {
      }
    }
  return(t);
}
ATerm call_out_4 (ATerm t, ATerm c_52 (ATerm), ATerm d_52 (ATerm), ATerm e_52 (ATerm), ATerm f_52 (ATerm))
{
  ATerm y_2 = NULL;
  ATerm a_3 = NULL,c_3 = NULL,e_3 = NULL;
  y_2 = t;
  {
    ATerm w_4;
    w_4 = t;
    {
      ATerm b_3 = NULL;
      t = c_52(t);
      {
        b_3 = t;
        if(((a_3 != NULL) && (a_3 != b_3)))
          _fail(b_3);
        else
          a_3 = b_3;
      }
    }
    t = w_4;
    {
      ATerm x_4;
      x_4 = t;
      {
        ATerm d_3 = NULL;
        t = e_52(t);
        {
          d_3 = t;
          if(((c_3 != NULL) && (c_3 != d_3)))
            _fail(d_3);
          else
            c_3 = d_3;
        }
      }
      t = x_4;
      {
        ATerm f_3 = NULL;
        t = d_52(t);
        {
          f_3 = t;
          if(((e_3 != NULL) && (e_3 != f_3)))
            _fail(f_3);
          else
            e_3 = f_3;
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_3), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(e_3)), not_null(c_3)), term_b_5), not_null(y_2)), term_y_4));
          {
            t = call_0(t);
            {
              t = e_52(t);
              t = f_52(t);
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
  ATerm f_5;
  f_5 = t;
  {
    ATerm t_3 = NULL;
    ATerm u_3 = NULL;
    u_3 = t;
    if(((t_3 != NULL) && (t_3 != u_3)))
      _fail(u_3);
    else
      t_3 = u_3;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_5, (ATerm) ATinsert(ATempty, not_null(t_3)));
      t = printnl_0(t);
    }
  }
  t = f_5;
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm u_53 (ATerm))
{
  ATerm h_0 (ATerm t)
  {
    ATerm l_5;
    l_5 = t;
    {
      ATerm x_3 = NULL;
      ATerm y_3 = NULL;
      t = term_m_5;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_3), term_n_5);
        t = geq_0(t);
      }
    }
    t = l_5;
    t = u_53(t);
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
    ATerm o_5;
    o_5 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_5, (ATerm) ATinsert(CheckATermList(not_null(b_4)), term_u_5));
      t = call_0(t);
    }
    t = o_5;
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm s_58 (ATerm), ATerm t_58 (ATerm))
{
  ATerm g_4 = NULL,i_4 = NULL;
  ATerm v_5;
  v_5 = t;
  {
    ATerm h_4 = NULL;
    t = s_58(t);
    {
      h_4 = t;
      if(((g_4 != NULL) && (g_4 != h_4)))
        _fail(h_4);
      else
        g_4 = h_4;
    }
  }
  t = v_5;
  {
    ATerm j_4 = NULL;
    t = t_58(t);
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
  t = term_w_5;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(n_4), term_x_5);
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
ATerm temp_file_1 (ATerm t, ATerm w_56 (ATerm))
{
  ATerm s_4 = NULL;
  ATerm y_5;
  y_5 = t;
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
  t = y_5;
  {
    ATerm n_0 (ATerm t)
    {
      t = not_null(s_4);
      return(t);
    }
    t = split_2(t, n_0, _id);
    {
      ATerm z_5 = t;
      int a_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_56(t);
          {
            ATerm f_6;
            f_6 = t;
            {
              t = (ATerm) ATinsert(ATempty, not_null(s_4));
              t = rm_files_0(t);
            }
            t = f_6;
          }
          LocalPopChoice(a_6);
        }
      else
        {
          t = z_5;
          {
            ATerm g_6;
            g_6 = t;
            {
              t = (ATerm) ATinsert(ATempty, not_null(s_4));
              t = rm_files_0(t);
            }
            t = g_6;
            _fail(t);
          }
        }
    }
  }
  return(t);
}
ATerm call_tmp_3 (ATerm t, ATerm z_51 (ATerm), ATerm a_52 (ATerm), ATerm b_52 (ATerm))
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
            ATerm h_6;
            h_6 = t;
            {
              ATerm h_5 = NULL;
              t = z_51(t);
              {
                h_5 = t;
                if(((g_5 != NULL) && (g_5 != h_5)))
                  _fail(h_5);
                else
                  g_5 = h_5;
              }
            }
            t = h_6;
            {
              ATerm j_5 = NULL;
              t = a_52(t);
              {
                j_5 = t;
                if(((i_5 != NULL) && (i_5 != j_5)))
                  _fail(j_5);
                else
                  i_5 = j_5;
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(g_5), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(i_5)), not_null(d_5)), term_b_5), not_null(a_5)), term_y_4));
                {
                  t = if_verbose5_1(t, debug_0);
                  {
                    t = call_0(t);
                    {
                      t = not_null(d_5);
                      t = b_52(t);
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
ATerm _2 (ATerm t, ATerm h_42 (ATerm), ATerm i_42 (ATerm))
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
            t = h_42(t);
            {
              k_6 = t;
              {
                t = not_null(e_6);
                {
                  ATerm o_6 = NULL;
                  t = i_42(t);
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
                ATerm l_6;
                l_6 = t;
                {
                  t = not_null(f_7);
                  t = j_0(t);
                }
                t = l_6;
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
  ATerm n_6 = t;
  int q_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_0 (ATerm t)
      {
        ATerm e_8 = NULL;
        e_8 = t;
        r_7 :
        if(!(match_string(e_8, "-i")))
          {
            if(!(match_string(e_8, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm r_0 (ATerm t)
      {
        ATerm h_8 = NULL;
        ATerm r_6;
        r_6 = t;
        {
          ATerm f_8 = NULL;
          ATerm g_8 = NULL;
          g_8 = t;
          if(((f_8 != NULL) && (f_8 != g_8)))
            _fail(g_8);
          else
            f_8 = g_8;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_y_4, not_null(f_8));
            t = set_config_0(t);
          }
        }
        t = r_6;
        {
          ATerm i_8 = NULL;
          i_8 = t;
          if(((h_8 != NULL) && (h_8 != i_8)))
            _fail(i_8);
          else
            h_8 = i_8;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(h_8));
        }
        return(t);
      }
      ATerm s_0 (ATerm t)
      {
        t = term_s_6;
        return(t);
      }
      t = ArgOption_3(t, q_0, r_0, s_0);
      LocalPopChoice(q_6);
    }
  else
    {
      t = n_6;
      {
        ATerm t_6 = t;
        int u_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_0 (ATerm t)
            {
              ATerm j_8 = NULL;
              j_8 = t;
              u_7 :
              if(!(match_string(j_8, "-o")))
                {
                  if(!(match_string(j_8, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm u_0 (ATerm t)
            {
              ATerm m_8 = NULL;
              ATerm v_6;
              v_6 = t;
              {
                ATerm k_8 = NULL;
                ATerm l_8 = NULL;
                l_8 = t;
                if(((k_8 != NULL) && (k_8 != l_8)))
                  _fail(l_8);
                else
                  k_8 = l_8;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_b_5, not_null(k_8));
                  t = set_config_0(t);
                }
              }
              t = v_6;
              {
                ATerm n_8 = NULL;
                n_8 = t;
                if(((m_8 != NULL) && (m_8 != n_8)))
                  _fail(n_8);
                else
                  m_8 = n_8;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(m_8));
              }
              return(t);
            }
            ATerm v_0 (ATerm t)
            {
              t = term_x_6;
              return(t);
            }
            t = ArgOption_3(t, t_0, u_0, v_0);
            LocalPopChoice(u_6);
          }
        else
          {
            t = t_6;
            {
              ATerm y_6 = t;
              int z_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_0 (ATerm t)
                  {
                    ATerm o_8 = NULL;
                    o_8 = t;
                    x_7 :
                    if(!(match_string(o_8, "-S")))
                      {
                        if(!(match_string(o_8, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm x_0 (ATerm t)
                  {
                    t = term_b_7;
                    t = set_config_0(t);
                    t = term_j_7;
                    return(t);
                  }
                  ATerm y_0 (ATerm t)
                  {
                    t = term_k_7;
                    return(t);
                  }
                  t = Option_3(t, w_0, x_0, y_0);
                  LocalPopChoice(z_6);
                }
              else
                {
                  t = y_6;
                  {
                    ATerm l_7 = t;
                    int o_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm z_0 (ATerm t)
                        {
                          ATerm p_8 = NULL;
                          p_8 = t;
                          y_7 :
                          if(!(match_string(p_8, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm b_1 (ATerm t)
                        {
                          ATerm s_8 = NULL;
                          ATerm p_7;
                          p_7 = t;
                          {
                            ATerm q_8 = NULL;
                            ATerm r_8 = NULL;
                            t = string_to_int_0(t);
                            {
                              r_8 = t;
                              if(((q_8 != NULL) && (q_8 != r_8)))
                                _fail(r_8);
                              else
                                q_8 = r_8;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_m_5, not_null(q_8));
                              t = set_config_0(t);
                            }
                          }
                          t = p_7;
                          {
                            ATerm t_8 = NULL;
                            t_8 = t;
                            if(((s_8 != NULL) && (s_8 != t_8)))
                              _fail(t_8);
                            else
                              s_8 = t_8;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(s_8));
                          }
                          return(t);
                        }
                        ATerm c_1 (ATerm t)
                        {
                          t = term_q_7;
                          return(t);
                        }
                        t = ArgOption_3(t, z_0, b_1, c_1);
                        LocalPopChoice(o_7);
                      }
                    else
                      {
                        t = l_7;
                        {
                          ATerm s_7 = t;
                          int t_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm d_1 (ATerm t)
                              {
                                ATerm u_8 = NULL;
                                u_8 = t;
                                b_8 :
                                if(!(match_string(u_8, "-v")))
                                  {
                                    if(!(match_string(u_8, "--version")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm e_1 (ATerm t)
                              {
                                t = term_w_7;
                                t = set_config_0(t);
                                t = term_z_7;
                                return(t);
                              }
                              ATerm f_1 (ATerm t)
                              {
                                t = term_a_8;
                                return(t);
                              }
                              t = Option_3(t, d_1, e_1, f_1);
                              LocalPopChoice(t_7);
                            }
                          else
                            {
                              t = s_7;
                              {
                                ATerm x_8 = t;
                                int y_8 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm g_1 (ATerm t)
                                    {
                                      ATerm v_8 = NULL;
                                      v_8 = t;
                                      c_8 :
                                      if(!(match_string(v_8, "-b")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm h_1 (ATerm t)
                                    {
                                      t = term_a_9;
                                      t = set_config_0(t);
                                      t = term_b_9;
                                      return(t);
                                    }
                                    ATerm i_1 (ATerm t)
                                    {
                                      t = term_c_9;
                                      return(t);
                                    }
                                    t = Option_3(t, g_1, h_1, i_1);
                                    LocalPopChoice(y_8);
                                  }
                                else
                                  {
                                    t = x_8;
                                    {
                                      ATerm j_1 (ATerm t)
                                      {
                                        ATerm w_8 = NULL;
                                        w_8 = t;
                                        d_8 :
                                        if(!(match_string(w_8, "-s")))
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      ATerm k_1 (ATerm t)
                                      {
                                        t = term_f_9;
                                        t = set_config_0(t);
                                        t = term_g_9;
                                        return(t);
                                      }
                                      ATerm l_1 (ATerm t)
                                      {
                                        t = term_h_9;
                                        return(t);
                                      }
                                      t = Option_3(t, j_1, k_1, l_1);
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
  ATerm e_9 = NULL;
  e_9 = t;
  t = SSL_table_destroy(not_null(e_9));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm i_9 = NULL;
  i_9 = t;
  t = SSL_exit(not_null(i_9));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm q_52 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm f_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm r_9 = NULL,s_9 = NULL,t_9 = NULL;
  t_9 = t;
  q_9 :
  if(((ATgetType(t_9) == AT_LIST) && ((ATermList) t_9 != ATempty)))
    {
      r_9 = ATgetFirst((ATermList) t_9);
      s_9 = (ATerm) ATgetNext((ATermList) t_9);
      {
        ATerm w_9 = NULL;
        t = not_null(s_9);
        {
          ATerm j_9;
          j_9 = t;
          {
            ATerm x_9 = NULL,z_9 = NULL,b_10 = NULL;
            ATerm k_9;
            k_9 = t;
            {
              ATerm y_9 = NULL;
              t = i_0(t);
              {
                y_9 = t;
                if(((x_9 != NULL) && (x_9 != y_9)))
                  _fail(y_9);
                else
                  x_9 = y_9;
              }
            }
            t = k_9;
            {
              ATerm a_10 = NULL;
              t = not_null(r_9);
              {
                t = f_0(t);
                {
                  a_10 = t;
                  if(((z_9 != NULL) && (z_9 != a_10)))
                    _fail(a_10);
                  else
                    z_9 = a_10;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(x_9)), not_null(z_9));
                {
                  b_10 = t;
                  if(((w_9 != NULL) && (w_9 != b_10)))
                    _fail(b_10);
                  else
                    w_9 = b_10;
                }
              }
            }
          }
          t = j_9;
          {
            ATerm m_1 (ATerm t)
            {
              t = not_null(w_9);
              return(t);
            }
            t = reverse_acc_2(t, f_0, m_1);
          }
        }
      }
    }
  else
    {
      if(((ATermList) t_9 == ATempty))
        {
          {
            t = term_w_5;
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
  ATerm n_1 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, n_1);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm p_52 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm v_43 (ATerm))
{
  ATerm m_10 = NULL,n_10 = NULL;
  m_10 = t;
  l_10 :
  if(match_cons(m_10, sym_Program_1))
    {
      n_10 = ATgetArgument(m_10, 0);
      {
        ATerm q_10 = NULL,s_10 = NULL;
        ATerm r_10 = NULL;
        t = SSLgetAnnotations(not_null(m_10));
        {
          r_10 = t;
          if(((q_10 != NULL) && (q_10 != r_10)))
            _fail(r_10);
          else
            q_10 = r_10;
        }
        {
          t = not_null(n_10);
          {
            ATerm u_10 = NULL;
            t = v_43(t);
            {
              s_10 = t;
              {
                ATerm v_10 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(s_10)), not_null(q_10));
                {
                  v_10 = t;
                  if(((u_10 != NULL) && (u_10 != v_10)))
                    _fail(v_10);
                  else
                    u_10 = v_10;
                }
                t = not_null(u_10);
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
  ATerm e_11 = NULL;
  ATerm o_1 (ATerm t)
  {
    ATerm p_1 (ATerm t)
    {
      ATerm f_11 = NULL;
      f_11 = t;
      if(((e_11 != NULL) && (e_11 != f_11)))
        _fail(f_11);
      else
        e_11 = f_11;
      return(t);
    }
    t = Program_1(t, p_1);
    return(t);
  }
  t = option_defined_1(t, o_1);
  {
    ATerm q_1 (ATerm t)
    {
      ATerm g_11 = NULL;
      ATerm h_11 = NULL;
      t = term_w_5;
      {
        ATerm r_1 (ATerm t)
        {
          t = not_null(e_11);
          return(t);
        }
        t = short_description_1(t, r_1);
        {
          t = concat_strings_0(t);
          {
            h_11 = t;
            if(((g_11 != NULL) && (g_11 != h_11)))
              _fail(h_11);
            else
              g_11 = h_11;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_5, (ATerm) ATinsert(ATempty, not_null(g_11)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, q_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_5, (ATerm) ATinsert(ATempty, term_l_9));
      {
        t = printnl_0(t);
        {
          t = term_o_9;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm s_1 (ATerm t)
                {
                  ATerm i_11 = NULL;
                  i_11 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_k_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_11)), term_p_9));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, s_1);
                {
                  ATerm t_1 (ATerm t)
                  {
                    ATerm k_11 = NULL;
                    ATerm l_11 = NULL;
                    t = term_w_5;
                    {
                      ATerm u_1 (ATerm t)
                      {
                        t = not_null(e_11);
                        return(t);
                      }
                      t = long_description_1(t, u_1);
                      {
                        t = concat_strings_0(t);
                        {
                          l_11 = t;
                          if(((k_11 != NULL) && (k_11 != l_11)))
                            _fail(l_11);
                          else
                            k_11 = l_11;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_k_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_11)), term_u_9));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, t_1);
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
ATerm Undefined_1 (ATerm t, ATerm w_43 (ATerm))
{
  ATerm v_11 = NULL,w_11 = NULL;
  v_11 = t;
  u_11 :
  if(match_cons(v_11, sym_Undefined_1))
    {
      w_11 = ATgetArgument(v_11, 0);
      {
        ATerm z_11 = NULL,b_12 = NULL;
        ATerm a_12 = NULL;
        t = SSLgetAnnotations(not_null(v_11));
        {
          a_12 = t;
          if(((z_11 != NULL) && (z_11 != a_12)))
            _fail(a_12);
          else
            z_11 = a_12;
        }
        {
          t = not_null(w_11);
          {
            ATerm d_12 = NULL;
            t = w_43(t);
            {
              b_12 = t;
              {
                ATerm e_12 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(b_12)), not_null(z_11));
                {
                  e_12 = t;
                  if(((d_12 != NULL) && (d_12 != e_12)))
                    _fail(e_12);
                  else
                    d_12 = e_12;
                }
                t = not_null(d_12);
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
ATerm option_defined_1 (ATerm t, ATerm o_53 (ATerm))
{
  t = fetch_1(t, o_53);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm n_12 = NULL;
  n_12 = t;
  m_12 :
  if(match_cons(n_12, sym_Help_0))
    {
      ATerm p_12 = NULL,r_12 = NULL;
      ATerm v_9;
      v_9 = t;
      {
        ATerm q_12 = NULL;
        t = SSLgetAnnotations(not_null(n_12));
        {
          q_12 = t;
          if(((p_12 != NULL) && (p_12 != q_12)))
            _fail(q_12);
          else
            p_12 = q_12;
        }
      }
      t = v_9;
      {
        ATerm s_12 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(p_12));
        {
          s_12 = t;
          if(((r_12 != NULL) && (r_12 != s_12)))
            _fail(s_12);
          else
            r_12 = s_12;
        }
        t = not_null(r_12);
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
  ATerm y_12 = NULL,z_12 = NULL,a_13 = NULL;
  y_12 = t;
  x_12 :
  if(match_cons(y_12, sym__2))
    {
      z_12 = ATgetArgument(y_12, 0);
      a_13 = ATgetArgument(y_12, 1);
      t = SSL_table_get(not_null(z_12), not_null(a_13));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL;
  h_13 = t;
  g_13 :
  if(match_cons(h_13, sym__3))
    {
      i_13 = ATgetArgument(h_13, 0);
      j_13 = ATgetArgument(h_13, 1);
      k_13 = ATgetArgument(h_13, 2);
      {
        ATerm c_10;
        c_10 = t;
        {
          ATerm o_13 = NULL;
          ATerm p_13 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_13), not_null(j_13));
          {
            ATerm d_10 = t;
            int e_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(e_10);
              }
            else
              {
                t = d_10;
                t = (ATerm) ATempty;
              }
            {
              p_13 = t;
              if(((o_13 != NULL) && (o_13 != p_13)))
                _fail(p_13);
              else
                o_13 = p_13;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(i_13), not_null(j_13), (ATerm) ATinsert(CheckATermList(not_null(o_13)), not_null(k_13)));
            t = table_put_0(t);
          }
        }
        t = c_10;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm u_52 (ATerm))
{
  ATerm t_13 = NULL;
  ATerm u_13 = NULL;
  t = term_w_5;
  {
    t = u_52(t);
    {
      u_13 = t;
      if(((t_13 != NULL) && (t_13 != u_13)))
        _fail(u_13);
      else
        t_13 = u_13;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_m_9, term_n_9, not_null(t_13));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm a_14 = NULL,b_14 = NULL,c_14 = NULL;
  a_14 = t;
  z_13 :
  if(match_string(a_14, "register-usage-info"))
    {
      t = register_usage_1(t, e_0);
    }
  else
    {
      if(((ATgetType(a_14) == AT_LIST) && ((ATermList) a_14 != ATempty)))
        {
          b_14 = ATgetFirst((ATermList) a_14);
          c_14 = (ATerm) ATgetNext((ATermList) a_14);
          {
            ATerm f_14 = NULL;
            ATerm f_10;
            f_10 = t;
            {
              t = not_null(b_14);
              t = a_0(t);
            }
            t = f_10;
            {
              ATerm g_14 = NULL;
              t = term_w_5;
              {
                t = b_0(t);
                {
                  g_14 = t;
                  if(((f_14 != NULL) && (f_14 != g_14)))
                    _fail(g_14);
                  else
                    f_14 = g_14;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(c_14)), not_null(f_14));
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
  ATerm z_1 (ATerm t)
  {
    ATerm l_14 = NULL;
    l_14 = t;
    k_14 :
    if(!(match_string(l_14, "--help")))
      {
        if(!(match_string(l_14, "-h")))
          {
            if(!(match_string(l_14, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm a_2 (ATerm t)
  {
    t = term_g_10;
    return(t);
  }
  ATerm b_2 (ATerm t)
  {
    t = term_h_10;
    return(t);
  }
  t = Option_3(t, z_1, a_2, b_2);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm o_14 = NULL,p_14 = NULL,q_14 = NULL;
  o_14 = t;
  n_14 :
  if(((ATgetType(o_14) == AT_LIST) && ((ATermList) o_14 != ATempty)))
    {
      p_14 = ATgetFirst((ATermList) o_14);
      q_14 = (ATerm) ATgetNext((ATermList) o_14);
      t = (ATerm) ATinsert(CheckATermList(not_null(q_14)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(p_14)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm w_14 = NULL,x_14 = NULL,y_14 = NULL;
  w_14 = t;
  v_14 :
  if(match_cons(w_14, sym__2))
    {
      x_14 = ATgetArgument(w_14, 0);
      y_14 = ATgetArgument(w_14, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_q_4, not_null(x_14), not_null(y_14));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm s_52 (ATerm))
{
  ATerm i_10;
  i_10 = t;
  {
    ATerm c_2 (ATerm t)
    {
      t = term_j_10;
      t = s_52(t);
      return(t);
    }
    t = try_1(t, c_2);
  }
  t = i_10;
  {
    ATerm h_2 (ATerm t)
    {
      ATerm g_15 = NULL;
      ATerm k_10;
      k_10 = t;
      {
        ATerm e_15 = NULL;
        ATerm f_15 = NULL;
        f_15 = t;
        if(((e_15 != NULL) && (e_15 != f_15)))
          _fail(f_15);
        else
          e_15 = f_15;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_o_10, not_null(e_15));
          t = set_config_0(t);
        }
      }
      t = k_10;
      {
        ATerm h_15 = NULL;
        h_15 = t;
        if(((g_15 != NULL) && (g_15 != h_15)))
          _fail(h_15);
        else
          g_15 = h_15;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(g_15));
      }
      return(t);
    }
    ATerm i_2 (ATerm t)
    {
      ATerm p_10 = t;
      int t_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_10 = t;
          int x_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(x_10);
            }
          else
            {
              t = w_10;
              {
                t = s_52(t);
                t = Cons_2(t, _id, i_2);
              }
            }
          LocalPopChoice(t_10);
        }
      else
        {
          t = p_10;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, h_2, i_2);
  }
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm r_52 (ATerm))
{
  ATerm m_15 = NULL;
  ATerm y_10;
  y_10 = t;
  {
    t = term_z_10;
    t = table_put_0(t);
  }
  t = y_10;
  {
    ATerm j_2 (ATerm t)
    {
      ATerm a_11 = t;
      int b_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_52(t);
          LocalPopChoice(b_11);
        }
      else
        {
          t = a_11;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, j_2);
    {
      ATerm k_2 (ATerm t)
      {
        ATerm c_11 = t;
        int d_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_a_7;
                t = exit_0(t);
              }
            }
            LocalPopChoice(d_11);
          }
        else
          {
            t = c_11;
            {
              ATerm l_2 (ATerm t)
              {
                ATerm m_2 (ATerm t)
                {
                  ATerm n_15 = NULL;
                  n_15 = t;
                  if(((m_15 != NULL) && (m_15 != n_15)))
                    _fail(n_15);
                  else
                    m_15 = n_15;
                  return(t);
                }
                t = Undefined_1(t, m_2);
                return(t);
              }
              t = option_defined_1(t, l_2);
              {
                ATerm j_11;
                j_11 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_k_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_15)), term_m_11));
                  t = printnl_0(t);
                }
                t = j_11;
                {
                  t = system_usage_0(t);
                  {
                    t = term_n_11;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, k_2);
      {
        ATerm o_11;
        o_11 = t;
        {
          t = term_m_9;
          t = table_destroy_0(t);
        }
        t = o_11;
      }
    }
  }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm r_15 = NULL;
  ATerm t_15 = NULL;
  r_15 = t;
  {
    ATerm p_11;
    p_11 = t;
    {
      ATerm u_15 = NULL;
      t = term_q_11;
      {
        u_15 = t;
        if(((t_15 != NULL) && (t_15 != u_15)))
          _fail(u_15);
        else
          t_15 = u_15;
      }
    }
    t = p_11;
    {
      t = SSL_open_file(not_null(r_15), not_null(t_15));
      t = SSL_close_file(not_null(r_15));
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm i_66 (ATerm))
{
  ATerm x_15 (ATerm t)
  {
    ATerm r_11 = t;
    int s_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, x_15);
        LocalPopChoice(s_11);
      }
    else
      {
        t = r_11;
        {
          t = Nil_0(t);
          t = i_66(t);
        }
      }
    return(t);
  }
  t = x_15(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm t_11 = t;
  int x_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(x_11);
    }
  else
    {
      t = t_11;
      {
        ATerm a_16 = NULL,b_16 = NULL,c_16 = NULL;
        a_16 = t;
        z_15 :
        if(((ATgetType(a_16) == AT_LIST) && ((ATermList) a_16 != ATempty)))
          {
            b_16 = ATgetFirst((ATermList) a_16);
            c_16 = (ATerm) ATgetNext((ATermList) a_16);
            {
              t = not_null(b_16);
              {
                ATerm n_2 (ATerm t)
                {
                  t = not_null(c_16);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, n_2);
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
ATerm fetch_1 (ATerm t, ATerm c_66 (ATerm))
{
  ATerm h_16 (ATerm t)
  {
    ATerm y_11 = t;
    int c_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, c_66, _id);
        LocalPopChoice(c_12);
      }
    else
      {
        t = y_11;
        t = Cons_2(t, _id, h_16);
      }
    return(t);
  }
  t = h_16(t);
  return(t);
}
ATerm fetch_elem_1 (ATerm t, ATerm e_66 (ATerm))
{
  ATerm j_16 = NULL;
  ATerm p_2 (ATerm t)
  {
    ATerm k_16 = NULL;
    t = e_66(t);
    {
      k_16 = t;
      if(((j_16 != NULL) && (j_16 != k_16)))
        _fail(k_16);
      else
        j_16 = k_16;
    }
    return(t);
  }
  t = fetch_1(t, p_2);
  t = not_null(j_16);
  return(t);
}
ATerm find_config_file_2 (ATerm t, ATerm e_54 (ATerm), ATerm f_54 (ATerm))
{
  ATerm f_12 = t;
  int g_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_54(t);
      {
        ATerm s_2 (ATerm t)
        {
          ATerm o_16 = NULL,q_16 = NULL;
          ATerm h_12;
          h_12 = t;
          {
            ATerm p_16 = NULL;
            p_16 = t;
            if(((o_16 != NULL) && (o_16 != p_16)))
              _fail(p_16);
            else
              o_16 = p_16;
          }
          t = h_12;
          {
            ATerm r_16 = NULL;
            t = f_54(t);
            {
              r_16 = t;
              if(((q_16 != NULL) && (q_16 != r_16)))
                _fail(r_16);
              else
                q_16 = r_16;
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(q_16)), term_i_12), not_null(o_16));
              {
                t = concat_strings_0(t);
                t = file_exists_0(t);
              }
            }
          }
          return(t);
        }
        t = fetch_elem_1(t, s_2);
      }
      LocalPopChoice(g_12);
    }
  else
    {
      t = f_12;
      {
        t = term_j_12;
        {
          t = debug_1(t, f_54);
          _fail(t);
        }
      }
    }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL;
  ATerm k_12;
  k_12 = t;
  {
    ATerm z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL;
    z_16 = t;
    v_16 :
    if(match_cons(z_16, sym__3))
      {
        a_17 = ATgetArgument(z_16, 0);
        b_17 = ATgetArgument(z_16, 1);
        c_17 = ATgetArgument(z_16, 2);
        {
          if(((w_16 != NULL) && (w_16 != a_17)))
            _fail(a_17);
          else
            w_16 = a_17;
          {
            if(((x_16 != NULL) && (x_16 != b_17)))
              _fail(b_17);
            else
              x_16 = b_17;
            {
              if(((y_16 != NULL) && (y_16 != c_17)))
                _fail(c_17);
              else
                y_16 = c_17;
              t = SSL_table_put(not_null(w_16), not_null(x_16), not_null(y_16));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = k_12;
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm i_17 = NULL;
  i_17 = t;
  h_17 :
  if(((ATermList) i_17 == ATempty))
    {
      {
        ATerm k_17 = NULL,m_17 = NULL;
        ATerm l_12;
        l_12 = t;
        {
          ATerm l_17 = NULL;
          t = SSLgetAnnotations(not_null(i_17));
          {
            l_17 = t;
            if(((k_17 != NULL) && (k_17 != l_17)))
              _fail(l_17);
            else
              k_17 = l_17;
          }
        }
        t = l_12;
        {
          ATerm n_17 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(k_17));
          {
            n_17 = t;
            if(((m_17 != NULL) && (m_17 != n_17)))
              _fail(n_17);
            else
              m_17 = n_17;
          }
          t = not_null(m_17);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm map_1 (ATerm t, ATerm t_65 (ATerm))
{
  ATerm r_17 (ATerm t)
  {
    ATerm o_12 = t;
    int t_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(t_12);
      }
    else
      {
        t = o_12;
        t = Cons_2(t, t_65, r_17);
      }
    return(t);
  }
  t = r_17(t);
  return(t);
}
ATerm table_putlist_0 (ATerm t)
{
  ATerm c_18 = NULL,d_18 = NULL,e_18 = NULL;
  c_18 = t;
  b_18 :
  if(match_cons(c_18, sym__2))
    {
      d_18 = ATgetArgument(c_18, 0);
      e_18 = ATgetArgument(c_18, 1);
      {
        t = not_null(e_18);
        {
          ATerm t_2 (ATerm t)
          {
            ATerm l_18 = NULL,m_18 = NULL,q_18 = NULL;
            l_18 = t;
            a_18 :
            if(match_cons(l_18, sym__2))
              {
                m_18 = ATgetArgument(l_18, 0);
                q_18 = ATgetArgument(l_18, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(d_18), not_null(m_18), not_null(q_18));
                  t = table_put_0(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, t_2);
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
  ATerm w_18 = NULL;
  w_18 = t;
  t = SSL_ReadFromFile(not_null(w_18));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm b_19 = NULL,c_19 = NULL,d_19 = NULL;
  b_19 = t;
  a_19 :
  if(match_cons(b_19, sym__2))
    {
      c_19 = ATgetArgument(b_19, 0);
      d_19 = ATgetArgument(b_19, 1);
      {
        ATerm u_12;
        u_12 = t;
        t = SSL_printnl(not_null(c_19), not_null(d_19));
        t = u_12;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm h_56 (ATerm))
{
  ATerm v_12;
  v_12 = t;
  {
    ATerm k_19 = NULL,m_19 = NULL;
    ATerm w_12;
    w_12 = t;
    {
      ATerm l_19 = NULL;
      t = h_56(t);
      {
        l_19 = t;
        if(((k_19 != NULL) && (k_19 != l_19)))
          _fail(l_19);
        else
          k_19 = l_19;
      }
    }
    t = w_12;
    {
      ATerm n_19 = NULL;
      n_19 = t;
      if(((m_19 != NULL) && (m_19 != n_19)))
        _fail(n_19);
      else
        m_19 = n_19;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_19)), not_null(k_19)));
        t = printnl_0(t);
      }
    }
  }
  t = v_12;
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL;
  s_19 = t;
  r_19 :
  if(match_cons(s_19, sym__2))
    {
      t_19 = ATgetArgument(s_19, 0);
      u_19 = ATgetArgument(s_19, 1);
      {
        ATerm b_13;
        b_13 = t;
        {
          ATerm c_13 = t;
          int d_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(t_19), not_null(u_19));
              LocalPopChoice(d_13);
            }
          else
            {
              t = c_13;
              t = SSL_gtr(not_null(t_19), not_null(u_19));
            }
        }
        t = b_13;
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
  ATerm c_20 = NULL;
  ATerm e_13 = t;
  int f_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_20 = NULL,f_20 = NULL,g_20 = NULL;
      d_20 = t;
      b_20 :
      if(match_cons(d_20, sym__2))
        {
          f_20 = ATgetArgument(d_20, 0);
          g_20 = ATgetArgument(d_20, 1);
          {
            if(((c_20 != NULL) && (c_20 != f_20)))
              _fail(f_20);
            else
              c_20 = f_20;
            if(((c_20 != NULL) && (c_20 != g_20)))
              _fail(g_20);
            else
              c_20 = g_20;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(f_13);
    }
  else
    {
      t = e_13;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm r_53 (ATerm))
{
  ATerm u_2 (ATerm t)
  {
    ATerm l_13;
    l_13 = t;
    {
      ATerm m_20 = NULL;
      ATerm n_20 = NULL;
      t = term_m_5;
      {
        t = get_config_0(t);
        {
          n_20 = t;
          if(((m_20 != NULL) && (m_20 != n_20)))
            _fail(n_20);
          else
            m_20 = n_20;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_20), term_m_13);
        t = geq_0(t);
      }
    }
    t = l_13;
    t = r_53(t);
    return(t);
  }
  t = try_1(t, u_2);
  return(t);
}
ATerm import_config_file_1 (ATerm t, ATerm o_54 (ATerm))
{
  ATerm n_13;
  n_13 = t;
  {
    ATerm q_20 = NULL;
    t = o_54(t);
    {
      ATerm v_2 (ATerm t)
      {
        ATerm w_2 (ATerm t)
        {
          t = term_q_13;
          return(t);
        }
        t = debug_1(t, w_2);
        return(t);
      }
      t = if_verbose2_1(t, v_2);
      {
        t = ReadFromFile_0(t);
        {
          ATerm r_20 = NULL;
          r_20 = t;
          if(((q_20 != NULL) && (q_20 != r_20)))
            _fail(r_20);
          else
            q_20 = r_20;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_q_4, not_null(q_20));
            t = table_putlist_0(t);
          }
        }
      }
    }
  }
  t = n_13;
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm u_20 = NULL;
  u_20 = t;
  t = SSL_implode_string(not_null(u_20));
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm g_21 = NULL;
  g_21 = t;
  t = SSL_explode_string(not_null(g_21));
  return(t);
}
ATerm get_path_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm r_13 = t;
    int s_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_21 (ATerm t)
        {
          ATerm v_13 = t;
          int w_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, n_21);
              LocalPopChoice(w_13);
            }
          else
            {
              t = v_13;
              {
                ATerm x_2 (ATerm t)
                {
                  ATerm m_21 = NULL;
                  m_21 = t;
                  l_21 :
                  if(!(match_int(m_21, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                ATerm z_2 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = Cons_2(t, x_2, z_2);
              }
            }
          return(t);
        }
        t = n_21(t);
        LocalPopChoice(s_13);
      }
    else
      {
        t = r_13;
        t = (ATerm) ATempty;
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm p_48 (ATerm), ATerm q_48 (ATerm))
{
  ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL;
  w_21 = t;
  v_21 :
  if(((ATgetType(w_21) == AT_LIST) && ((ATermList) w_21 != ATempty)))
    {
      x_21 = ATgetFirst((ATermList) w_21);
      y_21 = (ATerm) ATgetNext((ATermList) w_21);
      {
        ATerm h_22 = NULL,j_22 = NULL;
        ATerm i_22 = NULL;
        t = SSLgetAnnotations(not_null(w_21));
        {
          i_22 = t;
          if(((h_22 != NULL) && (h_22 != i_22)))
            _fail(i_22);
          else
            h_22 = i_22;
        }
        {
          t = not_null(x_21);
          {
            ATerm l_22 = NULL;
            t = p_48(t);
            {
              j_22 = t;
              {
                t = not_null(y_21);
                {
                  ATerm n_22 = NULL;
                  t = q_48(t);
                  {
                    l_22 = t;
                    {
                      ATerm o_22 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(l_22)), not_null(j_22)), not_null(h_22));
                      {
                        o_22 = t;
                        if(((n_22 != NULL) && (n_22 != o_22)))
                          _fail(o_22);
                        else
                          n_22 = o_22;
                      }
                      t = not_null(n_22);
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
  ATerm a_23 = NULL,b_23 = NULL,e_23 = NULL,g_23 = NULL;
  ATerm x_13;
  x_13 = t;
  {
    ATerm g_3 (ATerm t)
    {
      ATerm c_23 = NULL;
      ATerm d_23 = NULL;
      c_23 = t;
      {
        if(((a_23 != NULL) && (a_23 != c_23)))
          _fail(c_23);
        else
          a_23 = c_23;
        {
          t = get_path_0(t);
          {
            d_23 = t;
            if(((b_23 != NULL) && (b_23 != d_23)))
              _fail(d_23);
            else
              b_23 = d_23;
          }
        }
      }
      return(t);
    }
    t = Cons_2(t, g_3, _id);
  }
  t = x_13;
  {
    ATerm y_13;
    y_13 = t;
    {
      ATerm f_23 = NULL;
      t = get_conf_pkgdatadir();
      {
        f_23 = t;
        if(((e_23 != NULL) && (e_23 != f_23)))
          _fail(f_23);
        else
          e_23 = f_23;
      }
    }
    t = y_13;
    {
      ATerm h_3 (ATerm t)
      {
        ATerm i_3 (ATerm t)
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_23)), not_null(b_23));
          return(t);
        }
        ATerm j_3 (ATerm t)
        {
          t = term_d_14;
          return(t);
        }
        t = find_config_file_2(t, i_3, j_3);
        return(t);
      }
      t = import_config_file_1(t, h_3);
      {
        t = parse_options_1(t, io_options_0);
        {
          t = term_y_4;
          {
            t = get_config_0(t);
            {
              ATerm e_14;
              e_14 = t;
              {
                ATerm j_23 = NULL;
                ATerm h_14 = t;
                int i_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_b_5;
                    t = get_config_0(t);
                    LocalPopChoice(i_14);
                  }
                else
                  {
                    t = h_14;
                    {
                      ATerm h_23 = NULL;
                      ATerm i_23 = NULL;
                      i_23 = t;
                      if(((h_23 != NULL) && (h_23 != i_23)))
                        _fail(i_23);
                      else
                        h_23 = i_23;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(h_23), term_j_14);
                        t = conc_strings_0(t);
                      }
                    }
                  }
                {
                  j_23 = t;
                  if(((g_23 != NULL) && (g_23 != j_23)))
                    _fail(j_23);
                  else
                    g_23 = j_23;
                }
              }
              t = e_14;
              {
                ATerm k_3 (ATerm t)
                {
                  t = term_m_14;
                  t = get_config_0(t);
                  return(t);
                }
                ATerm p_3 (ATerm t)
                {
                  ATerm k_23 = NULL;
                  ATerm l_23 = NULL;
                  t = term_r_14;
                  {
                    t = get_config_0(t);
                    {
                      l_23 = t;
                      if(((k_23 != NULL) && (k_23 != l_23)))
                        _fail(l_23);
                      else
                        k_23 = l_23;
                    }
                  }
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_23)), term_s_14);
                  return(t);
                }
                ATerm q_3 (ATerm t)
                {
                  ATerm r_3 (ATerm t)
                  {
                    t = term_t_14;
                    t = get_config_0(t);
                    return(t);
                  }
                  ATerm s_3 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  ATerm v_3 (ATerm t)
                  {
                    t = not_null(g_23);
                    return(t);
                  }
                  t = call_out_4(t, r_3, s_3, v_3, _id);
                  return(t);
                }
                t = call_tmp_3(t, k_3, p_3, q_3);
                {
                  ATerm w_3 (ATerm t)
                  {
                    ATerm u_14 = t;
                    int z_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_a_15;
                        t = get_config_0(t);
                        LocalPopChoice(z_14);
                      }
                    else
                      {
                        t = u_14;
                        {
                          ATerm z_3 (ATerm t)
                          {
                            t = not_null(a_23);
                            return(t);
                          }
                          t = say_1(t, z_3);
                        }
                      }
                    return(t);
                  }
                  t = try_1(t, w_3);
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
