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
static ATerm term_n_5;
static ATerm term_m_5;
static ATerm term_j_5;
static ATerm term_i_5;
static ATerm term_h_5;
static ATerm term_g_5;
static ATerm term_f_5;
static ATerm term_e_5;
static ATerm term_d_5;
static ATerm term_c_5;
static ATerm term_z_4;
static ATerm term_y_4;
static ATerm term_v_4;
static ATerm term_s_4;
static ATerm term_n_4;
static ATerm term_m_4;
static ATerm term_f_4;
static ATerm term_e_4;
static ATerm term_d_4;
static ATerm term_a_4;
static ATerm term_z_3;
static ATerm term_y_3;
static ATerm term_x_3;
static ATerm term_a_3;
static ATerm term_y_2;
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
  term_x_2 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_y_2));
  term_y_2 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_a_3));
  term_a_3 = (ATerm) ATmakeAppl(ATmakeSymbol("Parse error cannot be presented. Please report bug.", 0, ATtrue));
  ATprotect(&(term_x_3));
  term_x_3 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_y_3));
  term_y_3 = (ATerm) ATmakeAppl(ATmakeSymbol("/dev/null", 0, ATtrue));
  ATprotect(&(term_z_3));
  term_z_3 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_a_4));
  term_a_4 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_d_4));
  term_d_4 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_e_4));
  term_e_4 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_f_4));
  term_f_4 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_m_4));
  term_m_4 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_n_4));
  term_n_4 = (ATerm) ATmakeAppl(ATmakeSymbol("--impl", 0, ATtrue));
  ATprotect(&(term_s_4));
  term_s_4 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_v_4));
  term_v_4 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: no parse table specified", 0, ATtrue));
  ATprotect(&(term_y_4));
  term_y_4 = (ATerm) ATmakeAppl(ATmakeSymbol("--start", 0, ATtrue));
  ATprotect(&(term_z_4));
  term_z_4 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_c_5));
  term_c_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--sglr", 0, ATtrue));
  ATprotect(&(term_d_5));
  term_d_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_e_5));
  term_e_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-p <file.tbl>           Use parse table <file.tbl> (required)", 0, ATtrue));
  ATprotect(&(term_f_5));
  term_f_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--start <symbol>        Start parsing with <symbol>", 0, ATtrue));
  ATprotect(&(term_g_5));
  term_g_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-fi", 0, ATtrue));
  ATprotect(&(term_h_5));
  term_h_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-fe", 0, ATtrue));
  ATprotect(&(term_i_5));
  term_i_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-heuristic-filters  Don't use heuristic disambiguation filters (encouraged)", 0, ATtrue));
  ATprotect(&(term_j_5));
  term_j_5 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_m_5));
  term_m_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--sglr <opt>            Pass <opt> to sglr", 0, ATtrue));
  ATprotect(&(term_n_5));
  term_n_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--impl <opt>            Pass <opt> to implode-asfix", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm concat_0_0 (ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
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
ATerm report_area_0_1 (ATerm u_2, ATerm t);
ATerm fprintnl_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
ATerm finally_2_0 (ATerm z_93 (ATerm), ATerm a_94 (ATerm), ATerm t);
static ATerm g_0 (ATerm t);
ATerm report_parse_error_summary_0_1 (ATerm r_2, ATerm t);
ATerm call_0_3 (ATerm w_67, ATerm x_67, ATerm y_67, ATerm t);
ATerm open_0_0 (ATerm t);
ATerm xtc_find_warning_0_0 (ATerm t);
ATerm xtc_command_silent_0_1 (ATerm p_2, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
static ATerm z_1 (ATerm k_5 (ATerm), ATerm l_5 (ATerm), ATerm k_0, ATerm n_0, ATerm n_2, ATerm t);
ATerm xtc_sglr_strict_0_2 (ATerm c_0, ATerm e_0, ATerm t);
ATerm if_verbose3_1_0 (ATerm w_118 (ATerm), ATerm t);
ATerm fatal_error_0_0 (ATerm t);
static ATerm q_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm t_0 (ATerm t);
ATerm parse_and_implode_0_0 (ATerm t);
ATerm Option_3_0 (ATerm j_4 (ATerm), ATerm k_4 (ATerm), ATerm l_4 (ATerm), ATerm t);
ATerm extend_config_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm g_4 (ATerm), ATerm h_4 (ATerm), ATerm i_4 (ATerm), ATerm t);
ATerm set_config_0_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
ATerm sglri_options_0_0 (ATerm t);
ATerm xtc_io_wrap_2_0 (ATerm s_5 (ATerm), ATerm t_5 (ATerm), ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm report_area_0_1 (ATerm u_2, ATerm t)
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
  t = u_2;
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
        ATerm i_2 = ATgetArgument(t, 4);
      }
      {
        ATerm l_2 = ATgetArgument(t, 5);
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
            ATerm m_2 = ATgetArgument(t, 1);
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
  t = term_o_2;
  t = stderr_stream_0_0(t);
  v_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_0, (ATerm) ATinsert(ATempty, u_0));
  t = fprintnl_0_0(t);
  t = u_2;
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
    ATerm t_2 = t;
    int v_2 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, j_0, term_w_2);
        t = lt_0_0(t);
        t = j_0;
        LocalPopChoice(v_2);
        t = term_w_2;
      }
    else
      {
        t = t_2;
      }
  }
  s_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_0, term_x_2);
  t = copy_char_0_0(t);
  p_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_0, term_y_2);
  t = conc_strings_0_0(t);
  l_0 = t;
  t = term_o_2;
  t = stderr_stream_0_0(t);
  m_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_0, (ATerm) ATinsert(ATempty, l_0));
  t = fprintnl_0_0(t);
  t = l_0;
  return(t);
}
static ATerm g_0 (ATerm t)
{
  t = term_a_3;
  return(t);
}
ATerm report_parse_error_summary_0_1 (ATerm r_2, ATerm t)
{
  ATerm b_1 = NULL,c_1 = NULL;
  static ATerm b_0 (ATerm t);
  static ATerm b_0 (ATerm t)
  {
    ATerm d_3 = t;
    int f_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_1 = NULL,i_0 = NULL;
        h_1 = t;
        t = read_from_0_0(t);
        if(match_cons(t, sym_summary_3))
          {
            ATerm h_3 = ATgetArgument(t, 0);
            ATerm n_3 = ATgetArgument(t, 1);
            ATerm o_3 = ATgetArgument(t, 2);
            if(((ATgetType(o_3) == AT_LIST) && !(ATisEmpty(o_3))))
              {
                ATerm p_3 = ATgetFirst((ATermList) o_3);
                if(match_cons(p_3, sym_error_2))
                  {
                    ATerm r_3 = ATgetArgument(p_3, 0);
                    ATerm s_3 = ATgetArgument(p_3, 1);
                    if(((ATgetType(s_3) == AT_LIST) && !(ATisEmpty(s_3))))
                      {
                        ATerm t_3 = ATgetFirst((ATermList) s_3);
                        if(match_cons(t_3, sym_localized_2))
                          {
                            if(((b_1 != NULL) && (b_1 != ATgetArgument(t_3, 0))))
                              _fail(ATgetArgument(t_3, 0));
                            else
                              b_1 = ATgetArgument(t_3, 0);
                            {
                              ATerm v_3 = ATgetArgument(t_3, 1);
                              if(match_cons(v_3, sym_area_in_file_2))
                                {
                                  ATerm w_3 = ATgetArgument(v_3, 0);
                                  if(((c_1 != NULL) && (c_1 != ATgetArgument(v_3, 1))))
                                    _fail(ATgetArgument(v_3, 1));
                                  else
                                    c_1 = ATgetArgument(v_3, 1);
                                }
                              else
                                _fail(t);
                            }
                          }
                        else
                          _fail(t);
                        {
                          ATerm u_3 = (ATerm) ATgetNext((ATermList) s_3);
                          if(((ATgetType(u_3) != AT_LIST) || !(ATisEmpty(u_3))))
                            _fail(t);
                        }
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                {
                  ATerm q_3 = (ATerm) ATgetNext((ATermList) o_3);
                  if(((ATgetType(q_3) != AT_LIST) || !(ATisEmpty(q_3))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        t = term_o_2;
        t = stderr_stream_0_0(t);
        i_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_0, (ATerm) ATinsert(ATempty, b_1));
        t = fprintnl_0_0(t);
        t = r_2;
        t = report_area_0_1(c_1, t);
        t = h_1;
        LocalPopChoice(f_3);
      }
    else
      {
        t = d_3;
        t = read_from_0_0(t);
        t = debug_1_0(g_0, t);
      }
    return(t);
  }
  t = finally_2_0(b_0, _fail, t);
  return(t);
}
ATerm xtc_command_silent_0_1 (ATerm p_2, ATerm t)
{
  ATerm j_1 = NULL,k_1 = NULL,l_1 = NULL,m_1 = NULL,n_1 = NULL,o_1 = NULL;
  o_1 = t;
  t = p_2;
  t = xtc_find_warning_0_0(t);
  j_1 = t;
  t = term_x_3;
  k_1 = t;
  t = term_x_3;
  l_1 = t;
  t = term_y_3;
  t = open_0_0(t);
  n_1 = t;
  t = (ATerm) ATmakeAppl(sym_Some_1, n_1);
  m_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_1, o_1);
  t = call_0_3(k_1, l_1, m_1, t);
  t = o_1;
  return(t);
}
static ATerm z_1 (ATerm k_5 (ATerm), ATerm l_5 (ATerm), ATerm k_0, ATerm n_0, ATerm n_2, ATerm t)
{
  ATerm p_1 = NULL;
  t = n_2;
  t = xtc_new_file_0_0(t);
  p_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_0, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, p_1), term_a_4), n_2), term_z_3));
  t = conc_0_0(t);
  {
    ATerm b_4 = t;
    int c_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_1 = NULL;
        r_1 = t;
        t = xtc_command_silent_0_1(k_0, t);
        t = r_1;
        LocalPopChoice(c_4);
        t = (ATerm) ATmakeAppl(sym_FILE_1, p_1);
        t = k_5(t);
      }
    else
      {
        t = b_4;
        t = (ATerm) ATmakeAppl(sym_FILE_1, p_1);
        t = l_5(t);
      }
  }
  return(t);
}
ATerm xtc_sglr_strict_0_2 (ATerm c_0, ATerm e_0, ATerm t)
{
  ATerm v_1 = NULL,x_1 = NULL,y_1 = NULL,a_2 = NULL;
  static ATerm o_0 (ATerm t);
  static ATerm o_0 (ATerm t)
  {
    t = report_parse_error_summary_0_1(not_null(v_1), t);
    return(t);
  }
  if(((v_1 != NULL) && (v_1 != t)))
    _fail(t);
  else
    v_1 = t;
  t = term_d_4;
  x_1 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(e_0), c_0), term_e_4);
  y_1 = t;
  t = v_1;
  if(match_cons(t, sym_FILE_1))
    {
      a_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_1(_id, o_0, x_1, y_1, a_2, t);
  return(t);
}
static ATerm q_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_f_4);
  return(t);
}
static ATerm r_0 (ATerm t)
{
  t = term_m_4;
  return(t);
}
static ATerm t_0 (ATerm t)
{
  ATerm c_3 = NULL,e_3 = NULL,g_3 = NULL;
  t = term_n_4;
  {
    ATerm o_4 = t;
    int p_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(p_4);
      }
    else
      {
        t = o_4;
        t = (ATerm) ATempty;
      }
  }
  c_3 = t;
  t = term_o_2;
  {
    ATerm q_4 = t;
    int r_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_s_4;
        t = get_config_0_0(t);
        t = term_o_2;
        LocalPopChoice(r_4);
        t = (ATerm) ATinsert(ATempty, term_s_4);
      }
    else
      {
        t = q_4;
        t = (ATerm) ATempty;
      }
  }
  e_3 = t;
  t = term_o_2;
  t = pass_verbose_0_0(t);
  g_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, g_3), e_3), c_3);
  t = concat_0_0(t);
  return(t);
}
ATerm parse_and_implode_0_0 (ATerm t)
{
  ATerm f_2 = NULL,g_2 = NULL,h_2 = NULL,j_2 = NULL,k_2 = NULL,z_2 = NULL;
  k_2 = t;
  {
    ATerm t_4 = t;
    int u_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_e_4;
        t = get_config_0_0(t);
        LocalPopChoice(u_4);
      }
    else
      {
        t = t_4;
        t = (ATerm) ATinsert(ATempty, term_v_4);
        t = fatal_error_0_0(t);
      }
  }
  z_2 = t;
  t = term_o_2;
  {
    ATerm w_4 = t;
    int x_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_3 = NULL;
        t = term_y_4;
        t = get_config_0_0(t);
        b_3 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, b_3), term_z_4);
        LocalPopChoice(x_4);
      }
    else
      {
        t = w_4;
        t = (ATerm) ATempty;
      }
  }
  g_2 = t;
  t = term_o_2;
  {
    ATerm a_5 = t;
    int b_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_c_5;
        t = get_config_0_0(t);
        LocalPopChoice(b_5);
      }
    else
      {
        t = a_5;
        t = (ATerm) ATempty;
      }
  }
  h_2 = t;
  t = (ATerm) ATempty;
  t = if_verbose3_1_0(q_0, t);
  j_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, j_2), h_2), g_2), (ATerm) ATinsert(ATempty, term_d_5));
  t = concat_0_0(t);
  f_2 = t;
  t = k_2;
  t = xtc_sglr_strict_0_2(z_2, f_2, t);
  t = xtc_transform_2_0(r_0, t_0, t);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm i_3 = NULL;
  i_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_4, i_3);
  t = set_config_0_0(t);
  t = i_3;
  return(t);
}
static ATerm a_1 (ATerm t)
{
  t = term_e_5;
  return(t);
}
static ATerm d_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--start", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm j_3 = NULL;
  j_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_4, j_3);
  t = set_config_0_0(t);
  t = j_3;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_f_5;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--no-heuristic-filters", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm k_3 = NULL;
  k_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_5, (ATerm) ATinsert(ATinsert(ATempty, term_h_5), term_g_5));
  t = extend_config_0_0(t);
  t = k_3;
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = term_i_5;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = term_j_5;
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
  ATerm l_3 = NULL;
  l_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_5, (ATerm) ATinsert(ATempty, l_3));
  t = extend_config_0_0(t);
  t = l_3;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = term_m_5;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--impl", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm m_3 = NULL;
  m_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_4, (ATerm) ATinsert(ATempty, m_3));
  t = extend_config_0_0(t);
  t = m_3;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_n_5;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_j_5;
  return(t);
}
ATerm sglri_options_0_0 (ATerm t)
{
  ATerm o_5 = t;
  int p_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(y_0, z_0, a_1, t);
      LocalPopChoice(p_5);
    }
  else
    {
      t = o_5;
      {
        ATerm q_5 = t;
        int r_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(d_1, e_1, f_1, t);
            LocalPopChoice(r_5);
          }
        else
          {
            t = q_5;
            {
              ATerm u_5 = t;
              int v_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(g_1, i_1, q_1, t);
                  LocalPopChoice(v_5);
                }
              else
                {
                  t = u_5;
                  {
                    ATerm w_5 = t;
                    int x_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(_fail, _fail, s_1, t);
                        LocalPopChoice(x_5);
                      }
                    else
                      {
                        t = w_5;
                        {
                          ATerm y_5 = t;
                          int z_5 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ArgOption_3_0(t_1, u_1, w_1, t);
                              LocalPopChoice(z_5);
                            }
                          else
                            {
                              t = y_5;
                              {
                                ATerm a_6 = t;
                                int b_6 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(b_2, c_2, d_2, t);
                                    LocalPopChoice(b_6);
                                  }
                                else
                                  {
                                    t = a_6;
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
ATerm main_0_0 (ATerm t)
{
  t = xtc_io_wrap_2_0(sglri_options_0_0, parse_and_implode_0_0, t);
  return(t);
}
