#include <srts/stratego.h>
#include <ssl/stratego-lib.h>
#include "xtc-conf.h"
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
Symbol sym_Program_1;
Symbol sym_Undefined_1;
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
Symbol sym_Anno_2;
Symbol sym_None_0;
Symbol sym_Some_1;
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
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Scopes_0;
Symbol sym_FILE_1;
Symbol sym_DIR_1;
Symbol sym_TEMP_0;
Symbol sym_TempFiles_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_CUT_0;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_DIR_1 = ATmakeSymbol("DIR", 1, ATfalse);
  ATprotectSymbol(sym_DIR_1);
  sym_TEMP_0 = ATmakeSymbol("TEMP", 0, ATfalse);
  ATprotectSymbol(sym_TEMP_0);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
  ATprotectSymbol(sym_CUT_0);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_j_13;
ATerm term_u_12;
ATerm term_n_12;
ATerm term_u_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_x_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_l_10;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_d_8;
ATerm term_y_7;
ATerm term_x_7;
ATerm term_w_7;
ATerm term_u_7;
ATerm term_t_7;
ATerm term_s_7;
ATerm term_r_7;
ATerm term_r_6;
ATerm term_p_6;
ATerm term_o_6;
ATerm term_l_6;
ATerm term_h_6;
ATerm term_f_6;
ATerm term_e_6;
ATerm term_d_6;
ATerm term_a_6;
ATerm term_q_5;
ATerm term_p_5;
ATerm term_k_5;
ATerm term_d_5;
ATerm term_c_5;
ATerm term_b_5;
ATerm term_a_5;
ATerm term_z_4;
ATerm term_s_4;
ATerm term_r_4;
ATerm term_j_4;
ATerm term_i_4;
ATerm term_b_4;
ATerm term_v_3;
ATerm term_m_3;
void init_constant_terms (void)
{
  ATprotect(&(term_m_3));
  term_m_3 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_3));
  term_v_3 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_b_4));
  term_b_4 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_4));
  term_i_4 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_j_4));
  term_j_4 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_r_4));
  term_r_4 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_s_4));
  term_s_4 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_4));
  term_z_4 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_5));
  term_a_5 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_5));
  term_b_5 = (ATerm) ATmakeAppl(sym__2, term_z_4, term_a_5);
  ATprotect(&(term_c_5));
  term_c_5 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_5);
  ATprotect(&(term_d_5));
  term_d_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_5));
  term_k_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i         Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(sym__2, term_a_6, term_d_6);
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(sym__2, term_l_6, term_d_6);
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(sym__2, term_r_7, term_d_6);
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym__2, term_r_10, term_s_10);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym__3, term_r_10, term_s_10, (ATerm) ATempty);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm copy_file_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm _2 (ATerm, ATerm d_45 (ATerm), ATerm e_45 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm x_62 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm u_65 (ATerm), ATerm v_65 (ATerm));
ATerm crush_2 (ATerm, ATerm m_67 (ATerm), ATerm n_67 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm s_77 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm v_56 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm m_54 (ATerm));
ATerm map_1 (ATerm, ATerm k_71 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm f_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm z_71 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm l_54 (ATerm));
ATerm Program_1 (ATerm, ATerm m_46 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm n_46 (ATerm));
ATerm fetch_1 (ATerm, ATerm t_71 (ATerm));
ATerm option_defined_1 (ATerm, ATerm q_55 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm y_73 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm q_54 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm p_51 (ATerm), ATerm q_51 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm o_54 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm n_54 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm s_55 (ATerm), ATerm t_55 (ATerm), ATerm u_55 (ATerm), ATerm v_55 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm w_55 (ATerm), ATerm x_55 (ATerm));
ATerm cp_file_0 (ATerm);
ATerm main_0 (ATerm);
ATerm copy_file_0 (ATerm t)
{
  ATerm r_0 = NULL,f_1 = NULL,g_1 = NULL;
  r_0 = t;
  q_0 :
  if(match_cons(r_0, sym__2))
    {
      f_1 = ATgetArgument(r_0, 0);
      g_1 = ATgetArgument(r_0, 1);
      t = SSL_copy(not_null(f_1), not_null(g_1));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm c_2 = NULL;
  ATerm e_2 = NULL;
  c_2 = t;
  {
    ATerm f_2 = NULL;
    ATerm h_2 = NULL,i_2 = NULL,j_2 = NULL;
    t = not_null(c_2);
    {
      f_2 = t;
      {
        t = SSL_explode_term(not_null(f_2));
        {
          h_2 = t;
          a_2 :
          if(match_cons(h_2, sym__2))
            {
              i_2 = ATgetArgument(h_2, 0);
              j_2 = ATgetArgument(h_2, 1);
              b_2 :
              if(match_string(i_2, ""))
                {
                  if(((e_2 != NULL) && (e_2 != j_2)))
                    _fail(j_2);
                  else
                    e_2 = j_2;
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
      t = not_null(e_2);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm p_2 = NULL,q_2 = NULL,r_2 = NULL;
  p_2 = t;
  o_2 :
  if(match_cons(p_2, sym__2))
    {
      q_2 = ATgetArgument(p_2, 0);
      r_2 = ATgetArgument(p_2, 1);
      {
        t = not_null(q_2);
        {
          ATerm c_0 (ATerm t)
          {
            t = not_null(r_2);
            return(t);
          }
          t = at_end_1(t, c_0);
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
  ATerm e_3 = t;
  int f_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(f_3);
    }
  else
    {
      t = e_3;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm d_45 (ATerm), ATerm e_45 (ATerm))
{
  ATerm b_3 = NULL,c_3 = NULL,d_3 = NULL;
  b_3 = t;
  a_3 :
  if(match_cons(b_3, sym__2))
    {
      c_3 = ATgetArgument(b_3, 0);
      d_3 = ATgetArgument(b_3, 1);
      {
        ATerm h_3 = NULL,j_3 = NULL;
        ATerm i_3 = NULL;
        t = SSLgetAnnotations(not_null(b_3));
        {
          i_3 = t;
          if(((h_3 != NULL) && (h_3 != i_3)))
            _fail(i_3);
          else
            h_3 = i_3;
        }
        {
          t = not_null(c_3);
          {
            ATerm l_3 = NULL;
            t = d_45(t);
            {
              j_3 = t;
              {
                t = not_null(d_3);
                {
                  ATerm n_3 = NULL;
                  t = e_45(t);
                  {
                    l_3 = t;
                    {
                      ATerm o_3 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(j_3), not_null(l_3)), not_null(h_3));
                      {
                        o_3 = t;
                        if(((n_3 != NULL) && (n_3 != o_3)))
                          _fail(o_3);
                        else
                          n_3 = o_3;
                      }
                      t = not_null(n_3);
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
ATerm debug_1 (ATerm t, ATerm x_62 (ATerm))
{
  ATerm g_3;
  g_3 = t;
  {
    ATerm w_3 = NULL,y_3 = NULL;
    ATerm k_3;
    k_3 = t;
    {
      ATerm x_3 = NULL;
      t = x_62(t);
      {
        x_3 = t;
        if(((w_3 != NULL) && (w_3 != x_3)))
          _fail(x_3);
        else
          w_3 = x_3;
      }
    }
    t = k_3;
    {
      ATerm z_3 = NULL;
      z_3 = t;
      if(((y_3 != NULL) && (y_3 != z_3)))
        _fail(z_3);
      else
        y_3 = z_3;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_3)), not_null(w_3)));
        t = printnl_0(t);
      }
    }
  }
  t = g_3;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm d_4 = NULL;
  d_4 = t;
  t = SSL_is_string(not_null(d_4));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm p_3 = t;
  int q_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(q_3);
    }
  else
    {
      t = p_3;
      {
        ATerm r_3 = t;
        int s_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, d_0);
            LocalPopChoice(s_3);
          }
        else
          {
            t = r_3;
            {
              ATerm m_4 = NULL,n_4 = NULL,o_4 = NULL;
              m_4 = t;
              l_4 :
              if(match_cons(m_4, sym_Path_1))
                {
                  n_4 = ATgetArgument(m_4, 0);
                  t = not_null(n_4);
                }
              else
                {
                  if(match_cons(m_4, sym_Var_1))
                    {
                      n_4 = ATgetArgument(m_4, 0);
                      {
                        t = not_null(n_4);
                        {
                          ATerm t_3 = t;
                          int u_3 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(u_3);
                            }
                          else
                            {
                              t = t_3;
                              {
                                ATerm g_0 (ATerm t)
                                {
                                  t = term_v_3;
                                  return(t);
                                }
                                t = debug_1(t, g_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(m_4, sym_Prefix_2))
                        {
                          n_4 = ATgetArgument(m_4, 0);
                          o_4 = ATgetArgument(m_4, 1);
                          {
                            ATerm t_4 = NULL,v_4 = NULL;
                            ATerm a_4;
                            a_4 = t;
                            {
                              ATerm u_4 = NULL;
                              t = not_null(n_4);
                              {
                                t = eval_config_0(t);
                                {
                                  u_4 = t;
                                  if(((t_4 != NULL) && (t_4 != u_4)))
                                    _fail(u_4);
                                  else
                                    t_4 = u_4;
                                }
                              }
                            }
                            t = a_4;
                            {
                              ATerm w_4 = NULL;
                              t = not_null(o_4);
                              {
                                t = eval_config_0(t);
                                {
                                  w_4 = t;
                                  if(((v_4 != NULL) && (v_4 != w_4)))
                                    _fail(w_4);
                                  else
                                    v_4 = w_4;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(t_4), not_null(v_4));
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
  ATerm e_5 = NULL;
  e_5 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_b_4, not_null(e_5));
    {
      t = table_get_0(t);
      {
        ATerm h_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm c_4;
            c_4 = t;
            {
              ATerm g_5 = NULL;
              ATerm h_5 = NULL;
              h_5 = t;
              if(((g_5 != NULL) && (g_5 != h_5)))
                _fail(h_5);
              else
                g_5 = h_5;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_b_4, not_null(e_5), not_null(g_5));
                t = table_put_0(t);
              }
            }
            t = c_4;
          }
          return(t);
        }
        t = try_1(t, h_0);
      }
    }
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm l_5 = NULL;
  l_5 = t;
  t = SSL_string_to_int(not_null(l_5));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm t_5 = NULL,u_5 = NULL,v_5 = NULL,w_5 = NULL,x_5 = NULL;
  t_5 = t;
  r_5 :
  if(match_string(t_5, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(t_5) == AT_LIST) && ((ATermList) t_5 != ATempty)))
        {
          u_5 = ATgetFirst((ATermList) t_5);
          v_5 = (ATerm) ATgetNext((ATermList) t_5);
          s_5 :
          if(((ATgetType(v_5) == AT_LIST) && ((ATermList) v_5 != ATempty)))
            {
              w_5 = ATgetFirst((ATermList) v_5);
              x_5 = (ATerm) ATgetNext((ATermList) v_5);
              {
                ATerm b_6 = NULL;
                ATerm e_4;
                e_4 = t;
                {
                  t = not_null(u_5);
                  t = j_0(t);
                }
                t = e_4;
                {
                  ATerm c_6 = NULL;
                  t = not_null(w_5);
                  {
                    t = k_0(t);
                    {
                      c_6 = t;
                      if(((b_6 != NULL) && (b_6 != c_6)))
                        _fail(c_6);
                      else
                        b_6 = c_6;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(x_5)), not_null(b_6));
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
  ATerm f_4 = t;
  int g_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_0 (ATerm t)
      {
        ATerm v_6 = NULL;
        v_6 = t;
        g_6 :
        if(!(match_string(v_6, "-i")))
          {
            if(!(match_string(v_6, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm n_0 (ATerm t)
      {
        ATerm y_6 = NULL;
        ATerm h_4;
        h_4 = t;
        {
          ATerm w_6 = NULL;
          ATerm x_6 = NULL;
          x_6 = t;
          if(((w_6 != NULL) && (w_6 != x_6)))
            _fail(x_6);
          else
            w_6 = x_6;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_i_4, not_null(w_6));
            t = set_config_0(t);
          }
        }
        t = h_4;
        {
          ATerm z_6 = NULL;
          z_6 = t;
          if(((y_6 != NULL) && (y_6 != z_6)))
            _fail(z_6);
          else
            y_6 = z_6;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(y_6));
        }
        return(t);
      }
      ATerm o_0 (ATerm t)
      {
        t = term_j_4;
        return(t);
      }
      t = ArgOption_3(t, m_0, n_0, o_0);
      LocalPopChoice(g_4);
    }
  else
    {
      t = f_4;
      {
        ATerm k_4 = t;
        int p_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_0 (ATerm t)
            {
              ATerm a_7 = NULL;
              a_7 = t;
              j_6 :
              if(!(match_string(a_7, "-o")))
                {
                  if(!(match_string(a_7, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm s_0 (ATerm t)
            {
              ATerm d_7 = NULL;
              ATerm q_4;
              q_4 = t;
              {
                ATerm b_7 = NULL;
                ATerm c_7 = NULL;
                c_7 = t;
                if(((b_7 != NULL) && (b_7 != c_7)))
                  _fail(c_7);
                else
                  b_7 = c_7;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_r_4, not_null(b_7));
                  t = set_config_0(t);
                }
              }
              t = q_4;
              {
                ATerm e_7 = NULL;
                e_7 = t;
                if(((d_7 != NULL) && (d_7 != e_7)))
                  _fail(e_7);
                else
                  d_7 = e_7;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(d_7));
              }
              return(t);
            }
            ATerm t_0 (ATerm t)
            {
              t = term_s_4;
              return(t);
            }
            t = ArgOption_3(t, p_0, s_0, t_0);
            LocalPopChoice(p_4);
          }
        else
          {
            t = k_4;
            {
              ATerm x_4 = t;
              int y_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_0 (ATerm t)
                  {
                    ATerm f_7 = NULL;
                    f_7 = t;
                    m_6 :
                    if(!(match_string(f_7, "-S")))
                      {
                        if(!(match_string(f_7, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm v_0 (ATerm t)
                  {
                    t = term_b_5;
                    t = set_config_0(t);
                    t = term_c_5;
                    return(t);
                  }
                  ATerm w_0 (ATerm t)
                  {
                    t = term_d_5;
                    return(t);
                  }
                  t = Option_3(t, u_0, v_0, w_0);
                  LocalPopChoice(y_4);
                }
              else
                {
                  t = x_4;
                  {
                    ATerm f_5 = t;
                    int i_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm x_0 (ATerm t)
                        {
                          ATerm g_7 = NULL;
                          g_7 = t;
                          n_6 :
                          if(!(match_string(g_7, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm y_0 (ATerm t)
                        {
                          ATerm j_7 = NULL;
                          ATerm j_5;
                          j_5 = t;
                          {
                            ATerm h_7 = NULL;
                            ATerm i_7 = NULL;
                            t = string_to_int_0(t);
                            {
                              i_7 = t;
                              if(((h_7 != NULL) && (h_7 != i_7)))
                                _fail(i_7);
                              else
                                h_7 = i_7;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_z_4, not_null(h_7));
                              t = set_config_0(t);
                            }
                          }
                          t = j_5;
                          {
                            ATerm k_7 = NULL;
                            k_7 = t;
                            if(((j_7 != NULL) && (j_7 != k_7)))
                              _fail(k_7);
                            else
                              j_7 = k_7;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(j_7));
                          }
                          return(t);
                        }
                        ATerm z_0 (ATerm t)
                        {
                          t = term_k_5;
                          return(t);
                        }
                        t = ArgOption_3(t, x_0, y_0, z_0);
                        LocalPopChoice(i_5);
                      }
                    else
                      {
                        t = f_5;
                        {
                          ATerm m_5 = t;
                          int n_5 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm a_1 (ATerm t)
                              {
                                ATerm l_7 = NULL;
                                l_7 = t;
                                q_6 :
                                if(!(match_string(l_7, "--keep")))
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              ATerm b_1 (ATerm t)
                              {
                                ATerm o_5;
                                o_5 = t;
                                {
                                  ATerm m_7 = NULL;
                                  ATerm n_7 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    n_7 = t;
                                    if(((m_7 != NULL) && (m_7 != n_7)))
                                      _fail(n_7);
                                    else
                                      m_7 = n_7;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_p_5, not_null(m_7));
                                    t = set_config_0(t);
                                  }
                                }
                                t = o_5;
                                return(t);
                              }
                              ATerm c_1 (ATerm t)
                              {
                                t = term_q_5;
                                return(t);
                              }
                              t = ArgOption_3(t, a_1, b_1, c_1);
                              LocalPopChoice(n_5);
                            }
                          else
                            {
                              t = m_5;
                              {
                                ATerm y_5 = t;
                                int z_5 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm d_1 (ATerm t)
                                    {
                                      ATerm o_7 = NULL;
                                      o_7 = t;
                                      s_6 :
                                      if(!(match_string(o_7, "-v")))
                                        {
                                          if(!(match_string(o_7, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm e_1 (ATerm t)
                                    {
                                      t = term_e_6;
                                      t = set_config_0(t);
                                      t = term_f_6;
                                      return(t);
                                    }
                                    ATerm h_1 (ATerm t)
                                    {
                                      t = term_h_6;
                                      return(t);
                                    }
                                    t = Option_3(t, d_1, e_1, h_1);
                                    LocalPopChoice(z_5);
                                  }
                                else
                                  {
                                    t = y_5;
                                    {
                                      ATerm i_6 = t;
                                      int k_6 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm i_1 (ATerm t)
                                          {
                                            ATerm p_7 = NULL;
                                            p_7 = t;
                                            t_6 :
                                            if(!(match_string(p_7, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm j_1 (ATerm t)
                                          {
                                            t = term_o_6;
                                            t = set_config_0(t);
                                            t = term_p_6;
                                            return(t);
                                          }
                                          ATerm k_1 (ATerm t)
                                          {
                                            t = term_r_6;
                                            return(t);
                                          }
                                          t = Option_3(t, i_1, j_1, k_1);
                                          LocalPopChoice(k_6);
                                        }
                                      else
                                        {
                                          t = i_6;
                                          {
                                            ATerm l_1 (ATerm t)
                                            {
                                              ATerm q_7 = NULL;
                                              q_7 = t;
                                              u_6 :
                                              if(!(match_string(q_7, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm m_1 (ATerm t)
                                            {
                                              t = term_s_7;
                                              t = set_config_0(t);
                                              t = term_t_7;
                                              return(t);
                                            }
                                            ATerm n_1 (ATerm t)
                                            {
                                              t = term_u_7;
                                              return(t);
                                            }
                                            t = Option_3(t, l_1, m_1, n_1);
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
ATerm default_usage_0 (ATerm t)
{
  ATerm a_8 = NULL;
  ATerm v_7;
  v_7 = t;
  {
    ATerm o_1 (ATerm t)
    {
      ATerm b_8 = NULL,c_8 = NULL;
      b_8 = t;
      z_7 :
      if(match_cons(b_8, sym_Program_1))
        {
          c_8 = ATgetArgument(b_8, 0);
          if(((a_8 != NULL) && (a_8 != c_8)))
            _fail(c_8);
          else
            a_8 = c_8;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, o_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_m_3, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_7), not_null(a_8)), term_w_7));
      {
        t = printnl_0(t);
        {
          t = term_y_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = v_7;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_m_3, (ATerm) ATinsert(ATempty, term_d_8));
  {
    t = printnl_0(t);
    {
      t = term_y_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm f_8 = NULL;
  f_8 = t;
  t = SSL_TicksToSeconds(not_null(f_8));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm k_8 = NULL,l_8 = NULL,m_8 = NULL;
  k_8 = t;
  j_8 :
  if(match_cons(k_8, sym__2))
    {
      l_8 = ATgetArgument(k_8, 0);
      m_8 = ATgetArgument(k_8, 1);
      {
        ATerm e_8 = t;
        int g_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(l_8), not_null(m_8));
            LocalPopChoice(g_8);
          }
        else
          {
            t = e_8;
            t = SSL_addr(not_null(l_8), not_null(m_8));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm u_65 (ATerm), ATerm v_65 (ATerm))
{
  ATerm h_8 = t;
  int i_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = u_65(t);
      LocalPopChoice(i_8);
    }
  else
    {
      t = h_8;
      {
        ATerm t_8 = NULL,u_8 = NULL,v_8 = NULL;
        t_8 = t;
        s_8 :
        if(((ATgetType(t_8) == AT_LIST) && ((ATermList) t_8 != ATempty)))
          {
            u_8 = ATgetFirst((ATermList) t_8);
            v_8 = (ATerm) ATgetNext((ATermList) t_8);
            {
              ATerm y_8 = NULL;
              ATerm z_8 = NULL;
              t = not_null(v_8);
              {
                t = foldr_2(t, u_65, v_65);
                {
                  z_8 = t;
                  if(((y_8 != NULL) && (y_8 != z_8)))
                    _fail(z_8);
                  else
                    y_8 = z_8;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(u_8), not_null(y_8));
                t = v_65(t);
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
ATerm crush_2 (ATerm t, ATerm m_67 (ATerm), ATerm n_67 (ATerm))
{
  ATerm g_9 = NULL;
  ATerm i_9 = NULL;
  g_9 = t;
  {
    ATerm j_9 = NULL;
    ATerm l_9 = NULL,m_9 = NULL,n_9 = NULL;
    t = not_null(g_9);
    {
      j_9 = t;
      {
        t = SSL_explode_term(not_null(j_9));
        {
          l_9 = t;
          f_9 :
          if(match_cons(l_9, sym__2))
            {
              m_9 = ATgetArgument(l_9, 0);
              n_9 = ATgetArgument(l_9, 1);
              if(((i_9 != NULL) && (i_9 != n_9)))
                _fail(n_9);
              else
                i_9 = n_9;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(i_9);
      t = foldr_2(t, m_67, n_67);
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
    ATerm p_1 (ATerm t)
    {
      t = term_a_5;
      return(t);
    }
    t = crush_2(t, p_1, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm t_9 = NULL,u_9 = NULL,v_9 = NULL;
  t_9 = t;
  s_9 :
  if(match_cons(t_9, sym__2))
    {
      u_9 = ATgetArgument(t_9, 0);
      v_9 = ATgetArgument(t_9, 1);
      {
        ATerm n_8;
        n_8 = t;
        {
          ATerm o_8 = t;
          int p_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(u_9), not_null(v_9));
              LocalPopChoice(p_8);
            }
          else
            {
              t = o_8;
              t = SSL_gtr(not_null(u_9), not_null(v_9));
            }
        }
        t = n_8;
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
  ATerm b_10 = NULL;
  ATerm q_8 = t;
  int r_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_10 = NULL,d_10 = NULL,e_10 = NULL;
      c_10 = t;
      a_10 :
      if(match_cons(c_10, sym__2))
        {
          d_10 = ATgetArgument(c_10, 0);
          e_10 = ATgetArgument(c_10, 1);
          {
            if(((b_10 != NULL) && (b_10 != d_10)))
              _fail(d_10);
            else
              b_10 = d_10;
            if(((b_10 != NULL) && (b_10 != e_10)))
              _fail(e_10);
            else
              b_10 = e_10;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(r_8);
    }
  else
    {
      t = q_8;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm s_77 (ATerm))
{
  ATerm q_1 (ATerm t)
  {
    ATerm w_8;
    w_8 = t;
    {
      ATerm h_10 = NULL;
      ATerm i_10 = NULL;
      t = term_z_4;
      {
        t = get_config_0(t);
        {
          i_10 = t;
          if(((h_10 != NULL) && (h_10 != i_10)))
            _fail(i_10);
          else
            h_10 = i_10;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_10), term_y_7);
        t = geq_0(t);
      }
    }
    t = w_8;
    t = s_77(t);
    return(t);
  }
  t = try_1(t, q_1);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm r_1 (ATerm t)
  {
    ATerm m_10 = NULL,o_10 = NULL;
    ATerm x_8;
    x_8 = t;
    {
      ATerm n_10 = NULL;
      t = run_time_0(t);
      {
        n_10 = t;
        if(((m_10 != NULL) && (m_10 != n_10)))
          _fail(n_10);
        else
          m_10 = n_10;
      }
    }
    t = x_8;
    {
      ATerm p_10 = NULL;
      t = term_a_9;
      {
        t = get_config_0(t);
        {
          p_10 = t;
          if(((o_10 != NULL) && (o_10 != p_10)))
            _fail(p_10);
          else
            o_10 = p_10;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_9), not_null(m_10)), term_b_9), not_null(o_10)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, r_1);
  {
    t = term_a_5;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm w_10 = NULL;
  w_10 = t;
  v_10 :
  if(match_cons(w_10, sym_Version_0))
    {
      ATerm y_10 = NULL,a_11 = NULL;
      ATerm d_9;
      d_9 = t;
      {
        ATerm z_10 = NULL;
        t = SSLgetAnnotations(not_null(w_10));
        {
          z_10 = t;
          if(((y_10 != NULL) && (y_10 != z_10)))
            _fail(z_10);
          else
            y_10 = z_10;
        }
      }
      t = d_9;
      {
        ATerm b_11 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(y_10));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm v_56 (ATerm))
{
  ATerm s_1 (ATerm t)
  {
    ATerm e_9 = t;
    int h_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(h_9);
      }
    else
      {
        t = e_9;
        {
          ATerm k_9 = t;
          int o_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(o_9);
            }
          else
            {
              t = k_9;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, s_1);
  t = v_56(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm g_11 = NULL;
  g_11 = t;
  t = SSL_table_create(not_null(g_11));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm k_11 = NULL;
  k_11 = t;
  {
    ATerm p_9;
    p_9 = t;
    {
      t = term_q_9;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_q_9, term_r_9, not_null(k_11));
          t = table_put_0(t);
        }
      }
    }
    t = p_9;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm o_11 = NULL;
  o_11 = t;
  t = SSL_table_destroy(not_null(o_11));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm s_11 = NULL;
  s_11 = t;
  t = SSL_exit(not_null(s_11));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm m_54 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm k_71 (ATerm))
{
  ATerm v_11 (ATerm t)
  {
    ATerm w_9 = t;
    int x_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(x_9);
      }
    else
      {
        t = w_9;
        t = Cons_2(t, k_71, v_11);
      }
    return(t);
  }
  t = v_11(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm f_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm c_12 = NULL,d_12 = NULL,e_12 = NULL;
  e_12 = t;
  b_12 :
  if(((ATgetType(e_12) == AT_LIST) && ((ATermList) e_12 != ATempty)))
    {
      c_12 = ATgetFirst((ATermList) e_12);
      d_12 = (ATerm) ATgetNext((ATermList) e_12);
      {
        ATerm h_12 = NULL;
        t = not_null(d_12);
        {
          ATerm y_9;
          y_9 = t;
          {
            ATerm i_12 = NULL,k_12 = NULL,m_12 = NULL;
            ATerm z_9;
            z_9 = t;
            {
              ATerm j_12 = NULL;
              t = i_0(t);
              {
                j_12 = t;
                if(((i_12 != NULL) && (i_12 != j_12)))
                  _fail(j_12);
                else
                  i_12 = j_12;
              }
            }
            t = z_9;
            {
              ATerm l_12 = NULL;
              t = not_null(c_12);
              {
                t = f_0(t);
                {
                  l_12 = t;
                  if(((k_12 != NULL) && (k_12 != l_12)))
                    _fail(l_12);
                  else
                    k_12 = l_12;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(i_12)), not_null(k_12));
                {
                  m_12 = t;
                  if(((h_12 != NULL) && (h_12 != m_12)))
                    _fail(m_12);
                  else
                    h_12 = m_12;
                }
              }
            }
          }
          t = y_9;
          {
            ATerm t_1 (ATerm t)
            {
              t = not_null(h_12);
              return(t);
            }
            t = reverse_acc_2(t, f_0, t_1);
          }
        }
      }
    }
  else
    {
      if(((ATermList) e_12 == ATempty))
        {
          {
            t = term_d_6;
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
  ATerm u_1 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, u_1);
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm t_12 = NULL;
  t_12 = t;
  t = SSL_implode_string(not_null(t_12));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm z_71 (ATerm))
{
  ATerm w_12 (ATerm t)
  {
    ATerm f_10 = t;
    int g_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, w_12);
        LocalPopChoice(g_10);
      }
    else
      {
        t = f_10;
        {
          t = Nil_0(t);
          t = z_71(t);
        }
      }
    return(t);
  }
  t = w_12(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm j_10 = t;
  int k_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(k_10);
    }
  else
    {
      t = j_10;
      {
        ATerm z_12 = NULL,a_13 = NULL,b_13 = NULL;
        z_12 = t;
        y_12 :
        if(((ATgetType(z_12) == AT_LIST) && ((ATermList) z_12 != ATempty)))
          {
            a_13 = ATgetFirst((ATermList) z_12);
            b_13 = (ATerm) ATgetNext((ATermList) z_12);
            {
              t = not_null(a_13);
              {
                ATerm v_1 (ATerm t)
                {
                  t = not_null(b_13);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, v_1);
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
  ATerm h_13 = NULL;
  h_13 = t;
  t = SSL_explode_string(not_null(h_13));
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
ATerm short_description_1 (ATerm t, ATerm l_54 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm m_46 (ATerm))
{
  ATerm p_13 = NULL,q_13 = NULL;
  p_13 = t;
  o_13 :
  if(match_cons(p_13, sym_Program_1))
    {
      q_13 = ATgetArgument(p_13, 0);
      {
        ATerm t_13 = NULL,v_13 = NULL;
        ATerm u_13 = NULL;
        t = SSLgetAnnotations(not_null(p_13));
        {
          u_13 = t;
          if(((t_13 != NULL) && (t_13 != u_13)))
            _fail(u_13);
          else
            t_13 = u_13;
        }
        {
          t = not_null(q_13);
          {
            ATerm x_13 = NULL;
            t = m_46(t);
            {
              v_13 = t;
              {
                ATerm y_13 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(v_13)), not_null(t_13));
                {
                  y_13 = t;
                  if(((x_13 != NULL) && (x_13 != y_13)))
                    _fail(y_13);
                  else
                    x_13 = y_13;
                }
                t = not_null(x_13);
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
  ATerm h_14 = NULL;
  ATerm w_1 (ATerm t)
  {
    ATerm x_1 (ATerm t)
    {
      ATerm i_14 = NULL;
      i_14 = t;
      if(((h_14 != NULL) && (h_14 != i_14)))
        _fail(i_14);
      else
        h_14 = i_14;
      return(t);
    }
    t = Program_1(t, x_1);
    return(t);
  }
  t = option_defined_1(t, w_1);
  {
    ATerm y_1 (ATerm t)
    {
      ATerm j_14 = NULL;
      ATerm k_14 = NULL;
      t = term_d_6;
      {
        ATerm z_1 (ATerm t)
        {
          t = not_null(h_14);
          return(t);
        }
        t = short_description_1(t, z_1);
        {
          t = concat_strings_0(t);
          {
            k_14 = t;
            if(((j_14 != NULL) && (j_14 != k_14)))
              _fail(k_14);
            else
              j_14 = k_14;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_10, (ATerm) ATinsert(ATempty, not_null(j_14)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, y_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_l_10, (ATerm) ATinsert(ATempty, term_q_10));
      {
        t = printnl_0(t);
        {
          t = term_t_10;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm d_2 (ATerm t)
                {
                  ATerm l_14 = NULL;
                  ATerm m_14 = NULL;
                  m_14 = t;
                  if(((l_14 != NULL) && (l_14 != m_14)))
                    _fail(m_14);
                  else
                    l_14 = m_14;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_l_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_14)), term_u_10));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, d_2);
                {
                  ATerm g_2 (ATerm t)
                  {
                    ATerm n_14 = NULL;
                    ATerm o_14 = NULL;
                    ATerm k_2 (ATerm t)
                    {
                      t = not_null(h_14);
                      return(t);
                    }
                    t = long_description_1(t, k_2);
                    {
                      o_14 = t;
                      if(((n_14 != NULL) && (n_14 != o_14)))
                        _fail(o_14);
                      else
                        n_14 = o_14;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_l_10, (ATerm) ATinsert(CheckATermList(not_null(n_14)), term_x_10));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, g_2);
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
ATerm printnl_0 (ATerm t)
{
  ATerm v_14 = NULL,w_14 = NULL,x_14 = NULL;
  v_14 = t;
  u_14 :
  if(match_cons(v_14, sym__2))
    {
      w_14 = ATgetArgument(v_14, 0);
      x_14 = ATgetArgument(v_14, 1);
      {
        ATerm c_11;
        c_11 = t;
        t = SSL_printnl(not_null(w_14), not_null(x_14));
        t = c_11;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm n_46 (ATerm))
{
  ATerm g_15 = NULL,h_15 = NULL;
  g_15 = t;
  f_15 :
  if(match_cons(g_15, sym_Undefined_1))
    {
      h_15 = ATgetArgument(g_15, 0);
      {
        ATerm k_15 = NULL,m_15 = NULL;
        ATerm l_15 = NULL;
        t = SSLgetAnnotations(not_null(g_15));
        {
          l_15 = t;
          if(((k_15 != NULL) && (k_15 != l_15)))
            _fail(l_15);
          else
            k_15 = l_15;
        }
        {
          t = not_null(h_15);
          {
            ATerm o_15 = NULL;
            t = n_46(t);
            {
              m_15 = t;
              {
                ATerm p_15 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(m_15)), not_null(k_15));
                {
                  p_15 = t;
                  if(((o_15 != NULL) && (o_15 != p_15)))
                    _fail(p_15);
                  else
                    o_15 = p_15;
                }
                t = not_null(o_15);
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
ATerm fetch_1 (ATerm t, ATerm t_71 (ATerm))
{
  ATerm u_15 (ATerm t)
  {
    ATerm d_11 = t;
    int e_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, t_71, _id);
        LocalPopChoice(e_11);
      }
    else
      {
        t = d_11;
        t = Cons_2(t, _id, u_15);
      }
    return(t);
  }
  t = u_15(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm q_55 (ATerm))
{
  t = fetch_1(t, q_55);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm z_15 = NULL;
  z_15 = t;
  y_15 :
  if(match_cons(z_15, sym_Help_0))
    {
      ATerm b_16 = NULL,d_16 = NULL;
      ATerm f_11;
      f_11 = t;
      {
        ATerm c_16 = NULL;
        t = SSLgetAnnotations(not_null(z_15));
        {
          c_16 = t;
          if(((b_16 != NULL) && (b_16 != c_16)))
            _fail(c_16);
          else
            b_16 = c_16;
        }
      }
      t = f_11;
      {
        ATerm e_16 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(b_16));
        {
          e_16 = t;
          if(((d_16 != NULL) && (d_16 != e_16)))
            _fail(e_16);
          else
            d_16 = e_16;
        }
        t = not_null(d_16);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm y_73 (ATerm))
{
  ATerm h_11 = t;
  int i_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = y_73(t);
      LocalPopChoice(i_11);
    }
  else
    {
      t = h_11;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL;
  k_16 = t;
  j_16 :
  if(match_cons(k_16, sym__2))
    {
      l_16 = ATgetArgument(k_16, 0);
      m_16 = ATgetArgument(k_16, 1);
      t = SSL_table_get(not_null(l_16), not_null(m_16));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL;
  t_16 = t;
  s_16 :
  if(match_cons(t_16, sym__3))
    {
      u_16 = ATgetArgument(t_16, 0);
      v_16 = ATgetArgument(t_16, 1);
      w_16 = ATgetArgument(t_16, 2);
      {
        ATerm j_11;
        j_11 = t;
        {
          ATerm a_17 = NULL;
          ATerm b_17 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_16), not_null(v_16));
          {
            ATerm l_11 = t;
            int m_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(m_11);
              }
            else
              {
                t = l_11;
                t = (ATerm) ATempty;
              }
            {
              b_17 = t;
              if(((a_17 != NULL) && (a_17 != b_17)))
                _fail(b_17);
              else
                a_17 = b_17;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(u_16), not_null(v_16), (ATerm) ATinsert(CheckATermList(not_null(a_17)), not_null(w_16)));
            t = table_put_0(t);
          }
        }
        t = j_11;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm q_54 (ATerm))
{
  ATerm f_17 = NULL;
  ATerm g_17 = NULL;
  t = term_d_6;
  {
    t = q_54(t);
    {
      g_17 = t;
      if(((f_17 != NULL) && (f_17 != g_17)))
        _fail(g_17);
      else
        f_17 = g_17;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_r_10, term_s_10, not_null(f_17));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm m_17 = NULL,n_17 = NULL,o_17 = NULL;
  m_17 = t;
  l_17 :
  if(match_string(m_17, "register-usage-info"))
    {
      t = register_usage_1(t, e_0);
    }
  else
    {
      if(((ATgetType(m_17) == AT_LIST) && ((ATermList) m_17 != ATempty)))
        {
          n_17 = ATgetFirst((ATermList) m_17);
          o_17 = (ATerm) ATgetNext((ATermList) m_17);
          {
            ATerm r_17 = NULL;
            ATerm n_11;
            n_11 = t;
            {
              t = not_null(n_17);
              t = a_0(t);
            }
            t = n_11;
            {
              ATerm s_17 = NULL;
              t = term_d_6;
              {
                t = b_0(t);
                {
                  s_17 = t;
                  if(((r_17 != NULL) && (r_17 != s_17)))
                    _fail(s_17);
                  else
                    r_17 = s_17;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(o_17)), not_null(r_17));
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
    ATerm x_17 = NULL;
    x_17 = t;
    w_17 :
    if(!(match_string(x_17, "--help")))
      {
        if(!(match_string(x_17, "-h")))
          {
            if(!(match_string(x_17, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm m_2 (ATerm t)
  {
    t = term_p_11;
    return(t);
  }
  ATerm n_2 (ATerm t)
  {
    t = term_q_11;
    return(t);
  }
  t = Option_3(t, l_2, m_2, n_2);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm a_18 = NULL,b_18 = NULL,c_18 = NULL;
  a_18 = t;
  z_17 :
  if(((ATgetType(a_18) == AT_LIST) && ((ATermList) a_18 != ATempty)))
    {
      b_18 = ATgetFirst((ATermList) a_18);
      c_18 = (ATerm) ATgetNext((ATermList) a_18);
      t = (ATerm) ATinsert(CheckATermList(not_null(c_18)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(b_18)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm p_51 (ATerm), ATerm q_51 (ATerm))
{
  ATerm m_18 = NULL,u_18 = NULL,v_18 = NULL;
  m_18 = t;
  l_18 :
  if(((ATgetType(m_18) == AT_LIST) && ((ATermList) m_18 != ATempty)))
    {
      u_18 = ATgetFirst((ATermList) m_18);
      v_18 = (ATerm) ATgetNext((ATermList) m_18);
      {
        ATerm z_18 = NULL,b_19 = NULL;
        ATerm a_19 = NULL;
        t = SSLgetAnnotations(not_null(m_18));
        {
          a_19 = t;
          if(((z_18 != NULL) && (z_18 != a_19)))
            _fail(a_19);
          else
            z_18 = a_19;
        }
        {
          t = not_null(u_18);
          {
            ATerm g_19 = NULL;
            t = p_51(t);
            {
              b_19 = t;
              {
                t = not_null(v_18);
                {
                  ATerm j_19 = NULL;
                  t = q_51(t);
                  {
                    g_19 = t;
                    {
                      ATerm k_19 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(g_19)), not_null(b_19)), not_null(z_18));
                      {
                        k_19 = t;
                        if(((j_19 != NULL) && (j_19 != k_19)))
                          _fail(k_19);
                        else
                          j_19 = k_19;
                      }
                      t = not_null(j_19);
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
  ATerm u_19 = NULL;
  u_19 = t;
  t_19 :
  if(((ATermList) u_19 == ATempty))
    {
      {
        ATerm w_19 = NULL,y_19 = NULL;
        ATerm r_11;
        r_11 = t;
        {
          ATerm x_19 = NULL;
          t = SSLgetAnnotations(not_null(u_19));
          {
            x_19 = t;
            if(((w_19 != NULL) && (w_19 != x_19)))
              _fail(x_19);
            else
              w_19 = x_19;
          }
        }
        t = r_11;
        {
          ATerm z_19 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(w_19));
          {
            z_19 = t;
            if(((y_19 != NULL) && (y_19 != z_19)))
              _fail(z_19);
            else
              y_19 = z_19;
          }
          t = not_null(y_19);
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
  ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL;
  f_20 = t;
  e_20 :
  if(match_cons(f_20, sym__2))
    {
      g_20 = ATgetArgument(f_20, 0);
      h_20 = ATgetArgument(f_20, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_b_4, not_null(g_20), not_null(h_20));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm o_54 (ATerm))
{
  ATerm t_11;
  t_11 = t;
  {
    ATerm s_2 (ATerm t)
    {
      t = term_u_11;
      t = o_54(t);
      return(t);
    }
    t = try_1(t, s_2);
  }
  t = t_11;
  {
    ATerm t_2 (ATerm t)
    {
      ATerm p_20 = NULL;
      ATerm w_11;
      w_11 = t;
      {
        ATerm n_20 = NULL;
        ATerm o_20 = NULL;
        o_20 = t;
        if(((n_20 != NULL) && (n_20 != o_20)))
          _fail(o_20);
        else
          n_20 = o_20;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_a_9, not_null(n_20));
          t = set_config_0(t);
        }
      }
      t = w_11;
      {
        ATerm q_20 = NULL;
        q_20 = t;
        if(((p_20 != NULL) && (p_20 != q_20)))
          _fail(q_20);
        else
          p_20 = q_20;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(p_20));
      }
      return(t);
    }
    ATerm u_2 (ATerm t)
    {
      ATerm x_11 = t;
      int y_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_11 = t;
          int a_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(a_12);
            }
          else
            {
              t = z_11;
              {
                t = o_54(t);
                t = Cons_2(t, _id, u_2);
              }
            }
          LocalPopChoice(y_11);
        }
      else
        {
          t = x_11;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, t_2, u_2);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL;
  ATerm f_12;
  f_12 = t;
  {
    ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL;
    z_20 = t;
    v_20 :
    if(match_cons(z_20, sym__3))
      {
        a_21 = ATgetArgument(z_20, 0);
        b_21 = ATgetArgument(z_20, 1);
        c_21 = ATgetArgument(z_20, 2);
        {
          if(((w_20 != NULL) && (w_20 != a_21)))
            _fail(a_21);
          else
            w_20 = a_21;
          {
            if(((x_20 != NULL) && (x_20 != b_21)))
              _fail(b_21);
            else
              x_20 = b_21;
            {
              if(((y_20 != NULL) && (y_20 != c_21)))
                _fail(c_21);
              else
                y_20 = c_21;
              t = SSL_table_put(not_null(w_20), not_null(x_20), not_null(y_20));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = f_12;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm n_54 (ATerm))
{
  ATerm f_21 = NULL;
  ATerm g_12;
  g_12 = t;
  {
    t = term_n_12;
    t = table_put_0(t);
  }
  t = g_12;
  {
    ATerm v_2 (ATerm t)
    {
      ATerm o_12 = t;
      int p_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_54(t);
          LocalPopChoice(p_12);
        }
      else
        {
          t = o_12;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, v_2);
    {
      ATerm w_2 (ATerm t)
      {
        ATerm q_12 = t;
        int r_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_a_5;
                t = exit_0(t);
              }
            }
            LocalPopChoice(r_12);
          }
        else
          {
            t = q_12;
            {
              ATerm x_2 (ATerm t)
              {
                ATerm y_2 (ATerm t)
                {
                  ATerm g_21 = NULL;
                  g_21 = t;
                  if(((f_21 != NULL) && (f_21 != g_21)))
                    _fail(g_21);
                  else
                    f_21 = g_21;
                  return(t);
                }
                t = Undefined_1(t, y_2);
                return(t);
              }
              t = option_defined_1(t, x_2);
              {
                ATerm s_12;
                s_12 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_m_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_21)), term_u_12));
                  t = printnl_0(t);
                }
                t = s_12;
                {
                  t = system_usage_0(t);
                  {
                    t = term_y_7;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, w_2);
      {
        ATerm v_12;
        v_12 = t;
        {
          t = term_r_10;
          t = table_destroy_0(t);
        }
        t = v_12;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm s_55 (ATerm), ATerm t_55 (ATerm), ATerm u_55 (ATerm), ATerm v_55 (ATerm))
{
  t = parse_options_1(t, s_55);
  {
    t = store_options_0(t);
    {
      t = u_55(t);
      {
        ATerm x_12 = t;
        int c_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, t_55);
            LocalPopChoice(c_13);
          }
        else
          {
            t = x_12;
            {
              ATerm d_13 = t;
              int e_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = v_55(t);
                  t = report_success_0(t);
                  LocalPopChoice(e_13);
                }
              else
                {
                  t = d_13;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm w_55 (ATerm), ATerm x_55 (ATerm))
{
  t = option_wrap_4(t, w_55, default_usage_0, _id, x_55);
  return(t);
}
ATerm cp_file_0 (ATerm t)
{
  ATerm z_2 (ATerm t)
  {
    ATerm k_21 = NULL,m_21 = NULL;
    ATerm f_13;
    f_13 = t;
    {
      ATerm l_21 = NULL;
      ATerm g_13 = t;
      int i_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_i_4;
          t = get_config_0(t);
          LocalPopChoice(i_13);
        }
      else
        {
          t = g_13;
          t = term_j_13;
        }
      {
        l_21 = t;
        if(((k_21 != NULL) && (k_21 != l_21)))
          _fail(l_21);
        else
          k_21 = l_21;
      }
    }
    t = f_13;
    {
      ATerm n_21 = NULL;
      ATerm k_13 = t;
      int l_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_r_4;
          t = get_config_0(t);
          LocalPopChoice(l_13);
        }
      else
        {
          t = k_13;
          t = term_l_10;
        }
      {
        n_21 = t;
        if(((m_21 != NULL) && (m_21 != n_21)))
          _fail(n_21);
        else
          m_21 = n_21;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_21), not_null(m_21));
        t = copy_file_0(t);
      }
    }
    return(t);
  }
  t = option_wrap_2(t, io_options_0, z_2);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = cp_file_0(t);
  return(t);
}
