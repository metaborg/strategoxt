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
Symbol sym_Cons_1;
Symbol sym_Nil_0;
Symbol sym_selector_2;
Symbol sym_Path_2;
Symbol sym_Path1_1;
Symbol sym_PP_Entry_2;
Symbol sym_PP_Table_1;
Symbol sym_SOpt_2;
Symbol sym_Arg2_2;
Symbol sym_Arg_1;
Symbol sym_S_1;
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
  sym_Cons_1 = ATmakeSymbol("Cons", 1, ATfalse);
  ATprotectSymbol(sym_Cons_1);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
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
  sym_Strict_0 = ATmakeSymbol("Strict", 0, ATfalse);
  ATprotectSymbol(sym_Strict_0);
}
ATerm term_i_7;
ATerm term_h_7;
ATerm term_d_7;
ATerm term_b_7;
ATerm term_a_7;
ATerm term_y_6;
ATerm term_j_6;
ATerm term_i_6;
ATerm term_h_6;
ATerm term_c_6;
ATerm term_z_5;
ATerm term_w_5;
ATerm term_t_5;
ATerm term_r_5;
ATerm term_o_5;
ATerm term_g_5;
ATerm term_a_5;
ATerm term_z_4;
ATerm term_x_4;
ATerm term_u_4;
ATerm term_o_4;
ATerm term_n_4;
ATerm term_i_4;
ATerm term_h_4;
ATerm term_g_4;
ATerm term_d_4;
ATerm term_b_4;
ATerm term_a_4;
ATerm term_z_3;
ATerm term_v_3;
ATerm term_u_3;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_u_3));
  term_u_3 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_3));
  term_v_3 = (ATerm) ATmakeAppl(ATmakeSymbol("--saved-entry--", 0, ATtrue));
  ATprotect(&(term_z_3));
  term_z_3 = (ATerm) ATmakeAppl(ATmakeSymbol("new-table", 0, ATtrue));
  ATprotect(&(term_a_4));
  term_a_4 = (ATerm) ATmakeAppl(ATmakeSymbol("old-table", 0, ATtrue));
  ATprotect(&(term_b_4));
  term_b_4 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_d_4));
  term_d_4 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_g_4));
  term_g_4 = (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue));
  ATprotect(&(term_h_4));
  term_h_4 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_i_4));
  term_i_4 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_n_4));
  term_n_4 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_o_4));
  term_o_4 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_u_4));
  term_u_4 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue));
  ATprotect(&(term_x_4));
  term_x_4 = (ATerm) ATmakeAppl(ATmakeSymbol("please specify old table with --old switch", 0, ATtrue));
  ATprotect(&(term_z_4));
  term_z_4 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_5));
  term_a_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Obsolete entries: ", 0, ATtrue));
  ATprotect(&(term_g_5));
  term_g_5 = (ATerm) ATmakeAppl(ATmakeSymbol("New entries: ", 0, ATtrue));
  ATprotect(&(term_o_5));
  term_o_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Changed productions: ", 0, ATtrue));
  ATprotect(&(term_r_5));
  term_r_5 = (ATerm) ATmakeAppl(sym_Patch_0);
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(sym_Prune_0);
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(ATmakeSymbol("out-type", 0, ATtrue));
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(ATmakeSymbol("\"pp-tables-0\"", 0, ATtrue));
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(sym__2, term_h_4, term_a_4);
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(sym__2, term_h_4, term_z_3);
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-V               verbose execution.", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--patch          Bring old table up-o-date", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--prune          Remove obsolete pp entries", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--old <table>    Old table", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--new <table>    New table", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm exit_0_0 (ATerm t);
ATerm Nil_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm try_1_0 (ATerm a_108 (ATerm), ATerm t);
ATerm has_option_1_0 (ATerm n_113 (ATerm), ATerm t);
ATerm output_1_0 (ATerm y_114 (ATerm), ATerm t);
ATerm mkterm_0_0 (ATerm t);
static ATerm k_1 (ATerm a_9 (ATerm), ATerm e_6, ATerm t);
ATerm double_quote_0_0 (ATerm t);
ATerm escape_0_0 (ATerm t);
static ATerm b_0 (ATerm t);
static ATerm c_0 (ATerm t);
ATerm desugar_0_0 (ATerm t);
ATerm map_1_0 (ATerm g_93 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm table_remove_0_0 (ATerm t);
static ATerm f_0 (ATerm t);
static ATerm i_0 (ATerm t);
static ATerm j_0 (ATerm t);
static ATerm l_1 (ATerm v_4, ATerm w_4, ATerm t);
ATerm printnl_0_0 (ATerm t);
ATerm concat_strings_0_0 (ATerm t);
ATerm int_to_string_0_0 (ATerm t);
static ATerm k_0 (ATerm t);
ATerm path_to_string_0_0 (ATerm t);
ATerm diff_0_0 (ATerm t);
ATerm collect_1_0 (ATerm n_99 (ATerm), ATerm t);
ATerm _2_0 (ATerm i_73 (ATerm), ATerm j_73 (ATerm), ATerm t);
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
static ATerm m_1 (ATerm e_5, ATerm f_5, ATerm t);
ATerm string_to_int_0_0 (ATerm t);
ATerm unescape_0_0 (ATerm t);
ATerm un_double_quote_0_0 (ATerm t);
ATerm MakePPTerm_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm t_88 (ATerm), ATerm t);
ATerm reverse_0_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm t_0 (ATerm t);
static ATerm n_1 (ATerm d_5, ATerm t);
ATerm error_0_0 (ATerm t);
static ATerm u_0 (ATerm t);
ATerm type_failure_0_0 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm debug_1_0 (ATerm o_88 (ATerm), ATerm t);
ATerm if_verbose1_1_0 (ATerm f_109 (ATerm), ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm z_0 (ATerm t);
ATerm read_pp_tables_0_0 (ATerm t);
ATerm option_value_2_0 (ATerm o_113 (ATerm), ATerm p_113 (ATerm), ATerm t);
ATerm fatal_error_0_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm v_2 (ATerm t);
ATerm pptable_diff_0_0 (ATerm t);
ATerm output_options_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm o_3 (ATerm), ATerm p_3 (ATerm), ATerm q_3 (ATerm), ATerm t);
ATerm Option_3_0 (ATerm l_3 (ATerm), ATerm m_3 (ATerm), ATerm n_3 (ATerm), ATerm t);
ATerm option_wrap_2_0 (ATerm m_114 (ATerm), ATerm n_114 (ATerm), ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
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
static ATerm k_1 (ATerm a_9 (ATerm), ATerm e_6, ATerm t)
{
  ATerm a_0 = NULL;
  t = term_u_3;
  t = a_9(t);
  a_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_0, (ATerm) ATinsert(ATempty, e_6));
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
  ATerm w_3 = NULL,x_3 = NULL,y_3 = NULL,l_4 = NULL,q_4 = NULL;
  y_3 = t;
  if(match_cons(t, sym_Arg_1))
    {
      l_4 = ATgetArgument(t, 0);
      {
        ATerm e_0 = NULL,h_0 = NULL,d_0 = NULL;
        t = SSLgetAnnotations(y_3);
        e_0 = t;
        t = l_4;
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
          l_4 = ATgetArgument(t, 0);
          w_3 = ATgetArgument(t, 1);
          {
            ATerm q_0 = NULL,x_0 = NULL,y_0 = NULL,g_0 = NULL;
            t = SSLgetAnnotations(y_3);
            q_0 = t;
            t = l_4;
            t = int_to_string_0_0(t);
            x_0 = t;
            t = w_3;
            t = int_to_string_0_0(t);
            y_0 = t;
            t = (ATerm) ATmakeAppl(sym_Arg2_2, x_0, y_0);
            g_0 = t;
            t = SSLsetAnnotations(g_0, q_0);
          }
        }
      else
        {
          if(match_cons(t, sym_SOpt_2))
            {
              l_4 = ATgetArgument(t, 0);
              w_3 = ATgetArgument(t, 1);
              {
                ATerm r_1 = NULL,l_0 = NULL;
                t = SSLgetAnnotations(y_3);
                r_1 = t;
                t = (ATerm) ATmakeAppl(sym_SOpt_2, l_4, w_3);
                l_0 = t;
                t = SSLsetAnnotations(l_0, r_1);
              }
            }
          else
            {
              if(match_cons(t, sym_S_1))
                {
                  l_4 = ATgetArgument(t, 0);
                  {
                    ATerm g_2 = NULL,j_2 = NULL,o_0 = NULL;
                    t = SSLgetAnnotations(y_3);
                    g_2 = t;
                    t = l_4;
                    t = escape_0_0(t);
                    t = double_quote_0_0(t);
                    j_2 = t;
                    t = (ATerm) ATmakeAppl(sym_S_1, j_2);
                    o_0 = t;
                    t = SSLsetAnnotations(o_0, g_2);
                  }
                }
              else
                {
                  if(match_cons(t, sym_selector_2))
                    {
                      l_4 = ATgetArgument(t, 0);
                      w_3 = ATgetArgument(t, 1);
                      {
                        ATerm u_2 = NULL,x_2 = NULL,s_0 = NULL;
                        t = SSLgetAnnotations(y_3);
                        u_2 = t;
                        t = l_4;
                        t = int_to_string_0_0(t);
                        x_2 = t;
                        t = (ATerm) ATmakeAppl(sym_selector_2, x_2, w_3);
                        s_0 = t;
                        t = SSLsetAnnotations(s_0, u_2);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Patched_1))
                        {
                          l_4 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = l_4;
                      if(match_cons(t, sym_Path_2))
                        {
                          q_4 = ATgetArgument(t, 0);
                          x_3 = ATgetArgument(t, 1);
                          {
                            ATerm p_5 = NULL;
                            t = (ATerm) ATinsert(ATinsert(ATempty, q_4), term_v_3);
                            t = concat_strings_0_0(t);
                            p_5 = t;
                            t = (ATerm) ATmakeAppl(sym_Path_2, p_5, x_3);
                          }
                        }
                      else
                        {
                          ATerm f_6 = NULL;
                          if(match_cons(t, sym_Path1_1))
                            {
                              q_4 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATinsert(ATinsert(ATempty, q_4), term_v_3);
                          t = concat_strings_0_0(t);
                          f_6 = t;
                          t = (ATerm) ATmakeAppl(sym_Path1_1, f_6);
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
  ATerm s_6 = NULL,x_6 = NULL;
  s_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_3, s_6);
  t = table_get_0_0(t);
  x_6 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_4, s_6, x_6);
  t = table_put_0_0(t);
  return(t);
}
static ATerm i_0 (ATerm t)
{
  ATerm c_7 = NULL,e_7 = NULL,f_7 = NULL;
  c_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_4, c_7);
  t = table_get_0_0(t);
  t = _2_0(j_0, _id, t);
  f_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_4, (ATerm)ATmakeAppl(sym_Patched_1, c_7), f_7);
  t = table_put_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, term_z_3, c_7);
  t = table_get_0_0(t);
  e_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_4, c_7, e_7);
  t = table_put_0_0(t);
  return(t);
}
static ATerm j_0 (ATerm t)
{
  ATerm g_7 = NULL;
  g_7 = t;
  t = (ATerm) ATmakeAppl(sym_Patched_1, g_7);
  return(t);
}
static ATerm l_1 (ATerm v_4, ATerm w_4, ATerm t)
{
  t = v_4;
  t = map_1_0(f_0, t);
  t = w_4;
  t = map_1_0(i_0, t);
  return(t);
}
static ATerm k_0 (ATerm t)
{
  ATerm x_7 = NULL,y_7 = NULL,z_7 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      x_7 = ATgetArgument(t, 0);
      y_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_7;
  t = int_to_string_0_0(t);
  z_7 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, y_7), term_d_4), z_7), term_b_4);
  return(t);
}
ATerm path_to_string_0_0 (ATerm t)
{
  ATerm k_7 = NULL,l_7 = NULL;
  if(match_cons(t, sym_Path1_1))
    {
      k_7 = ATgetArgument(t, 0);
      t = k_7;
    }
  else
    {
      ATerm w_7 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          k_7 = ATgetArgument(t, 0);
          l_7 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = l_7;
      t = map_1_0(k_0, t);
      t = concat_0_0(t);
      w_7 = t;
      t = (ATerm) ATinsert(CheckATermList(w_7), k_7);
      t = concat_strings_0_0(t);
    }
  return(t);
}
static ATerm m_0 (ATerm t)
{
  ATerm v_8 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      v_8 = ATgetArgument(t, 0);
      {
        ATerm f_4 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = v_8;
  return(t);
}
ATerm mk_key_0_0 (ATerm t)
{
  ATerm f_8 = NULL,g_8 = NULL;
  if(match_cons(t, sym_Path1_1))
    {
      f_8 = ATgetArgument(t, 0);
      t = (ATerm) ATinsert(ATempty, f_8);
    }
  else
    {
      ATerm u_8 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          f_8 = ATgetArgument(t, 0);
          g_8 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = g_8;
      t = map_1_0(m_0, t);
      u_8 = t;
      t = (ATerm) ATinsert(CheckATermList(u_8), f_8);
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
  t = term_g_4;
  return(t);
}
static ATerm m_1 (ATerm e_5, ATerm f_5, ATerm t)
{
  ATerm w_8 = NULL,x_8 = NULL;
  t = e_5;
  t = mk_key_0_0(t);
  x_8 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_h_4, x_8, (ATerm) ATmakeAppl(sym__2, e_5, f_5));
  t = table_put_0_0(t);
  t = e_5;
  t = path_to_string_0_0(t);
  w_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_8, f_5);
  t = if_verbose1_1_0(n_0, t);
  return(t);
}
ATerm MakePPTerm_0_0 (ATerm t)
{
  ATerm w_10 = NULL,x_10 = NULL,y_10 = NULL;
  w_10 = t;
  if(match_cons(t, sym_Arg_1))
    {
      x_10 = ATgetArgument(t, 0);
      {
        ATerm c_4 = NULL,e_4 = NULL,e_1 = NULL;
        t = SSLgetAnnotations(w_10);
        c_4 = t;
        t = x_10;
        t = string_to_int_0_0(t);
        e_4 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, e_4);
        e_1 = t;
        t = SSLsetAnnotations(e_1, c_4);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg2_2))
        {
          x_10 = ATgetArgument(t, 0);
          y_10 = ATgetArgument(t, 1);
          {
            ATerm m_4 = NULL,p_4 = NULL,r_4 = NULL,f_1 = NULL;
            t = SSLgetAnnotations(w_10);
            m_4 = t;
            t = x_10;
            t = string_to_int_0_0(t);
            p_4 = t;
            t = y_10;
            t = string_to_int_0_0(t);
            r_4 = t;
            t = (ATerm) ATmakeAppl(sym_Arg2_2, p_4, r_4);
            f_1 = t;
            t = SSLsetAnnotations(f_1, m_4);
          }
        }
      else
        {
          if(match_cons(t, sym_SOpt_2))
            {
              x_10 = ATgetArgument(t, 0);
              y_10 = ATgetArgument(t, 1);
              {
                ATerm b_5 = NULL,h_1 = NULL;
                t = SSLgetAnnotations(w_10);
                b_5 = t;
                t = (ATerm) ATmakeAppl(sym_SOpt_2, x_10, y_10);
                h_1 = t;
                t = SSLsetAnnotations(h_1, b_5);
              }
            }
          else
            {
              if(match_cons(t, sym_S_1))
                {
                  x_10 = ATgetArgument(t, 0);
                  {
                    ATerm q_5 = NULL,s_5 = NULL,o_1 = NULL;
                    t = SSLgetAnnotations(w_10);
                    q_5 = t;
                    t = x_10;
                    t = un_double_quote_0_0(t);
                    t = unescape_0_0(t);
                    s_5 = t;
                    t = (ATerm) ATmakeAppl(sym_S_1, s_5);
                    o_1 = t;
                    t = SSLsetAnnotations(o_1, q_5);
                  }
                }
              else
                {
                  ATerm a_6 = NULL,d_6 = NULL,q_1 = NULL;
                  if(match_cons(t, sym_selector_2))
                    {
                      x_10 = ATgetArgument(t, 0);
                      y_10 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(w_10);
                  a_6 = t;
                  t = x_10;
                  t = string_to_int_0_0(t);
                  d_6 = t;
                  t = (ATerm) ATmakeAppl(sym_selector_2, d_6, y_10);
                  q_1 = t;
                  t = SSLsetAnnotations(q_1, a_6);
                }
            }
        }
    }
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm e_11 = NULL,f_11 = NULL;
  t = topdown_1_0(t_0, t);
  if(match_cons(t, sym_PP_Entry_2))
    {
      e_11 = ATgetArgument(t, 0);
      f_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_1(e_11, f_11, t);
  return(t);
}
static ATerm t_0 (ATerm t)
{
  t = try_1_0(MakePPTerm_0_0, t);
  return(t);
}
static ATerm n_1 (ATerm d_5, ATerm t)
{
  t = d_5;
  t = reverse_0_0(t);
  t = map_1_0(r_0, t);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  t = term_i_4;
  return(t);
}
ATerm type_failure_0_0 (ATerm t)
{
  ATerm j_4 = t;
  int k_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = has_option_1_0(u_0, t);
      t = (ATerm) ATinsert(ATempty, term_n_4);
      t = fatal_error_0_0(t);
      LocalPopChoice(k_4);
    }
  else
    {
      t = j_4;
      t = (ATerm) ATinsert(ATempty, term_o_4);
      t = error_0_0(t);
    }
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm k_11 = NULL,l_11 = NULL,q_6 = NULL,r_6 = NULL;
  t = if_verbose1_1_0(w_0, t);
  t = ReadFromFile_0_0(t);
  l_11 = t;
  t = SSL_explode_term(l_11);
  if(match_cons(t, sym__2))
    {
      r_6 = ATgetArgument(t, 0);
      {
        ATerm s_4 = ATgetArgument(t, 1);
        if(((ATgetType(s_4) == AT_LIST) && !(ATisEmpty(s_4))))
          {
            q_6 = ATgetFirst((ATermList) s_4);
            {
              ATerm t_4 = (ATerm) ATgetNext((ATermList) s_4);
              if(((ATgetType(t_4) != AT_LIST) || !(ATisEmpty(t_4))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = r_6;
  if(!(match_string(t, "\"pp-tables-0\"")))
    {
      t = type_failure_0_0(t);
    }
  t = q_6;
  if(match_cons(t, sym_PP_Table_1))
    {
      k_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_1(k_11, t);
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = debug_1_0(z_0, t);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  t = term_u_4;
  return(t);
}
ATerm read_pp_tables_0_0 (ATerm t)
{
  ATerm j_11 = NULL;
  j_11 = t;
  t = term_h_4;
  t = table_create_0_0(t);
  t = j_11;
  t = map_1_0(v_0, t);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_x_4);
  t = fatal_error_0_0(t);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm m_12 = NULL;
  m_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_4, m_12);
  t = table_get_0_0(t);
  t = Fst_0_0(t);
  t = path_to_string_0_0(t);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm n_12 = NULL;
  ATerm y_4 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = y_4;
    }
  n_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_4, (ATerm) ATinsert(ATinsert(ATempty, n_12), term_a_5));
  t = printnl_0_0(t);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm o_12 = NULL;
  o_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_3, o_12);
  t = table_get_0_0(t);
  t = Fst_0_0(t);
  t = path_to_string_0_0(t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm p_12 = NULL;
  ATerm c_5 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = c_5;
    }
  p_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_4, (ATerm) ATinsert(ATinsert(ATempty, p_12), term_g_5));
  t = printnl_0_0(t);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL;
  s_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_4, s_12);
  t = table_get_0_0(t);
  t = _2_0(_id, t_1, t);
  if(match_cons(t, sym__2))
    {
      q_12 = ATgetArgument(t, 0);
      r_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, s_12, q_12, r_12);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = collect_1_0(u_1, t);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm e_13 = NULL,f_13 = NULL;
  e_13 = t;
  if(match_cons(t, sym_S_1))
    {
      f_13 = ATgetArgument(t, 0);
      {
        ATerm z_6 = NULL,o_2 = NULL;
        t = SSLgetAnnotations(e_13);
        z_6 = t;
        t = (ATerm) ATmakeAppl(sym_S_1, f_13);
        o_2 = t;
        t = SSLsetAnnotations(o_2, z_6);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg_1))
        {
          f_13 = ATgetArgument(t, 0);
          {
            ATerm v_7 = NULL,p_2 = NULL;
            t = SSLgetAnnotations(e_13);
            v_7 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, f_13);
            p_2 = t;
            t = SSLsetAnnotations(p_2, v_7);
          }
        }
      else
        {
          if(match_cons(t, sym_Arg2_2))
            {
              f_13 = ATgetArgument(t, 0);
              {
                ATerm h_5 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Arg_1, f_13);
        }
    }
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm i_13 = NULL,j_13 = NULL,k_13 = NULL;
  k_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_3, k_13);
  t = table_get_0_0(t);
  t = _2_0(_id, w_1, t);
  if(match_cons(t, sym__2))
    {
      i_13 = ATgetArgument(t, 0);
      j_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, k_13, i_13, j_13);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = collect_1_0(x_1, t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm w_13 = NULL,x_13 = NULL;
  w_13 = t;
  if(match_cons(t, sym_S_1))
    {
      x_13 = ATgetArgument(t, 0);
      {
        ATerm l_8 = NULL,q_2 = NULL;
        t = SSLgetAnnotations(w_13);
        l_8 = t;
        t = (ATerm) ATmakeAppl(sym_S_1, x_13);
        q_2 = t;
        t = SSLsetAnnotations(q_2, l_8);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg_1))
        {
          x_13 = ATgetArgument(t, 0);
          {
            ATerm d_9 = NULL,t_2 = NULL;
            t = SSLgetAnnotations(w_13);
            d_9 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, x_13);
            t_2 = t;
            t = SSLsetAnnotations(t_2, d_9);
          }
        }
      else
        {
          if(match_cons(t, sym_Arg2_2))
            {
              x_13 = ATgetArgument(t, 0);
              {
                ATerm i_5 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Arg_1, x_13);
        }
    }
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm a_14 = NULL;
  if(match_cons(t, sym__3))
    {
      a_14 = ATgetArgument(t, 0);
      {
        ATerm j_5 = ATgetArgument(t, 1);
      }
      {
        ATerm k_5 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = a_14;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm b_14 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm l_5 = ATgetArgument(t, 0);
      b_14 = ATgetArgument(t, 1);
      {
        ATerm m_5 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = b_14;
  t = path_to_string_0_0(t);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm c_14 = NULL;
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
  c_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_4, (ATerm) ATinsert(ATinsert(ATempty, c_14), term_o_5));
  t = printnl_0_0(t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = term_r_5;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_t_5;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm d_14 = NULL;
  d_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_4, d_14);
  t = table_remove_0_0(t);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm e_14 = NULL,f_14 = NULL;
  ATerm u_5 = t;
  int v_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = has_option_1_0(l_2, t);
      LocalPopChoice(v_5);
    }
  else
    {
      t = u_5;
      t = has_option_1_0(m_2, t);
    }
  t = term_a_4;
  t = table_getlist_0_0(t);
  t = map_1_0(n_2, t);
  t = desugar_0_0(t);
  e_14 = t;
  t = (ATerm) ATmakeAppl(sym_PP_Table_1, e_14);
  f_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_5, (ATerm) ATmakeAppl(sym_PP_Table_1, e_14));
  t = k_1(r_2, f_14, t);
  t = output_1_0(_id, t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_r_5;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_t_5;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm g_14 = NULL,h_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_5 = ATgetArgument(t, 0);
      ATerm y_5 = ATgetArgument(t, 1);
      if(match_cons(y_5, sym__2))
        {
          g_14 = ATgetArgument(y_5, 0);
          h_14 = ATgetArgument(y_5, 1);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_PP_Entry_2, g_14, h_14);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = term_z_5;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_r_5;
  return(t);
}
ATerm pptable_diff_0_0 (ATerm t)
{
  ATerm v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL;
  static ATerm s_2 (ATerm t);
  static ATerm s_2 (ATerm t)
  {
    static ATerm w_2 (ATerm t);
    static ATerm w_2 (ATerm t)
    {
      t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_12)), not_null(d_12));
      t = concat_0_0(t);
      {
        ATerm b_6 = t;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = b_6;
          }
      }
      t = term_c_6;
      t = exit_0_0(t);
      return(t);
    }
    ATerm g_6 = t;
    if((PushChoice() == 0))
      {
        t = has_option_1_0(v_2, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_6;
      }
    t = try_1_0(w_2, t);
    return(t);
  }
  static ATerm a_1 (ATerm t);
  static ATerm a_1 (ATerm t)
  {
    ATerm g_12 = NULL,h_12 = NULL,i_12 = NULL,f_2 = NULL;
    i_12 = t;
    if(match_cons(t, sym_Old_Table_1))
      {
        h_12 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(i_12);
    g_12 = t;
    t = h_12;
    if(((v_11 != NULL) && (v_11 != t)))
      _fail(t);
    else
      v_11 = t;
    t = (ATerm) ATmakeAppl(sym_Old_Table_1, h_12);
    f_2 = t;
    t = SSLsetAnnotations(f_2, g_12);
    return(t);
  }
  t = option_value_2_0(a_1, b_1, t);
  t = (ATerm) ATinsert(ATempty, not_null(v_11));
  t = read_pp_tables_0_0(t);
  t = term_h_6;
  t = table_rename_0_0(t);
  {
    static ATerm c_1 (ATerm t);
    static ATerm d_1 (ATerm t);
    static ATerm c_1 (ATerm t)
    {
      ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL,h_2 = NULL;
      l_12 = t;
      if(match_cons(t, sym_New_Table_1))
        {
          k_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(l_12);
      j_12 = t;
      t = k_12;
      if(((w_11 != NULL) && (w_11 != t)))
        _fail(t);
      else
        w_11 = t;
      t = (ATerm) ATmakeAppl(sym_New_Table_1, k_12);
      h_2 = t;
      t = SSLsetAnnotations(h_2, j_12);
      return(t);
    }
    static ATerm d_1 (ATerm t)
    {
      t = term_i_6;
      if(((w_11 != NULL) && (w_11 != t)))
        _fail(t);
      else
        w_11 = t;
      return(t);
    }
    t = option_value_2_0(c_1, d_1, t);
  }
  t = (ATerm) ATinsert(ATempty, not_null(w_11));
  t = read_pp_tables_0_0(t);
  t = term_j_6;
  t = table_rename_0_0(t);
  t = term_a_4;
  t = table_keys_0_0(t);
  y_11 = t;
  t = term_z_3;
  t = table_keys_0_0(t);
  x_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_11, x_11);
  t = isect_0_0(t);
  z_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_11, x_11);
  t = diff_0_0(t);
  c_12 = t;
  t = map_1_0(g_1, t);
  t = try_1_0(i_1, t);
  t = (ATerm) ATmakeAppl(sym__2, x_11, y_11);
  t = diff_0_0(t);
  if(((e_12 != NULL) && (e_12 != t)))
    _fail(t);
  else
    e_12 = t;
  t = map_1_0(j_1, t);
  t = try_1_0(p_1, t);
  t = z_11;
  t = map_1_0(s_1, t);
  a_12 = t;
  t = z_11;
  t = map_1_0(v_1, t);
  b_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_12, b_12);
  t = diff_0_0(t);
  f_12 = t;
  t = map_1_0(y_1, t);
  if(((d_12 != NULL) && (d_12 != t)))
    _fail(t);
  else
    d_12 = t;
  t = f_12;
  t = map_1_0(z_1, t);
  t = try_1_0(a_2, t);
  {
    static ATerm b_2 (ATerm t);
    static ATerm b_2 (ATerm t)
    {
      t = has_option_1_0(c_2, t);
      t = (ATerm) ATmakeAppl(sym__2, e_12, d_12);
      t = l_1(e_12, d_12, t);
      return(t);
    }
    t = try_1_0(b_2, t);
  }
  {
    static ATerm d_2 (ATerm t);
    static ATerm d_2 (ATerm t)
    {
      t = has_option_1_0(e_2, t);
      t = c_12;
      t = map_1_0(i_2, t);
      return(t);
    }
    t = try_1_0(d_2, t);
  }
  t = try_1_0(k_2, t);
  t = try_1_0(s_2, t);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm k_6 = t;
  int l_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_2, a_3, b_3, t);
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
            t = Option_3_0(c_3, d_3, e_3, t);
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
                  t = Option_3_0(f_3, g_3, h_3, t);
                  LocalPopChoice(p_6);
                }
              else
                {
                  t = o_6;
                  {
                    ATerm t_6 = t;
                    int u_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(i_3, j_3, k_3, t);
                        LocalPopChoice(u_6);
                      }
                    else
                      {
                        t = t_6;
                        {
                          ATerm v_6 = t;
                          int w_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ArgOption_3_0(r_3, s_3, t_3, t);
                              LocalPopChoice(w_6);
                            }
                          else
                            {
                              t = v_6;
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
static ATerm z_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-V", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_y_6;
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = term_a_7;
  return(t);
}
static ATerm c_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--patch", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = term_r_5;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_b_7;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--prune", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_t_5;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_d_7;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--old", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm n_14 = NULL;
  n_14 = t;
  t = (ATerm) ATmakeAppl(sym_Old_Table_1, n_14);
  return(t);
}
static ATerm k_3 (ATerm t)
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
  ATerm o_14 = NULL;
  o_14 = t;
  t = (ATerm) ATmakeAppl(sym_New_Table_1, o_14);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_i_7;
  return(t);
}
ATerm io_Pptable_diff_0_0 (ATerm t)
{
  t = option_wrap_2_0(y_2, pptable_diff_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_Pptable_diff_0_0(t);
  return(t);
}
