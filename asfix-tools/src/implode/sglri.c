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
static ATerm term_c_5;
static ATerm term_b_5;
static ATerm term_a_5;
static ATerm term_z_4;
static ATerm term_y_4;
static ATerm term_x_4;
static ATerm term_w_4;
static ATerm term_v_4;
static ATerm term_s_4;
static ATerm term_r_4;
static ATerm term_q_4;
static ATerm term_n_4;
static ATerm term_m_4;
static ATerm term_d_4;
static ATerm term_c_4;
static ATerm term_z_3;
static ATerm term_y_3;
static ATerm term_v_3;
static ATerm term_u_3;
static ATerm term_t_3;
static ATerm term_s_3;
static ATerm term_a_3;
static ATerm term_z_2;
static ATerm term_y_2;
static ATerm term_x_2;
static ATerm term_f_2;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_f_2));
  term_f_2 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_2));
  term_x_2 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_2));
  term_y_2 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_z_2));
  term_z_2 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_a_3));
  term_a_3 = (ATerm) ATmakeAppl(ATmakeSymbol("Parse error cannot be presented. Please report bug.", 0, ATtrue));
  ATprotect(&(term_s_3));
  term_s_3 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_t_3));
  term_t_3 = (ATerm) ATmakeAppl(ATmakeSymbol("/dev/null", 0, ATtrue));
  ATprotect(&(term_u_3));
  term_u_3 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_v_3));
  term_v_3 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_3));
  term_y_3 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_z_3));
  term_z_3 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_c_4));
  term_c_4 = (ATerm) ATmakeAppl(ATmakeSymbol("--start", 0, ATtrue));
  ATprotect(&(term_d_4));
  term_d_4 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_m_4));
  term_m_4 = (ATerm) ATmakeAppl(ATmakeSymbol("--sglr", 0, ATtrue));
  ATprotect(&(term_n_4));
  term_n_4 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_q_4));
  term_q_4 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: no parse table specified", 0, ATtrue));
  ATprotect(&(term_r_4));
  term_r_4 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_s_4));
  term_s_4 = (ATerm) ATmakeAppl(ATmakeSymbol("--impl", 0, ATtrue));
  ATprotect(&(term_v_4));
  term_v_4 = (ATerm) ATmakeAppl(ATmakeSymbol("-p <file.tbl>           Use parse table <file.tbl> (required)", 0, ATtrue));
  ATprotect(&(term_w_4));
  term_w_4 = (ATerm) ATmakeAppl(ATmakeSymbol("--start <symbol>        Start parsing with <symbol>", 0, ATtrue));
  ATprotect(&(term_x_4));
  term_x_4 = (ATerm) ATmakeAppl(ATmakeSymbol("-fi", 0, ATtrue));
  ATprotect(&(term_y_4));
  term_y_4 = (ATerm) ATmakeAppl(ATmakeSymbol("-fe", 0, ATtrue));
  ATprotect(&(term_z_4));
  term_z_4 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-heuristic-filters  Don't use hearistic disambiguation filters (encouraged)", 0, ATtrue));
  ATprotect(&(term_a_5));
  term_a_5 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_b_5));
  term_b_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--sglr <opt>            Pass <opt> to sglr", 0, ATtrue));
  ATprotect(&(term_c_5));
  term_c_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--impl <opt>            Pass <opt> to implode-asfix", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm get_config_0_0 (ATerm t);
ATerm xtc_transform_2_0 (ATerm l_6 (ATerm), ATerm m_6 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm c_101 (ATerm), ATerm t);
ATerm read_from_0_0 (ATerm t);
ATerm conc_strings_0_0 (ATerm t);
ATerm copy_char_0_0 (ATerm t);
ATerm lt_0_0 (ATerm t);
ATerm dec_0_0 (ATerm t);
ATerm Snd_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm w_101 (ATerm), ATerm t);
ATerm add_indices_0_0 (ATerm t);
ATerm get_lines_0_0 (ATerm t);
ATerm read_text_file_0_0 (ATerm t);
ATerm report_area_0_1 (ATerm w_2, ATerm t);
ATerm fprintnl_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
ATerm finally_2_0 (ATerm z_93 (ATerm), ATerm a_94 (ATerm), ATerm t);
static ATerm e_0 (ATerm t);
ATerm report_parse_error_summary_0_1 (ATerm t_2, ATerm t);
ATerm call_0_3 (ATerm w_67, ATerm x_67, ATerm y_67, ATerm t);
ATerm open_0_0 (ATerm t);
ATerm xtc_find_warning_0_0 (ATerm t);
ATerm xtc_command_silent_0_1 (ATerm r_2, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
static ATerm r_1 (ATerm s_6 (ATerm), ATerm t_6 (ATerm), ATerm n_2, ATerm o_2, ATerm p_2, ATerm t);
ATerm xtc_sglr_strict_0_2 (ATerm i_0, ATerm k_0, ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm pass_sglri_args_0_0 (ATerm t);
ATerm fatal_error_0_0 (ATerm t);
ATerm get_parse_table_0_0 (ATerm t);
static ATerm n_0 (ATerm t);
static ATerm o_0 (ATerm t);
ATerm parse_and_implode_0_0 (ATerm t);
ATerm Option_3_0 (ATerm j_4 (ATerm), ATerm k_4 (ATerm), ATerm l_4 (ATerm), ATerm t);
ATerm extend_config_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm g_4 (ATerm), ATerm h_4 (ATerm), ATerm i_4 (ATerm), ATerm t);
ATerm set_config_0_0 (ATerm t);
static ATerm q_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm t_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
ATerm sglri_options_0_0 (ATerm t);
ATerm xtc_io_wrap_2_0 (ATerm s_5 (ATerm), ATerm t_5 (ATerm), ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm report_area_0_1 (ATerm w_2, ATerm t)
{
  ATerm d_0 = NULL,f_0 = NULL,h_0 = NULL,j_0 = NULL,l_0 = NULL,m_0 = NULL,p_0 = NULL,s_0 = NULL,u_0 = NULL,v_0 = NULL,w_0 = NULL,x_0 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      x_0 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_0;
  t = read_text_file_0_0(t);
  t = get_lines_0_0(t);
  t = add_indices_0_0(t);
  w_0 = t;
  t = w_2;
  if(match_cons(t, sym_area_6))
    {
      d_0 = ATgetArgument(t, 0);
      h_0 = ATgetArgument(t, 1);
      if((d_0 != ATgetArgument(t, 2)))
        {
          _fail(ATgetArgument(t, 2));
        }
      f_0 = ATgetArgument(t, 3);
      {
        ATerm v_1 = ATgetArgument(t, 4);
      }
      {
        ATerm z_1 = ATgetArgument(t, 5);
      }
    }
  else
    _fail(t);
  t = w_0;
  {
    static ATerm a_0 (ATerm t);
    static ATerm a_0 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          if((d_0 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          {
            ATerm b_2 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_elem_1_0(a_0, t);
  }
  t = Snd_0_0(t);
  u_0 = t;
  t = term_f_2;
  t = stderr_stream_0_0(t);
  v_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_0, (ATerm) ATinsert(ATempty, u_0));
  t = fprintnl_0_0(t);
  t = w_2;
  if(match_cons(t, sym_area_6))
    {
      if((d_0 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      if((h_0 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
      if((d_0 != ATgetArgument(t, 2)))
        {
          _fail(ATgetArgument(t, 2));
        }
      if((f_0 != ATgetArgument(t, 3)))
        {
          _fail(ATgetArgument(t, 3));
        }
      {
        ATerm q_2 = ATgetArgument(t, 4);
      }
      {
        ATerm s_2 = ATgetArgument(t, 5);
      }
    }
  else
    _fail(t);
  t = h_0;
  t = dec_0_0(t);
  j_0 = t;
  {
    ATerm u_2 = t;
    int v_2 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, j_0, term_x_2);
        t = lt_0_0(t);
        t = j_0;
        LocalPopChoice(v_2);
        t = term_x_2;
      }
    else
      {
        t = u_2;
      }
  }
  s_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_0, term_y_2);
  t = copy_char_0_0(t);
  p_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_0, term_z_2);
  t = conc_strings_0_0(t);
  l_0 = t;
  t = term_f_2;
  t = stderr_stream_0_0(t);
  m_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_0, (ATerm) ATinsert(ATempty, l_0));
  t = fprintnl_0_0(t);
  t = l_0;
  return(t);
}
static ATerm e_0 (ATerm t)
{
  t = term_a_3;
  return(t);
}
ATerm report_parse_error_summary_0_1 (ATerm t_2, ATerm t)
{
  ATerm b_1 = NULL,c_1 = NULL;
  static ATerm b_0 (ATerm t);
  static ATerm b_0 (ATerm t)
  {
    ATerm f_3 = t;
    int g_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_1 = NULL,c_0 = NULL;
        h_1 = t;
        t = read_from_0_0(t);
        if(match_cons(t, sym_summary_3))
          {
            ATerm h_3 = ATgetArgument(t, 0);
            ATerm i_3 = ATgetArgument(t, 1);
            ATerm j_3 = ATgetArgument(t, 2);
            if(((ATgetType(j_3) == AT_LIST) && !(ATisEmpty(j_3))))
              {
                ATerm k_3 = ATgetFirst((ATermList) j_3);
                if(match_cons(k_3, sym_error_2))
                  {
                    ATerm m_3 = ATgetArgument(k_3, 0);
                    ATerm n_3 = ATgetArgument(k_3, 1);
                    if(((ATgetType(n_3) == AT_LIST) && !(ATisEmpty(n_3))))
                      {
                        ATerm o_3 = ATgetFirst((ATermList) n_3);
                        if(match_cons(o_3, sym_localized_2))
                          {
                            if(((b_1 != NULL) && (b_1 != ATgetArgument(o_3, 0))))
                              _fail(ATgetArgument(o_3, 0));
                            else
                              b_1 = ATgetArgument(o_3, 0);
                            {
                              ATerm q_3 = ATgetArgument(o_3, 1);
                              if(match_cons(q_3, sym_area_in_file_2))
                                {
                                  ATerm r_3 = ATgetArgument(q_3, 0);
                                  if(((c_1 != NULL) && (c_1 != ATgetArgument(q_3, 1))))
                                    _fail(ATgetArgument(q_3, 1));
                                  else
                                    c_1 = ATgetArgument(q_3, 1);
                                }
                              else
                                _fail(t);
                            }
                          }
                        else
                          _fail(t);
                        {
                          ATerm p_3 = (ATerm) ATgetNext((ATermList) n_3);
                          if(((ATgetType(p_3) != AT_LIST) || !(ATisEmpty(p_3))))
                            _fail(t);
                        }
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                {
                  ATerm l_3 = (ATerm) ATgetNext((ATermList) j_3);
                  if(((ATgetType(l_3) != AT_LIST) || !(ATisEmpty(l_3))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        t = term_f_2;
        t = stderr_stream_0_0(t);
        c_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_0, (ATerm) ATinsert(ATempty, b_1));
        t = fprintnl_0_0(t);
        t = t_2;
        t = report_area_0_1(c_1, t);
        t = h_1;
        LocalPopChoice(g_3);
      }
    else
      {
        t = f_3;
        t = read_from_0_0(t);
        t = debug_1_0(e_0, t);
      }
    return(t);
  }
  t = finally_2_0(b_0, _fail, t);
  return(t);
}
ATerm xtc_command_silent_0_1 (ATerm r_2, ATerm t)
{
  ATerm j_1 = NULL,l_1 = NULL,n_1 = NULL,p_1 = NULL,s_1 = NULL,w_1 = NULL;
  w_1 = t;
  t = r_2;
  t = xtc_find_warning_0_0(t);
  j_1 = t;
  t = term_s_3;
  l_1 = t;
  t = term_s_3;
  n_1 = t;
  t = term_t_3;
  t = open_0_0(t);
  s_1 = t;
  t = (ATerm) ATmakeAppl(sym_Some_1, s_1);
  p_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_1, w_1);
  t = call_0_3(l_1, n_1, p_1, t);
  t = w_1;
  return(t);
}
static ATerm r_1 (ATerm s_6 (ATerm), ATerm t_6 (ATerm), ATerm n_2, ATerm o_2, ATerm p_2, ATerm t)
{
  ATerm x_1 = NULL;
  t = p_2;
  t = xtc_new_file_0_0(t);
  x_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_2, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_1), term_v_3), p_2), term_u_3));
  t = conc_0_0(t);
  {
    ATerm w_3 = t;
    int x_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_1 = NULL;
        y_1 = t;
        t = xtc_command_silent_0_1(n_2, t);
        t = y_1;
        LocalPopChoice(x_3);
        t = (ATerm) ATmakeAppl(sym_FILE_1, x_1);
        t = s_6(t);
      }
    else
      {
        t = w_3;
        t = (ATerm) ATmakeAppl(sym_FILE_1, x_1);
        t = t_6(t);
      }
  }
  return(t);
}
ATerm xtc_sglr_strict_0_2 (ATerm i_0, ATerm k_0, ATerm t)
{
  ATerm a_2 = NULL,c_2 = NULL,d_2 = NULL,e_2 = NULL;
  static ATerm g_0 (ATerm t);
  static ATerm g_0 (ATerm t)
  {
    t = report_parse_error_summary_0_1(not_null(a_2), t);
    return(t);
  }
  if(((a_2 != NULL) && (a_2 != t)))
    _fail(t);
  else
    a_2 = t;
  t = term_y_3;
  c_2 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(k_0), i_0), term_z_3);
  d_2 = t;
  t = a_2;
  if(match_cons(t, sym_FILE_1))
    {
      e_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_1(_id, g_0, c_2, d_2, e_2, t);
  return(t);
}
ATerm pass_sglri_args_0_0 (ATerm t)
{
  ATerm g_2 = NULL,h_2 = NULL;
  ATerm a_4 = t;
  int b_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_2 = NULL;
      t = term_c_4;
      t = get_config_0_0(t);
      i_2 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, i_2), term_d_4);
      LocalPopChoice(b_4);
    }
  else
    {
      t = a_4;
      t = (ATerm) ATempty;
    }
  g_2 = t;
  {
    ATerm e_4 = t;
    int f_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_4;
        t = get_config_0_0(t);
        LocalPopChoice(f_4);
      }
    else
      {
        t = e_4;
        t = (ATerm) ATempty;
      }
  }
  h_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, h_2), g_2), (ATerm) ATinsert(ATempty, term_n_4));
  t = concat_0_0(t);
  return(t);
}
ATerm get_parse_table_0_0 (ATerm t)
{
  ATerm o_4 = t;
  int p_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_3;
      t = get_config_0_0(t);
      LocalPopChoice(p_4);
    }
  else
    {
      t = o_4;
      t = (ATerm) ATinsert(ATempty, term_q_4);
      t = fatal_error_0_0(t);
    }
  return(t);
}
static ATerm n_0 (ATerm t)
{
  t = term_r_4;
  return(t);
}
static ATerm o_0 (ATerm t)
{
  t = term_s_4;
  {
    ATerm t_4 = t;
    int u_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(u_4);
      }
    else
      {
        t = t_4;
        t = (ATerm) ATempty;
      }
  }
  return(t);
}
ATerm parse_and_implode_0_0 (ATerm t)
{
  ATerm j_2 = NULL,k_2 = NULL,l_2 = NULL;
  k_2 = t;
  t = get_parse_table_0_0(t);
  l_2 = t;
  t = k_2;
  t = pass_sglri_args_0_0(t);
  j_2 = t;
  t = k_2;
  t = xtc_sglr_strict_0_2(l_2, j_2, t);
  t = xtc_transform_2_0(n_0, o_0, t);
  return(t);
}
static ATerm q_0 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm m_2 = NULL;
  m_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_3, m_2);
  t = set_config_0_0(t);
  t = m_2;
  return(t);
}
static ATerm t_0 (ATerm t)
{
  t = term_v_4;
  return(t);
}
static ATerm y_0 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--start", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm b_3 = NULL;
  b_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_4, b_3);
  t = set_config_0_0(t);
  t = b_3;
  return(t);
}
static ATerm a_1 (ATerm t)
{
  t = term_w_4;
  return(t);
}
static ATerm d_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--no-heuristic-filters", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm c_3 = NULL;
  c_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_4, (ATerm) ATinsert(ATinsert(ATempty, term_y_4), term_x_4));
  t = extend_config_0_0(t);
  t = c_3;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_z_4;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_a_5;
  return(t);
}
static ATerm i_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--sglr", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm d_3 = NULL;
  d_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_4, (ATerm) ATinsert(ATempty, d_3));
  t = extend_config_0_0(t);
  t = d_3;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_b_5;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--impl", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm e_3 = NULL;
  e_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_4, (ATerm) ATinsert(ATempty, e_3));
  t = extend_config_0_0(t);
  t = e_3;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_c_5;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = term_a_5;
  return(t);
}
ATerm sglri_options_0_0 (ATerm t)
{
  ATerm d_5 = t;
  int e_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(q_0, r_0, t_0, t);
      LocalPopChoice(e_5);
    }
  else
    {
      t = d_5;
      {
        ATerm f_5 = t;
        int g_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(y_0, z_0, a_1, t);
            LocalPopChoice(g_5);
          }
        else
          {
            t = f_5;
            {
              ATerm h_5 = t;
              int i_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(d_1, e_1, f_1, t);
                  LocalPopChoice(i_5);
                }
              else
                {
                  t = h_5;
                  {
                    ATerm j_5 = t;
                    int k_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(_fail, _fail, g_1, t);
                        LocalPopChoice(k_5);
                      }
                    else
                      {
                        t = j_5;
                        {
                          ATerm l_5 = t;
                          int m_5 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ArgOption_3_0(i_1, k_1, m_1, t);
                              LocalPopChoice(m_5);
                            }
                          else
                            {
                              t = l_5;
                              {
                                ATerm n_5 = t;
                                int o_5 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(o_1, q_1, t_1, t);
                                    LocalPopChoice(o_5);
                                  }
                                else
                                  {
                                    t = n_5;
                                    t = Option_3_0(_fail, _fail, u_1, t);
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
ATerm main_0_0 (ATerm t)
{
  t = xtc_io_wrap_2_0(sglri_options_0_0, parse_and_implode_0_0, t);
  return(t);
}
