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
  sym_area_in_file_2 = ATmakeSymbol("area-in-file", 2, ATfalse);
  ATprotectSymbol(sym_area_in_file_2);
  sym_area_6 = ATmakeSymbol("area", 6, ATfalse);
  ATprotectSymbol(sym_area_6);
}
static ATerm term_h_7;
static ATerm term_s_6;
static ATerm term_r_6;
static ATerm term_q_6;
static ATerm term_p_6;
static ATerm term_o_6;
static ATerm term_n_6;
static ATerm term_k_6;
static ATerm term_j_6;
static ATerm term_i_6;
static ATerm term_h_6;
static ATerm term_e_6;
static ATerm term_d_6;
static ATerm term_a_6;
static ATerm term_x_5;
static ATerm term_q_5;
static ATerm term_p_5;
static ATerm term_o_5;
static ATerm term_n_5;
static ATerm term_m_5;
static ATerm term_j_5;
static ATerm term_g_5;
static ATerm term_f_5;
static ATerm term_e_5;
static ATerm term_r_3;
static ATerm term_q_3;
static ATerm term_p_3;
static ATerm term_c_3;
static ATerm term_b_3;
static ATerm term_x_2;
static ATerm term_w_2;
static ATerm term_o_2;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_o_2));
  term_o_2 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_2));
  term_w_2 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_2));
  term_x_2 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_b_3));
  term_b_3 = (ATerm) ATmakeAppl(ATmakeSymbol(" at line ", 0, ATtrue));
  ATprotect(&(term_c_3));
  term_c_3 = (ATerm) ATmakeAppl(ATmakeSymbol(", column ", 0, ATtrue));
  ATprotect(&(term_p_3));
  term_p_3 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_q_3));
  term_q_3 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_r_3));
  term_r_3 = (ATerm) ATmakeAppl(ATmakeSymbol("Parse error cannot be presented. Please report bug.", 0, ATtrue));
  ATprotect(&(term_e_5));
  term_e_5 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_f_5));
  term_f_5 = (ATerm) ATmakeAppl(ATmakeSymbol("/dev/null", 0, ATtrue));
  ATprotect(&(term_g_5));
  term_g_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_j_5));
  term_j_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_m_5));
  term_m_5 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_n_5));
  term_n_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_o_5));
  term_o_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--impl", 0, ATtrue));
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: no parse table specified", 0, ATtrue));
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--start", 0, ATtrue));
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--sglr", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-p <file.tbl>           Use parse table <file.tbl> (required)", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--start <symbol>        Start parsing with <symbol>", 0, ATtrue));
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-fi", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-fe", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-heuristic-filters  Don't use heuristic disambiguation filters (encouraged)", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--sglr <opt>            Pass <opt> to sglr", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--impl <opt>            Pass <opt> to implode-asfix", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeInt(1);
}
#include <srts/init-stratego-application.h>
ATerm xtc_exit_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm xtc_transform_2_0 (ATerm l_6 (ATerm), ATerm m_6 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm c_101 (ATerm), ATerm t);
ATerm read_from_0_0 (ATerm t);
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
static ATerm d_0 (ATerm t);
ATerm report_area_0_3 (ATerm y_2, ATerm z_2, ATerm a_3, ATerm t);
ATerm finally_2_0 (ATerm z_93 (ATerm), ATerm a_94 (ATerm), ATerm t);
static ATerm g_0 (ATerm t);
ATerm report_parse_error_summary_0_1 (ATerm u_2, ATerm t);
ATerm call_0_3 (ATerm w_67, ATerm x_67, ATerm y_67, ATerm t);
ATerm open_0_0 (ATerm t);
ATerm xtc_find_warning_0_0 (ATerm t);
ATerm xtc_command_silent_0_1 (ATerm s_2, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_always_2_2 (ATerm b_0 (ATerm), ATerm h_0 (ATerm), ATerm m_0, ATerm o_0, ATerm t);
ATerm xtc_sglr_strict_0_2 (ATerm c_0, ATerm e_0, ATerm t);
ATerm if_verbose3_1_0 (ATerm w_118 (ATerm), ATerm t);
ATerm fatal_error_0_0 (ATerm t);
static ATerm q_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm z_0 (ATerm t);
ATerm parse_and_implode_0_0 (ATerm t);
ATerm Option_3_0 (ATerm j_4 (ATerm), ATerm k_4 (ATerm), ATerm l_4 (ATerm), ATerm t);
ATerm extend_config_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm g_4 (ATerm), ATerm h_4 (ATerm), ATerm i_4 (ATerm), ATerm t);
ATerm set_config_0_0 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
ATerm sglri_options_0_0 (ATerm t);
ATerm xtc_io_wrap_2_0 (ATerm s_5 (ATerm), ATerm t_5 (ATerm), ATerm t);
static ATerm n_2 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm d_0 (ATerm t)
{
  ATerm n_1 = NULL,p_1 = NULL;
  t = Snd_0_0(t);
  n_1 = t;
  t = term_o_2;
  t = stderr_stream_0_0(t);
  p_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_1, (ATerm) ATinsert(ATempty, n_1));
  t = fprintnl_0_0(t);
  return(t);
}
ATerm report_area_0_3 (ATerm y_2, ATerm z_2, ATerm a_3, ATerm t)
{
  ATerm j_0 = NULL,k_0 = NULL,l_0 = NULL,n_0 = NULL,p_0 = NULL,r_0 = NULL,t_0 = NULL,u_0 = NULL,v_0 = NULL,w_0 = NULL,a_1 = NULL,b_1 = NULL,d_1 = NULL,e_1 = NULL,f_1 = NULL,g_1 = NULL,i_1 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      i_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_1;
  t = read_text_file_0_0(t);
  t = get_lines_0_0(t);
  t = add_indices_0_0(t);
  g_1 = t;
  t = a_3;
  if(match_cons(t, sym_area_6))
    {
      l_0 = ATgetArgument(t, 0);
      n_0 = ATgetArgument(t, 1);
      {
        ATerm p_2 = ATgetArgument(t, 2);
      }
      j_0 = ATgetArgument(t, 3);
      {
        ATerm q_2 = ATgetArgument(t, 4);
      }
      {
        ATerm r_2 = ATgetArgument(t, 5);
      }
    }
  else
    _fail(t);
  t = l_0;
  t = dec_0_0(t);
  {
    ATerm t_2 = t;
    int v_2 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_1 = NULL;
        k_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_1, term_w_2);
        t = lt_0_0(t);
        t = k_1;
        LocalPopChoice(v_2);
        t = term_w_2;
      }
    else
      {
        t = t_2;
      }
  }
  p_0 = t;
  t = term_o_2;
  t = stderr_stream_0_0(t);
  d_1 = t;
  t = l_0;
  t = int_to_string_0_0(t);
  e_1 = t;
  t = n_0;
  t = int_to_string_0_0(t);
  f_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_1, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, f_1), term_c_3), e_1), term_b_3), z_2), term_x_2), y_2));
  t = fprintnl_0_0(t);
  t = g_1;
  {
    static ATerm a_0 (ATerm t);
    static ATerm a_0 (ATerm t)
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm d_3 = ATgetFirst((ATermList) t);
          if(match_cons(d_3, sym__2))
            {
              if((p_0 != ATgetArgument(d_3, 0)))
                {
                  _fail(ATgetArgument(d_3, 0));
                }
              {
                ATerm f_3 = ATgetArgument(d_3, 1);
              }
            }
          else
            _fail(t);
          {
            ATerm e_3 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      if(((r_0 != NULL) && (r_0 != t)))
        _fail(t);
      else
        r_0 = t;
      return(t);
    }
    t = at_suffix_1_0(a_0, t);
  }
  t = not_null(r_0);
  {
    ATerm g_3 = t;
    int h_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = not_null(r_0);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_0 = ATgetFirst((ATermList) t);
            {
              ATerm i_3 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(i_3) == AT_LIST) && !(ATisEmpty(i_3))))
                {
                  u_0 = ATgetFirst((ATermList) i_3);
                  {
                    ATerm j_3 = (ATerm) ATgetNext((ATermList) i_3);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = not_null(r_0);
        LocalPopChoice(h_3);
        t = (ATerm) ATinsert(ATinsert(ATempty, u_0), t_0);
      }
    else
      {
        t = g_3;
      }
  }
  t = map_1_0(d_0, t);
  t = a_3;
  if(match_cons(t, sym_area_6))
    {
      if((l_0 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      if((n_0 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
      {
        ATerm k_3 = ATgetArgument(t, 2);
      }
      if((j_0 != ATgetArgument(t, 3)))
        {
          _fail(ATgetArgument(t, 3));
        }
      {
        ATerm l_3 = ATgetArgument(t, 4);
      }
      {
        ATerm m_3 = ATgetArgument(t, 5);
      }
    }
  else
    _fail(t);
  t = n_0;
  t = dec_0_0(t);
  k_0 = t;
  {
    ATerm n_3 = t;
    int o_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, k_0, term_w_2);
        t = lt_0_0(t);
        t = k_0;
        LocalPopChoice(o_3);
        t = term_w_2;
      }
    else
      {
        t = n_3;
      }
  }
  b_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_1, term_p_3);
  t = copy_char_0_0(t);
  a_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_1, term_q_3);
  t = conc_strings_0_0(t);
  v_0 = t;
  t = term_o_2;
  t = stderr_stream_0_0(t);
  w_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_0, (ATerm) ATinsert(ATempty, v_0));
  t = fprintnl_0_0(t);
  t = v_0;
  return(t);
}
static ATerm g_0 (ATerm t)
{
  t = term_r_3;
  return(t);
}
ATerm report_parse_error_summary_0_1 (ATerm u_2, ATerm t)
{
  ATerm t_1 = NULL,u_1 = NULL,v_1 = NULL;
  static ATerm f_0 (ATerm t);
  static ATerm f_0 (ATerm t)
  {
    ATerm s_3 = t;
    int t_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_2 = NULL;
        a_2 = t;
        t = read_from_0_0(t);
        if(match_cons(t, sym_summary_3))
          {
            ATerm u_3 = ATgetArgument(t, 0);
            if(((t_1 != NULL) && (t_1 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              t_1 = ATgetArgument(t, 1);
            {
              ATerm v_3 = ATgetArgument(t, 2);
              if(((ATgetType(v_3) == AT_LIST) && !(ATisEmpty(v_3))))
                {
                  ATerm w_3 = ATgetFirst((ATermList) v_3);
                  if(match_cons(w_3, sym_error_2))
                    {
                      ATerm a_4 = ATgetArgument(w_3, 0);
                      ATerm b_4 = ATgetArgument(w_3, 1);
                      if(((ATgetType(b_4) == AT_LIST) && !(ATisEmpty(b_4))))
                        {
                          ATerm c_4 = ATgetFirst((ATermList) b_4);
                          if(match_cons(c_4, sym_localized_2))
                            {
                              if(((u_1 != NULL) && (u_1 != ATgetArgument(c_4, 0))))
                                _fail(ATgetArgument(c_4, 0));
                              else
                                u_1 = ATgetArgument(c_4, 0);
                              {
                                ATerm x_4 = ATgetArgument(c_4, 1);
                                if(match_cons(x_4, sym_area_in_file_2))
                                  {
                                    ATerm d_5 = ATgetArgument(x_4, 0);
                                    if(((v_1 != NULL) && (v_1 != ATgetArgument(x_4, 1))))
                                      _fail(ATgetArgument(x_4, 1));
                                    else
                                      v_1 = ATgetArgument(x_4, 1);
                                  }
                                else
                                  _fail(t);
                              }
                            }
                          else
                            _fail(t);
                          {
                            ATerm m_4 = (ATerm) ATgetNext((ATermList) b_4);
                            if(((ATgetType(m_4) != AT_LIST) || !(ATisEmpty(m_4))))
                              _fail(t);
                          }
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                  {
                    ATerm x_3 = (ATerm) ATgetNext((ATermList) v_3);
                    if(((ATgetType(x_3) != AT_LIST) || !(ATisEmpty(x_3))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = u_2;
        t = report_area_0_3(t_1, u_1, v_1, t);
        t = a_2;
        LocalPopChoice(t_3);
      }
    else
      {
        t = s_3;
        t = read_from_0_0(t);
        t = debug_1_0(g_0, t);
      }
    return(t);
  }
  t = finally_2_0(f_0, _fail, t);
  return(t);
}
ATerm xtc_command_silent_0_1 (ATerm s_2, ATerm t)
{
  ATerm d_2 = NULL,f_2 = NULL,h_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL;
  m_2 = t;
  t = s_2;
  t = xtc_find_warning_0_0(t);
  d_2 = t;
  t = term_e_5;
  f_2 = t;
  t = term_e_5;
  h_2 = t;
  t = term_f_5;
  t = open_0_0(t);
  l_2 = t;
  t = (ATerm) ATmakeAppl(sym_Some_1, l_2);
  k_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_2, m_2);
  t = call_0_3(f_2, h_2, k_2, t);
  t = m_2;
  return(t);
}
ATerm xtc_transform_always_2_2 (ATerm b_0 (ATerm), ATerm h_0 (ATerm), ATerm m_0, ATerm o_0, ATerm t)
{
  ATerm y_3 = NULL,z_3 = NULL;
  y_3 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm s_0 = NULL;
      t = y_3;
      t = xtc_new_file_0_0(t);
      s_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_0, (ATerm) ATinsert(ATinsert(ATempty, s_0), term_g_5));
      t = conc_0_0(t);
      {
        ATerm h_5 = t;
        int i_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_0 = NULL;
            x_0 = t;
            t = xtc_command_silent_0_1(m_0, t);
            t = x_0;
            LocalPopChoice(i_5);
            t = (ATerm) ATmakeAppl(sym_FILE_1, s_0);
            t = b_0(t);
          }
        else
          {
            t = h_5;
            t = (ATerm) ATmakeAppl(sym_FILE_1, s_0);
            t = h_0(t);
          }
      }
    }
  else
    {
      ATerm o_1 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          z_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_3;
      t = xtc_new_file_0_0(t);
      o_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_0, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_1), term_g_5), z_3), term_j_5));
      t = conc_0_0(t);
      {
        ATerm k_5 = t;
        int l_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_1 = NULL;
            s_1 = t;
            t = xtc_command_silent_0_1(m_0, t);
            t = s_1;
            LocalPopChoice(l_5);
            t = (ATerm) ATmakeAppl(sym_FILE_1, o_1);
            t = b_0(t);
          }
        else
          {
            t = k_5;
            t = (ATerm) ATmakeAppl(sym_FILE_1, o_1);
            t = h_0(t);
          }
      }
    }
  return(t);
}
ATerm xtc_sglr_strict_0_2 (ATerm c_0, ATerm e_0, ATerm t)
{
  ATerm d_4 = NULL,e_4 = NULL,f_4 = NULL;
  static ATerm i_0 (ATerm t);
  static ATerm i_0 (ATerm t)
  {
    t = report_parse_error_summary_0_1(not_null(d_4), t);
    return(t);
  }
  if(((d_4 != NULL) && (d_4 != t)))
    _fail(t);
  else
    d_4 = t;
  t = term_m_5;
  e_4 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(e_0), c_0), term_n_5);
  f_4 = t;
  t = d_4;
  t = xtc_transform_always_2_2(_id, i_0, e_4, f_4, t);
  return(t);
}
static ATerm q_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_o_5);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  t = term_p_5;
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm u_4 = NULL,v_4 = NULL,w_4 = NULL;
  t = term_q_5;
  {
    ATerm r_5 = t;
    int u_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(u_5);
      }
    else
      {
        t = r_5;
        t = (ATerm) ATempty;
      }
  }
  u_4 = t;
  t = term_o_2;
  {
    ATerm v_5 = t;
    int w_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_x_5;
        t = get_config_0_0(t);
        t = term_o_2;
        LocalPopChoice(w_5);
        t = (ATerm) ATinsert(ATempty, term_x_5);
      }
    else
      {
        t = v_5;
        t = (ATerm) ATempty;
      }
  }
  v_4 = t;
  t = term_o_2;
  t = pass_verbose_0_0(t);
  w_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, w_4), v_4), u_4);
  t = concat_0_0(t);
  return(t);
}
ATerm parse_and_implode_0_0 (ATerm t)
{
  ATerm n_4 = NULL,o_4 = NULL,p_4 = NULL,q_4 = NULL,r_4 = NULL,s_4 = NULL;
  r_4 = t;
  {
    ATerm y_5 = t;
    int z_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_n_5;
        t = get_config_0_0(t);
        LocalPopChoice(z_5);
      }
    else
      {
        t = y_5;
        t = (ATerm) ATinsert(ATempty, term_a_6);
        t = fatal_error_0_0(t);
      }
  }
  s_4 = t;
  t = term_o_2;
  {
    ATerm b_6 = t;
    int c_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_4 = NULL;
        t = term_d_6;
        t = get_config_0_0(t);
        t_4 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, t_4), term_e_6);
        LocalPopChoice(c_6);
      }
    else
      {
        t = b_6;
        t = (ATerm) ATempty;
      }
  }
  o_4 = t;
  t = term_o_2;
  {
    ATerm f_6 = t;
    int g_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_6;
        t = get_config_0_0(t);
        LocalPopChoice(g_6);
      }
    else
      {
        t = f_6;
        t = (ATerm) ATempty;
      }
  }
  p_4 = t;
  t = (ATerm) ATempty;
  t = if_verbose3_1_0(q_0, t);
  q_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, q_4), p_4), o_4), (ATerm) ATinsert(ATempty, term_i_6));
  t = concat_0_0(t);
  n_4 = t;
  t = r_4;
  t = xtc_sglr_strict_0_2(s_4, n_4, t);
  t = xtc_transform_2_0(y_0, z_0, t);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm y_4 = NULL;
  y_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_5, y_4);
  t = set_config_0_0(t);
  t = y_4;
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_j_6;
  return(t);
}
static ATerm l_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--start", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm z_4 = NULL;
  z_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_6, z_4);
  t = set_config_0_0(t);
  t = z_4;
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = term_k_6;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--no-heuristic-filters", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm a_5 = NULL;
  a_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_6, (ATerm) ATinsert(ATinsert(ATempty, term_o_6), term_n_6));
  t = extend_config_0_0(t);
  t = a_5;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = term_p_6;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = term_q_6;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--sglr", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm b_5 = NULL;
  b_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_6, (ATerm) ATinsert(ATempty, b_5));
  t = extend_config_0_0(t);
  t = b_5;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = term_r_6;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--impl", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm c_5 = NULL;
  c_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_5, (ATerm) ATinsert(ATempty, c_5));
  t = extend_config_0_0(t);
  t = c_5;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = term_s_6;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_q_6;
  return(t);
}
ATerm sglri_options_0_0 (ATerm t)
{
  ATerm t_6 = t;
  int u_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(c_1, h_1, j_1, t);
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
            t = ArgOption_3_0(l_1, m_1, q_1, t);
            LocalPopChoice(w_6);
          }
        else
          {
            t = v_6;
            {
              ATerm x_6 = t;
              int y_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(r_1, w_1, x_1, t);
                  LocalPopChoice(y_6);
                }
              else
                {
                  t = x_6;
                  {
                    ATerm z_6 = t;
                    int a_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(_fail, _fail, y_1, t);
                        LocalPopChoice(a_7);
                      }
                    else
                      {
                        t = z_6;
                        {
                          ATerm b_7 = t;
                          int c_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ArgOption_3_0(z_1, b_2, c_2, t);
                              LocalPopChoice(c_7);
                            }
                          else
                            {
                              t = b_7;
                              {
                                ATerm d_7 = t;
                                int e_7 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(e_2, g_2, i_2, t);
                                    LocalPopChoice(e_7);
                                  }
                                else
                                  {
                                    t = d_7;
                                    t = Option_3_0(_fail, _fail, j_2, t);
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
static ATerm n_2 (ATerm t)
{
  ATerm f_7 = t;
  int g_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = parse_and_implode_0_0(t);
      LocalPopChoice(g_7);
    }
  else
    {
      t = f_7;
      t = term_h_7;
      t = xtc_exit_0_0(t);
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = xtc_io_wrap_2_0(sglri_options_0_0, n_2, t);
  return(t);
}
