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
Symbol sym_Undefined_0;
Symbol sym_F__OK_0;
Symbol sym_R__OK_0;
Symbol sym_W__OK_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Version_0;
Symbol sym_Help_0;
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
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_F__OK_0 = ATmakeSymbol("F_OK", 0, ATfalse);
  ATprotectSymbol(sym_F__OK_0);
  sym_R__OK_0 = ATmakeSymbol("R_OK", 0, ATfalse);
  ATprotectSymbol(sym_R__OK_0);
  sym_W__OK_0 = ATmakeSymbol("W_OK", 0, ATfalse);
  ATprotectSymbol(sym_W__OK_0);
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
  sym_Version_0 = ATmakeSymbol("Version", 0, ATfalse);
  ATprotectSymbol(sym_Version_0);
  sym_Help_0 = ATmakeSymbol("Help", 0, ATfalse);
  ATprotectSymbol(sym_Help_0);
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
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_h_25;
ATerm term_g_25;
ATerm term_l_23;
ATerm term_p_22;
ATerm term_a_22;
ATerm term_t_21;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_e_19;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_c_17;
ATerm term_z_16;
ATerm term_v_16;
ATerm term_q_16;
ATerm term_l_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_a_16;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_k_15;
ATerm term_w_14;
ATerm term_i_14;
ATerm term_z_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_a_13;
ATerm term_s_12;
ATerm term_w_11;
ATerm term_t_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_h_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_p_9;
void init_constant_terms (void)
{
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" : no registration", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol(") : ", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY=", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--repository rep | -r rep    Tool repository", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("import", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("import r | i r               Import repository r\n", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register | r                 Register a tool", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--tool n | -t n              Tool name", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-l loc  | --location loc     Location of tool", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--Version n | -V n           Version of tool\n", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("query | q                    Query the XTC repository", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--all | -a                   List all registered tools", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--Location | -L              List only location of tool", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--Repository | -R            Location of repository\n", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i                  Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: xtc [-r rep] register -t tool -V vers -l loc\n", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("       xtc [-r rep] (import r)+\n", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("       xtc [-r rep] query (-a | -t tool [-V version]) [-L]", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("The xtc command supports the registration of tools in an XTC repository\n", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("and querying XTC repositories", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym__3, term_w_14, term_m_18, term_m_13);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
}
ATerm version_query_0_0 (ATerm);
ATerm if_verbose3_1_0 (ATerm i_92 (ATerm), ATerm);
ATerm tool_query_0_0 (ATerm);
ATerm list_tool_0_0 (ATerm);
ATerm Tool_1_0 (ATerm m_63 (ATerm), ATerm);
ATerm all_query_0_0 (ATerm);
ATerm repository_query_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm x_83 (ATerm), ATerm);
ATerm xtc_store_0_0 (ATerm);
ATerm register_import_0_0 (ATerm);
ATerm table_union_0_0 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm g_92 (ATerm), ATerm);
ATerm xtc_register_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm h_92 (ATerm), ATerm);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm extend_config_0_0 (ATerm);
ATerm xtc_options_0_0 (ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm h_63 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm i_63 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm y_88 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm x_88 (ATerm), ATerm);
ATerm xtc_main_0_0 (ATerm);
ATerm xtc_xtc_get_0_0 (ATerm);
ATerm map_1_0 (ATerm h_71 (ATerm), ATerm);
ATerm if_verbose5_1_0 (ATerm k_92 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm s_71 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm j_92 (ATerm), ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose6_1_0 (ATerm l_92 (ATerm), ATerm);
ATerm union_1_0 (ATerm l_75 (ATerm), ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm b_89 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm m_78 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm s_64 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm Cons_2_0 (ATerm u_57 (ATerm), ATerm v_57 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm y_71 (ATerm), ATerm);
ATerm _2_0 (ATerm l_56 (ATerm), ATerm m_56 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm version_query_0_0 (ATerm t)
{
  ATerm q_0 = NULL,s_0 = NULL,v_0 = NULL,w_0 = NULL;
  q_0 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-V", 0, ATtrue)));
  {
    ATerm g_9 = t;
    int j_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_0 = NULL;
        t = eval_config_0_0(t);
        i_0 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-V", 0, ATtrue)), i_0);
        t = i_0;
        ;
        LocalPopChoice(j_9);
      }
    else
      {
        t = g_9;
      }
    s_0 = t;
    t = q_0;
    {
      ATerm b_0 (ATerm t)
      {
        if(match_cons(t, sym_Tool_1))
          {
            if(((v_0 != NULL) && (v_0 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              v_0 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        return(t);
      }
      ATerm e_0 (ATerm t)
      {
        ATerm f_0 (ATerm t)
        {
          if(match_cons(t, sym__2))
            {
              if((s_0 != ATgetArgument(t, 0)))
                {
                  _fail(ATgetArgument(t, 0));
                }
              if(((w_0 != NULL) && (w_0 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                w_0 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(f_0, t);
        return(t);
      }
      t = _2_0(b_0, e_0, t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Tool_1, not_null(v_0)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, s_0, not_null(w_0))));
      t = list_tool_0_0(t);
    }
  }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm i_92 (ATerm), ATerm t)
{
  ATerm k_9 = t;
  int m_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_0 = NULL,c_1 = NULL;
      x_0 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm n_9 = t;
        int o_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_0 = NULL;
            t = eval_config_0_0(t);
            r_0 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), r_0);
            t = r_0;
            ;
            LocalPopChoice(o_9);
          }
        else
          {
            t = n_9;
          }
        c_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_1, term_p_9);
        t = geq_0_0(t);
        t = x_0;
        t = i_92(t);
      }
      ;
      LocalPopChoice(m_9);
    }
  else
    {
      t = k_9;
    }
  return(t);
}
ATerm tool_query_0_0 (ATerm t)
{
  ATerm d_1 = NULL,g_1 = NULL;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue)));
  {
    ATerm r_9 = t;
    int s_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_1 = NULL;
        t = eval_config_0_0(t);
        a_1 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue)), a_1);
        t = a_1;
        ;
        LocalPopChoice(s_9);
      }
    else
      {
        t = r_9;
      }
    g_1 = t;
    {
      ATerm m_0 (ATerm t)
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
        t = filter_1_0(xtc_read_0_0, t);
        {
          ATerm x_9 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = x_9;
            }
        }
        return(t);
      }
      t = repeat_1_0(m_0, t);
      t = g_1;
      {
        ATerm n_0 (ATerm t)
        {
          ATerm h_1 = NULL;
          h_1 = t;
          {
            ATerm y_9 = t;
            int z_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_0 (ATerm t)
                {
                  ATerm b_1 = NULL;
                  b_1 = t;
                  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, b_1), (ATerm) ATmakeAppl(ATmakeSymbol("Retrieving tool: ", 0, ATtrue))));
                  t = b_1;
                  return(t);
                }
                t = if_verbose3_1_0(o_0, t);
                t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, h_1));
                if(((d_1 != NULL) && (d_1 != t)))
                  _fail(t);
                else
                  d_1 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Tool_1, h_1), not_null(d_1));
                {
                  ATerm a_10 = t;
                  int b_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = version_query_0_0(t);
                      ;
                      LocalPopChoice(b_10);
                    }
                  else
                    {
                      t = a_10;
                      t = list_tool_0_0(t);
                    }
                }
                ;
                LocalPopChoice(z_9);
              }
            else
              {
                t = y_9;
                t = SSL_print((ATerm)ATmakeAppl(sym_stdout_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol(" : no registration", 0, ATtrue))), h_1));
                t = (ATerm) ATmakeAppl(sym__2, term_d_10, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_10), term_e_10), h_1));
              }
          }
          return(t);
        }
        t = map_1_0(n_0, t);
      }
    }
  }
  return(t);
}
ATerm list_tool_0_0 (ATerm t)
{
  ATerm i_1 = NULL,j_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_10 = ATgetArgument(t, 0);
      if(match_cons(i_10, sym_Tool_1))
        {
          i_1 = ATgetArgument(i_10, 0);
        }
      else
        _fail(t);
      j_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_1;
  {
    ATerm p_0 (ATerm t)
    {
      ATerm l_1 = NULL,n_1 = NULL;
      if(match_cons(t, sym__2))
        {
          l_1 = ATgetArgument(t, 0);
          n_1 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm k_10 = t;
        int l_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-l", 0, ATtrue)));
            {
              ATerm m_10 = t;
              int n_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_1 = NULL;
                  t = eval_config_0_0(t);
                  q_1 = t;
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-l", 0, ATtrue)), q_1);
                  t = q_1;
                  ;
                  LocalPopChoice(n_10);
                }
              else
                {
                  t = m_10;
                }
              t = SSL_print((ATerm)ATmakeAppl(sym_stdout_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue))), n_1));
              t = (ATerm) ATmakeAppl(sym__2, term_d_10, (ATerm) ATinsert(ATinsert(ATempty, term_h_10), n_1));
            }
            ;
            LocalPopChoice(l_10);
          }
        else
          {
            t = k_10;
            t = SSL_print((ATerm)ATmakeAppl(sym_stdout_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue))), n_1), (ATerm) ATmakeAppl(ATmakeSymbol(") : ", 0, ATtrue))), l_1), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), i_1));
            t = (ATerm) ATmakeAppl(sym__2, term_d_10, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_10), n_1), term_p_10), l_1), term_o_10), i_1));
          }
      }
      return(t);
    }
    t = map_1_0(p_0, t);
  }
  return(t);
}
ATerm Tool_1_0 (ATerm m_63 (ATerm), ATerm t)
{
  ATerm p_1 = NULL,r_1 = NULL,t_1 = NULL,v_1 = NULL;
  v_1 = t;
  if(match_cons(t, sym_Tool_1))
    {
      r_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_1);
  p_1 = t;
  t = r_1;
  t = m_63(t);
  t_1 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Tool_1, t_1), p_1);
  return(t);
}
ATerm all_query_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-a", 0, ATtrue)));
  {
    ATerm s_10 = t;
    int u_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_1 = NULL;
        t = eval_config_0_0(t);
        y_1 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-a", 0, ATtrue)), y_1);
        t = y_1;
        ;
        LocalPopChoice(u_10);
      }
    else
      {
        t = s_10;
      }
    {
      ATerm t_0 (ATerm t)
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
        t = filter_1_0(xtc_read_0_0, t);
        {
          ATerm v_10 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = v_10;
            }
        }
        return(t);
      }
      t = repeat_1_0(t_0, t);
      t = SSL_table_keys((ATerm) ATmakeAppl(sym_XTC_0));
      {
        ATerm u_0 (ATerm t)
        {
          ATerm h_2 = NULL,i_2 = NULL;
          h_2 = t;
          t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), h_2);
          i_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, h_2, i_2);
          return(t);
        }
        t = map_1_0(u_0, t);
        {
          ATerm y_0 (ATerm t)
          {
            ATerm w_10 = t;
            int x_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_0 (ATerm t)
                {
                  t = Tool_1_0(_id, t);
                  return(t);
                }
                t = _2_0(z_0, _id, t);
                t = list_tool_0_0(t);
                ;
                LocalPopChoice(x_10);
              }
            else
              {
                t = w_10;
              }
            return(t);
          }
          t = map_1_0(y_0, t);
        }
      }
    }
  }
  return(t);
}
ATerm repository_query_0_0 (ATerm t)
{
  ATerm d_2 = NULL;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-R", 0, ATtrue)));
  {
    ATerm y_10 = t;
    int a_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_2 = NULL;
        t = eval_config_0_0(t);
        w_2 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-R", 0, ATtrue)), w_2);
        t = w_2;
        ;
        LocalPopChoice(a_11);
      }
    else
      {
        t = y_10;
      }
    t = xtc_location_0_0(t);
    d_2 = t;
    t = SSL_print((ATerm)ATmakeAppl(sym_stdout_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue))), d_2), (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY=", 0, ATtrue))));
    t = (ATerm) ATmakeAppl(sym__2, term_d_10, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_10), d_2), term_c_11));
  }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm x_83 (ATerm), ATerm t)
{
  ATerm e_2 = NULL,f_2 = NULL,j_2 = NULL;
  if(match_cons(t, sym__2))
    {
      e_2 = ATgetArgument(t, 0);
      f_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_2, term_d_11);
  t = open_stream_0_0(t);
  j_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_2, f_2);
  t = x_83(t);
  t = fclose_0_0(t);
  t = f_2;
  return(t);
}
ATerm xtc_store_0_0 (ATerm t)
{
  ATerm e_1 (ATerm t)
  {
    ATerm k_2 = NULL;
    k_2 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("  Saving repository ", 0, ATtrue))));
    t = k_2;
    return(t);
  }
  t = if_verbose1_1_0(e_1, t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)));
  {
    ATerm e_11 = t;
    int f_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_3 = NULL;
        t = eval_config_0_0(t);
        b_3 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)), b_3);
        t = b_3;
        ;
        LocalPopChoice(f_11);
      }
    else
      {
        t = e_11;
      }
    {
      ATerm g_11 = t;
      int h_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_11 = t;
          int j_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_2 = NULL;
              l_2 = t;
              t = SSL_access(l_2, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
              LocalPopChoice(j_11);
              {
                ATerm m_2 = NULL;
                m_2 = t;
                t = SSL_access(m_2, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_W__OK_0)));
              }
            }
          else
            {
              t = i_11;
            }
          LocalPopChoice(h_11);
          {
            ATerm n_2 = NULL,o_2 = NULL;
            n_2 = t;
            t = SSL_table_keys((ATerm) ATmakeAppl(sym_XTC_0));
            {
              ATerm f_1 (ATerm t)
              {
                ATerm h_3 = NULL,l_3 = NULL;
                h_3 = t;
                t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), h_3);
                l_3 = t;
                t = (ATerm) ATmakeAppl(sym__2, h_3, l_3);
                return(t);
              }
              t = map_1_0(f_1, t);
              o_2 = t;
              t = (ATerm) ATmakeAppl(sym__2, n_2, o_2);
              {
                ATerm k_1 (ATerm t)
                {
                  ATerm p_2 = NULL,q_2 = NULL,t_2 = NULL,u_2 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm k_11 = ATgetArgument(t, 0);
                      if(match_cons(k_11, sym_Stream_1))
                        {
                          p_2 = ATgetArgument(k_11, 0);
                        }
                      else
                        _fail(t);
                      q_2 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSL_write_term_to_stream_text(p_2, q_2);
                  t_2 = t;
                  t = SSL_fputc((ATerm)ATmakeInt(10), t_2);
                  u_2 = t;
                  t = (ATerm) ATmakeAppl(sym_Stream_1, u_2);
                  return(t);
                }
                t = WriteToFile_1_0(k_1, t);
              }
            }
          }
        }
      else
        {
          t = g_11;
          {
            ATerm m_3 = NULL;
            m_3 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, m_3), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No write permission for repository: ", 0, ATtrue))));
            t = m_3;
            _fail(t);
          }
        }
    }
  }
  return(t);
}
ATerm register_import_0_0 (ATerm t)
{
  ATerm a_3 = NULL;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("import", 0, ATtrue)));
  {
    ATerm l_11 = t;
    int m_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_3 = NULL;
        t = eval_config_0_0(t);
        s_3 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("import", 0, ATtrue)), s_3);
        t = s_3;
        ;
        LocalPopChoice(m_11);
      }
    else
      {
        t = l_11;
      }
    {
      ATerm m_1 (ATerm t)
      {
        ATerm u_3 = NULL;
        u_3 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, u_3), (ATerm) ATmakeAppl(ATmakeSymbol("  Registering imports: ", 0, ATtrue))));
        t = u_3;
        return(t);
      }
      t = if_verbose2_1_0(m_1, t);
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("import", 0, ATtrue)));
      {
        ATerm q_11 = t;
        int r_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_4 = NULL;
            t = eval_config_0_0(t);
            f_4 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("import", 0, ATtrue)), f_4);
            t = f_4;
            ;
            LocalPopChoice(r_11);
          }
        else
          {
            t = q_11;
          }
        a_3 = t;
        {
          ATerm o_1 (ATerm t)
          {
            ATerm g_4 = NULL;
            g_4 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, g_4), (ATerm) ATmakeAppl(ATmakeSymbol("importing: ", 0, ATtrue))));
            t = g_4;
            return(t);
          }
          t = if_verbose5_1_0(o_1, t);
          t = (ATerm) ATmakeAppl(sym__3, term_t_11, term_w_11, a_3);
          t = table_union_0_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm table_union_0_0 (ATerm t)
{
  ATerm e_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL,t_3 = NULL;
  if(match_cons(t, sym__3))
    {
      e_3 = ATgetArgument(t, 0);
      i_3 = ATgetArgument(t, 1);
      j_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_3, i_3);
  {
    ATerm x_11 = t;
    int y_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_12 = ATgetArgument(t, 0);
            ATerm d_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(e_3, i_3);
        ;
        LocalPopChoice(y_11);
      }
    else
      {
        t = x_11;
        t = (ATerm) ATempty;
      }
    k_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_3, k_3);
    {
      ATerm s_1 (ATerm t)
      {
        ATerm y_3 = NULL;
        if(match_cons(t, sym__2))
          {
            y_3 = ATgetArgument(t, 0);
            if((y_3 != ATgetArgument(t, 1)))
              {
                _fail(ATgetArgument(t, 1));
              }
          }
        else
          _fail(t);
        return(t);
      }
      t = union_1_0(s_1, t);
      t_3 = t;
      t = SSL_table_put(e_3, i_3, t_3);
      t = (ATerm) ATmakeAppl(sym__3, e_3, i_3, j_3);
    }
  }
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm l_4 = NULL;
  ATerm u_1 (ATerm t)
  {
    ATerm m_4 = NULL;
    m_4 = t;
    t = SSL_explode_string(m_4);
    return(t);
  }
  t = map_1_0(u_1, t);
  t = concat_0_0(t);
  l_4 = t;
  t = SSL_implode_string(l_4);
  return(t);
}
ATerm if_verbose1_1_0 (ATerm g_92 (ATerm), ATerm t)
{
  ATerm j_12 = t;
  int k_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_4 = NULL,v_4 = NULL;
      n_4 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm l_12 = t;
        int n_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_4 = NULL;
            t = eval_config_0_0(t);
            p_4 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), p_4);
            t = p_4;
            ;
            LocalPopChoice(n_12);
          }
        else
          {
            t = l_12;
          }
        v_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_4, term_s_12);
        t = geq_0_0(t);
        t = n_4;
        t = g_92(t);
      }
      ;
      LocalPopChoice(k_12);
    }
  else
    {
      t = j_12;
    }
  return(t);
}
ATerm xtc_register_0_0 (ATerm t)
{
  ATerm x_4 = NULL,z_4 = NULL,a_5 = NULL;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue)));
  {
    ATerm t_12 = t;
    int u_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_4 = NULL;
        t = eval_config_0_0(t);
        u_4 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue)), u_4);
        t = u_4;
        ;
        LocalPopChoice(u_12);
      }
    else
      {
        t = t_12;
      }
    x_4 = t;
    {
      ATerm w_1 (ATerm t)
      {
        ATerm b_5 = NULL;
        b_5 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("  Registering tool ", 0, ATtrue))));
        t = b_5;
        return(t);
      }
      t = if_verbose1_1_0(w_1, t);
      {
        ATerm x_1 (ATerm t)
        {
          ATerm w_4 = NULL;
          w_4 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, w_4), (ATerm) ATmakeAppl(ATmakeSymbol("    Tools:    ", 0, ATtrue))));
          t = w_4;
          return(t);
        }
        t = if_verbose2_1_0(x_1, t);
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-V", 0, ATtrue)));
        {
          ATerm v_12 = t;
          int w_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_6 = NULL;
              t = eval_config_0_0(t);
              c_6 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-V", 0, ATtrue)), c_6);
              t = c_6;
              ;
              LocalPopChoice(w_12);
            }
          else
            {
              t = v_12;
            }
          z_4 = t;
          {
            ATerm z_1 (ATerm t)
            {
              ATerm d_6 = NULL;
              d_6 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, d_6), (ATerm) ATmakeAppl(ATmakeSymbol("    Version:  ", 0, ATtrue))));
              t = d_6;
              return(t);
            }
            t = if_verbose2_1_0(z_1, t);
            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-l", 0, ATtrue)));
            {
              ATerm x_12 = t;
              int y_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_6 = NULL;
                  t = eval_config_0_0(t);
                  j_6 = t;
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-l", 0, ATtrue)), j_6);
                  t = j_6;
                  ;
                  LocalPopChoice(y_12);
                }
              else
                {
                  t = x_12;
                }
              a_5 = t;
              {
                ATerm a_2 (ATerm t)
                {
                  ATerm k_6 = NULL;
                  k_6 = t;
                  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, k_6), (ATerm) ATmakeAppl(ATmakeSymbol("    Location: ", 0, ATtrue))));
                  t = k_6;
                  return(t);
                }
                t = if_verbose2_1_0(a_2, t);
                t = x_4;
                {
                  ATerm b_2 (ATerm t)
                  {
                    ATerm c_5 = NULL,d_5 = NULL;
                    c_5 = t;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, c_5), term_a_13), a_5);
                    t = concat_strings_0_0(t);
                    d_5 = t;
                    t = (ATerm) ATmakeAppl(sym__3, term_t_11, (ATerm)ATmakeAppl(sym_Tool_1, c_5), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, z_4, d_5)));
                    t = table_union_0_0(t);
                    return(t);
                  }
                  t = map_1_0(b_2, t);
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
ATerm if_verbose2_1_0 (ATerm h_92 (ATerm), ATerm t)
{
  ATerm b_13 = t;
  int e_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_5 = NULL,g_5 = NULL;
      e_5 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm j_13 = t;
        int k_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_8 = NULL;
            t = eval_config_0_0(t);
            m_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), m_8);
            t = m_8;
            ;
            LocalPopChoice(k_13);
          }
        else
          {
            t = j_13;
          }
        g_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_5, term_l_13);
        t = geq_0_0(t);
        t = e_5;
        t = h_92(t);
      }
      ;
      LocalPopChoice(e_13);
    }
  else
    {
      t = b_13;
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm k_5 = NULL,l_5 = NULL,m_5 = NULL,n_5 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_5 = NULL;
      t = term_m_13;
      t = l_0(t);
      o_5 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_13, term_i_14, o_5);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm s_5 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_5 = ATgetFirst((ATermList) t);
          l_5 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_5;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_5 = ATgetFirst((ATermList) t);
          n_5 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_5;
      t = j_0(t);
      t = m_5;
      t = k_0(t);
      s_5 = t;
      t = (ATerm) ATinsert(CheckATermList(n_5), s_5);
    }
  return(t);
}
ATerm extend_config_0_0 (ATerm t)
{
  ATerm u_5 = NULL,v_5 = NULL,w_5 = NULL,x_5 = NULL;
  if(match_cons(t, sym__2))
    {
      u_5 = ATgetArgument(t, 0);
      v_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_5;
  {
    ATerm j_14 = t;
    int k_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), u_5);
        {
          ATerm m_14 = t;
          int o_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_9 = NULL;
              t = eval_config_0_0(t);
              i_9 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), u_5, i_9);
              t = i_9;
              ;
              LocalPopChoice(o_14);
            }
          else
            {
              t = m_14;
            }
        }
        ;
        LocalPopChoice(k_14);
      }
    else
      {
        t = j_14;
        t = (ATerm) ATempty;
      }
    w_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_5, w_5);
    {
      ATerm p_14 = t;
      int s_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm t_14 = ATgetArgument(t, 0);
              ATerm u_14 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = v_5;
          {
            ATerm c_2 (ATerm t)
            {
              t = w_5;
              return(t);
            }
            t = at_end_1_0(c_2, t);
          }
          ;
          LocalPopChoice(s_14);
        }
      else
        {
          t = p_14;
          {
            ATerm q_9 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, v_5, w_5));
            if(match_cons(t, sym__2))
              {
                ATerm v_14 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) v_14) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                q_9 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = q_9;
            t = concat_0_0(t);
          }
        }
      x_5 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), u_5, x_5);
      t = (ATerm) ATmakeAppl(sym__3, term_w_14, u_5, x_5);
    }
  }
  return(t);
}
ATerm xtc_options_0_0 (ATerm t)
{
  ATerm e_15 = t;
  int f_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_2 (ATerm t)
      {
        ATerm l_6 = NULL;
        l_6 = t;
        if(match_string(t, "-r"))
          {
            t = l_6;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--repository", 0, ATtrue)))
              _fail(t);
            t = l_6;
          }
        return(t);
      }
      ATerm r_2 (ATerm t)
      {
        ATerm m_6 = NULL;
        m_6 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)), m_6);
        t = m_6;
        return(t);
      }
      ATerm s_2 (ATerm t)
      {
        t = term_k_15;
        return(t);
      }
      t = ArgOption_3_0(g_2, r_2, s_2, t);
      ;
      LocalPopChoice(f_15);
    }
  else
    {
      t = e_15;
      {
        ATerm n_15 = t;
        int o_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_2 (ATerm t)
            {
              ATerm n_6 = NULL;
              n_6 = t;
              if(match_string(t, "i"))
                {
                  t = n_6;
                }
              else
                {
                  if(match_string(t, "imp"))
                    {
                      t = n_6;
                    }
                  else
                    {
                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("import", 0, ATtrue)))
                        _fail(t);
                      t = n_6;
                    }
                }
              return(t);
            }
            ATerm x_2 (ATerm t)
            {
              ATerm o_6 = NULL;
              o_6 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_v_15, (ATerm) ATinsert(ATempty, o_6));
              t = extend_config_0_0(t);
              t = o_6;
              return(t);
            }
            ATerm y_2 (ATerm t)
            {
              t = term_w_15;
              return(t);
            }
            t = ArgOption_3_0(v_2, x_2, y_2, t);
            ;
            LocalPopChoice(o_15);
          }
        else
          {
            t = n_15;
            {
              ATerm y_15 = t;
              int z_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_2 (ATerm t)
                  {
                    ATerm p_6 = NULL;
                    p_6 = t;
                    if(match_string(t, "r"))
                      {
                        t = p_6;
                      }
                    else
                      {
                        if(match_string(t, "reg"))
                          {
                            t = p_6;
                          }
                        else
                          {
                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("register", 0, ATtrue)))
                              _fail(t);
                            t = p_6;
                          }
                      }
                    return(t);
                  }
                  ATerm c_3 (ATerm t)
                  {
                    ATerm q_6 = NULL;
                    q_6 = t;
                    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("register", 0, ATtrue)), q_6);
                    t = q_6;
                    return(t);
                  }
                  ATerm d_3 (ATerm t)
                  {
                    t = term_a_16;
                    return(t);
                  }
                  t = Option_3_0(z_2, c_3, d_3, t);
                  ;
                  LocalPopChoice(z_15);
                }
              else
                {
                  t = y_15;
                  {
                    ATerm b_16 = t;
                    int c_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm f_3 (ATerm t)
                        {
                          ATerm r_6 = NULL;
                          r_6 = t;
                          if(match_string(t, "-t"))
                            {
                              t = r_6;
                            }
                          else
                            {
                              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--tool", 0, ATtrue)))
                                _fail(t);
                              t = r_6;
                            }
                          return(t);
                        }
                        ATerm g_3 (ATerm t)
                        {
                          ATerm s_6 = NULL;
                          s_6 = t;
                          t = (ATerm) ATmakeAppl(sym__2, term_e_16, (ATerm) ATinsert(ATempty, s_6));
                          t = extend_config_0_0(t);
                          t = s_6;
                          return(t);
                        }
                        ATerm n_3 (ATerm t)
                        {
                          t = term_f_16;
                          return(t);
                        }
                        t = ArgOption_3_0(f_3, g_3, n_3, t);
                        ;
                        LocalPopChoice(c_16);
                      }
                    else
                      {
                        t = b_16;
                        {
                          ATerm g_16 = t;
                          int k_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm o_3 (ATerm t)
                              {
                                ATerm t_6 = NULL;
                                t_6 = t;
                                if(match_string(t, "-l"))
                                  {
                                    t = t_6;
                                  }
                                else
                                  {
                                    if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--location", 0, ATtrue)))
                                      _fail(t);
                                    t = t_6;
                                  }
                                return(t);
                              }
                              ATerm p_3 (ATerm t)
                              {
                                ATerm u_6 = NULL;
                                u_6 = t;
                                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-l", 0, ATtrue)), u_6);
                                t = u_6;
                                return(t);
                              }
                              ATerm q_3 (ATerm t)
                              {
                                t = term_l_16;
                                return(t);
                              }
                              t = ArgOption_3_0(o_3, p_3, q_3, t);
                              ;
                              LocalPopChoice(k_16);
                            }
                          else
                            {
                              t = g_16;
                              {
                                ATerm m_16 = t;
                                int p_16 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm r_3 (ATerm t)
                                    {
                                      ATerm v_6 = NULL;
                                      v_6 = t;
                                      if(match_string(t, "-V"))
                                        {
                                          t = v_6;
                                        }
                                      else
                                        {
                                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Version", 0, ATtrue)))
                                            _fail(t);
                                          t = v_6;
                                        }
                                      return(t);
                                    }
                                    ATerm v_3 (ATerm t)
                                    {
                                      ATerm w_6 = NULL;
                                      w_6 = t;
                                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-V", 0, ATtrue)), w_6);
                                      t = w_6;
                                      return(t);
                                    }
                                    ATerm w_3 (ATerm t)
                                    {
                                      t = term_q_16;
                                      return(t);
                                    }
                                    t = ArgOption_3_0(r_3, v_3, w_3, t);
                                    ;
                                    LocalPopChoice(p_16);
                                  }
                                else
                                  {
                                    t = m_16;
                                    {
                                      ATerm r_16 = t;
                                      int s_16 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm x_3 (ATerm t)
                                          {
                                            ATerm x_6 = NULL;
                                            x_6 = t;
                                            if(match_string(t, "q"))
                                              {
                                                t = x_6;
                                              }
                                            else
                                              {
                                                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("query", 0, ATtrue)))
                                                  _fail(t);
                                                t = x_6;
                                              }
                                            return(t);
                                          }
                                          ATerm z_3 (ATerm t)
                                          {
                                            ATerm y_6 = NULL;
                                            y_6 = t;
                                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("query", 0, ATtrue)), y_6);
                                            t = y_6;
                                            return(t);
                                          }
                                          ATerm a_4 (ATerm t)
                                          {
                                            t = term_v_16;
                                            return(t);
                                          }
                                          t = Option_3_0(x_3, z_3, a_4, t);
                                          ;
                                          LocalPopChoice(s_16);
                                        }
                                      else
                                        {
                                          t = r_16;
                                          {
                                            ATerm w_16 = t;
                                            int x_16 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm b_4 (ATerm t)
                                                {
                                                  ATerm z_6 = NULL;
                                                  z_6 = t;
                                                  if(match_string(t, "-a"))
                                                    {
                                                      t = z_6;
                                                    }
                                                  else
                                                    {
                                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--all", 0, ATtrue)))
                                                        _fail(t);
                                                      t = z_6;
                                                    }
                                                  return(t);
                                                }
                                                ATerm c_4 (ATerm t)
                                                {
                                                  ATerm a_7 = NULL;
                                                  a_7 = t;
                                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-a", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                                                  t = a_7;
                                                  return(t);
                                                }
                                                ATerm d_4 (ATerm t)
                                                {
                                                  t = term_z_16;
                                                  return(t);
                                                }
                                                t = Option_3_0(b_4, c_4, d_4, t);
                                                ;
                                                LocalPopChoice(x_16);
                                              }
                                            else
                                              {
                                                t = w_16;
                                                {
                                                  ATerm a_17 = t;
                                                  int b_17 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm e_4 (ATerm t)
                                                      {
                                                        ATerm b_7 = NULL;
                                                        b_7 = t;
                                                        if(match_string(t, "-L"))
                                                          {
                                                            t = b_7;
                                                          }
                                                        else
                                                          {
                                                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Location", 0, ATtrue)))
                                                              _fail(t);
                                                            t = b_7;
                                                          }
                                                        return(t);
                                                      }
                                                      ATerm h_4 (ATerm t)
                                                      {
                                                        ATerm c_7 = NULL;
                                                        c_7 = t;
                                                        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-l", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                                                        t = c_7;
                                                        return(t);
                                                      }
                                                      ATerm i_4 (ATerm t)
                                                      {
                                                        t = term_c_17;
                                                        return(t);
                                                      }
                                                      t = Option_3_0(e_4, h_4, i_4, t);
                                                      ;
                                                      LocalPopChoice(b_17);
                                                    }
                                                  else
                                                    {
                                                      t = a_17;
                                                      {
                                                        ATerm d_17 = t;
                                                        int g_17 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm j_4 (ATerm t)
                                                            {
                                                              ATerm d_7 = NULL;
                                                              d_7 = t;
                                                              if(match_string(t, "-R"))
                                                                {
                                                                  t = d_7;
                                                                }
                                                              else
                                                                {
                                                                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Repository", 0, ATtrue)))
                                                                    _fail(t);
                                                                  t = d_7;
                                                                }
                                                              return(t);
                                                            }
                                                            ATerm k_4 (ATerm t)
                                                            {
                                                              ATerm e_7 = NULL;
                                                              e_7 = t;
                                                              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-R", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                                                              t = e_7;
                                                              return(t);
                                                            }
                                                            ATerm o_4 (ATerm t)
                                                            {
                                                              t = term_h_17;
                                                              return(t);
                                                            }
                                                            t = Option_3_0(j_4, k_4, o_4, t);
                                                            ;
                                                            LocalPopChoice(g_17);
                                                          }
                                                        else
                                                          {
                                                            t = d_17;
                                                            {
                                                              ATerm q_4 (ATerm t)
                                                              {
                                                                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                                                                  _fail(t);
                                                                return(t);
                                                              }
                                                              ATerm r_4 (ATerm t)
                                                              {
                                                                ATerm f_7 = NULL,g_7 = NULL;
                                                                f_7 = t;
                                                                t = SSL_string_to_int(f_7);
                                                                g_7 = t;
                                                                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), g_7);
                                                                t = f_7;
                                                                return(t);
                                                              }
                                                              ATerm s_4 (ATerm t)
                                                              {
                                                                t = term_i_17;
                                                                return(t);
                                                              }
                                                              t = ArgOption_3_0(q_4, r_4, s_4, t);
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
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm i_7 = NULL,j_7 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_7 = ATgetFirst((ATermList) t);
      j_7 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm n_7 = NULL,o_7 = NULL;
        t = j_7;
        t = h_0(t);
        n_7 = t;
        t = i_7;
        t = g_0(t);
        o_7 = t;
        t = j_7;
        {
          ATerm t_4 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(n_7), o_7);
            return(t);
          }
          t = reverse_acc_2_0(g_0, t_4, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_m_13;
      t = h_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm h_63 (ATerm), ATerm t)
{
  ATerm p_7 = NULL,q_7 = NULL,r_7 = NULL,s_7 = NULL;
  s_7 = t;
  if(match_cons(t, sym_Program_1))
    {
      q_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_7);
  p_7 = t;
  t = q_7;
  t = h_63(t);
  r_7 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, r_7), p_7);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm j_17 = t;
  int k_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm m_17 = t;
        int n_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_10 = NULL;
            t = eval_config_0_0(t);
            j_10 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), j_10);
            t = j_10;
            ;
            LocalPopChoice(n_17);
          }
        else
          {
            t = m_17;
          }
      }
      ;
      LocalPopChoice(k_17);
    }
  else
    {
      t = j_17;
      {
        ATerm y_4 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(y_4, t);
      }
    }
  {
    ATerm o_17 = t;
    int q_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_17), term_s_17), term_r_17);
        t = echo_0_0(t);
        ;
        LocalPopChoice(q_17);
      }
    else
      {
        t = o_17;
      }
    t = term_w_17;
    t = echo_0_0(t);
    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
    {
      ATerm f_5 (ATerm t)
      {
        t = (ATerm) ATempty;
        return(t);
      }
      t = reverse_acc_2_0(_id, f_5, t);
      {
        ATerm h_5 (ATerm t)
        {
          ATerm v_7 = NULL;
          v_7 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, v_7), term_x_17);
          t = echo_0_0(t);
          return(t);
        }
        t = map_1_0(h_5, t);
        {
          ATerm y_17 = t;
          int z_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_18), term_b_18), term_h_10);
              t = echo_0_0(t);
              ;
              LocalPopChoice(z_17);
            }
          else
            {
              t = y_17;
            }
        }
      }
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm i_63 (ATerm), ATerm t)
{
  ATerm x_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL;
  a_8 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      y_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_8);
  x_7 = t;
  t = y_7;
  t = i_63(t);
  z_7 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, z_7), x_7);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm e_8 = NULL,f_8 = NULL;
  e_8 = t;
  {
    ATerm d_18 = t;
    int f_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = e_8;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm g_18 = ATgetFirst((ATermList) t);
                ATerm h_18 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = e_8;
          }
        ;
        LocalPopChoice(f_18);
      }
    else
      {
        t = d_18;
        t = (ATerm) ATinsert(ATempty, e_8);
      }
    f_8 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), f_8);
    t = e_8;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm i_18 = t;
    int j_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_10 = NULL;
        t = eval_config_0_0(t);
        q_10 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), q_10);
        t = q_10;
        ;
        LocalPopChoice(j_18);
      }
    else
      {
        t = i_18;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm k_18 = t;
  int l_18 = stack_ptr;
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
        t = term_n_18;
        return(t);
      }
      ATerm p_5 (ATerm t)
      {
        t = term_s_18;
        return(t);
      }
      t = Option_3_0(i_5, j_5, p_5, t);
      ;
      LocalPopChoice(l_18);
    }
  else
    {
      t = k_18;
      {
        ATerm q_5 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm r_5 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_t_18;
          return(t);
        }
        ATerm t_5 (ATerm t)
        {
          t = term_u_18;
          return(t);
        }
        t = Option_3_0(q_5, r_5, t_5, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm l_8 = NULL,n_8 = NULL,o_8 = NULL,p_8 = NULL;
  if(match_cons(t, sym__3))
    {
      l_8 = ATgetArgument(t, 0);
      n_8 = ATgetArgument(t, 1);
      o_8 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_8, n_8);
  {
    ATerm v_18 = t;
    int w_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_18 = ATgetArgument(t, 0);
            ATerm y_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(l_8, n_8);
        ;
        LocalPopChoice(w_18);
      }
    else
      {
        t = v_18;
        t = (ATerm) ATempty;
      }
    p_8 = t;
    t = SSL_table_put(l_8, n_8, (ATerm) ATinsert(CheckATermList(p_8), o_8));
    t = (ATerm) ATmakeAppl(sym__3, l_8, n_8, o_8);
  }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm x_8 = NULL,y_8 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_8 = NULL;
      t = term_m_13;
      t = d_0(t);
      z_8 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_13, term_i_14, z_8);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm c_9 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_8 = ATgetFirst((ATermList) t);
          y_8 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_8;
      t = a_0(t);
      t = term_m_13;
      t = c_0(t);
      c_9 = t;
      t = (ATerm) ATinsert(CheckATermList(y_8), c_9);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm y_88 (ATerm), ATerm t)
{
  ATerm e_9 = NULL;
  e_9 = t;
  {
    ATerm z_18 = t;
    int d_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_e_19;
        t = y_88(t);
        ;
        LocalPopChoice(d_19);
      }
    else
      {
        t = z_18;
      }
    t = e_9;
    {
      ATerm y_5 (ATerm t)
      {
        ATerm f_9 = NULL;
        f_9 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), f_9);
        t = (ATerm) ATmakeAppl(sym_Program_1, f_9);
        return(t);
      }
      ATerm z_5 (ATerm t)
      {
        ATerm g_19 = t;
        int h_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_19 = t;
            int k_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(k_19);
              }
            else
              {
                t = j_19;
                t = y_88(t);
                t = Cons_2_0(_id, z_5, t);
              }
            ;
            LocalPopChoice(h_19);
          }
        else
          {
            t = g_19;
            {
              ATerm h_9 = NULL,l_9 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  h_9 = ATgetFirst((ATermList) t);
                  l_9 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(l_9), (ATerm) ATmakeAppl(sym_Undefined_1, h_9));
            }
          }
        return(t);
      }
      t = Cons_2_0(y_5, z_5, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm x_88 (ATerm), ATerm t)
{
  ATerm t_9 = NULL,u_9 = NULL,v_9 = NULL;
  t_9 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = t_9;
  {
    ATerm a_6 (ATerm t)
    {
      ATerm m_19 = t;
      int n_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_88(t);
          ;
          LocalPopChoice(n_19);
        }
      else
        {
          t = m_19;
          {
            ATerm p_19 = t;
            int q_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_6 (ATerm t)
                {
                  ATerm w_9 = NULL;
                  w_9 = t;
                  if(match_string(t, "--help"))
                    {
                      t = w_9;
                    }
                  else
                    {
                      if(match_string(t, "-h"))
                        {
                          t = w_9;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
                            _fail(t);
                          t = w_9;
                        }
                    }
                  return(t);
                }
                ATerm e_6 (ATerm t)
                {
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                  t = term_r_19;
                  return(t);
                }
                ATerm f_6 (ATerm t)
                {
                  t = term_s_19;
                  return(t);
                }
                t = Option_3_0(b_6, e_6, f_6, t);
                ;
                LocalPopChoice(q_19);
              }
            else
              {
                t = p_19;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(a_6, t);
    {
      ATerm v_19 = t;
      int w_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_10 = NULL;
          c_10 = t;
          {
            ATerm x_19 = t;
            int y_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = c_10;
                {
                  ATerm z_19 = t;
                  int a_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm b_20 = t;
                        int c_20 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm g_15 = NULL;
                            t = eval_config_0_0(t);
                            g_15 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), g_15);
                            t = g_15;
                            ;
                            LocalPopChoice(c_20);
                          }
                        else
                          {
                            t = b_20;
                          }
                      }
                      ;
                      LocalPopChoice(a_20);
                    }
                  else
                    {
                      t = z_19;
                      {
                        ATerm g_6 (ATerm t)
                        {
                          if(!(match_cons(t, sym_Help_0)))
                            _fail(t);
                          return(t);
                        }
                        t = fetch_1_0(g_6, t);
                      }
                    }
                  t = c_10;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(y_19);
              }
            else
              {
                t = x_19;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm d_20 = t;
                  int e_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_17 = NULL;
                      t = eval_config_0_0(t);
                      e_17 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), e_17);
                      t = e_17;
                      ;
                      LocalPopChoice(e_20);
                    }
                  else
                    {
                      t = d_20;
                    }
                  t = c_10;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(w_19);
        }
      else
        {
          t = v_19;
          {
            ATerm f_20 = t;
            int g_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_6 (ATerm t)
                {
                  ATerm i_6 (ATerm t)
                  {
                    if(((u_9 != NULL) && (u_9 != t)))
                      _fail(t);
                    else
                      u_9 = t;
                    return(t);
                  }
                  t = Undefined_1_0(i_6, t);
                  return(t);
                }
                t = fetch_1_0(h_6, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(u_9)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_h_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_9)), term_i_20));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(g_20);
              }
            else
              {
                t = f_20;
              }
          }
        }
      v_9 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = v_9;
    }
  }
  return(t);
}
ATerm xtc_main_0_0 (ATerm t)
{
  ATerm j_20 = t;
  int l_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = parse_options_1_0(xtc_options_0_0, t);
      t = xtc_location_0_0(t);
      {
        ATerm h_7 (ATerm t)
        {
          ATerm f_17 = NULL;
          f_17 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, f_17), (ATerm) ATmakeAppl(ATmakeSymbol("Repository: ", 0, ATtrue))));
          t = f_17;
          return(t);
        }
        t = if_verbose2_1_0(h_7, t);
        t = xtc_read_0_0(t);
        {
          ATerm m_20 = t;
          int n_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_20 = t;
              int p_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("register", 0, ATtrue)));
                  {
                    ATerm q_20 = t;
                    int t_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm l_17 = NULL;
                        t = eval_config_0_0(t);
                        l_17 = t;
                        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("register", 0, ATtrue)), l_17);
                        t = l_17;
                        ;
                        LocalPopChoice(t_20);
                      }
                    else
                      {
                        t = q_20;
                      }
                    t = xtc_register_0_0(t);
                  }
                  ;
                  LocalPopChoice(p_20);
                }
              else
                {
                  t = o_20;
                  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("import", 0, ATtrue)));
                  {
                    ATerm u_20 = t;
                    int w_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm p_17 = NULL;
                        t = eval_config_0_0(t);
                        p_17 = t;
                        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("import", 0, ATtrue)), p_17);
                        t = p_17;
                        ;
                        LocalPopChoice(w_20);
                      }
                    else
                      {
                        t = u_20;
                      }
                    t = register_import_0_0(t);
                  }
                }
              t = xtc_store_0_0(t);
              ;
              LocalPopChoice(n_20);
            }
          else
            {
              t = m_20;
              t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("query", 0, ATtrue)));
              {
                ATerm x_20 = t;
                int z_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm t_17 = NULL;
                    t = eval_config_0_0(t);
                    t_17 = t;
                    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("query", 0, ATtrue)), t_17);
                    t = t_17;
                    ;
                    LocalPopChoice(z_20);
                  }
                else
                  {
                    t = x_20;
                  }
                {
                  ATerm a_21 = t;
                  int b_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = repository_query_0_0(t);
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
                            t = all_query_0_0(t);
                            ;
                            LocalPopChoice(d_21);
                          }
                        else
                          {
                            t = c_21;
                            t = tool_query_0_0(t);
                          }
                      }
                    }
                }
              }
            }
          t = SSL_exit((ATerm) ATmakeInt(0));
        }
      }
      ;
      LocalPopChoice(l_20);
    }
  else
    {
      t = j_20;
      {
        ATerm u_17 = NULL;
        u_17 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, u_17), (ATerm) ATmakeAppl(ATmakeSymbol("*** warning: xtc failed! ", 0, ATtrue))));
        t = u_17;
      }
    }
  return(t);
}
ATerm xtc_xtc_get_0_0 (ATerm t)
{
  ATerm f_10 = NULL,g_10 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm h_21 = ATgetFirst((ATermList) t);
      ATerm i_21 = (ATerm) ATgetNext((ATermList) t);
      if(((ATgetType(i_21) == AT_LIST) && !(ATisEmpty(i_21))))
        {
          ATerm m_21 = ATgetFirst((ATermList) i_21);
          if((ATgetSymbol((ATermAppl) m_21) != ATmakeSymbol("get", 0, ATtrue)))
            _fail(t);
          f_10 = (ATerm) ATgetNext((ATermList) i_21);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = f_10;
  t = map_1_0(xtc_find_0_0, t);
  g_10 = t;
  t = SSL_print((ATerm)ATmakeAppl(sym_stdout_0), g_10);
  t = SSL_print((ATerm)ATmakeAppl(sym_stdout_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm map_1_0 (ATerm h_71 (ATerm), ATerm t)
{
  ATerm x_15 (ATerm t)
  {
    ATerm n_21 = t;
    int o_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(o_21);
      }
    else
      {
        t = n_21;
        t = Cons_2_0(h_71, x_15, t);
      }
    return(t);
  }
  t = x_15(t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm k_92 (ATerm), ATerm t)
{
  ATerm p_21 = t;
  int q_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_10 = NULL,t_10 = NULL;
      r_10 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm r_21 = t;
        int s_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_18 = NULL;
            t = eval_config_0_0(t);
            a_18 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), a_18);
            t = a_18;
            ;
            LocalPopChoice(s_21);
          }
        else
          {
            t = r_21;
          }
        t_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_10, term_t_21);
        t = geq_0_0(t);
        t = r_10;
        t = k_92(t);
      }
      ;
      LocalPopChoice(q_21);
    }
  else
    {
      t = p_21;
    }
  return(t);
}
ATerm fetch_1_0 (ATerm s_71 (ATerm), ATerm t)
{
  ATerm v_11 (ATerm t)
  {
    ATerm u_21 = t;
    int v_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(s_71, _id, t);
        ;
        LocalPopChoice(v_21);
      }
    else
      {
        t = u_21;
        t = Cons_2_0(_id, v_11, t);
      }
    return(t);
  }
  t = v_11(t);
  return(t);
}
ATerm if_verbose4_1_0 (ATerm j_92 (ATerm), ATerm t)
{
  ATerm w_21 = t;
  int x_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_10 = NULL,b_11 = NULL;
      z_10 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm y_21 = t;
        int z_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_18 = NULL;
            t = eval_config_0_0(t);
            e_18 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), e_18);
            t = e_18;
            ;
            LocalPopChoice(z_21);
          }
        else
          {
            t = y_21;
          }
        b_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_11, term_a_22);
        t = geq_0_0(t);
        t = z_10;
        t = j_92(t);
      }
      ;
      LocalPopChoice(x_21);
    }
  else
    {
      t = w_21;
    }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm n_11 = NULL,o_11 = NULL,p_11 = NULL;
  n_11 = t;
  if(match_cons(t, sym__2))
    {
      o_11 = ATgetArgument(t, 0);
      p_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_22 = t;
    int c_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_11;
        if((o_11 != t))
          {
            _fail(t);
          }
        t = n_11;
        ;
        LocalPopChoice(c_22);
      }
    else
      {
        t = b_22;
        t = n_11;
        {
          ATerm g_22 = t;
          int h_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(o_11, p_11);
              ;
              LocalPopChoice(h_22);
            }
          else
            {
              t = g_22;
              t = SSL_gtr(o_11, p_11);
            }
          t = (ATerm) ATmakeAppl(sym__2, o_11, p_11);
        }
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm l_92 (ATerm), ATerm t)
{
  ATerm i_22 = t;
  int j_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_11 = NULL,u_11 = NULL;
      s_11 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm k_22 = t;
        int o_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_18 = NULL;
            t = eval_config_0_0(t);
            o_18 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), o_18);
            t = o_18;
            ;
            LocalPopChoice(o_22);
          }
        else
          {
            t = k_22;
          }
        u_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_11, term_p_22);
        t = geq_0_0(t);
        t = s_11;
        t = l_92(t);
      }
      ;
      LocalPopChoice(j_22);
    }
  else
    {
      t = i_22;
    }
  return(t);
}
ATerm union_1_0 (ATerm l_75 (ATerm), ATerm t)
{
  ATerm z_11 = NULL,a_12 = NULL;
  if(match_cons(t, sym__2))
    {
      a_12 = ATgetArgument(t, 0);
      z_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_12;
  {
    ATerm b_12 (ATerm t)
    {
      ATerm q_22 = t;
      int r_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = z_11;
          ;
          LocalPopChoice(r_22);
        }
      else
        {
          t = q_22;
          {
            ATerm s_22 = t;
            int t_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_18 = NULL,q_18 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    p_18 = ATgetFirst((ATermList) t);
                    q_18 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = z_11;
                {
                  ATerm k_7 (ATerm t)
                  {
                    ATerm r_18 = NULL;
                    r_18 = t;
                    t = (ATerm) ATmakeAppl(sym__2, p_18, r_18);
                    t = l_75(t);
                    return(t);
                  }
                  t = fetch_1_0(k_7, t);
                  t = q_18;
                  t = b_12(t);
                }
                ;
                LocalPopChoice(t_22);
              }
            else
              {
                t = s_22;
                t = Cons_2_0(_id, b_12, t);
              }
          }
        }
      return(t);
    }
    t = b_12(t);
  }
  return(t);
}
ATerm table_append_0_0 (ATerm t)
{
  ATerm e_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL;
  if(match_cons(t, sym__3))
    {
      e_12 = ATgetArgument(t, 0);
      f_12 = ATgetArgument(t, 1);
      g_12 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_12, f_12);
  {
    ATerm u_22 = t;
    int v_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_22 = ATgetArgument(t, 0);
            ATerm x_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(e_12, f_12);
        ;
        LocalPopChoice(v_22);
      }
    else
      {
        t = u_22;
        t = (ATerm) ATempty;
      }
    h_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_12, g_12);
    {
      ATerm l_7 (ATerm t)
      {
        ATerm m_12 = NULL;
        if(match_cons(t, sym__2))
          {
            m_12 = ATgetArgument(t, 0);
            if((m_12 != ATgetArgument(t, 1)))
              {
                _fail(ATgetArgument(t, 1));
              }
          }
        else
          _fail(t);
        return(t);
      }
      t = union_1_0(l_7, t);
      i_12 = t;
      t = SSL_table_put(e_12, f_12, i_12);
      t = (ATerm) ATmakeAppl(sym__3, e_12, f_12, g_12);
    }
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm b_89 (ATerm), ATerm t)
{
  ATerm o_12 = NULL,p_12 = NULL;
  if(match_cons(t, sym__2))
    {
      p_12 = ATgetArgument(t, 0);
      o_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_12;
  {
    ATerm m_7 (ATerm t)
    {
      ATerm q_12 = NULL,r_12 = NULL;
      if(match_cons(t, sym__2))
        {
          q_12 = ATgetArgument(t, 0);
          r_12 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, p_12, q_12, r_12);
      t = b_89(t);
      return(t);
    }
    t = map_1_0(m_7, t);
  }
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm f_13 (ATerm z_12, ATerm t)
  {
    t = SSL_fclose(z_12);
    return(t);
  }
  ATerm c_13 = NULL,d_13 = NULL;
  d_13 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_13 = ATgetArgument(t, 0);
      {
        ATerm y_22 = t;
        int z_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(c_13);
            ;
            LocalPopChoice(z_22);
          }
        else
          {
            t = y_22;
            t = f_13(d_13, t);
          }
      }
    }
  else
    {
      t = f_13(d_13, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm g_13 = NULL;
  t = SSL_stdin_stream();
  g_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_13);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm h_13 = NULL;
  t = SSL_stdout_stream();
  h_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_13);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm i_13 = NULL;
  t = SSL_stderr_stream();
  i_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_13);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_23 = ATgetArgument(t, 0);
      ATerm b_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_23 = t;
    int d_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_19 = NULL,b_19 = NULL;
        a_19 = t;
        t = SSL_explode_term(a_19);
        if(match_cons(t, sym__2))
          {
            ATerm e_23 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) e_23) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm f_23 = ATgetArgument(t, 1);
              if(((ATgetType(f_23) == AT_LIST) && !(ATisEmpty(f_23))))
                {
                  b_19 = ATgetFirst((ATermList) f_23);
                  {
                    ATerm g_23 = (ATerm) ATgetNext((ATermList) f_23);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = b_19;
        if(match_cons(t, sym_stderr_0))
          {
            t = b_19;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = b_19;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = b_19;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(d_23);
      }
    else
      {
        t = c_23;
        {
          ATerm h_23 = t;
          int i_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_13 = NULL,o_13 = NULL,p_13 = NULL;
              ATerm t_7 (ATerm t)
              {
                ATerm q_13 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    q_13 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = q_13;
                return(t);
              }
              t = _2_0(t_7, _id, t);
              if(match_cons(t, sym__2))
                {
                  n_13 = ATgetArgument(t, 0);
                  o_13 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(n_13, o_13);
              p_13 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, p_13);
              ;
              LocalPopChoice(i_23);
            }
          else
            {
              t = h_23;
              {
                ATerm r_13 = NULL,s_13 = NULL,t_13 = NULL;
                ATerm u_7 (ATerm t)
                {
                  ATerm u_13 = NULL;
                  u_13 = t;
                  t = SSL_is_string(u_13);
                  return(t);
                }
                t = _2_0(u_7, _id, t);
                if(match_cons(t, sym__2))
                  {
                    r_13 = ATgetArgument(t, 0);
                    s_13 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(r_13, s_13);
                t_13 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, t_13);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm v_13 = NULL,w_13 = NULL,x_13 = NULL;
  ATerm j_23 = t;
  int k_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_13 = NULL;
      y_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_13, term_l_23);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(k_23);
    }
  else
    {
      t = j_23;
      {
        ATerm c_19 = NULL;
        c_19 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, c_19), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = c_19;
        _fail(t);
      }
    }
  v_13 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(x_13);
  w_13 = t;
  t = v_13;
  t = fclose_0_0(t);
  t = w_13;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm m_23 = t;
  int n_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_14 = NULL;
      a_14 = t;
      t = SSL_access(a_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
      LocalPopChoice(n_23);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = m_23;
      {
        ATerm o_23 = t;
        int p_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_19 = NULL;
            ATerm q_23 = t;
            if((PushChoice() == 0))
              {
                ATerm b_14 = NULL;
                b_14 = t;
                t = SSL_access(b_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
                PopChoice();
                _fail(t);
              }
            else
              {
                t = q_23;
              }
            f_19 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, f_19), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue))));
            t = f_19;
            ;
            LocalPopChoice(p_23);
          }
        else
          {
            t = o_23;
            {
              ATerm i_19 = NULL;
              i_19 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, i_19), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue))));
              t = i_19;
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm c_14 = NULL,d_14 = NULL,e_14 = NULL;
  c_14 = t;
  {
    ATerm w_7 (ATerm t)
    {
      ATerm l_19 = NULL;
      l_19 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, l_19), (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue))));
      t = l_19;
      return(t);
    }
    t = if_verbose5_1_0(w_7, t);
    {
      ATerm r_23 = t;
      if((PushChoice() == 0))
        {
          t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, c_14));
          PopChoice();
          _fail(t);
        }
      else
        {
          t = r_23;
        }
      d_14 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, c_14));
      t = d_14;
      {
        ATerm b_8 (ATerm t)
        {
          ATerm o_19 = NULL;
          o_19 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, o_19), (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue))));
          t = o_19;
          return(t);
        }
        t = if_verbose4_1_0(b_8, t);
        t = read_repository_file_0_0(t);
        {
          ATerm c_8 (ATerm t)
          {
            ATerm f_14 = NULL;
            f_14 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue))));
            t = f_14;
            return(t);
          }
          t = if_verbose6_1_0(c_8, t);
          e_14 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_t_11, e_14);
          t = table_putlist_1_0(table_append_0_0, t);
          {
            ATerm d_8 (ATerm t)
            {
              ATerm g_14 = NULL;
              g_14 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue))));
              t = g_14;
              return(t);
            }
            t = if_verbose6_1_0(d_8, t);
            t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, c_14), (ATerm) ATempty);
            t = (ATerm) ATmakeAppl(sym__3, term_t_11, (ATerm)ATmakeAppl(sym_Imported_1, c_14), (ATerm) ATempty);
            {
              ATerm g_8 (ATerm t)
              {
                ATerm h_14 = NULL;
                h_14 = t;
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue))));
                t = h_14;
                return(t);
              }
              t = if_verbose4_1_0(g_8, t);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm filter_1_0 (ATerm m_78 (ATerm), ATerm t)
{
  ATerm s_23 = t;
  int t_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(t_23);
    }
  else
    {
      t = s_23;
      {
        ATerm u_23 = t;
        int v_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_8 (ATerm t)
            {
              t = filter_1_0(m_78, t);
              return(t);
            }
            t = Cons_2_0(m_78, h_8, t);
            ;
            LocalPopChoice(v_23);
          }
        else
          {
            t = u_23;
            {
              ATerm l_14 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm w_23 = ATgetFirst((ATermList) t);
                  l_14 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = l_14;
              t = filter_1_0(m_78, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm s_64 (ATerm), ATerm t)
{
  ATerm n_14 (ATerm t)
  {
    ATerm x_23 = t;
    int y_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_64(t);
        t = n_14(t);
        ;
        LocalPopChoice(y_23);
      }
    else
      {
        t = x_23;
      }
    return(t);
  }
  t = n_14(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm z_23 = t;
  int a_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(a_24);
    }
  else
    {
      t = z_23;
      {
        ATerm q_14 = NULL,r_14 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_14 = ATgetFirst((ATermList) t);
            r_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = q_14;
        {
          ATerm i_8 (ATerm t)
          {
            t = r_14;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(i_8, t);
        }
      }
    }
  return(t);
}
ATerm Cons_2_0 (ATerm u_57 (ATerm), ATerm v_57 (ATerm), ATerm t)
{
  ATerm p_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL,t_15 = NULL,u_15 = NULL;
  u_15 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_15 = ATgetFirst((ATermList) t);
      r_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_15);
  p_15 = t;
  t = q_15;
  t = u_57(t);
  s_15 = t;
  t = r_15;
  t = v_57(t);
  t_15 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(t_15), s_15), p_15);
  return(t);
}
ATerm at_end_1_0 (ATerm y_71 (ATerm), ATerm t)
{
  ATerm x_14 (ATerm t)
  {
    ATerm b_24 = t;
    int c_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, x_14, t);
        ;
        LocalPopChoice(c_24);
      }
    else
      {
        t = b_24;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = y_71(t);
      }
    return(t);
  }
  t = x_14(t);
  return(t);
}
ATerm _2_0 (ATerm l_56 (ATerm), ATerm m_56 (ATerm), ATerm t)
{
  ATerm y_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL,d_15 = NULL;
  d_15 = t;
  if(match_cons(t, sym__2))
    {
      z_14 = ATgetArgument(t, 0);
      a_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_15);
  y_14 = t;
  t = z_14;
  t = l_56(t);
  b_15 = t;
  t = a_15;
  t = m_56(t);
  c_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, b_15, c_15), y_14);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm h_15 = NULL;
  ATerm j_8 (ATerm t)
  {
    ATerm i_15 = NULL;
    i_15 = t;
    t = SSL_explode_string(i_15);
    return(t);
  }
  ATerm k_8 (ATerm t)
  {
    ATerm j_15 = NULL;
    j_15 = t;
    t = SSL_explode_string(j_15);
    return(t);
  }
  t = _2_0(j_8, k_8, t);
  {
    ATerm d_24 = t;
    int e_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_15 = NULL,m_15 = NULL;
        if(match_cons(t, sym__2))
          {
            l_15 = ATgetArgument(t, 0);
            m_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_15;
        {
          ATerm q_8 (ATerm t)
          {
            t = m_15;
            return(t);
          }
          t = at_end_1_0(q_8, t);
        }
        ;
        LocalPopChoice(e_24);
      }
    else
      {
        t = d_24;
        {
          ATerm t_19 = NULL,u_19 = NULL;
          t_19 = t;
          t = SSL_explode_term(t_19);
          if(match_cons(t, sym__2))
            {
              ATerm f_24 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) f_24) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              u_19 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = u_19;
          t = concat_0_0(t);
        }
      }
    h_15 = t;
    t = SSL_implode_string(h_15);
  }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm g_24 = t;
  int h_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_16 = NULL;
      d_16 = t;
      t = SSL_is_string(d_16);
      ;
      LocalPopChoice(h_24);
    }
  else
    {
      t = g_24;
      {
        ATerm i_24 = t;
        int j_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_8 (ATerm t)
            {
              ATerm k_24 = t;
              int l_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0_0(t);
                  ;
                  LocalPopChoice(l_24);
                }
              else
                {
                  t = k_24;
                }
              return(t);
            }
            t = map_1_0(r_8, t);
            ;
            LocalPopChoice(j_24);
          }
        else
          {
            t = i_24;
            {
              ATerm h_16 = NULL,i_16 = NULL,j_16 = NULL;
              h_16 = t;
              if(match_cons(t, sym_Path_1))
                {
                  i_16 = ATgetArgument(t, 0);
                  t = i_16;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      i_16 = ATgetArgument(t, 0);
                      t = i_16;
                      {
                        ATerm m_24 = t;
                        int n_24 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), i_16);
                            {
                              ATerm o_24 = t;
                              int p_24 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm k_20 = NULL;
                                  t = eval_config_0_0(t);
                                  k_20 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), i_16, k_20);
                                  t = k_20;
                                  ;
                                  LocalPopChoice(p_24);
                                }
                              else
                                {
                                  t = o_24;
                                }
                            }
                            ;
                            LocalPopChoice(n_24);
                          }
                        else
                          {
                            t = m_24;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, i_16), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = i_16;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm n_16 = NULL,o_16 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          i_16 = ATgetArgument(t, 0);
                          j_16 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = i_16;
                      t = eval_config_0_0(t);
                      n_16 = t;
                      t = j_16;
                      t = eval_config_0_0(t);
                      o_16 = t;
                      t = (ATerm) ATmakeAppl(sym__2, n_16, o_16);
                      t = conc_strings_0_0(t);
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
  ATerm q_24 = t;
  int r_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)));
      {
        ATerm s_24 = t;
        int t_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_20 = NULL;
            t = eval_config_0_0(t);
            r_20 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)), r_20);
            t = r_20;
            ;
            LocalPopChoice(t_24);
          }
        else
          {
            t = s_24;
          }
      }
      ;
      LocalPopChoice(r_24);
    }
  else
    {
      t = q_24;
      {
        ATerm u_24 = t;
        int v_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_getenv((ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue)));
            ;
            LocalPopChoice(v_24);
          }
        else
          {
            t = u_24;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm t_16 = NULL;
  ATerm s_8 (ATerm t)
  {
    ATerm s_20 = NULL;
    s_20 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, s_20), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue))));
    t = s_20;
    return(t);
  }
  t = if_verbose5_1_0(s_8, t);
  t_16 = t;
  {
    ATerm w_24 = t;
    int x_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Repository_0));
        ;
        LocalPopChoice(x_24);
      }
    else
      {
        t = w_24;
        {
          ATerm u_16 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          u_16 = t;
          {
            ATerm t_8 (ATerm t)
            {
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
              t = filter_1_0(xtc_read_0_0, t);
              {
                ATerm y_24 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = y_24;
                  }
              }
              return(t);
            }
            t = repeat_1_0(t_8, t);
            t = u_16;
          }
        }
      }
    t = t_16;
    {
      ATerm u_8 (ATerm t)
      {
        ATerm v_20 = NULL;
        v_20 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, v_20), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue))));
        t = v_20;
        return(t);
      }
      t = if_verbose5_1_0(u_8, t);
    }
  }
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm z_24 = t;
  int a_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_8 (ATerm t)
      {
        ATerm y_20 = NULL;
        y_20 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, y_20), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue))));
        t = y_20;
        return(t);
      }
      t = if_verbose5_1_0(v_8, t);
      t = xtc_load_0_0(t);
      {
        ATerm b_25 = t;
        int c_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_21 = NULL,f_21 = NULL,g_21 = NULL;
            if(match_cons(t, sym__2))
              {
                e_21 = ATgetArgument(t, 0);
                f_21 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, e_21));
            {
              ATerm w_8 (ATerm t)
              {
                if(match_cons(t, sym__2))
                  {
                    if((f_21 != ATgetArgument(t, 0)))
                      {
                        _fail(ATgetArgument(t, 0));
                      }
                    if(((g_21 != NULL) && (g_21 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      g_21 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(w_8, t);
              t = not_null(g_21);
            }
            ;
            LocalPopChoice(c_25);
          }
        else
          {
            t = b_25;
            {
              ATerm j_21 = NULL,k_21 = NULL;
              j_21 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, j_21));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm d_25 = ATgetFirst((ATermList) t);
                  if(match_cons(d_25, sym__2))
                    {
                      ATerm f_25 = ATgetArgument(d_25, 0);
                      k_21 = ATgetArgument(d_25, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm e_25 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = k_21;
            }
          }
        {
          ATerm a_9 (ATerm t)
          {
            ATerm l_21 = NULL;
            l_21 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, l_21), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue))));
            t = l_21;
            return(t);
          }
          t = if_verbose5_1_0(a_9, t);
        }
      }
      ;
      LocalPopChoice(a_25);
    }
  else
    {
      t = z_24;
      {
        ATerm y_16 = NULL;
        y_16 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), y_16), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_25), y_16), term_g_25);
        {
          ATerm b_9 (ATerm t)
          {
            ATerm f_22 = NULL;
            t = SSL_table_keys((ATerm) ATmakeAppl(sym_XTC_0));
            {
              ATerm d_9 (ATerm t)
              {
                ATerm d_22 = NULL,e_22 = NULL;
                d_22 = t;
                t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), d_22);
                e_22 = t;
                t = (ATerm) ATmakeAppl(sym__2, d_22, e_22);
                return(t);
              }
              t = map_1_0(d_9, t);
              f_22 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, f_22), (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue))));
              t = f_22;
            }
            return(t);
          }
          t = if_verbose5_1_0(b_9, t);
          _fail(t);
        }
      }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm i_25 = t;
  int j_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm k_25 = ATgetFirst((ATermList) t);
          ATerm l_25 = (ATerm) ATgetNext((ATermList) t);
          if(((ATgetType(l_25) == AT_LIST) && !(ATisEmpty(l_25))))
            {
              ATerm m_25 = ATgetFirst((ATermList) l_25);
              if((ATgetSymbol((ATermAppl) m_25) != ATmakeSymbol("call", 0, ATtrue)))
                _fail(t);
              {
                ATerm n_25 = (ATerm) ATgetNext((ATermList) l_25);
                if(((ATgetType(n_25) == AT_LIST) && !(ATisEmpty(n_25))))
                  {
                    l_22 = ATgetFirst((ATermList) n_25);
                    m_22 = (ATerm) ATgetNext((ATermList) n_25);
                  }
                else
                  _fail(t);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      t = l_22;
      t = xtc_find_0_0(t);
      n_22 = t;
      t = SSL_execvp(n_22, m_22);
      ;
      LocalPopChoice(j_25);
    }
  else
    {
      t = i_25;
      {
        ATerm o_25 = t;
        int p_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_xtc_get_0_0(t);
            ;
            LocalPopChoice(p_25);
          }
        else
          {
            t = o_25;
            t = xtc_main_0_0(t);
          }
      }
    }
  return(t);
}
