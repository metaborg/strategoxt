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
static ATerm term_e_7;
static ATerm term_n_6;
static ATerm term_k_6;
static ATerm term_j_6;
static ATerm term_i_6;
static ATerm term_h_6;
static ATerm term_g_6;
static ATerm term_f_6;
static ATerm term_e_6;
static ATerm term_d_6;
static ATerm term_c_6;
static ATerm term_z_5;
static ATerm term_y_5;
static ATerm term_v_5;
static ATerm term_q_5;
static ATerm term_l_5;
static ATerm term_k_5;
static ATerm term_j_5;
static ATerm term_i_5;
static ATerm term_h_5;
static ATerm term_e_5;
static ATerm term_d_5;
static ATerm term_c_5;
static ATerm term_b_5;
static ATerm term_d_4;
static ATerm term_u_3;
static ATerm term_s_3;
static ATerm term_z_2;
static ATerm term_y_2;
static ATerm term_u_2;
static ATerm term_t_2;
static ATerm term_k_2;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_k_2));
  term_k_2 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_t_2));
  term_t_2 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_2));
  term_u_2 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_y_2));
  term_y_2 = (ATerm) ATmakeAppl(ATmakeSymbol(" at line ", 0, ATtrue));
  ATprotect(&(term_z_2));
  term_z_2 = (ATerm) ATmakeAppl(ATmakeSymbol(", column ", 0, ATtrue));
  ATprotect(&(term_s_3));
  term_s_3 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_u_3));
  term_u_3 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_d_4));
  term_d_4 = (ATerm) ATmakeAppl(ATmakeSymbol("Parse error cannot be presented. Please report bug.", 0, ATtrue));
  ATprotect(&(term_b_5));
  term_b_5 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_c_5));
  term_c_5 = (ATerm) ATmakeAppl(ATmakeSymbol("/dev/null", 0, ATtrue));
  ATprotect(&(term_d_5));
  term_d_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_e_5));
  term_e_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_h_5));
  term_h_5 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_i_5));
  term_i_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_j_5));
  term_j_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_5));
  term_k_5 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_l_5));
  term_l_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--impl", 0, ATtrue));
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: no parse table specified", 0, ATtrue));
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--start", 0, ATtrue));
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--sglr", 0, ATtrue));
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-p <file.tbl>           Use parse table <file.tbl> (required)", 0, ATtrue));
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--start <symbol>        Start parsing with <symbol>", 0, ATtrue));
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-fi", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-fe", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-heuristic-filters  Don't use heuristic disambiguation filters (encouraged)", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--sglr <opt>            Pass <opt> to sglr", 0, ATtrue));
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--impl <opt>            Pass <opt> to implode-asfix", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeInt(1);
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
static ATerm b_0 (ATerm t);
ATerm report_area_0_3 (ATerm v_2, ATerm w_2, ATerm x_2, ATerm t);
ATerm finally_2_0 (ATerm z_93 (ATerm), ATerm a_94 (ATerm), ATerm t);
static ATerm f_0 (ATerm t);
ATerm report_parse_error_summary_0_1 (ATerm r_2, ATerm t);
ATerm call_0_3 (ATerm w_67, ATerm x_67, ATerm y_67, ATerm t);
ATerm open_0_0 (ATerm t);
ATerm xtc_find_warning_0_0 (ATerm t);
ATerm xtc_command_silent_0_1 (ATerm p_2, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
static ATerm f_2 (ATerm t_6 (ATerm), ATerm u_6 (ATerm), ATerm k_0, ATerm n_0, ATerm n_2, ATerm t);
ATerm xtc_sglr_strict_0_2 (ATerm c_0, ATerm e_0, ATerm t);
ATerm if_verbose3_1_0 (ATerm w_118 (ATerm), ATerm t);
ATerm fatal_error_0_0 (ATerm t);
static ATerm o_0 (ATerm t);
static ATerm q_0 (ATerm t);
static ATerm v_0 (ATerm t);
ATerm parse_and_implode_0_0 (ATerm t);
ATerm Option_3_0 (ATerm j_4 (ATerm), ATerm k_4 (ATerm), ATerm l_4 (ATerm), ATerm t);
ATerm extend_config_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm g_4 (ATerm), ATerm h_4 (ATerm), ATerm i_4 (ATerm), ATerm t);
ATerm set_config_0_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm e_2 (ATerm t);
ATerm sglri_options_0_0 (ATerm t);
ATerm xtc_io_wrap_2_0 (ATerm s_5 (ATerm), ATerm t_5 (ATerm), ATerm t);
static ATerm g_2 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm l_1 = NULL,m_1 = NULL;
  t = Snd_0_0(t);
  l_1 = t;
  t = term_k_2;
  t = stderr_stream_0_0(t);
  m_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_1, (ATerm) ATinsert(ATempty, l_1));
  t = fprintnl_0_0(t);
  return(t);
}
ATerm report_area_0_3 (ATerm v_2, ATerm w_2, ATerm x_2, ATerm t)
{
  ATerm g_0 = NULL,h_0 = NULL,j_0 = NULL,l_0 = NULL,m_0 = NULL,p_0 = NULL,r_0 = NULL,s_0 = NULL,t_0 = NULL,u_0 = NULL,y_0 = NULL,z_0 = NULL,b_1 = NULL,c_1 = NULL,d_1 = NULL,e_1 = NULL,g_1 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      g_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_1;
  t = read_text_file_0_0(t);
  t = get_lines_0_0(t);
  t = add_indices_0_0(t);
  e_1 = t;
  t = x_2;
  if(match_cons(t, sym_area_6))
    {
      j_0 = ATgetArgument(t, 0);
      l_0 = ATgetArgument(t, 1);
      {
        ATerm l_2 = ATgetArgument(t, 2);
      }
      g_0 = ATgetArgument(t, 3);
      {
        ATerm m_2 = ATgetArgument(t, 4);
      }
      {
        ATerm o_2 = ATgetArgument(t, 5);
      }
    }
  else
    _fail(t);
  t = j_0;
  t = dec_0_0(t);
  {
    ATerm q_2 = t;
    int s_2 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_1 = NULL;
        h_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_1, term_t_2);
        t = lt_0_0(t);
        t = h_1;
        LocalPopChoice(s_2);
        t = term_t_2;
      }
    else
      {
        t = q_2;
      }
  }
  m_0 = t;
  t = term_k_2;
  t = stderr_stream_0_0(t);
  b_1 = t;
  t = j_0;
  t = int_to_string_0_0(t);
  c_1 = t;
  t = l_0;
  t = int_to_string_0_0(t);
  d_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_1, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, d_1), term_z_2), c_1), term_y_2), w_2), term_u_2), v_2));
  t = fprintnl_0_0(t);
  t = e_1;
  {
    static ATerm a_0 (ATerm t);
    static ATerm a_0 (ATerm t)
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm a_3 = ATgetFirst((ATermList) t);
          if(match_cons(a_3, sym__2))
            {
              if((m_0 != ATgetArgument(a_3, 0)))
                {
                  _fail(ATgetArgument(a_3, 0));
                }
              {
                ATerm c_3 = ATgetArgument(a_3, 1);
              }
            }
          else
            _fail(t);
          {
            ATerm b_3 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      if(((p_0 != NULL) && (p_0 != t)))
        _fail(t);
      else
        p_0 = t;
      return(t);
    }
    t = at_suffix_1_0(a_0, t);
  }
  t = not_null(p_0);
  {
    ATerm d_3 = t;
    int e_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = not_null(p_0);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_0 = ATgetFirst((ATermList) t);
            {
              ATerm f_3 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(f_3) == AT_LIST) && !(ATisEmpty(f_3))))
                {
                  s_0 = ATgetFirst((ATermList) f_3);
                  {
                    ATerm h_3 = (ATerm) ATgetNext((ATermList) f_3);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = not_null(p_0);
        LocalPopChoice(e_3);
        t = (ATerm) ATinsert(ATinsert(ATempty, s_0), r_0);
      }
    else
      {
        t = d_3;
      }
  }
  t = map_1_0(b_0, t);
  t = x_2;
  if(match_cons(t, sym_area_6))
    {
      if((j_0 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      if((l_0 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
      {
        ATerm k_3 = ATgetArgument(t, 2);
      }
      if((g_0 != ATgetArgument(t, 3)))
        {
          _fail(ATgetArgument(t, 3));
        }
      {
        ATerm n_3 = ATgetArgument(t, 4);
      }
      {
        ATerm o_3 = ATgetArgument(t, 5);
      }
    }
  else
    _fail(t);
  t = l_0;
  t = dec_0_0(t);
  h_0 = t;
  {
    ATerm p_3 = t;
    int q_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, h_0, term_t_2);
        t = lt_0_0(t);
        t = h_0;
        LocalPopChoice(q_3);
        t = term_t_2;
      }
    else
      {
        t = p_3;
      }
  }
  z_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_0, term_s_3);
  t = copy_char_0_0(t);
  y_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_0, term_u_3);
  t = conc_strings_0_0(t);
  t_0 = t;
  t = term_k_2;
  t = stderr_stream_0_0(t);
  u_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_0, (ATerm) ATinsert(ATempty, t_0));
  t = fprintnl_0_0(t);
  t = t_0;
  return(t);
}
static ATerm f_0 (ATerm t)
{
  t = term_d_4;
  return(t);
}
ATerm report_parse_error_summary_0_1 (ATerm r_2, ATerm t)
{
  ATerm q_1 = NULL,r_1 = NULL,s_1 = NULL;
  static ATerm d_0 (ATerm t);
  static ATerm d_0 (ATerm t)
  {
    ATerm p_4 = t;
    int q_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_1 = NULL;
        v_1 = t;
        t = read_from_0_0(t);
        if(match_cons(t, sym_summary_3))
          {
            ATerm r_4 = ATgetArgument(t, 0);
            if(((q_1 != NULL) && (q_1 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              q_1 = ATgetArgument(t, 1);
            {
              ATerm s_4 = ATgetArgument(t, 2);
              if(((ATgetType(s_4) == AT_LIST) && !(ATisEmpty(s_4))))
                {
                  ATerm t_4 = ATgetFirst((ATermList) s_4);
                  if(match_cons(t_4, sym_error_2))
                    {
                      ATerm v_4 = ATgetArgument(t_4, 0);
                      ATerm w_4 = ATgetArgument(t_4, 1);
                      if(((ATgetType(w_4) == AT_LIST) && !(ATisEmpty(w_4))))
                        {
                          ATerm x_4 = ATgetFirst((ATermList) w_4);
                          if(match_cons(x_4, sym_localized_2))
                            {
                              if(((r_1 != NULL) && (r_1 != ATgetArgument(x_4, 0))))
                                _fail(ATgetArgument(x_4, 0));
                              else
                                r_1 = ATgetArgument(x_4, 0);
                              {
                                ATerm z_4 = ATgetArgument(x_4, 1);
                                if(match_cons(z_4, sym_area_in_file_2))
                                  {
                                    ATerm a_5 = ATgetArgument(z_4, 0);
                                    if(((s_1 != NULL) && (s_1 != ATgetArgument(z_4, 1))))
                                      _fail(ATgetArgument(z_4, 1));
                                    else
                                      s_1 = ATgetArgument(z_4, 1);
                                  }
                                else
                                  _fail(t);
                              }
                            }
                          else
                            _fail(t);
                          {
                            ATerm y_4 = (ATerm) ATgetNext((ATermList) w_4);
                            if(((ATgetType(y_4) != AT_LIST) || !(ATisEmpty(y_4))))
                              _fail(t);
                          }
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                  {
                    ATerm u_4 = (ATerm) ATgetNext((ATermList) s_4);
                    if(((ATgetType(u_4) != AT_LIST) || !(ATisEmpty(u_4))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = r_2;
        t = report_area_0_3(q_1, r_1, s_1, t);
        t = v_1;
        LocalPopChoice(q_4);
      }
    else
      {
        t = p_4;
        t = read_from_0_0(t);
        t = debug_1_0(f_0, t);
      }
    return(t);
  }
  t = finally_2_0(d_0, _fail, t);
  return(t);
}
ATerm xtc_command_silent_0_1 (ATerm p_2, ATerm t)
{
  ATerm y_1 = NULL,z_1 = NULL,b_2 = NULL,d_2 = NULL,h_2 = NULL,i_2 = NULL;
  i_2 = t;
  t = p_2;
  t = xtc_find_warning_0_0(t);
  y_1 = t;
  t = term_b_5;
  z_1 = t;
  t = term_b_5;
  b_2 = t;
  t = term_c_5;
  t = open_0_0(t);
  h_2 = t;
  t = (ATerm) ATmakeAppl(sym_Some_1, h_2);
  d_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_1, i_2);
  t = call_0_3(z_1, b_2, d_2, t);
  t = i_2;
  return(t);
}
static ATerm f_2 (ATerm t_6 (ATerm), ATerm u_6 (ATerm), ATerm k_0, ATerm n_0, ATerm n_2, ATerm t)
{
  ATerm j_2 = NULL;
  t = n_2;
  t = xtc_new_file_0_0(t);
  j_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_0, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, j_2), term_e_5), n_2), term_d_5));
  t = conc_0_0(t);
  {
    ATerm f_5 = t;
    int g_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_3 = NULL;
        g_3 = t;
        t = xtc_command_silent_0_1(k_0, t);
        t = g_3;
        LocalPopChoice(g_5);
        t = (ATerm) ATmakeAppl(sym_FILE_1, j_2);
        t = t_6(t);
      }
    else
      {
        t = f_5;
        t = (ATerm) ATmakeAppl(sym_FILE_1, j_2);
        t = u_6(t);
      }
  }
  return(t);
}
ATerm xtc_sglr_strict_0_2 (ATerm c_0, ATerm e_0, ATerm t)
{
  ATerm i_3 = NULL,j_3 = NULL,l_3 = NULL,m_3 = NULL;
  static ATerm i_0 (ATerm t);
  static ATerm i_0 (ATerm t)
  {
    t = report_parse_error_summary_0_1(not_null(i_3), t);
    return(t);
  }
  if(((i_3 != NULL) && (i_3 != t)))
    _fail(t);
  else
    i_3 = t;
  t = term_h_5;
  j_3 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(e_0), c_0), term_i_5);
  l_3 = t;
  t = i_3;
  if(match_cons(t, sym_FILE_1))
    {
      m_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_2(_id, i_0, j_3, l_3, m_3, t);
  return(t);
}
static ATerm o_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_j_5);
  return(t);
}
static ATerm q_0 (ATerm t)
{
  t = term_k_5;
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm a_4 = NULL,b_4 = NULL,c_4 = NULL;
  t = term_l_5;
  {
    ATerm m_5 = t;
    int n_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(n_5);
      }
    else
      {
        t = m_5;
        t = (ATerm) ATempty;
      }
  }
  a_4 = t;
  t = term_k_2;
  {
    ATerm o_5 = t;
    int p_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_5;
        t = get_config_0_0(t);
        t = term_k_2;
        LocalPopChoice(p_5);
        t = (ATerm) ATinsert(ATempty, term_q_5);
      }
    else
      {
        t = o_5;
        t = (ATerm) ATempty;
      }
  }
  b_4 = t;
  t = term_k_2;
  t = pass_verbose_0_0(t);
  c_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, c_4), b_4), a_4);
  t = concat_0_0(t);
  return(t);
}
ATerm parse_and_implode_0_0 (ATerm t)
{
  ATerm r_3 = NULL,t_3 = NULL,v_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL;
  x_3 = t;
  {
    ATerm r_5 = t;
    int u_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_5;
        t = get_config_0_0(t);
        LocalPopChoice(u_5);
      }
    else
      {
        t = r_5;
        t = (ATerm) ATinsert(ATempty, term_v_5);
        t = fatal_error_0_0(t);
      }
  }
  y_3 = t;
  t = term_k_2;
  {
    ATerm w_5 = t;
    int x_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_3 = NULL;
        t = term_y_5;
        t = get_config_0_0(t);
        z_3 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, z_3), term_z_5);
        LocalPopChoice(x_5);
      }
    else
      {
        t = w_5;
        t = (ATerm) ATempty;
      }
  }
  t_3 = t;
  t = term_k_2;
  {
    ATerm a_6 = t;
    int b_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_c_6;
        t = get_config_0_0(t);
        LocalPopChoice(b_6);
      }
    else
      {
        t = a_6;
        t = (ATerm) ATempty;
      }
  }
  v_3 = t;
  t = (ATerm) ATempty;
  t = if_verbose3_1_0(o_0, t);
  w_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_3), v_3), t_3), (ATerm) ATinsert(ATempty, term_d_6));
  t = concat_0_0(t);
  r_3 = t;
  t = x_3;
  t = xtc_sglr_strict_0_2(y_3, r_3, t);
  t = xtc_transform_2_0(q_0, v_0, t);
  return(t);
}
static ATerm w_0 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm e_4 = NULL;
  e_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_5, e_4);
  t = set_config_0_0(t);
  t = e_4;
  return(t);
}
static ATerm a_1 (ATerm t)
{
  t = term_e_6;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--start", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm f_4 = NULL;
  f_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_5, f_4);
  t = set_config_0_0(t);
  t = f_4;
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_f_6;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--no-heuristic-filters", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm m_4 = NULL;
  m_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_6, (ATerm) ATinsert(ATinsert(ATempty, term_h_6), term_g_6));
  t = extend_config_0_0(t);
  t = m_4;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_i_6;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_j_6;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--sglr", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm n_4 = NULL;
  n_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_6, (ATerm) ATinsert(ATempty, n_4));
  t = extend_config_0_0(t);
  t = n_4;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = term_k_6;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--impl", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm o_4 = NULL;
  o_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_5, (ATerm) ATinsert(ATempty, o_4));
  t = extend_config_0_0(t);
  t = o_4;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = term_n_6;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_j_6;
  return(t);
}
ATerm sglri_options_0_0 (ATerm t)
{
  ATerm o_6 = t;
  int p_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(w_0, x_0, a_1, t);
      LocalPopChoice(p_6);
    }
  else
    {
      t = o_6;
      {
        ATerm q_6 = t;
        int r_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(f_1, i_1, j_1, t);
            LocalPopChoice(r_6);
          }
        else
          {
            t = q_6;
            {
              ATerm s_6 = t;
              int v_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(k_1, n_1, o_1, t);
                  LocalPopChoice(v_6);
                }
              else
                {
                  t = s_6;
                  {
                    ATerm w_6 = t;
                    int x_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(_fail, _fail, p_1, t);
                        LocalPopChoice(x_6);
                      }
                    else
                      {
                        t = w_6;
                        {
                          ATerm y_6 = t;
                          int z_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ArgOption_3_0(t_1, u_1, w_1, t);
                              LocalPopChoice(z_6);
                            }
                          else
                            {
                              t = y_6;
                              {
                                ATerm a_7 = t;
                                int b_7 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(x_1, a_2, c_2, t);
                                    LocalPopChoice(b_7);
                                  }
                                else
                                  {
                                    t = a_7;
                                    t = Option_3_0(_fail, _fail, e_2, t);
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
static ATerm g_2 (ATerm t)
{
  ATerm c_7 = t;
  int d_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = parse_and_implode_0_0(t);
      LocalPopChoice(d_7);
    }
  else
    {
      t = c_7;
      t = term_e_7;
      t = xtc_exit_0_0(t);
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = xtc_io_wrap_2_0(sglri_options_0_0, g_2, t);
  return(t);
}
