#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Old_Table_1;
Symbol sym_New_Table_1;
Symbol sym_Verbose_0;
Symbol sym_Patch_0;
Symbol sym_Prune_0;
Symbol sym_Patched_1;
Symbol sym__0;
Symbol sym__1;
Symbol sym__2;
Symbol sym__3;
Symbol sym__4;
Symbol sym__5;
Symbol sym__6;
Symbol sym__7;
Symbol sym__8;
Symbol sym__9;
Symbol sym__10;
Symbol sym__11;
Symbol sym__12;
Symbol sym__13;
Symbol sym__14;
Symbol sym__15;
Symbol sym__16;
Symbol sym__17;
Symbol sym__18;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Path_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stderr_0;
Symbol sym_Verbose_1;
Symbol sym_selector_2;
Symbol sym_Path_2;
Symbol sym_Path1_1;
Symbol sym_PP_Entry_2;
Symbol sym_PP_Table_1;
Symbol sym_SOpt_2;
Symbol sym_Arg2_2;
Symbol sym_Arg_1;
Symbol sym_S_1;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Strict_0;
static void init_module_constructors (void)
{
  sym_Old_Table_1 = ATmakeSymbol("Old-Table", 1, ATfalse);
  ATprotectSymbol(sym_Old_Table_1);
  sym_New_Table_1 = ATmakeSymbol("New-Table", 1, ATfalse);
  ATprotectSymbol(sym_New_Table_1);
  sym_Verbose_0 = ATmakeSymbol("Verbose", 0, ATfalse);
  ATprotectSymbol(sym_Verbose_0);
  sym_Patch_0 = ATmakeSymbol("Patch", 0, ATfalse);
  ATprotectSymbol(sym_Patch_0);
  sym_Prune_0 = ATmakeSymbol("Prune", 0, ATfalse);
  ATprotectSymbol(sym_Prune_0);
  sym_Patched_1 = ATmakeSymbol("Patched", 1, ATfalse);
  ATprotectSymbol(sym_Patched_1);
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
  sym__9 = ATmakeSymbol("", 9, ATfalse);
  ATprotectSymbol(sym__9);
  sym__10 = ATmakeSymbol("", 10, ATfalse);
  ATprotectSymbol(sym__10);
  sym__11 = ATmakeSymbol("", 11, ATfalse);
  ATprotectSymbol(sym__11);
  sym__12 = ATmakeSymbol("", 12, ATfalse);
  ATprotectSymbol(sym__12);
  sym__13 = ATmakeSymbol("", 13, ATfalse);
  ATprotectSymbol(sym__13);
  sym__14 = ATmakeSymbol("", 14, ATfalse);
  ATprotectSymbol(sym__14);
  sym__15 = ATmakeSymbol("", 15, ATfalse);
  ATprotectSymbol(sym__15);
  sym__16 = ATmakeSymbol("", 16, ATfalse);
  ATprotectSymbol(sym__16);
  sym__17 = ATmakeSymbol("", 17, ATfalse);
  ATprotectSymbol(sym__17);
  sym__18 = ATmakeSymbol("", 18, ATfalse);
  ATprotectSymbol(sym__18);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Verbose_1 = ATmakeSymbol("Verbose", 1, ATfalse);
  ATprotectSymbol(sym_Verbose_1);
  sym_selector_2 = ATmakeSymbol("selector", 2, ATfalse);
  ATprotectSymbol(sym_selector_2);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Path1_1 = ATmakeSymbol("Path1", 1, ATfalse);
  ATprotectSymbol(sym_Path1_1);
  sym_PP_Entry_2 = ATmakeSymbol("PP-Entry", 2, ATfalse);
  ATprotectSymbol(sym_PP_Entry_2);
  sym_PP_Table_1 = ATmakeSymbol("PP-Table", 1, ATfalse);
  ATprotectSymbol(sym_PP_Table_1);
  sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
  ATprotectSymbol(sym_SOpt_2);
  sym_Arg2_2 = ATmakeSymbol("Arg2", 2, ATfalse);
  ATprotectSymbol(sym_Arg2_2);
  sym_Arg_1 = ATmakeSymbol("Arg", 1, ATfalse);
  ATprotectSymbol(sym_Arg_1);
  sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
  ATprotectSymbol(sym_S_1);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Strict_0 = ATmakeSymbol("Strict", 0, ATfalse);
  ATprotectSymbol(sym_Strict_0);
}
ATerm term_i_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_d_7;
ATerm term_b_7;
ATerm term_z_6;
ATerm term_j_6;
ATerm term_i_6;
ATerm term_h_6;
ATerm term_e_6;
ATerm term_b_6;
ATerm term_w_5;
ATerm term_s_5;
ATerm term_q_5;
ATerm term_p_5;
ATerm term_e_5;
ATerm term_w_4;
ATerm term_v_4;
ATerm term_t_4;
ATerm term_s_4;
ATerm term_l_4;
ATerm term_j_4;
ATerm term_f_4;
ATerm term_e_4;
ATerm term_d_4;
ATerm term_b_4;
ATerm term_z_3;
ATerm term_x_3;
ATerm term_w_3;
ATerm term_v_3;
ATerm term_u_3;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_u_3));
  term_u_3 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_3));
  term_v_3 = (ATerm) ATmakeAppl(ATmakeSymbol("--saved-entry--", 0, ATtrue));
  ATprotect(&(term_w_3));
  term_w_3 = (ATerm) ATmakeAppl(ATmakeSymbol("new-table", 0, ATtrue));
  ATprotect(&(term_x_3));
  term_x_3 = (ATerm) ATmakeAppl(ATmakeSymbol("old-table", 0, ATtrue));
  ATprotect(&(term_z_3));
  term_z_3 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_b_4));
  term_b_4 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_d_4));
  term_d_4 = (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue));
  ATprotect(&(term_e_4));
  term_e_4 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_f_4));
  term_f_4 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_j_4));
  term_j_4 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_l_4));
  term_l_4 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_s_4));
  term_s_4 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue));
  ATprotect(&(term_t_4));
  term_t_4 = (ATerm) ATmakeAppl(ATmakeSymbol("please specify old table with --old switch", 0, ATtrue));
  ATprotect(&(term_v_4));
  term_v_4 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_4));
  term_w_4 = (ATerm) ATmakeAppl(ATmakeSymbol("Obsolete entries: ", 0, ATtrue));
  ATprotect(&(term_e_5));
  term_e_5 = (ATerm) ATmakeAppl(ATmakeSymbol("New entries: ", 0, ATtrue));
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Changed productions: ", 0, ATtrue));
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(sym_Patch_0);
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeAppl(sym_Prune_0);
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(ATmakeSymbol("out-type", 0, ATtrue));
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(ATmakeSymbol("\"pp-tables-0\"", 0, ATtrue));
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(sym__2, term_e_4, term_x_3);
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(sym__2, term_e_4, term_w_3);
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-V               verbose execution.", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--patch          Bring old table up-o-date", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--prune          Remove obsolete pp entries", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--old <table>    Old table", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--new <table>    New table", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm exit_0_0 (ATerm t);
ATerm Nil_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm try_1_0 (ATerm y_103 (ATerm), ATerm t);
ATerm has_option_1_0 (ATerm l_109 (ATerm), ATerm t);
ATerm output_1_0 (ATerm w_110 (ATerm), ATerm t);
ATerm mkterm_0_0 (ATerm t);
static ATerm k_1 (ATerm u_8 (ATerm), ATerm y_5, ATerm t);
ATerm double_quote_0_0 (ATerm t);
ATerm escape_0_0 (ATerm t);
static ATerm b_0 (ATerm t);
static ATerm c_0 (ATerm t);
ATerm desugar_0_0 (ATerm t);
ATerm map_1_0 (ATerm r_89 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm table_remove_0_0 (ATerm t);
static ATerm f_0 (ATerm t);
static ATerm i_0 (ATerm t);
static ATerm j_0 (ATerm t);
static ATerm l_1 (ATerm p_4, ATerm q_4, ATerm t);
ATerm printnl_0_0 (ATerm t);
ATerm concat_strings_0_0 (ATerm t);
ATerm int_to_string_0_0 (ATerm t);
static ATerm k_0 (ATerm t);
ATerm path_to_string_0_0 (ATerm t);
ATerm diff_0_0 (ATerm t);
ATerm collect_1_0 (ATerm y_95 (ATerm), ATerm t);
ATerm _2_0 (ATerm s_69 (ATerm), ATerm t_69 (ATerm), ATerm t);
ATerm table_get_0_0 (ATerm t);
ATerm Fst_0_0 (ATerm t);
ATerm isect_0_0 (ATerm t);
ATerm table_keys_0_0 (ATerm t);
ATerm table_rename_0_0 (ATerm t);
ATerm table_put_0_0 (ATerm t);
static ATerm m_0 (ATerm t);
ATerm mk_key_0_0 (ATerm t);
static ATerm n_0 (ATerm t);
static ATerm p_0 (ATerm t);
static ATerm m_1 (ATerm y_4, ATerm z_4, ATerm t);
ATerm string_to_int_0_0 (ATerm t);
ATerm unescape_0_0 (ATerm t);
ATerm un_double_quote_0_0 (ATerm t);
ATerm MakePPTerm_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm d_85 (ATerm), ATerm t);
ATerm reverse_0_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm t_0 (ATerm t);
static ATerm n_1 (ATerm x_4, ATerm t);
ATerm error_0_0 (ATerm t);
static ATerm u_0 (ATerm t);
ATerm type_failure_0_0 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm debug_1_0 (ATerm y_84 (ATerm), ATerm t);
ATerm if_verbose1_1_0 (ATerm d_105 (ATerm), ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm x_0 (ATerm t);
ATerm read_pp_tables_0_0 (ATerm t);
ATerm option_value_2_0 (ATerm m_109 (ATerm), ATerm n_109 (ATerm), ATerm t);
ATerm fatal_error_0_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm u_2 (ATerm t);
ATerm pptable_diff_0_0 (ATerm t);
ATerm output_options_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm j_3 (ATerm), ATerm k_3 (ATerm), ATerm l_3 (ATerm), ATerm t);
ATerm Option_3_0 (ATerm g_3 (ATerm), ATerm h_3 (ATerm), ATerm i_3 (ATerm), ATerm t);
ATerm option_wrap_2_0 (ATerm k_110 (ATerm), ATerm l_110 (ATerm), ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
ATerm io_Pptable_diff_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm k_1 (ATerm u_8 (ATerm), ATerm y_5, ATerm t)
{
  ATerm a_0 = NULL;
  t = term_u_3;
  t = u_8(t);
  a_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_0, (ATerm) ATinsert(ATempty, y_5));
  t = mkterm_0_0(t);
  return(t);
}
static ATerm b_0 (ATerm t)
{
  t = try_1_0(c_0, t);
  return(t);
}
static ATerm c_0 (ATerm t)
{
  ATerm k_4 = NULL,a_5 = NULL,b_5 = NULL,g_5 = NULL,h_5 = NULL;
  b_5 = t;
  if(match_cons(t, sym_Arg_1))
    {
      g_5 = ATgetArgument(t, 0);
      {
        ATerm e_0 = NULL,h_0 = NULL,d_0 = NULL;
        t = SSLgetAnnotations(b_5);
        e_0 = t;
        t = g_5;
        t = int_to_string_0_0(t);
        h_0 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, h_0);
        d_0 = t;
        t = SSLsetAnnotations(d_0, e_0);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg2_2))
        {
          g_5 = ATgetArgument(t, 0);
          k_4 = ATgetArgument(t, 1);
          {
            ATerm q_0 = NULL,y_0 = NULL,z_0 = NULL,g_0 = NULL;
            t = SSLgetAnnotations(b_5);
            q_0 = t;
            t = g_5;
            t = int_to_string_0_0(t);
            y_0 = t;
            t = k_4;
            t = int_to_string_0_0(t);
            z_0 = t;
            t = (ATerm) ATmakeAppl(sym_Arg2_2, y_0, z_0);
            g_0 = t;
            t = SSLsetAnnotations(g_0, q_0);
          }
        }
      else
        {
          if(match_cons(t, sym_SOpt_2))
            {
              g_5 = ATgetArgument(t, 0);
              k_4 = ATgetArgument(t, 1);
              {
                ATerm s_1 = NULL,l_0 = NULL;
                t = SSLgetAnnotations(b_5);
                s_1 = t;
                t = (ATerm) ATmakeAppl(sym_SOpt_2, g_5, k_4);
                l_0 = t;
                t = SSLsetAnnotations(l_0, s_1);
              }
            }
          else
            {
              if(match_cons(t, sym_S_1))
                {
                  g_5 = ATgetArgument(t, 0);
                  {
                    ATerm i_2 = NULL,k_2 = NULL,o_0 = NULL;
                    t = SSLgetAnnotations(b_5);
                    i_2 = t;
                    t = g_5;
                    t = escape_0_0(t);
                    t = double_quote_0_0(t);
                    k_2 = t;
                    t = (ATerm) ATmakeAppl(sym_S_1, k_2);
                    o_0 = t;
                    t = SSLsetAnnotations(o_0, i_2);
                  }
                }
              else
                {
                  if(match_cons(t, sym_selector_2))
                    {
                      g_5 = ATgetArgument(t, 0);
                      k_4 = ATgetArgument(t, 1);
                      {
                        ATerm v_2 = NULL,c_3 = NULL,r_0 = NULL;
                        t = SSLgetAnnotations(b_5);
                        v_2 = t;
                        t = g_5;
                        t = int_to_string_0_0(t);
                        c_3 = t;
                        t = (ATerm) ATmakeAppl(sym_selector_2, c_3, k_4);
                        r_0 = t;
                        t = SSLsetAnnotations(r_0, v_2);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Patched_1))
                        {
                          g_5 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = g_5;
                      if(match_cons(t, sym_Path_2))
                        {
                          h_5 = ATgetArgument(t, 0);
                          a_5 = ATgetArgument(t, 1);
                          {
                            ATerm r_5 = NULL;
                            t = (ATerm) ATinsert(ATinsert(ATempty, h_5), term_v_3);
                            t = concat_strings_0_0(t);
                            r_5 = t;
                            t = (ATerm) ATmakeAppl(sym_Path_2, r_5, a_5);
                          }
                        }
                      else
                        {
                          ATerm z_5 = NULL;
                          if(match_cons(t, sym_Path1_1))
                            {
                              h_5 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATinsert(ATinsert(ATempty, h_5), term_v_3);
                          t = concat_strings_0_0(t);
                          z_5 = t;
                          t = (ATerm) ATmakeAppl(sym_Path1_1, z_5);
                        }
                    }
                }
            }
        }
    }
  return(t);
}
ATerm desugar_0_0 (ATerm t)
{
  t = topdown_1_0(b_0, t);
  return(t);
}
static ATerm f_0 (ATerm t)
{
  ATerm q_6 = NULL,s_6 = NULL;
  q_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_3, q_6);
  t = table_get_0_0(t);
  s_6 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_x_3, q_6, s_6);
  t = table_put_0_0(t);
  return(t);
}
static ATerm i_0 (ATerm t)
{
  ATerm x_6 = NULL,c_7 = NULL,e_7 = NULL;
  x_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_3, x_6);
  t = table_get_0_0(t);
  t = _2_0(j_0, _id, t);
  e_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_x_3, (ATerm)ATmakeAppl(sym_Patched_1, x_6), e_7);
  t = table_put_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, term_w_3, x_6);
  t = table_get_0_0(t);
  c_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_x_3, x_6, c_7);
  t = table_put_0_0(t);
  return(t);
}
static ATerm j_0 (ATerm t)
{
  ATerm f_7 = NULL;
  f_7 = t;
  t = (ATerm) ATmakeAppl(sym_Patched_1, f_7);
  return(t);
}
static ATerm l_1 (ATerm p_4, ATerm q_4, ATerm t)
{
  t = p_4;
  t = map_1_0(f_0, t);
  t = q_4;
  t = map_1_0(i_0, t);
  return(t);
}
static ATerm k_0 (ATerm t)
{
  ATerm w_7 = NULL,x_7 = NULL,y_7 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      w_7 = ATgetArgument(t, 0);
      x_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_7;
  t = int_to_string_0_0(t);
  y_7 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_7), term_b_4), y_7), term_z_3);
  return(t);
}
ATerm path_to_string_0_0 (ATerm t)
{
  ATerm j_7 = NULL,k_7 = NULL;
  if(match_cons(t, sym_Path1_1))
    {
      j_7 = ATgetArgument(t, 0);
      t = j_7;
    }
  else
    {
      ATerm u_7 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          j_7 = ATgetArgument(t, 0);
          k_7 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = k_7;
      t = map_1_0(k_0, t);
      t = concat_0_0(t);
      u_7 = t;
      t = (ATerm) ATinsert(CheckATermList(u_7), j_7);
      t = concat_strings_0_0(t);
    }
  return(t);
}
static ATerm m_0 (ATerm t)
{
  ATerm w_8 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      w_8 = ATgetArgument(t, 0);
      {
        ATerm c_4 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = w_8;
  return(t);
}
ATerm mk_key_0_0 (ATerm t)
{
  ATerm e_8 = NULL,f_8 = NULL;
  if(match_cons(t, sym_Path1_1))
    {
      e_8 = ATgetArgument(t, 0);
      t = (ATerm) ATinsert(ATempty, e_8);
    }
  else
    {
      ATerm s_8 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          e_8 = ATgetArgument(t, 0);
          f_8 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = f_8;
      t = map_1_0(m_0, t);
      s_8 = t;
      t = (ATerm) ATinsert(CheckATermList(s_8), e_8);
    }
  return(t);
}
static ATerm n_0 (ATerm t)
{
  t = debug_1_0(p_0, t);
  return(t);
}
static ATerm p_0 (ATerm t)
{
  t = term_d_4;
  return(t);
}
static ATerm m_1 (ATerm y_4, ATerm z_4, ATerm t)
{
  ATerm x_8 = NULL,y_8 = NULL;
  t = y_4;
  t = mk_key_0_0(t);
  y_8 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_e_4, y_8, (ATerm) ATmakeAppl(sym__2, y_4, z_4));
  t = table_put_0_0(t);
  t = y_4;
  t = path_to_string_0_0(t);
  x_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_8, z_4);
  t = if_verbose1_1_0(n_0, t);
  return(t);
}
ATerm MakePPTerm_0_0 (ATerm t)
{
  ATerm v_10 = NULL,w_10 = NULL,x_10 = NULL;
  v_10 = t;
  if(match_cons(t, sym_Arg_1))
    {
      w_10 = ATgetArgument(t, 0);
      {
        ATerm y_3 = NULL,a_4 = NULL,d_1 = NULL;
        t = SSLgetAnnotations(v_10);
        y_3 = t;
        t = w_10;
        t = string_to_int_0_0(t);
        a_4 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, a_4);
        d_1 = t;
        t = SSLsetAnnotations(d_1, y_3);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg2_2))
        {
          w_10 = ATgetArgument(t, 0);
          x_10 = ATgetArgument(t, 1);
          {
            ATerm i_4 = NULL,m_4 = NULL,n_4 = NULL,e_1 = NULL;
            t = SSLgetAnnotations(v_10);
            i_4 = t;
            t = w_10;
            t = string_to_int_0_0(t);
            m_4 = t;
            t = x_10;
            t = string_to_int_0_0(t);
            n_4 = t;
            t = (ATerm) ATmakeAppl(sym_Arg2_2, m_4, n_4);
            e_1 = t;
            t = SSLsetAnnotations(e_1, i_4);
          }
        }
      else
        {
          if(match_cons(t, sym_SOpt_2))
            {
              w_10 = ATgetArgument(t, 0);
              x_10 = ATgetArgument(t, 1);
              {
                ATerm c_5 = NULL,f_1 = NULL;
                t = SSLgetAnnotations(v_10);
                c_5 = t;
                t = (ATerm) ATmakeAppl(sym_SOpt_2, w_10, x_10);
                f_1 = t;
                t = SSLsetAnnotations(f_1, c_5);
              }
            }
          else
            {
              if(match_cons(t, sym_S_1))
                {
                  w_10 = ATgetArgument(t, 0);
                  {
                    ATerm o_5 = NULL,t_5 = NULL,h_1 = NULL;
                    t = SSLgetAnnotations(v_10);
                    o_5 = t;
                    t = w_10;
                    t = un_double_quote_0_0(t);
                    t = unescape_0_0(t);
                    t_5 = t;
                    t = (ATerm) ATmakeAppl(sym_S_1, t_5);
                    h_1 = t;
                    t = SSLsetAnnotations(h_1, o_5);
                  }
                }
              else
                {
                  ATerm d_6 = NULL,g_6 = NULL,o_1 = NULL;
                  if(match_cons(t, sym_selector_2))
                    {
                      w_10 = ATgetArgument(t, 0);
                      x_10 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(v_10);
                  d_6 = t;
                  t = w_10;
                  t = string_to_int_0_0(t);
                  g_6 = t;
                  t = (ATerm) ATmakeAppl(sym_selector_2, g_6, x_10);
                  o_1 = t;
                  t = SSLsetAnnotations(o_1, d_6);
                }
            }
        }
    }
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm d_11 = NULL,e_11 = NULL;
  t = topdown_1_0(t_0, t);
  if(match_cons(t, sym_PP_Entry_2))
    {
      d_11 = ATgetArgument(t, 0);
      e_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_1(d_11, e_11, t);
  return(t);
}
static ATerm t_0 (ATerm t)
{
  t = try_1_0(MakePPTerm_0_0, t);
  return(t);
}
static ATerm n_1 (ATerm x_4, ATerm t)
{
  t = x_4;
  t = reverse_0_0(t);
  t = map_1_0(s_0, t);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  t = term_f_4;
  return(t);
}
ATerm type_failure_0_0 (ATerm t)
{
  ATerm g_4 = t;
  int h_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = has_option_1_0(u_0, t);
      t = (ATerm) ATinsert(ATempty, term_j_4);
      t = fatal_error_0_0(t);
      LocalPopChoice(h_4);
    }
  else
    {
      t = g_4;
      t = (ATerm) ATinsert(ATempty, term_l_4);
      t = error_0_0(t);
    }
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm j_11 = NULL,k_11 = NULL,r_6 = NULL,t_6 = NULL;
  t = if_verbose1_1_0(w_0, t);
  t = ReadFromFile_0_0(t);
  k_11 = t;
  t = SSL_explode_term(k_11);
  if(match_cons(t, sym__2))
    {
      t_6 = ATgetArgument(t, 0);
      {
        ATerm o_4 = ATgetArgument(t, 1);
        if(((ATgetType(o_4) == AT_LIST) && !(ATisEmpty(o_4))))
          {
            r_6 = ATgetFirst((ATermList) o_4);
            {
              ATerm r_4 = (ATerm) ATgetNext((ATermList) o_4);
              if(((ATgetType(r_4) != AT_LIST) || !(ATisEmpty(r_4))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = t_6;
  if(!(match_string(t, "\"pp-tables-0\"")))
    {
      t = type_failure_0_0(t);
    }
  t = r_6;
  if(match_cons(t, sym_PP_Table_1))
    {
      j_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_1(j_11, t);
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = debug_1_0(x_0, t);
  return(t);
}
static ATerm x_0 (ATerm t)
{
  t = term_s_4;
  return(t);
}
ATerm read_pp_tables_0_0 (ATerm t)
{
  ATerm i_11 = NULL;
  i_11 = t;
  t = term_e_4;
  t = table_create_0_0(t);
  t = i_11;
  t = map_1_0(v_0, t);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_t_4);
  t = fatal_error_0_0(t);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm l_12 = NULL;
  l_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_3, l_12);
  t = table_get_0_0(t);
  t = Fst_0_0(t);
  t = path_to_string_0_0(t);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm m_12 = NULL;
  ATerm u_4 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = u_4;
    }
  m_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_4, (ATerm) ATinsert(ATinsert(ATempty, m_12), term_w_4));
  t = printnl_0_0(t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm n_12 = NULL;
  n_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_3, n_12);
  t = table_get_0_0(t);
  t = Fst_0_0(t);
  t = path_to_string_0_0(t);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm o_12 = NULL;
  ATerm d_5 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = d_5;
    }
  o_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_4, (ATerm) ATinsert(ATinsert(ATempty, o_12), term_e_5));
  t = printnl_0_0(t);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm p_12 = NULL,q_12 = NULL,r_12 = NULL;
  r_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_3, r_12);
  t = table_get_0_0(t);
  t = _2_0(_id, t_1, t);
  if(match_cons(t, sym__2))
    {
      p_12 = ATgetArgument(t, 0);
      q_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, r_12, p_12, q_12);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = collect_1_0(u_1, t);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm d_13 = NULL,e_13 = NULL;
  d_13 = t;
  if(match_cons(t, sym_S_1))
    {
      e_13 = ATgetArgument(t, 0);
      {
        ATerm a_7 = NULL,h_2 = NULL;
        t = SSLgetAnnotations(d_13);
        a_7 = t;
        t = (ATerm) ATmakeAppl(sym_S_1, e_13);
        h_2 = t;
        t = SSLsetAnnotations(h_2, a_7);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg_1))
        {
          e_13 = ATgetArgument(t, 0);
          {
            ATerm z_7 = NULL,o_2 = NULL;
            t = SSLgetAnnotations(d_13);
            z_7 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, e_13);
            o_2 = t;
            t = SSLsetAnnotations(o_2, z_7);
          }
        }
      else
        {
          if(match_cons(t, sym_Arg2_2))
            {
              e_13 = ATgetArgument(t, 0);
              {
                ATerm f_5 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Arg_1, e_13);
        }
    }
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm h_13 = NULL,i_13 = NULL,j_13 = NULL;
  j_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_3, j_13);
  t = table_get_0_0(t);
  t = _2_0(_id, w_1, t);
  if(match_cons(t, sym__2))
    {
      h_13 = ATgetArgument(t, 0);
      i_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, j_13, h_13, i_13);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = collect_1_0(x_1, t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm v_13 = NULL,w_13 = NULL;
  v_13 = t;
  if(match_cons(t, sym_S_1))
    {
      w_13 = ATgetArgument(t, 0);
      {
        ATerm q_8 = NULL,p_2 = NULL;
        t = SSLgetAnnotations(v_13);
        q_8 = t;
        t = (ATerm) ATmakeAppl(sym_S_1, w_13);
        p_2 = t;
        t = SSLsetAnnotations(p_2, q_8);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg_1))
        {
          w_13 = ATgetArgument(t, 0);
          {
            ATerm d_9 = NULL,q_2 = NULL;
            t = SSLgetAnnotations(v_13);
            d_9 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, w_13);
            q_2 = t;
            t = SSLsetAnnotations(q_2, d_9);
          }
        }
      else
        {
          if(match_cons(t, sym_Arg2_2))
            {
              w_13 = ATgetArgument(t, 0);
              {
                ATerm i_5 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Arg_1, w_13);
        }
    }
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm z_13 = NULL;
  if(match_cons(t, sym__3))
    {
      z_13 = ATgetArgument(t, 0);
      {
        ATerm j_5 = ATgetArgument(t, 1);
      }
      {
        ATerm k_5 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = z_13;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm a_14 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm l_5 = ATgetArgument(t, 0);
      a_14 = ATgetArgument(t, 1);
      {
        ATerm m_5 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = a_14;
  t = path_to_string_0_0(t);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm b_14 = NULL;
  ATerm n_5 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_5;
    }
  b_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_4, (ATerm) ATinsert(ATinsert(ATempty, b_14), term_p_5));
  t = printnl_0_0(t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = term_q_5;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = term_s_5;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm c_14 = NULL;
  c_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_3, c_14);
  t = table_remove_0_0(t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm d_14 = NULL,e_14 = NULL;
  ATerm u_5 = t;
  int v_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = has_option_1_0(m_2, t);
      LocalPopChoice(v_5);
    }
  else
    {
      t = u_5;
      t = has_option_1_0(n_2, t);
    }
  t = term_x_3;
  t = table_getlist_0_0(t);
  t = map_1_0(r_2, t);
  t = desugar_0_0(t);
  d_14 = t;
  t = (ATerm) ATmakeAppl(sym_PP_Table_1, d_14);
  e_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_5, (ATerm) ATmakeAppl(sym_PP_Table_1, d_14));
  t = k_1(s_2, e_14, t);
  t = output_1_0(_id, t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_q_5;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_s_5;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm f_14 = NULL,g_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_5 = ATgetArgument(t, 0);
      ATerm a_6 = ATgetArgument(t, 1);
      if(match_cons(a_6, sym__2))
        {
          f_14 = ATgetArgument(a_6, 0);
          g_14 = ATgetArgument(a_6, 1);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_PP_Entry_2, f_14, g_14);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_b_6;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_q_5;
  return(t);
}
ATerm pptable_diff_0_0 (ATerm t)
{
  ATerm u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL;
  static ATerm t_2 (ATerm t);
  static ATerm t_2 (ATerm t)
  {
    static ATerm w_2 (ATerm t);
    static ATerm w_2 (ATerm t)
    {
      t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_12)), not_null(c_12));
      t = concat_0_0(t);
      {
        ATerm c_6 = t;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = c_6;
          }
      }
      t = term_e_6;
      t = exit_0_0(t);
      return(t);
    }
    ATerm f_6 = t;
    if((PushChoice() == 0))
      {
        t = has_option_1_0(u_2, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_6;
      }
    t = try_1_0(w_2, t);
    return(t);
  }
  static ATerm a_1 (ATerm t);
  static ATerm a_1 (ATerm t)
  {
    ATerm f_12 = NULL,g_12 = NULL,h_12 = NULL,e_2 = NULL;
    h_12 = t;
    if(match_cons(t, sym_Old_Table_1))
      {
        g_12 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(h_12);
    f_12 = t;
    t = g_12;
    if(((u_11 != NULL) && (u_11 != t)))
      _fail(t);
    else
      u_11 = t;
    t = (ATerm) ATmakeAppl(sym_Old_Table_1, g_12);
    e_2 = t;
    t = SSLsetAnnotations(e_2, f_12);
    return(t);
  }
  t = option_value_2_0(a_1, b_1, t);
  t = (ATerm) ATinsert(ATempty, not_null(u_11));
  t = read_pp_tables_0_0(t);
  t = term_h_6;
  t = table_rename_0_0(t);
  {
    static ATerm c_1 (ATerm t);
    static ATerm g_1 (ATerm t);
    static ATerm c_1 (ATerm t)
    {
      ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL,f_2 = NULL;
      k_12 = t;
      if(match_cons(t, sym_New_Table_1))
        {
          j_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(k_12);
      i_12 = t;
      t = j_12;
      if(((v_11 != NULL) && (v_11 != t)))
        _fail(t);
      else
        v_11 = t;
      t = (ATerm) ATmakeAppl(sym_New_Table_1, j_12);
      f_2 = t;
      t = SSLsetAnnotations(f_2, i_12);
      return(t);
    }
    static ATerm g_1 (ATerm t)
    {
      t = term_i_6;
      if(((v_11 != NULL) && (v_11 != t)))
        _fail(t);
      else
        v_11 = t;
      return(t);
    }
    t = option_value_2_0(c_1, g_1, t);
  }
  t = (ATerm) ATinsert(ATempty, not_null(v_11));
  t = read_pp_tables_0_0(t);
  t = term_j_6;
  t = table_rename_0_0(t);
  t = term_x_3;
  t = table_keys_0_0(t);
  x_11 = t;
  t = term_w_3;
  t = table_keys_0_0(t);
  w_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_11, w_11);
  t = isect_0_0(t);
  y_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_11, w_11);
  t = diff_0_0(t);
  b_12 = t;
  t = map_1_0(i_1, t);
  t = try_1_0(j_1, t);
  t = (ATerm) ATmakeAppl(sym__2, w_11, x_11);
  t = diff_0_0(t);
  if(((d_12 != NULL) && (d_12 != t)))
    _fail(t);
  else
    d_12 = t;
  t = map_1_0(p_1, t);
  t = try_1_0(q_1, t);
  t = y_11;
  t = map_1_0(r_1, t);
  z_11 = t;
  t = y_11;
  t = map_1_0(v_1, t);
  a_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_11, a_12);
  t = diff_0_0(t);
  e_12 = t;
  t = map_1_0(y_1, t);
  if(((c_12 != NULL) && (c_12 != t)))
    _fail(t);
  else
    c_12 = t;
  t = e_12;
  t = map_1_0(z_1, t);
  t = try_1_0(a_2, t);
  {
    static ATerm b_2 (ATerm t);
    static ATerm b_2 (ATerm t)
    {
      t = has_option_1_0(c_2, t);
      t = (ATerm) ATmakeAppl(sym__2, d_12, c_12);
      t = l_1(d_12, c_12, t);
      return(t);
    }
    t = try_1_0(b_2, t);
  }
  {
    static ATerm d_2 (ATerm t);
    static ATerm d_2 (ATerm t)
    {
      t = has_option_1_0(g_2, t);
      t = b_12;
      t = map_1_0(j_2, t);
      return(t);
    }
    t = try_1_0(d_2, t);
  }
  t = try_1_0(l_2, t);
  t = try_1_0(t_2, t);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm k_6 = t;
  int l_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_2, z_2, a_3, t);
      LocalPopChoice(l_6);
    }
  else
    {
      t = k_6;
      {
        ATerm m_6 = t;
        int n_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(b_3, d_3, e_3, t);
            LocalPopChoice(n_6);
          }
        else
          {
            t = m_6;
            {
              ATerm o_6 = t;
              int p_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(f_3, m_3, n_3, t);
                  LocalPopChoice(p_6);
                }
              else
                {
                  t = o_6;
                  {
                    ATerm u_6 = t;
                    int v_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(o_3, p_3, q_3, t);
                        LocalPopChoice(v_6);
                      }
                    else
                      {
                        t = u_6;
                        {
                          ATerm w_6 = t;
                          int y_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ArgOption_3_0(r_3, s_3, t_3, t);
                              LocalPopChoice(y_6);
                            }
                          else
                            {
                              t = w_6;
                              t = output_options_0_0(t);
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
static ATerm y_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-V", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_z_6;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_b_7;
  return(t);
}
static ATerm b_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--patch", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = term_q_5;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_d_7;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--prune", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = term_s_5;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_g_7;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--old", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm m_14 = NULL;
  m_14 = t;
  t = (ATerm) ATmakeAppl(sym_Old_Table_1, m_14);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = term_h_7;
  return(t);
}
static ATerm r_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--new", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm n_14 = NULL;
  n_14 = t;
  t = (ATerm) ATmakeAppl(sym_New_Table_1, n_14);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_i_7;
  return(t);
}
ATerm io_Pptable_diff_0_0 (ATerm t)
{
  t = option_wrap_2_0(x_2, pptable_diff_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_Pptable_diff_0_0(t);
  return(t);
}
