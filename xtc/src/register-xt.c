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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
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
ATerm term_f_12;
ATerm term_e_12;
ATerm term_c_12;
ATerm term_x_11;
ATerm term_f_11;
ATerm term_w_10;
ATerm term_g_10;
ATerm term_e_10;
ATerm term_a_10;
ATerm term_x_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_l_8;
ATerm term_j_8;
ATerm term_c_8;
ATerm term_r_7;
ATerm term_n_7;
ATerm term_a_7;
ATerm term_u_6;
ATerm term_s_6;
ATerm term_m_6;
ATerm term_c_6;
ATerm term_r_5;
ATerm term_k_5;
ATerm term_j_5;
ATerm term_i_5;
ATerm term_h_5;
ATerm term_g_5;
ATerm term_e_5;
ATerm term_c_5;
ATerm term_p_4;
ATerm term_o_4;
ATerm term_h_4;
ATerm term_g_4;
ATerm term_e_4;
ATerm term_x_3;
void init_constant_terms (void)
{
  ATprotect(&(term_x_3));
  term_x_3 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_4));
  term_e_4 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_g_4));
  term_g_4 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_h_4));
  term_h_4 = (ATerm) ATmakeAppl(ATmakeSymbol("  Saving repository ", 0, ATtrue));
  ATprotect(&(term_o_4));
  term_o_4 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_p_4));
  term_p_4 = (ATerm) ATmakeAppl(ATmakeSymbol("repository", 0, ATtrue));
  ATprotect(&(term_c_5));
  term_c_5 = (ATerm) ATmakeAppl(ATmakeSymbol("  Extending repository ", 0, ATtrue));
  ATprotect(&(term_e_5));
  term_e_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_g_5));
  term_g_5 = (ATerm) ATmakeAppl(ATmakeSymbol("    Tool:     ", 0, ATtrue));
  ATprotect(&(term_h_5));
  term_h_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-V", 0, ATtrue));
  ATprotect(&(term_i_5));
  term_i_5 = (ATerm) ATmakeAppl(ATmakeSymbol("    Version:  ", 0, ATtrue));
  ATprotect(&(term_j_5));
  term_j_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-l", 0, ATtrue));
  ATprotect(&(term_k_5));
  term_k_5 = (ATerm) ATmakeAppl(ATmakeSymbol("    Location: ", 0, ATtrue));
  ATprotect(&(term_r_5));
  term_r_5 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("  Retrieving repository ", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("    Repository: ", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-r rep | --repository rep     Tool repository", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-t name | --tool name         Tool to register", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-l loc | --location loc       Location of tool", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-V num | --Version num        Version of tool\n", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i       Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(sym__2, term_b_9, term_c_9);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym__3, term_b_9, term_c_9, (ATerm) ATempty);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Welcome to register-xt: ", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Registration starts ", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Registration completed ", 0, ATtrue));
}
ATerm exit_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm n_56 (ATerm));
ATerm if_verbose1_1 (ATerm, ATerm a_49 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm save_repository_0 (ATerm);
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm q_61 (ATerm), ATerm r_61 (ATerm));
ATerm union_1 (ATerm, ATerm s_61 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_union_0 (ATerm);
ATerm extend_repository_0 (ATerm);
ATerm table_putlist_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm b_49 (ATerm));
ATerm conc_0 (ATerm);
ATerm _2 (ATerm, ATerm m_42 (ATerm), ATerm n_42 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm get_repository_0 (ATerm);
ATerm register_tool_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm rxt_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm o_66 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm x_53 (ATerm));
ATerm map_1 (ATerm, ATerm z_65 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm w_53 (ATerm));
ATerm Program_1 (ATerm, ATerm e_44 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm f_44 (ATerm));
ATerm fetch_1 (ATerm, ATerm i_66 (ATerm));
ATerm option_defined_1 (ATerm, ATerm v_54 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm t_74 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm b_54 (ATerm));
ATerm Option_3 (ATerm, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm u_48 (ATerm), ATerm v_48 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm z_53 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm y_53 (ATerm));
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm m_56 (ATerm));
ATerm register_xt_0 (ATerm);
ATerm main_0 (ATerm);
ATerm exit_0 (ATerm t)
{
  ATerm a_1 = NULL;
  a_1 = t;
  t = SSL_exit(not_null(a_1));
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm w_3;
  w_3 = t;
  {
    ATerm o_1 = NULL;
    ATerm s_1 = NULL;
    s_1 = t;
    if(((o_1 != NULL) && (o_1 != s_1)))
      _fail(s_1);
    else
      o_1 = s_1;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_3, (ATerm) ATinsert(ATempty, not_null(o_1)));
      t = printnl_0(t);
    }
  }
  t = w_3;
  return(t);
}
ATerm say_1 (ATerm t, ATerm n_56 (ATerm))
{
  ATerm c_4;
  c_4 = t;
  {
    t = n_56(t);
    t = debug_0(t);
  }
  t = c_4;
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm a_49 (ATerm))
{
  ATerm a_0 (ATerm t)
  {
    ATerm d_4;
    d_4 = t;
    {
      ATerm v_1 = NULL;
      ATerm w_1 = NULL;
      t = term_e_4;
      {
        t = get_config_0(t);
        {
          w_1 = t;
          if(((v_1 != NULL) && (v_1 != w_1)))
            _fail(w_1);
          else
            v_1 = w_1;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_1), term_g_4);
        t = geq_0(t);
      }
    }
    t = d_4;
    t = a_49(t);
    return(t);
  }
  t = try_1(t, a_0);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm a_2 = NULL,b_2 = NULL,c_2 = NULL;
  a_2 = t;
  z_1 :
  if(match_cons(a_2, sym__2))
    {
      b_2 = ATgetArgument(a_2, 0);
      c_2 = ATgetArgument(a_2, 1);
      t = SSL_WriteToTextFile(not_null(b_2), not_null(c_2));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm h_2 = NULL;
  h_2 = t;
  t = SSL_table_keys(not_null(h_2));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm n_2 = NULL;
  n_2 = t;
  {
    t = table_keys_0(t);
    {
      ATerm b_0 (ATerm t)
      {
        ATerm p_2 = NULL;
        ATerm r_2 = NULL;
        p_2 = t;
        {
          ATerm s_2 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_2), not_null(p_2));
          {
            t = table_get_0(t);
            {
              s_2 = t;
              if(((r_2 != NULL) && (r_2 != s_2)))
                _fail(s_2);
              else
                r_2 = s_2;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_2), not_null(r_2));
        }
        return(t);
      }
      t = map_1(t, b_0);
    }
  }
  return(t);
}
ATerm save_repository_0 (ATerm t)
{
  ATerm y_2 = NULL,a_3 = NULL;
  ATerm e_0 (ATerm t)
  {
    ATerm f_0 (ATerm t)
    {
      t = term_h_4;
      return(t);
    }
    t = say_1(t, f_0);
    return(t);
  }
  t = if_verbose1_1(t, e_0);
  {
    ATerm i_4;
    i_4 = t;
    {
      ATerm z_2 = NULL;
      t = term_o_4;
      {
        t = get_config_0(t);
        {
          z_2 = t;
          if(((y_2 != NULL) && (y_2 != z_2)))
            _fail(z_2);
          else
            y_2 = z_2;
        }
      }
    }
    t = i_4;
    {
      ATerm b_3 = NULL;
      t = term_p_4;
      {
        t = table_getlist_0(t);
        {
          b_3 = t;
          if(((a_3 != NULL) && (a_3 != b_3)))
            _fail(b_3);
          else
            a_3 = b_3;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_2), not_null(a_3));
        t = WriteToTextFile_0(t);
      }
    }
  }
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm g_3 = NULL,h_3 = NULL,i_3 = NULL;
  g_3 = t;
  f_3 :
  if(match_cons(g_3, sym__2))
    {
      h_3 = ATgetArgument(g_3, 0);
      i_3 = ATgetArgument(g_3, 1);
      if(((h_3 != NULL) && (h_3 != i_3)))
        _fail(i_3);
      else
        h_3 = i_3;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm q_61 (ATerm), ATerm r_61 (ATerm))
{
  ATerm o_3 = NULL,p_3 = NULL,q_3 = NULL;
  o_3 = t;
  n_3 :
  if(((ATgetType(o_3) == AT_LIST) && ((ATermList) o_3 != ATempty)))
    {
      p_3 = ATgetFirst((ATermList) o_3);
      q_3 = (ATerm) ATgetNext((ATermList) o_3);
      {
        t = r_61(t);
        {
          ATerm m_0 (ATerm t)
          {
            ATerm t_3 = NULL;
            t_3 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(p_3), not_null(t_3));
              t = q_61(t);
            }
            return(t);
          }
          t = fetch_1(t, m_0);
        }
        t = not_null(q_3);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm s_61 (ATerm))
{
  ATerm z_3 = NULL,a_4 = NULL,b_4 = NULL;
  z_3 = t;
  y_3 :
  if(match_cons(z_3, sym__2))
    {
      a_4 = ATgetArgument(z_3, 0);
      b_4 = ATgetArgument(z_3, 1);
      {
        t = not_null(a_4);
        {
          ATerm f_4 (ATerm t)
          {
            ATerm q_4 = t;
            int v_4 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(b_4);
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
                      ATerm n_0 (ATerm t)
                      {
                        t = not_null(b_4);
                        return(t);
                      }
                      t = HdMember_p__2(t, s_61, n_0);
                      t = f_4(t);
                      LocalPopChoice(x_4);
                    }
                  else
                    {
                      t = w_4;
                      t = Cons_2(t, _id, f_4);
                    }
                }
              }
            return(t);
          }
          t = f_4(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_0 (ATerm t)
{
  t = union_1(t, eq_0);
  return(t);
}
ATerm get_0 (ATerm t)
{
  t = table_get_0(t);
  return(t);
}
ATerm table_union_0 (ATerm t)
{
  ATerm k_4 = NULL,l_4 = NULL,m_4 = NULL,n_4 = NULL;
  k_4 = t;
  j_4 :
  if(match_cons(k_4, sym__3))
    {
      l_4 = ATgetArgument(k_4, 0);
      m_4 = ATgetArgument(k_4, 1);
      n_4 = ATgetArgument(k_4, 2);
      {
        ATerm y_4;
        y_4 = t;
        {
          ATerm r_4 = NULL;
          ATerm s_4 = NULL,u_4 = NULL;
          ATerm t_4 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_4), not_null(m_4));
          {
            ATerm z_4 = t;
            int a_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                LocalPopChoice(a_5);
              }
            else
              {
                t = z_4;
                t = (ATerm) ATempty;
              }
            {
              t_4 = t;
              if(((s_4 != NULL) && (s_4 != t_4)))
                _fail(t_4);
              else
                s_4 = t_4;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(n_4), not_null(s_4));
            {
              t = union_0(t);
              {
                u_4 = t;
                if(((r_4 != NULL) && (r_4 != u_4)))
                  _fail(u_4);
                else
                  r_4 = u_4;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(l_4), not_null(m_4), not_null(r_4));
            t = set_0(t);
          }
        }
        t = y_4;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm extend_repository_0 (ATerm t)
{
  ATerm b_5 = NULL;
  ATerm o_0 (ATerm t)
  {
    ATerm p_0 (ATerm t)
    {
      t = term_c_5;
      return(t);
    }
    t = say_1(t, p_0);
    return(t);
  }
  t = if_verbose1_1(t, o_0);
  {
    t = term_e_5;
    {
      ATerm d_5 = NULL;
      t = get_config_0(t);
      {
        b_5 = t;
        {
          ATerm q_0 (ATerm t)
          {
            ATerm r_0 (ATerm t)
            {
              t = term_g_5;
              return(t);
            }
            t = debug_1(t, r_0);
            return(t);
          }
          t = if_verbose2_1(t, q_0);
          {
            t = term_h_5;
            {
              ATerm f_5 = NULL;
              t = get_config_0(t);
              {
                d_5 = t;
                {
                  ATerm s_0 (ATerm t)
                  {
                    ATerm t_0 (ATerm t)
                    {
                      t = term_i_5;
                      return(t);
                    }
                    t = debug_1(t, t_0);
                    return(t);
                  }
                  t = if_verbose2_1(t, s_0);
                  {
                    t = term_j_5;
                    {
                      t = get_config_0(t);
                      {
                        f_5 = t;
                        {
                          ATerm u_0 (ATerm t)
                          {
                            ATerm v_0 (ATerm t)
                            {
                              t = term_k_5;
                              return(t);
                            }
                            t = debug_1(t, v_0);
                            return(t);
                          }
                          t = if_verbose2_1(t, u_0);
                          {
                            t = (ATerm) ATmakeAppl(sym__3, term_p_4, not_null(b_5), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(d_5), not_null(f_5))));
                            t = table_union_0(t);
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
ATerm table_putlist_0 (ATerm t)
{
  ATerm o_5 = NULL,p_5 = NULL,q_5 = NULL;
  o_5 = t;
  n_5 :
  if(match_cons(o_5, sym__2))
    {
      p_5 = ATgetArgument(o_5, 0);
      q_5 = ATgetArgument(o_5, 1);
      {
        t = not_null(q_5);
        {
          ATerm w_0 (ATerm t)
          {
            ATerm t_5 = NULL,u_5 = NULL,v_5 = NULL;
            t_5 = t;
            m_5 :
            if(match_cons(t_5, sym__2))
              {
                u_5 = ATgetArgument(t_5, 0);
                v_5 = ATgetArgument(t_5, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(p_5), not_null(u_5), not_null(v_5));
                  t = table_put_0(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, w_0);
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
  ATerm b_6 = NULL;
  b_6 = t;
  t = SSL_ReadFromFile(not_null(b_6));
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm g_6 = NULL;
  ATerm i_6 = NULL;
  g_6 = t;
  {
    ATerm l_5;
    l_5 = t;
    {
      ATerm j_6 = NULL;
      t = term_r_5;
      {
        j_6 = t;
        if(((i_6 != NULL) && (i_6 != j_6)))
          _fail(j_6);
        else
          i_6 = j_6;
      }
    }
    t = l_5;
    {
      t = SSL_open_file(not_null(g_6), not_null(i_6));
      t = SSL_close_file(not_null(g_6));
    }
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm o_6 = NULL,p_6 = NULL,q_6 = NULL;
  o_6 = t;
  n_6 :
  if(match_cons(o_6, sym__2))
    {
      p_6 = ATgetArgument(o_6, 0);
      q_6 = ATgetArgument(o_6, 1);
      {
        ATerm s_5;
        s_5 = t;
        {
          ATerm w_5 = t;
          int x_5 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(p_6), not_null(q_6));
              LocalPopChoice(x_5);
            }
          else
            {
              t = w_5;
              t = SSL_gtr(not_null(p_6), not_null(q_6));
            }
        }
        t = s_5;
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
  ATerm w_6 = NULL;
  ATerm y_5 = t;
  int z_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_6 = NULL,y_6 = NULL,z_6 = NULL;
      x_6 = t;
      v_6 :
      if(match_cons(x_6, sym__2))
        {
          y_6 = ATgetArgument(x_6, 0);
          z_6 = ATgetArgument(x_6, 1);
          {
            if(((w_6 != NULL) && (w_6 != y_6)))
              _fail(y_6);
            else
              w_6 = y_6;
            if(((w_6 != NULL) && (w_6 != z_6)))
              _fail(z_6);
            else
              w_6 = z_6;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(z_5);
    }
  else
    {
      t = y_5;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm b_49 (ATerm))
{
  ATerm x_0 (ATerm t)
  {
    ATerm a_6;
    a_6 = t;
    {
      ATerm c_7 = NULL;
      ATerm d_7 = NULL;
      t = term_e_4;
      {
        t = get_config_0(t);
        {
          d_7 = t;
          if(((c_7 != NULL) && (c_7 != d_7)))
            _fail(d_7);
          else
            c_7 = d_7;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_7), term_c_6);
        t = geq_0(t);
      }
    }
    t = a_6;
    t = b_49(t);
    return(t);
  }
  t = try_1(t, x_0);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm h_7 = NULL,i_7 = NULL,j_7 = NULL;
  h_7 = t;
  g_7 :
  if(match_cons(h_7, sym__2))
    {
      i_7 = ATgetArgument(h_7, 0);
      j_7 = ATgetArgument(h_7, 1);
      {
        t = not_null(i_7);
        {
          ATerm y_0 (ATerm t)
          {
            t = not_null(j_7);
            return(t);
          }
          t = at_end_1(t, y_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm m_42 (ATerm), ATerm n_42 (ATerm))
{
  ATerm t_7 = NULL,u_7 = NULL,v_7 = NULL;
  t_7 = t;
  s_7 :
  if(match_cons(t_7, sym__2))
    {
      u_7 = ATgetArgument(t_7, 0);
      v_7 = ATgetArgument(t_7, 1);
      {
        ATerm z_7 = NULL,b_8 = NULL;
        ATerm a_8 = NULL;
        t = SSLgetAnnotations(not_null(t_7));
        {
          a_8 = t;
          if(((z_7 != NULL) && (z_7 != a_8)))
            _fail(a_8);
          else
            z_7 = a_8;
        }
        {
          t = not_null(u_7);
          {
            ATerm d_8 = NULL;
            t = m_42(t);
            {
              b_8 = t;
              {
                t = not_null(v_7);
                {
                  ATerm f_8 = NULL;
                  t = n_42(t);
                  {
                    d_8 = t;
                    {
                      ATerm g_8 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(b_8), not_null(d_8)), not_null(z_7));
                      {
                        g_8 = t;
                        if(((f_8 != NULL) && (f_8 != g_8)))
                          _fail(g_8);
                        else
                          f_8 = g_8;
                      }
                      t = not_null(f_8);
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
ATerm is_string_0 (ATerm t)
{
  ATerm n_8 = NULL;
  n_8 = t;
  t = SSL_is_string(not_null(n_8));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm d_6 = t;
  int e_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(e_6);
    }
  else
    {
      t = d_6;
      {
        ATerm f_6 = t;
        int h_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, z_0);
            LocalPopChoice(h_6);
          }
        else
          {
            t = f_6;
            {
              ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL;
              w_8 = t;
              v_8 :
              if(match_cons(w_8, sym_Path_1))
                {
                  x_8 = ATgetArgument(w_8, 0);
                  t = not_null(x_8);
                }
              else
                {
                  if(match_cons(w_8, sym_Var_1))
                    {
                      x_8 = ATgetArgument(w_8, 0);
                      {
                        t = not_null(x_8);
                        {
                          ATerm k_6 = t;
                          int l_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(l_6);
                            }
                          else
                            {
                              t = k_6;
                              {
                                ATerm b_1 (ATerm t)
                                {
                                  t = term_m_6;
                                  return(t);
                                }
                                t = debug_1(t, b_1);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(w_8, sym_Prefix_2))
                        {
                          x_8 = ATgetArgument(w_8, 0);
                          y_8 = ATgetArgument(w_8, 1);
                          {
                            ATerm d_9 = NULL,f_9 = NULL;
                            ATerm r_6;
                            r_6 = t;
                            {
                              ATerm e_9 = NULL;
                              t = not_null(x_8);
                              {
                                t = eval_config_0(t);
                                {
                                  e_9 = t;
                                  if(((d_9 != NULL) && (d_9 != e_9)))
                                    _fail(e_9);
                                  else
                                    d_9 = e_9;
                                }
                              }
                            }
                            t = r_6;
                            {
                              ATerm g_9 = NULL;
                              t = not_null(y_8);
                              {
                                t = eval_config_0(t);
                                {
                                  g_9 = t;
                                  if(((f_9 != NULL) && (f_9 != g_9)))
                                    _fail(g_9);
                                  else
                                    f_9 = g_9;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(d_9), not_null(f_9));
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
  ATerm o_9 = NULL;
  o_9 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_s_6, not_null(o_9));
    {
      t = table_get_0(t);
      {
        ATerm c_1 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm t_6;
            t_6 = t;
            {
              ATerm q_9 = NULL;
              ATerm r_9 = NULL;
              r_9 = t;
              if(((q_9 != NULL) && (q_9 != r_9)))
                _fail(r_9);
              else
                q_9 = r_9;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_s_6, not_null(o_9), not_null(q_9));
                t = table_put_0(t);
              }
            }
            t = t_6;
          }
          return(t);
        }
        t = try_1(t, c_1);
      }
    }
  }
  return(t);
}
ATerm get_repository_0 (ATerm t)
{
  ATerm w_9 = NULL;
  ATerm d_1 (ATerm t)
  {
    ATerm e_1 (ATerm t)
    {
      t = term_u_6;
      return(t);
    }
    t = say_1(t, e_1);
    return(t);
  }
  t = if_verbose1_1(t, d_1);
  {
    t = term_o_4;
    {
      ATerm y_9 = NULL;
      t = get_config_0(t);
      {
        w_9 = t;
        {
          ATerm f_1 (ATerm t)
          {
            ATerm g_1 (ATerm t)
            {
              t = term_a_7;
              return(t);
            }
            t = debug_1(t, g_1);
            return(t);
          }
          t = if_verbose2_1(t, f_1);
          {
            ATerm z_9 = NULL;
            t = not_null(w_9);
            {
              ATerm b_7 = t;
              int e_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = file_exists_0(t);
                  t = ReadFromFile_0(t);
                  LocalPopChoice(e_7);
                }
              else
                {
                  t = b_7;
                  t = (ATerm) ATempty;
                }
              {
                z_9 = t;
                if(((y_9 != NULL) && (y_9 != z_9)))
                  _fail(z_9);
                else
                  y_9 = z_9;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, term_p_4, not_null(y_9));
              t = table_putlist_0(t);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm register_tool_0 (ATerm t)
{
  t = get_repository_0(t);
  {
    t = extend_repository_0(t);
    t = save_repository_0(t);
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm d_10 = NULL;
  d_10 = t;
  t = SSL_string_to_int(not_null(d_10));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL;
  l_10 = t;
  j_10 :
  if(match_string(l_10, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(l_10) == AT_LIST) && ((ATermList) l_10 != ATempty)))
        {
          m_10 = ATgetFirst((ATermList) l_10);
          n_10 = (ATerm) ATgetNext((ATermList) l_10);
          k_10 :
          if(((ATgetType(n_10) == AT_LIST) && ((ATermList) n_10 != ATempty)))
            {
              o_10 = ATgetFirst((ATermList) n_10);
              p_10 = (ATerm) ATgetNext((ATermList) n_10);
              {
                ATerm t_10 = NULL;
                ATerm f_7;
                f_7 = t;
                {
                  t = not_null(m_10);
                  t = j_0(t);
                }
                t = f_7;
                {
                  ATerm u_10 = NULL;
                  t = not_null(o_10);
                  {
                    t = k_0(t);
                    {
                      u_10 = t;
                      if(((t_10 != NULL) && (t_10 != u_10)))
                        _fail(u_10);
                      else
                        t_10 = u_10;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(p_10)), not_null(t_10));
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
ATerm rxt_options_0 (ATerm t)
{
  ATerm k_7 = t;
  int l_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_1 (ATerm t)
      {
        ATerm i_11 = NULL;
        i_11 = t;
        y_10 :
        if(!(match_string(i_11, "-r")))
          {
            if(!(match_string(i_11, "--repository")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm i_1 (ATerm t)
      {
        ATerm m_7;
        m_7 = t;
        {
          ATerm j_11 = NULL;
          ATerm k_11 = NULL;
          k_11 = t;
          if(((j_11 != NULL) && (j_11 != k_11)))
            _fail(k_11);
          else
            j_11 = k_11;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_o_4, not_null(j_11));
            t = set_config_0(t);
          }
        }
        t = m_7;
        return(t);
      }
      ATerm j_1 (ATerm t)
      {
        t = term_n_7;
        return(t);
      }
      t = ArgOption_3(t, h_1, i_1, j_1);
      LocalPopChoice(l_7);
    }
  else
    {
      t = k_7;
      {
        ATerm o_7 = t;
        int p_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_1 (ATerm t)
            {
              ATerm l_11 = NULL;
              l_11 = t;
              a_11 :
              if(!(match_string(l_11, "-t")))
                {
                  if(!(match_string(l_11, "--tool")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm l_1 (ATerm t)
            {
              ATerm q_7;
              q_7 = t;
              {
                ATerm m_11 = NULL;
                ATerm n_11 = NULL;
                n_11 = t;
                if(((m_11 != NULL) && (m_11 != n_11)))
                  _fail(n_11);
                else
                  m_11 = n_11;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_e_5, not_null(m_11));
                  t = set_config_0(t);
                }
              }
              t = q_7;
              return(t);
            }
            ATerm m_1 (ATerm t)
            {
              t = term_r_7;
              return(t);
            }
            t = ArgOption_3(t, k_1, l_1, m_1);
            LocalPopChoice(p_7);
          }
        else
          {
            t = o_7;
            {
              ATerm w_7 = t;
              int x_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_1 (ATerm t)
                  {
                    ATerm o_11 = NULL;
                    o_11 = t;
                    c_11 :
                    if(!(match_string(o_11, "-l")))
                      {
                        if(!(match_string(o_11, "--location")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm p_1 (ATerm t)
                  {
                    ATerm y_7;
                    y_7 = t;
                    {
                      ATerm p_11 = NULL;
                      ATerm q_11 = NULL;
                      q_11 = t;
                      if(((p_11 != NULL) && (p_11 != q_11)))
                        _fail(q_11);
                      else
                        p_11 = q_11;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, term_j_5, not_null(p_11));
                        t = set_config_0(t);
                      }
                    }
                    t = y_7;
                    return(t);
                  }
                  ATerm q_1 (ATerm t)
                  {
                    t = term_c_8;
                    return(t);
                  }
                  t = ArgOption_3(t, n_1, p_1, q_1);
                  LocalPopChoice(x_7);
                }
              else
                {
                  t = w_7;
                  {
                    ATerm e_8 = t;
                    int h_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm r_1 (ATerm t)
                        {
                          ATerm r_11 = NULL;
                          r_11 = t;
                          e_11 :
                          if(!(match_string(r_11, "-V")))
                            {
                              if(!(match_string(r_11, "--Version")))
                                {
                                  _fail(t);
                                }
                            }
                          return(t);
                        }
                        ATerm t_1 (ATerm t)
                        {
                          ATerm i_8;
                          i_8 = t;
                          {
                            ATerm s_11 = NULL;
                            ATerm t_11 = NULL;
                            t_11 = t;
                            if(((s_11 != NULL) && (s_11 != t_11)))
                              _fail(t_11);
                            else
                              s_11 = t_11;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_h_5, not_null(s_11));
                              t = set_config_0(t);
                            }
                          }
                          t = i_8;
                          return(t);
                        }
                        ATerm u_1 (ATerm t)
                        {
                          t = term_j_8;
                          return(t);
                        }
                        t = ArgOption_3(t, r_1, t_1, u_1);
                        LocalPopChoice(h_8);
                      }
                    else
                      {
                        t = e_8;
                        {
                          ATerm x_1 (ATerm t)
                          {
                            ATerm u_11 = NULL;
                            u_11 = t;
                            g_11 :
                            if(!(match_string(u_11, "--verbose")))
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          ATerm y_1 (ATerm t)
                          {
                            ATerm k_8;
                            k_8 = t;
                            {
                              ATerm v_11 = NULL;
                              ATerm w_11 = NULL;
                              t = string_to_int_0(t);
                              {
                                w_11 = t;
                                if(((v_11 != NULL) && (v_11 != w_11)))
                                  _fail(w_11);
                                else
                                  v_11 = w_11;
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, term_e_4, not_null(v_11));
                                t = set_config_0(t);
                              }
                            }
                            t = k_8;
                            return(t);
                          }
                          ATerm d_2 (ATerm t)
                          {
                            t = term_l_8;
                            return(t);
                          }
                          t = ArgOption_3(t, x_1, y_1, d_2);
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
  ATerm d_12 = NULL;
  d_12 = t;
  t = SSL_table_destroy(not_null(d_12));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm h_12 = NULL;
  h_12 = t;
  t = SSL_implode_string(not_null(h_12));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm o_66 (ATerm))
{
  ATerm k_12 (ATerm t)
  {
    ATerm m_8 = t;
    int o_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, k_12);
        LocalPopChoice(o_8);
      }
    else
      {
        t = m_8;
        {
          t = Nil_0(t);
          t = o_66(t);
        }
      }
    return(t);
  }
  t = k_12(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm p_8 = t;
  int q_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(q_8);
    }
  else
    {
      t = p_8;
      {
        ATerm n_12 = NULL,o_12 = NULL,p_12 = NULL;
        n_12 = t;
        m_12 :
        if(((ATgetType(n_12) == AT_LIST) && ((ATermList) n_12 != ATempty)))
          {
            o_12 = ATgetFirst((ATermList) n_12);
            p_12 = (ATerm) ATgetNext((ATermList) n_12);
            {
              t = not_null(o_12);
              {
                ATerm e_2 (ATerm t)
                {
                  t = not_null(p_12);
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
  ATerm v_12 = NULL;
  v_12 = t;
  t = SSL_explode_string(not_null(v_12));
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
ATerm long_description_1 (ATerm t, ATerm x_53 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm z_65 (ATerm))
{
  ATerm y_12 (ATerm t)
  {
    ATerm r_8 = t;
    int s_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(s_8);
      }
    else
      {
        t = r_8;
        t = Cons_2(t, z_65, y_12);
      }
    return(t);
  }
  t = y_12(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm f_13 = NULL,g_13 = NULL,h_13 = NULL;
  h_13 = t;
  e_13 :
  if(((ATgetType(h_13) == AT_LIST) && ((ATermList) h_13 != ATempty)))
    {
      f_13 = ATgetFirst((ATermList) h_13);
      g_13 = (ATerm) ATgetNext((ATermList) h_13);
      {
        ATerm k_13 = NULL;
        t = not_null(g_13);
        {
          ATerm t_8;
          t_8 = t;
          {
            ATerm l_13 = NULL,n_13 = NULL,p_13 = NULL;
            ATerm u_8;
            u_8 = t;
            {
              ATerm m_13 = NULL;
              t = i_0(t);
              {
                m_13 = t;
                if(((l_13 != NULL) && (l_13 != m_13)))
                  _fail(m_13);
                else
                  l_13 = m_13;
              }
            }
            t = u_8;
            {
              ATerm o_13 = NULL;
              t = not_null(f_13);
              {
                t = h_0(t);
                {
                  o_13 = t;
                  if(((n_13 != NULL) && (n_13 != o_13)))
                    _fail(o_13);
                  else
                    n_13 = o_13;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(l_13)), not_null(n_13));
                {
                  p_13 = t;
                  if(((k_13 != NULL) && (k_13 != p_13)))
                    _fail(p_13);
                  else
                    k_13 = p_13;
                }
              }
            }
          }
          t = t_8;
          {
            ATerm f_2 (ATerm t)
            {
              t = not_null(k_13);
              return(t);
            }
            t = reverse_acc_2(t, h_0, f_2);
          }
        }
      }
    }
  else
    {
      if(((ATermList) h_13 == ATempty))
        {
          {
            t = term_z_8;
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
ATerm short_description_1 (ATerm t, ATerm w_53 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm e_44 (ATerm))
{
  ATerm a_14 = NULL,b_14 = NULL;
  a_14 = t;
  z_13 :
  if(match_cons(a_14, sym_Program_1))
    {
      b_14 = ATgetArgument(a_14, 0);
      {
        ATerm e_14 = NULL,g_14 = NULL;
        ATerm f_14 = NULL;
        t = SSLgetAnnotations(not_null(a_14));
        {
          f_14 = t;
          if(((e_14 != NULL) && (e_14 != f_14)))
            _fail(f_14);
          else
            e_14 = f_14;
        }
        {
          t = not_null(b_14);
          {
            ATerm i_14 = NULL;
            t = e_44(t);
            {
              g_14 = t;
              {
                ATerm j_14 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(g_14)), not_null(e_14));
                {
                  j_14 = t;
                  if(((i_14 != NULL) && (i_14 != j_14)))
                    _fail(j_14);
                  else
                    i_14 = j_14;
                }
                t = not_null(i_14);
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
  ATerm s_14 = NULL;
  ATerm i_2 (ATerm t)
  {
    ATerm j_2 (ATerm t)
    {
      ATerm t_14 = NULL;
      t_14 = t;
      if(((s_14 != NULL) && (s_14 != t_14)))
        _fail(t_14);
      else
        s_14 = t_14;
      return(t);
    }
    t = Program_1(t, j_2);
    return(t);
  }
  t = option_defined_1(t, i_2);
  {
    ATerm k_2 (ATerm t)
    {
      ATerm u_14 = NULL;
      ATerm v_14 = NULL;
      t = term_z_8;
      {
        ATerm l_2 (ATerm t)
        {
          t = not_null(s_14);
          return(t);
        }
        t = short_description_1(t, l_2);
        {
          t = concat_strings_0(t);
          {
            v_14 = t;
            if(((u_14 != NULL) && (u_14 != v_14)))
              _fail(v_14);
            else
              u_14 = v_14;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_3, (ATerm) ATinsert(ATempty, not_null(u_14)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, k_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_3, (ATerm) ATinsert(ATempty, term_a_9));
      {
        t = printnl_0(t);
        {
          t = term_h_9;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm m_2 (ATerm t)
                {
                  ATerm w_14 = NULL;
                  w_14 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_x_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_14)), term_i_9));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, m_2);
                {
                  ATerm o_2 (ATerm t)
                  {
                    ATerm y_14 = NULL;
                    ATerm z_14 = NULL;
                    t = term_z_8;
                    {
                      ATerm q_2 (ATerm t)
                      {
                        t = not_null(s_14);
                        return(t);
                      }
                      t = long_description_1(t, q_2);
                      {
                        t = concat_strings_0(t);
                        {
                          z_14 = t;
                          if(((y_14 != NULL) && (y_14 != z_14)))
                            _fail(z_14);
                          else
                            y_14 = z_14;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_x_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_14)), term_j_9));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, o_2);
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
  ATerm j_15 = NULL,m_15 = NULL;
  j_15 = t;
  i_15 :
  if(match_cons(j_15, sym_Undefined_1))
    {
      m_15 = ATgetArgument(j_15, 0);
      {
        ATerm p_15 = NULL,r_15 = NULL;
        ATerm q_15 = NULL;
        t = SSLgetAnnotations(not_null(j_15));
        {
          q_15 = t;
          if(((p_15 != NULL) && (p_15 != q_15)))
            _fail(q_15);
          else
            p_15 = q_15;
        }
        {
          t = not_null(m_15);
          {
            ATerm y_15 = NULL;
            t = f_44(t);
            {
              r_15 = t;
              {
                ATerm z_15 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(r_15)), not_null(p_15));
                {
                  z_15 = t;
                  if(((y_15 != NULL) && (y_15 != z_15)))
                    _fail(z_15);
                  else
                    y_15 = z_15;
                }
                t = not_null(y_15);
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
ATerm fetch_1 (ATerm t, ATerm i_66 (ATerm))
{
  ATerm e_16 (ATerm t)
  {
    ATerm k_9 = t;
    int l_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, i_66, _id);
        LocalPopChoice(l_9);
      }
    else
      {
        t = k_9;
        t = Cons_2(t, _id, e_16);
      }
    return(t);
  }
  t = e_16(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm v_54 (ATerm))
{
  t = fetch_1(t, v_54);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm j_16 = NULL;
  j_16 = t;
  i_16 :
  if(match_cons(j_16, sym_Help_0))
    {
      ATerm l_16 = NULL,n_16 = NULL;
      ATerm m_9;
      m_9 = t;
      {
        ATerm m_16 = NULL;
        t = SSLgetAnnotations(not_null(j_16));
        {
          m_16 = t;
          if(((l_16 != NULL) && (l_16 != m_16)))
            _fail(m_16);
          else
            l_16 = m_16;
        }
      }
      t = m_9;
      {
        ATerm o_16 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(l_16));
        {
          o_16 = t;
          if(((n_16 != NULL) && (n_16 != o_16)))
            _fail(o_16);
          else
            n_16 = o_16;
        }
        t = not_null(n_16);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm t_74 (ATerm))
{
  ATerm n_9 = t;
  int p_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_74(t);
      LocalPopChoice(p_9);
    }
  else
    {
      t = n_9;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm u_16 = NULL,v_16 = NULL,w_16 = NULL;
  u_16 = t;
  t_16 :
  if(match_cons(u_16, sym__2))
    {
      v_16 = ATgetArgument(u_16, 0);
      w_16 = ATgetArgument(u_16, 1);
      t = SSL_table_get(not_null(v_16), not_null(w_16));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL;
  d_17 = t;
  c_17 :
  if(match_cons(d_17, sym__3))
    {
      e_17 = ATgetArgument(d_17, 0);
      f_17 = ATgetArgument(d_17, 1);
      g_17 = ATgetArgument(d_17, 2);
      {
        ATerm s_9;
        s_9 = t;
        {
          ATerm k_17 = NULL;
          ATerm l_17 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_17), not_null(f_17));
          {
            ATerm t_9 = t;
            int u_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(u_9);
              }
            else
              {
                t = t_9;
                t = (ATerm) ATempty;
              }
            {
              l_17 = t;
              if(((k_17 != NULL) && (k_17 != l_17)))
                _fail(l_17);
              else
                k_17 = l_17;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(e_17), not_null(f_17), (ATerm) ATinsert(CheckATermList(not_null(k_17)), not_null(g_17)));
            t = table_put_0(t);
          }
        }
        t = s_9;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm b_54 (ATerm))
{
  ATerm p_17 = NULL;
  ATerm q_17 = NULL;
  t = term_z_8;
  {
    t = b_54(t);
    {
      q_17 = t;
      if(((p_17 != NULL) && (p_17 != q_17)))
        _fail(q_17);
      else
        p_17 = q_17;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_b_9, term_c_9, not_null(p_17));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm w_17 = NULL,x_17 = NULL,y_17 = NULL;
  w_17 = t;
  v_17 :
  if(match_string(w_17, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(w_17) == AT_LIST) && ((ATermList) w_17 != ATempty)))
        {
          x_17 = ATgetFirst((ATermList) w_17);
          y_17 = (ATerm) ATgetNext((ATermList) w_17);
          {
            ATerm b_18 = NULL;
            ATerm v_9;
            v_9 = t;
            {
              t = not_null(x_17);
              t = c_0(t);
            }
            t = v_9;
            {
              ATerm c_18 = NULL;
              t = term_z_8;
              {
                t = d_0(t);
                {
                  c_18 = t;
                  if(((b_18 != NULL) && (b_18 != c_18)))
                    _fail(c_18);
                  else
                    b_18 = c_18;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(y_17)), not_null(b_18));
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
  ATerm t_2 (ATerm t)
  {
    ATerm h_18 = NULL;
    h_18 = t;
    g_18 :
    if(!(match_string(h_18, "--help")))
      {
        if(!(match_string(h_18, "-h")))
          {
            if(!(match_string(h_18, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    t = term_x_9;
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    t = term_a_10;
    return(t);
  }
  t = Option_3(t, t_2, u_2, v_2);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm k_18 = NULL,l_18 = NULL,m_18 = NULL;
  k_18 = t;
  j_18 :
  if(((ATgetType(k_18) == AT_LIST) && ((ATermList) k_18 != ATempty)))
    {
      l_18 = ATgetFirst((ATermList) k_18);
      m_18 = (ATerm) ATgetNext((ATermList) k_18);
      t = (ATerm) ATinsert(CheckATermList(not_null(m_18)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(l_18)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm u_48 (ATerm), ATerm v_48 (ATerm))
{
  ATerm j_19 = NULL,k_19 = NULL,o_19 = NULL;
  j_19 = t;
  c_19 :
  if(((ATgetType(j_19) == AT_LIST) && ((ATermList) j_19 != ATempty)))
    {
      k_19 = ATgetFirst((ATermList) j_19);
      o_19 = (ATerm) ATgetNext((ATermList) j_19);
      {
        ATerm s_19 = NULL,u_19 = NULL;
        ATerm t_19 = NULL;
        t = SSLgetAnnotations(not_null(j_19));
        {
          t_19 = t;
          if(((s_19 != NULL) && (s_19 != t_19)))
            _fail(t_19);
          else
            s_19 = t_19;
        }
        {
          t = not_null(k_19);
          {
            ATerm w_19 = NULL;
            t = u_48(t);
            {
              u_19 = t;
              {
                t = not_null(o_19);
                {
                  ATerm y_19 = NULL;
                  t = v_48(t);
                  {
                    w_19 = t;
                    {
                      ATerm z_19 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(w_19)), not_null(u_19)), not_null(s_19));
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
  ATerm n_20 = NULL;
  n_20 = t;
  m_20 :
  if(((ATermList) n_20 == ATempty))
    {
      {
        ATerm p_20 = NULL,r_20 = NULL;
        ATerm b_10;
        b_10 = t;
        {
          ATerm q_20 = NULL;
          t = SSLgetAnnotations(not_null(n_20));
          {
            q_20 = t;
            if(((p_20 != NULL) && (p_20 != q_20)))
              _fail(q_20);
            else
              p_20 = q_20;
          }
        }
        t = b_10;
        {
          ATerm s_20 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(p_20));
          {
            s_20 = t;
            if(((r_20 != NULL) && (r_20 != s_20)))
              _fail(s_20);
            else
              r_20 = s_20;
          }
          t = not_null(r_20);
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
  ATerm y_20 = NULL,z_20 = NULL,a_21 = NULL;
  y_20 = t;
  x_20 :
  if(match_cons(y_20, sym__2))
    {
      z_20 = ATgetArgument(y_20, 0);
      a_21 = ATgetArgument(y_20, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_s_6, not_null(z_20), not_null(a_21));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm z_53 (ATerm))
{
  ATerm c_10;
  c_10 = t;
  {
    ATerm w_2 (ATerm t)
    {
      t = term_e_10;
      t = z_53(t);
      return(t);
    }
    t = try_1(t, w_2);
  }
  t = c_10;
  {
    ATerm x_2 (ATerm t)
    {
      ATerm i_21 = NULL;
      ATerm f_10;
      f_10 = t;
      {
        ATerm g_21 = NULL;
        ATerm h_21 = NULL;
        h_21 = t;
        if(((g_21 != NULL) && (g_21 != h_21)))
          _fail(h_21);
        else
          g_21 = h_21;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_g_10, not_null(g_21));
          t = set_config_0(t);
        }
      }
      t = f_10;
      {
        ATerm j_21 = NULL;
        j_21 = t;
        if(((i_21 != NULL) && (i_21 != j_21)))
          _fail(j_21);
        else
          i_21 = j_21;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(i_21));
      }
      return(t);
    }
    ATerm c_3 (ATerm t)
    {
      ATerm h_10 = t;
      int i_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_10 = t;
          int r_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(r_10);
            }
          else
            {
              t = q_10;
              {
                t = z_53(t);
                t = Cons_2(t, _id, c_3);
              }
            }
          LocalPopChoice(i_10);
        }
      else
        {
          t = h_10;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, x_2, c_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm p_21 = NULL,q_21 = NULL,r_21 = NULL;
  ATerm s_10;
  s_10 = t;
  {
    ATerm s_21 = NULL,b_22 = NULL,c_22 = NULL,d_22 = NULL;
    s_21 = t;
    o_21 :
    if(match_cons(s_21, sym__3))
      {
        b_22 = ATgetArgument(s_21, 0);
        c_22 = ATgetArgument(s_21, 1);
        d_22 = ATgetArgument(s_21, 2);
        {
          if(((p_21 != NULL) && (p_21 != b_22)))
            _fail(b_22);
          else
            p_21 = b_22;
          {
            if(((q_21 != NULL) && (q_21 != c_22)))
              _fail(c_22);
            else
              q_21 = c_22;
            {
              if(((r_21 != NULL) && (r_21 != d_22)))
                _fail(d_22);
              else
                r_21 = d_22;
              t = SSL_table_put(not_null(p_21), not_null(q_21), not_null(r_21));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = s_10;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm y_53 (ATerm))
{
  ATerm i_22 = NULL;
  ATerm v_10;
  v_10 = t;
  {
    t = term_w_10;
    t = table_put_0(t);
  }
  t = v_10;
  {
    ATerm d_3 (ATerm t)
    {
      ATerm x_10 = t;
      int z_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_53(t);
          LocalPopChoice(z_10);
        }
      else
        {
          t = x_10;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, d_3);
    {
      ATerm e_3 (ATerm t)
      {
        ATerm b_11 = t;
        int d_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_f_11;
                t = exit_0(t);
              }
            }
            LocalPopChoice(d_11);
          }
        else
          {
            t = b_11;
            {
              ATerm j_3 (ATerm t)
              {
                ATerm k_3 (ATerm t)
                {
                  ATerm j_22 = NULL;
                  j_22 = t;
                  if(((i_22 != NULL) && (i_22 != j_22)))
                    _fail(j_22);
                  else
                    i_22 = j_22;
                  return(t);
                }
                t = Undefined_1(t, k_3);
                return(t);
              }
              t = option_defined_1(t, j_3);
              {
                ATerm h_11;
                h_11 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_x_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_22)), term_x_11));
                  t = printnl_0(t);
                }
                t = h_11;
                {
                  t = system_usage_0(t);
                  {
                    t = term_g_4;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, e_3);
      {
        ATerm y_11;
        y_11 = t;
        {
          t = term_b_9;
          t = table_destroy_0(t);
        }
        t = y_11;
      }
    }
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm n_22 = NULL,o_22 = NULL,p_22 = NULL;
  n_22 = t;
  m_22 :
  if(match_cons(n_22, sym__2))
    {
      o_22 = ATgetArgument(n_22, 0);
      p_22 = ATgetArgument(n_22, 1);
      {
        ATerm z_11;
        z_11 = t;
        t = SSL_printnl(not_null(o_22), not_null(p_22));
        t = z_11;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm m_56 (ATerm))
{
  ATerm a_12;
  a_12 = t;
  {
    ATerm v_22 = NULL,x_22 = NULL;
    ATerm b_12;
    b_12 = t;
    {
      ATerm w_22 = NULL;
      t = m_56(t);
      {
        w_22 = t;
        if(((v_22 != NULL) && (v_22 != w_22)))
          _fail(w_22);
        else
          v_22 = w_22;
      }
    }
    t = b_12;
    {
      ATerm y_22 = NULL;
      y_22 = t;
      if(((x_22 != NULL) && (x_22 != y_22)))
        _fail(y_22);
      else
        x_22 = y_22;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_22)), not_null(v_22)));
        t = printnl_0(t);
      }
    }
  }
  t = a_12;
  return(t);
}
ATerm register_xt_0 (ATerm t)
{
  ATerm l_3 (ATerm t)
  {
    ATerm m_3 (ATerm t)
    {
      t = term_c_12;
      return(t);
    }
    t = debug_1(t, m_3);
    return(t);
  }
  t = if_verbose1_1(t, l_3);
  {
    t = parse_options_1(t, rxt_options_0);
    {
      ATerm r_3 (ATerm t)
      {
        ATerm s_3 (ATerm t)
        {
          t = term_e_12;
          return(t);
        }
        t = say_1(t, s_3);
        return(t);
      }
      t = if_verbose1_1(t, r_3);
      {
        t = register_tool_0(t);
        {
          ATerm u_3 (ATerm t)
          {
            ATerm v_3 (ATerm t)
            {
              t = term_f_12;
              return(t);
            }
            t = say_1(t, v_3);
            return(t);
          }
          t = if_verbose1_1(t, u_3);
          {
            t = term_f_11;
            t = exit_0(t);
          }
        }
      }
    }
  }
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = register_xt_0(t);
  return(t);
}
