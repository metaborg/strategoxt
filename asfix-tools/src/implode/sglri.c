#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym__0;
static Symbol sym__1;
static Symbol sym__2;
static Symbol sym__3;
static Symbol sym__4;
static Symbol sym__5;
static Symbol sym__6;
static Symbol sym__7;
static Symbol sym__8;
static Symbol sym__9;
static Symbol sym__10;
static Symbol sym__11;
static Symbol sym__12;
static Symbol sym__13;
static Symbol sym__14;
static Symbol sym__15;
static Symbol sym__16;
static Symbol sym__17;
static Symbol sym__18;
static Symbol sym_None_0;
static Symbol sym_Some_1;
static Symbol sym_stdin_0;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym__0;
static Symbol sym__1;
static Symbol sym__2;
static Symbol sym__3;
static Symbol sym__4;
static Symbol sym__5;
static Symbol sym__6;
static Symbol sym__7;
static Symbol sym__8;
static Symbol sym__9;
static Symbol sym__10;
static Symbol sym__11;
static Symbol sym__12;
static Symbol sym__13;
static Symbol sym__14;
static Symbol sym__15;
static Symbol sym__16;
static Symbol sym__17;
static Symbol sym__18;
static Symbol sym_None_0;
static Symbol sym_Some_1;
static Symbol sym_stdin_0;
static Symbol sym_FILE_1;
static Symbol sym_summary_3;
static Symbol sym_error_2;
static Symbol sym_localized_2;
static Symbol sym_file_1;
static Symbol sym_area_in_file_2;
static Symbol sym_area_6;
static void init_module_constructors (void)
{
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_summary_3 = ATmakeSymbol("summary", 3, ATfalse);
  ATprotectSymbol(sym_summary_3);
  sym_error_2 = ATmakeSymbol("error", 2, ATfalse);
  ATprotectSymbol(sym_error_2);
  sym_localized_2 = ATmakeSymbol("localized", 2, ATfalse);
  ATprotectSymbol(sym_localized_2);
  sym_file_1 = ATmakeSymbol("file", 1, ATfalse);
  ATprotectSymbol(sym_file_1);
  sym_area_in_file_2 = ATmakeSymbol("area-in-file", 2, ATfalse);
  ATprotectSymbol(sym_area_in_file_2);
  sym_area_6 = ATmakeSymbol("area", 6, ATfalse);
  ATprotectSymbol(sym_area_6);
}
static ATerm term_r_7;
static ATerm term_c_7;
static ATerm term_b_7;
static ATerm term_a_7;
static ATerm term_z_6;
static ATerm term_y_6;
static ATerm term_x_6;
static ATerm term_w_6;
static ATerm term_v_6;
static ATerm term_u_6;
static ATerm term_t_6;
static ATerm term_q_6;
static ATerm term_p_6;
static ATerm term_k_6;
static ATerm term_h_6;
static ATerm term_c_6;
static ATerm term_b_6;
static ATerm term_a_6;
static ATerm term_z_5;
static ATerm term_w_5;
static ATerm term_r_5;
static ATerm term_q_5;
static ATerm term_p_5;
static ATerm term_z_3;
static ATerm term_y_3;
static ATerm term_x_3;
static ATerm term_j_3;
static ATerm term_i_3;
static ATerm term_b_3;
static ATerm term_q_2;
static ATerm term_p_2;
static ATerm term_o_2;
static ATerm term_n_2;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_n_2));
  term_n_2 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_2));
  term_o_2 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_p_2));
  term_p_2 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_q_2));
  term_q_2 = (ATerm) ATmakeAppl(ATmakeSymbol(", ", 0, ATtrue));
  ATprotect(&(term_b_3));
  term_b_3 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_3));
  term_i_3 = (ATerm) ATmakeAppl(ATmakeSymbol(" at line ", 0, ATtrue));
  ATprotect(&(term_j_3));
  term_j_3 = (ATerm) ATmakeAppl(ATmakeSymbol(", column ", 0, ATtrue));
  ATprotect(&(term_x_3));
  term_x_3 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_y_3));
  term_y_3 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_z_3));
  term_z_3 = (ATerm) ATmakeAppl(ATmakeSymbol("Parse error cannot be presented. Please report bug.", 0, ATtrue));
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(ATmakeSymbol("/dev/null", 0, ATtrue));
  ATprotect(&(term_r_5));
  term_r_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--impl", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: no parse table specified", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--start", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--sglr", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-p <file.tbl>           Use parse table <file.tbl> (required)", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--start <symbol>        Start parsing with <symbol>", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-fi", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-fe", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-heuristic-filters  Don't use heuristic disambiguation filters (encouraged)", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--sglr <opt>            Pass <opt> to sglr", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--impl <opt>            Pass <opt> to implode-asfix", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeInt(1);
}
#include <srts/init-stratego-application.h>
ATerm xtc_exit_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm xtc_transform_2_0 (ATerm l_6 (ATerm), ATerm m_6 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm c_101 (ATerm), ATerm t);
ATerm read_from_0_0 (ATerm t);
ATerm report_file_0_2 (ATerm d_3, ATerm e_3, ATerm t);
ATerm fprintnl_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
ATerm conc_strings_0_0 (ATerm t);
ATerm copy_char_0_0 (ATerm t);
ATerm lt_0_0 (ATerm t);
ATerm dec_0_0 (ATerm t);
ATerm Snd_0_0 (ATerm t);
ATerm map_1_0 (ATerm m_101 (ATerm), ATerm t);
ATerm at_suffix_1_0 (ATerm f_102 (ATerm), ATerm t);
ATerm int_to_string_0_0 (ATerm t);
ATerm add_indices_0_0 (ATerm t);
ATerm get_lines_0_0 (ATerm t);
ATerm read_text_file_0_0 (ATerm t);
static ATerm g_0 (ATerm t);
ATerm report_area_0_3 (ATerm f_3, ATerm g_3, ATerm h_3, ATerm t);
ATerm finally_2_0 (ATerm z_93 (ATerm), ATerm a_94 (ATerm), ATerm t);
static ATerm l_0 (ATerm t);
ATerm report_sglri_error_summary_0_1 (ATerm v_2, ATerm t);
ATerm call_0_3 (ATerm w_67, ATerm x_67, ATerm y_67, ATerm t);
ATerm open_0_0 (ATerm t);
ATerm xtc_find_warning_0_0 (ATerm t);
ATerm xtc_command_silent_0_1 (ATerm t_2, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_always_2_2 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm h_0, ATerm m_0, ATerm t);
ATerm xtc_sglr_strict_0_2 (ATerm e_0, ATerm i_0, ATerm t);
ATerm if_verbose3_1_0 (ATerm w_118 (ATerm), ATerm t);
ATerm fatal_error_0_0 (ATerm t);
static ATerm o_0 (ATerm t);
static ATerm p_0 (ATerm t);
static ATerm a_1 (ATerm t);
ATerm parse_and_implode_0_0 (ATerm t);
ATerm Option_3_0 (ATerm j_4 (ATerm), ATerm k_4 (ATerm), ATerm l_4 (ATerm), ATerm t);
ATerm extend_config_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm g_4 (ATerm), ATerm h_4 (ATerm), ATerm i_4 (ATerm), ATerm t);
ATerm set_config_0_0 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
ATerm sglri_options_0_0 (ATerm t);
ATerm xtc_io_wrap_2_0 (ATerm s_5 (ATerm), ATerm t_5 (ATerm), ATerm t);
static ATerm l_2 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm report_file_0_2 (ATerm d_3, ATerm e_3, ATerm t)
{
  ATerm d_0 = NULL,f_0 = NULL;
  t = d_3;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Parse Table error", 0, ATtrue)))
    _fail(t);
  t = term_n_2;
  t = stderr_stream_0_0(t);
  d_0 = t;
  t = term_o_2;
  t = get_config_0_0(t);
  f_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_0, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, e_3), term_q_2), d_3), term_p_2), f_0));
  t = fprintnl_0_0(t);
  return(t);
}
static ATerm g_0 (ATerm t)
{
  ATerm s_1 = NULL,u_1 = NULL;
  t = Snd_0_0(t);
  s_1 = t;
  t = term_n_2;
  t = stderr_stream_0_0(t);
  u_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_1, (ATerm) ATinsert(ATempty, s_1));
  t = fprintnl_0_0(t);
  return(t);
}
ATerm report_area_0_3 (ATerm f_3, ATerm g_3, ATerm h_3, ATerm t)
{
  ATerm q_0 = NULL,r_0 = NULL,s_0 = NULL,u_0 = NULL,w_0 = NULL,x_0 = NULL,y_0 = NULL,z_0 = NULL,b_1 = NULL,c_1 = NULL,f_1 = NULL,g_1 = NULL,i_1 = NULL,j_1 = NULL,k_1 = NULL,l_1 = NULL,n_1 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      n_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_1;
  t = read_text_file_0_0(t);
  t = get_lines_0_0(t);
  t = add_indices_0_0(t);
  l_1 = t;
  t = h_3;
  if(match_cons(t, sym_area_6))
    {
      s_0 = ATgetArgument(t, 0);
      u_0 = ATgetArgument(t, 1);
      {
        ATerm s_2 = ATgetArgument(t, 2);
      }
      q_0 = ATgetArgument(t, 3);
      {
        ATerm u_2 = ATgetArgument(t, 4);
      }
      {
        ATerm w_2 = ATgetArgument(t, 5);
      }
    }
  else
    _fail(t);
  t = s_0;
  t = dec_0_0(t);
  {
    ATerm x_2 = t;
    int a_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_1 = NULL;
        p_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_1, term_b_3);
        t = lt_0_0(t);
        t = p_1;
        LocalPopChoice(a_3);
        t = term_b_3;
      }
    else
      {
        t = x_2;
      }
  }
  w_0 = t;
  t = term_n_2;
  t = stderr_stream_0_0(t);
  i_1 = t;
  t = s_0;
  t = int_to_string_0_0(t);
  j_1 = t;
  t = u_0;
  t = int_to_string_0_0(t);
  k_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_1, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, k_1), term_j_3), j_1), term_i_3), g_3), term_p_2), f_3));
  t = fprintnl_0_0(t);
  t = l_1;
  {
    static ATerm a_0 (ATerm t);
    static ATerm a_0 (ATerm t)
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm k_3 = ATgetFirst((ATermList) t);
          if(match_cons(k_3, sym__2))
            {
              if((w_0 != ATgetArgument(k_3, 0)))
                {
                  _fail(ATgetArgument(k_3, 0));
                }
              {
                ATerm m_3 = ATgetArgument(k_3, 1);
              }
            }
          else
            _fail(t);
          {
            ATerm l_3 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      if(((x_0 != NULL) && (x_0 != t)))
        _fail(t);
      else
        x_0 = t;
      return(t);
    }
    t = at_suffix_1_0(a_0, t);
  }
  t = not_null(x_0);
  {
    ATerm n_3 = t;
    int o_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = not_null(x_0);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_0 = ATgetFirst((ATermList) t);
            {
              ATerm q_3 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(q_3) == AT_LIST) && !(ATisEmpty(q_3))))
                {
                  z_0 = ATgetFirst((ATermList) q_3);
                  {
                    ATerm r_3 = (ATerm) ATgetNext((ATermList) q_3);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = not_null(x_0);
        LocalPopChoice(o_3);
        t = (ATerm) ATinsert(ATinsert(ATempty, z_0), y_0);
      }
    else
      {
        t = n_3;
      }
  }
  t = map_1_0(g_0, t);
  t = h_3;
  if(match_cons(t, sym_area_6))
    {
      if((s_0 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      if((u_0 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
      {
        ATerm s_3 = ATgetArgument(t, 2);
      }
      if((q_0 != ATgetArgument(t, 3)))
        {
          _fail(ATgetArgument(t, 3));
        }
      {
        ATerm t_3 = ATgetArgument(t, 4);
      }
      {
        ATerm u_3 = ATgetArgument(t, 5);
      }
    }
  else
    _fail(t);
  t = u_0;
  t = dec_0_0(t);
  r_0 = t;
  {
    ATerm v_3 = t;
    int w_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, r_0, term_b_3);
        t = lt_0_0(t);
        t = r_0;
        LocalPopChoice(w_3);
        t = term_b_3;
      }
    else
      {
        t = v_3;
      }
  }
  g_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_1, term_x_3);
  t = copy_char_0_0(t);
  f_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_1, term_y_3);
  t = conc_strings_0_0(t);
  b_1 = t;
  t = term_n_2;
  t = stderr_stream_0_0(t);
  c_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_1, (ATerm) ATinsert(ATempty, b_1));
  t = fprintnl_0_0(t);
  t = b_1;
  return(t);
}
static ATerm l_0 (ATerm t)
{
  t = term_z_3;
  return(t);
}
ATerm report_sglri_error_summary_0_1 (ATerm v_2, ATerm t)
{
  ATerm a_2 = NULL,b_2 = NULL,c_2 = NULL,d_2 = NULL;
  static ATerm j_0 (ATerm t);
  static ATerm j_0 (ATerm t)
  {
    ATerm a_4 = t;
    int b_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_2 = NULL,k_0 = NULL;
        i_2 = t;
        t = read_from_0_0(t);
        if(match_cons(t, sym_summary_3))
          {
            ATerm c_4 = ATgetArgument(t, 0);
            if(((a_2 != NULL) && (a_2 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              a_2 = ATgetArgument(t, 1);
            {
              ATerm d_4 = ATgetArgument(t, 2);
              if(((ATgetType(d_4) == AT_LIST) && !(ATisEmpty(d_4))))
                {
                  ATerm e_4 = ATgetFirst((ATermList) d_4);
                  if(match_cons(e_4, sym_error_2))
                    {
                      if(((c_2 != NULL) && (c_2 != ATgetArgument(e_4, 0))))
                        _fail(ATgetArgument(e_4, 0));
                      else
                        c_2 = ATgetArgument(e_4, 0);
                      {
                        ATerm m_4 = ATgetArgument(e_4, 1);
                        if(((ATgetType(m_4) == AT_LIST) && !(ATisEmpty(m_4))))
                          {
                            ATerm n_4 = ATgetFirst((ATermList) m_4);
                            if(match_cons(n_4, sym_localized_2))
                              {
                                if(((d_2 != NULL) && (d_2 != ATgetArgument(n_4, 0))))
                                  _fail(ATgetArgument(n_4, 0));
                                else
                                  d_2 = ATgetArgument(n_4, 0);
                                k_0 = ATgetArgument(n_4, 1);
                              }
                            else
                              _fail(t);
                            {
                              ATerm q_4 = (ATerm) ATgetNext((ATermList) m_4);
                              if(((ATgetType(q_4) != AT_LIST) || !(ATisEmpty(q_4))))
                                _fail(t);
                            }
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  {
                    ATerm f_4 = (ATerm) ATgetNext((ATermList) d_4);
                    if(((ATgetType(f_4) != AT_LIST) || !(ATisEmpty(f_4))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = k_0;
        {
          ATerm r_4 = t;
          int s_4 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_0;
              if(match_cons(t, sym_area_in_file_2))
                {
                  ATerm w_4 = ATgetArgument(t, 0);
                  if(((b_2 != NULL) && (b_2 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    b_2 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = k_0;
              LocalPopChoice(s_4);
              t = v_2;
              t = report_area_0_3(a_2, d_2, b_2, t);
            }
          else
            {
              t = r_4;
              t = k_0;
              {
                ATerm h_5 = t;
                int n_5 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = k_0;
                    if(match_cons(t, sym_file_1))
                      {
                        ATerm o_5 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = k_0;
                    LocalPopChoice(n_5);
                    t = v_2;
                    t = report_file_0_2(c_2, d_2, t);
                  }
                else
                  {
                    t = h_5;
                    t = k_0;
                    _fail(t);
                  }
              }
            }
        }
        t = i_2;
        LocalPopChoice(b_4);
      }
    else
      {
        t = a_4;
        t = read_from_0_0(t);
        t = debug_1_0(l_0, t);
      }
    return(t);
  }
  t = finally_2_0(j_0, _fail, t);
  return(t);
}
ATerm xtc_command_silent_0_1 (ATerm t_2, ATerm t)
{
  ATerm m_2 = NULL,r_2 = NULL,y_2 = NULL,z_2 = NULL,c_3 = NULL,p_3 = NULL;
  p_3 = t;
  t = t_2;
  t = xtc_find_warning_0_0(t);
  m_2 = t;
  t = term_p_5;
  r_2 = t;
  t = term_p_5;
  y_2 = t;
  t = term_q_5;
  t = open_0_0(t);
  c_3 = t;
  t = (ATerm) ATmakeAppl(sym_Some_1, c_3);
  z_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_2, p_3);
  t = call_0_3(r_2, y_2, z_2, t);
  t = p_3;
  return(t);
}
ATerm xtc_transform_always_2_2 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm h_0, ATerm m_0, ATerm t)
{
  ATerm o_4 = NULL,p_4 = NULL;
  o_4 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm t_0 = NULL;
      t = o_4;
      t = xtc_new_file_0_0(t);
      t_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_0, (ATerm) ATinsert(ATinsert(ATempty, t_0), term_r_5));
      t = conc_0_0(t);
      {
        ATerm u_5 = t;
        int v_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_0 = NULL;
            v_0 = t;
            t = xtc_command_silent_0_1(h_0, t);
            t = v_0;
            LocalPopChoice(v_5);
            t = (ATerm) ATmakeAppl(sym_FILE_1, t_0);
            t = b_0(t);
          }
        else
          {
            t = u_5;
            t = (ATerm) ATmakeAppl(sym_FILE_1, t_0);
            t = c_0(t);
          }
      }
    }
  else
    {
      ATerm o_1 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          p_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_4;
      t = xtc_new_file_0_0(t);
      o_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_0, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_1), term_r_5), p_4), term_w_5));
      t = conc_0_0(t);
      {
        ATerm x_5 = t;
        int y_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_1 = NULL;
            t_1 = t;
            t = xtc_command_silent_0_1(h_0, t);
            t = t_1;
            LocalPopChoice(y_5);
            t = (ATerm) ATmakeAppl(sym_FILE_1, o_1);
            t = b_0(t);
          }
        else
          {
            t = x_5;
            t = (ATerm) ATmakeAppl(sym_FILE_1, o_1);
            t = c_0(t);
          }
      }
    }
  return(t);
}
ATerm xtc_sglr_strict_0_2 (ATerm e_0, ATerm i_0, ATerm t)
{
  ATerm t_4 = NULL,u_4 = NULL,v_4 = NULL;
  static ATerm n_0 (ATerm t);
  static ATerm n_0 (ATerm t)
  {
    t = report_sglri_error_summary_0_1(not_null(t_4), t);
    return(t);
  }
  if(((t_4 != NULL) && (t_4 != t)))
    _fail(t);
  else
    t_4 = t;
  t = term_z_5;
  u_4 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(i_0), e_0), term_o_2);
  v_4 = t;
  t = t_4;
  t = xtc_transform_always_2_2(_id, n_0, u_4, v_4, t);
  return(t);
}
static ATerm o_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_a_6);
  return(t);
}
static ATerm p_0 (ATerm t)
{
  t = term_b_6;
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm e_5 = NULL,f_5 = NULL,g_5 = NULL;
  t = term_c_6;
  {
    ATerm d_6 = t;
    int e_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(e_6);
      }
    else
      {
        t = d_6;
        t = (ATerm) ATempty;
      }
  }
  e_5 = t;
  t = term_n_2;
  {
    ATerm f_6 = t;
    int g_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_6;
        t = get_config_0_0(t);
        t = term_n_2;
        LocalPopChoice(g_6);
        t = (ATerm) ATinsert(ATempty, term_h_6);
      }
    else
      {
        t = f_6;
        t = (ATerm) ATempty;
      }
  }
  f_5 = t;
  t = term_n_2;
  t = pass_verbose_0_0(t);
  g_5 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, g_5), f_5), e_5);
  t = concat_0_0(t);
  return(t);
}
ATerm parse_and_implode_0_0 (ATerm t)
{
  ATerm x_4 = NULL,y_4 = NULL,z_4 = NULL,a_5 = NULL,b_5 = NULL,c_5 = NULL;
  b_5 = t;
  {
    ATerm i_6 = t;
    int j_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_2;
        t = get_config_0_0(t);
        LocalPopChoice(j_6);
      }
    else
      {
        t = i_6;
        t = (ATerm) ATinsert(ATempty, term_k_6);
        t = fatal_error_0_0(t);
      }
  }
  c_5 = t;
  t = term_n_2;
  {
    ATerm n_6 = t;
    int o_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_5 = NULL;
        t = term_p_6;
        t = get_config_0_0(t);
        d_5 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, d_5), term_q_6);
        LocalPopChoice(o_6);
      }
    else
      {
        t = n_6;
        t = (ATerm) ATempty;
      }
  }
  y_4 = t;
  t = term_n_2;
  {
    ATerm r_6 = t;
    int s_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_6;
        t = get_config_0_0(t);
        LocalPopChoice(s_6);
      }
    else
      {
        t = r_6;
        t = (ATerm) ATempty;
      }
  }
  z_4 = t;
  t = (ATerm) ATempty;
  t = if_verbose3_1_0(o_0, t);
  a_5 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_5), z_4), y_4), (ATerm) ATinsert(ATempty, term_u_6));
  t = concat_0_0(t);
  x_4 = t;
  t = b_5;
  t = xtc_sglr_strict_0_2(c_5, x_4, t);
  t = xtc_transform_2_0(p_0, a_1, t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm i_5 = NULL;
  i_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_2, i_5);
  t = set_config_0_0(t);
  t = i_5;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_v_6;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--start", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm j_5 = NULL;
  j_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_6, j_5);
  t = set_config_0_0(t);
  t = j_5;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = term_w_6;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--no-heuristic-filters", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm k_5 = NULL;
  k_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_6, (ATerm) ATinsert(ATinsert(ATempty, term_y_6), term_x_6));
  t = extend_config_0_0(t);
  t = k_5;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = term_z_6;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = term_a_7;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--sglr", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm l_5 = NULL;
  l_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_6, (ATerm) ATinsert(ATempty, l_5));
  t = extend_config_0_0(t);
  t = l_5;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_b_7;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--impl", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm m_5 = NULL;
  m_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_6, (ATerm) ATinsert(ATempty, m_5));
  t = extend_config_0_0(t);
  t = m_5;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_c_7;
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = term_a_7;
  return(t);
}
ATerm sglri_options_0_0 (ATerm t)
{
  ATerm d_7 = t;
  int e_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(d_1, e_1, h_1, t);
      LocalPopChoice(e_7);
    }
  else
    {
      t = d_7;
      {
        ATerm f_7 = t;
        int g_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(m_1, q_1, r_1, t);
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
                  t = Option_3_0(v_1, w_1, x_1, t);
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
                        t = Option_3_0(_fail, _fail, y_1, t);
                        LocalPopChoice(k_7);
                      }
                    else
                      {
                        t = j_7;
                        {
                          ATerm l_7 = t;
                          int m_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ArgOption_3_0(z_1, e_2, f_2, t);
                              LocalPopChoice(m_7);
                            }
                          else
                            {
                              t = l_7;
                              {
                                ATerm n_7 = t;
                                int o_7 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(g_2, h_2, j_2, t);
                                    LocalPopChoice(o_7);
                                  }
                                else
                                  {
                                    t = n_7;
                                    t = Option_3_0(_fail, _fail, k_2, t);
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
static ATerm l_2 (ATerm t)
{
  ATerm p_7 = t;
  int q_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = parse_and_implode_0_0(t);
      LocalPopChoice(q_7);
    }
  else
    {
      t = p_7;
      t = term_r_7;
      t = xtc_exit_0_0(t);
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = xtc_io_wrap_2_0(sglri_options_0_0, l_2, t);
  return(t);
}
