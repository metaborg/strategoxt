#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
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
Symbol sym_FILE_1;
Symbol sym_AOPTIONS_1;
Symbol sym_AR_1;
Symbol sym_AC_1;
Symbol sym_AL_1;
Symbol sym_IS_0;
Symbol sym_HS_0;
Symbol sym_VS_0;
Symbol sym_SOpt_2;
Symbol sym_C_2;
Symbol sym_FBOX_2;
Symbol sym_R_2;
Symbol sym_A_3;
Symbol sym_ALT_2;
Symbol sym_HV_2;
Symbol sym_V_2;
Symbol sym_H_2;
Symbol sym_S_1;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
static void init_module_constructors (void)
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
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_AOPTIONS_1 = ATmakeSymbol("AOPTIONS", 1, ATfalse);
  ATprotectSymbol(sym_AOPTIONS_1);
  sym_AR_1 = ATmakeSymbol("AR", 1, ATfalse);
  ATprotectSymbol(sym_AR_1);
  sym_AC_1 = ATmakeSymbol("AC", 1, ATfalse);
  ATprotectSymbol(sym_AC_1);
  sym_AL_1 = ATmakeSymbol("AL", 1, ATfalse);
  ATprotectSymbol(sym_AL_1);
  sym_IS_0 = ATmakeSymbol("IS", 0, ATfalse);
  ATprotectSymbol(sym_IS_0);
  sym_HS_0 = ATmakeSymbol("HS", 0, ATfalse);
  ATprotectSymbol(sym_HS_0);
  sym_VS_0 = ATmakeSymbol("VS", 0, ATfalse);
  ATprotectSymbol(sym_VS_0);
  sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
  ATprotectSymbol(sym_SOpt_2);
  sym_C_2 = ATmakeSymbol("C", 2, ATfalse);
  ATprotectSymbol(sym_C_2);
  sym_FBOX_2 = ATmakeSymbol("FBOX", 2, ATfalse);
  ATprotectSymbol(sym_FBOX_2);
  sym_R_2 = ATmakeSymbol("R", 2, ATfalse);
  ATprotectSymbol(sym_R_2);
  sym_A_3 = ATmakeSymbol("A", 3, ATfalse);
  ATprotectSymbol(sym_A_3);
  sym_ALT_2 = ATmakeSymbol("ALT", 2, ATfalse);
  ATprotectSymbol(sym_ALT_2);
  sym_HV_2 = ATmakeSymbol("HV", 2, ATfalse);
  ATprotectSymbol(sym_HV_2);
  sym_V_2 = ATmakeSymbol("V", 2, ATfalse);
  ATprotectSymbol(sym_V_2);
  sym_H_2 = ATmakeSymbol("H", 2, ATfalse);
  ATprotectSymbol(sym_H_2);
  sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
  ATprotectSymbol(sym_S_1);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
}
ATerm term_k_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_o_6;
ATerm term_g_6;
ATerm term_x_5;
ATerm term_a_5;
ATerm term_y_4;
ATerm term_p_4;
ATerm term_o_4;
ATerm term_l_4;
ATerm term_i_4;
ATerm term_h_4;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_h_4));
  term_h_4 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_i_4));
  term_i_4 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_l_4));
  term_l_4 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_4));
  term_o_4 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_p_4));
  term_p_4 = (ATerm) ATmakeInt(80);
  ATprotect(&(term_y_4));
  term_y_4 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_a_5));
  term_a_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: too many columns in row: ", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: invalid box: ", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-w int | --width int       Specifies max width of output.", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm close_file_0_0 (ATerm t);
ATerm print_0_0 (ATerm t);
ATerm is_string_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm n_84 (ATerm), ATerm t);
ATerm open_file_0_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm topdown_print_to_0_0 (ATerm t);
ATerm Fst_0_0 (ATerm t);
ATerm fatal_error_0_0 (ATerm t);
ATerm add_0_0 (ATerm t);
ATerm string_tokenize_0_0 (ATerm t);
static ATerm u_7 (ATerm g_7, ATerm h_7, ATerm t);
ATerm leq_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm get_width_0_0 (ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm h_0 (ATerm t);
static ATerm j_0 (ATerm t);
static ATerm o_7 (ATerm c_2, ATerm a_2, ATerm t);
static ATerm p_7 (ATerm c_0, ATerm n_0, ATerm e_0, ATerm t);
ATerm separate_by_0_0 (ATerm t);
ATerm _2_0 (ATerm c_69 (ATerm), ATerm d_69 (ATerm), ATerm t);
ATerm map_1_0 (ATerm b_89 (ATerm), ATerm t);
ATerm reverse_0_0 (ATerm t);
static ATerm q_7 (ATerm b_9 (ATerm), ATerm c_9 (ATerm), ATerm d_9 (ATerm), ATerm a_4, ATerm z_3, ATerm t);
static ATerm r_7 (ATerm z_8 (ATerm), ATerm a_9 (ATerm), ATerm v_3, ATerm m_2, ATerm w_3, ATerm n_2, ATerm t);
ATerm foldl_1_0 (ATerm u_96 (ATerm), ATerm t);
ATerm fetch_1_0 (ATerm l_89 (ATerm), ATerm t);
ATerm SOpt_value_1_0 (ATerm w_9 (ATerm), ATerm t);
ATerm string_length_0_0 (ATerm t);
ATerm copy_char_0_0 (ATerm t);
ATerm inc_0_0 (ATerm t);
ATerm subt_0_0 (ATerm t);
ATerm Nil_0_0 (ATerm t);
ATerm try_1_0 (ATerm w_102 (ATerm), ATerm t);
ATerm thread_map_1_0 (ATerm g_97 (ATerm), ATerm t);
ATerm is_real_hbox_0_0 (ATerm t);
ATerm filter_1_0 (ATerm t_97 (ATerm), ATerm t);
static ATerm s_7 (ATerm g_9 (ATerm), ATerm q_4, ATerm r_4, ATerm s_4, ATerm t);
ATerm Cons_2_0 (ATerm q_75 (ATerm), ATerm r_75 (ATerm), ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
ATerm is_real_vbox_0_0 (ATerm t);
ATerm matrix_transpose_0_0 (ATerm t);
ATerm conc_strings_0_0 (ATerm t);
ATerm align_right_0_0 (ATerm t);
ATerm align_center_0_0 (ATerm t);
ATerm align_left_0_0 (ATerm t);
ATerm align_column_0_0 (ATerm t);
ATerm list_max_0_0 (ATerm t);
ATerm concat_strings_0_0 (ATerm t);
ATerm flatten_list_0_0 (ATerm t);
ATerm unzip_0_0 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm t_7 (ATerm k_9 (ATerm), ATerm p_5, ATerm o_5, ATerm k_5, ATerm m_5, ATerm j_5, ATerm t);
ATerm do_A_column_1_0 (ATerm k_9 (ATerm), ATerm t);
ATerm zip_0_0 (ATerm t);
ATerm add_indices_0_0 (ATerm t);
ATerm length_0_0 (ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm copy_0_0 (ATerm t);
ATerm gt_0_0 (ATerm t);
ATerm FitToMax_1_0 (ATerm m_9 (ATerm), ATerm t);
ATerm split_2_0 (ATerm c_88 (ATerm), ATerm d_88 (ATerm), ATerm t);
static ATerm z_1 (ATerm t);
static ATerm b_2 (ATerm t);
ATerm construct_rows_0_0 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm u_3 (ATerm t);
ATerm abox2text_1_0 (ATerm o_0 (ATerm), ATerm t);
ATerm try_abox2text_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
ATerm xtc_io_1_0 (ATerm u_106 (ATerm), ATerm t);
ATerm io_options_0_0 (ATerm t);
ATerm set_config_0_0 (ATerm t);
ATerm string_to_int_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm k_3 (ATerm), ATerm l_3 (ATerm), ATerm m_3 (ATerm), ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
ATerm Abox_2_text_options_0_0 (ATerm t);
ATerm option_wrap_2_0 (ATerm s_108 (ATerm), ATerm t_108 (ATerm), ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
ATerm io_Abox_2_text_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm topdown_print_to_0_0 (ATerm t)
{
  ATerm b_0 = NULL,d_0 = NULL;
  b_0 = t;
  t = xtc_new_file_0_0(t);
  d_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_0, term_h_4);
  t = open_file_0_0(t);
  t = b_0;
  {
    static ATerm a_0 (ATerm t);
    static ATerm a_0 (ATerm t)
    {
      static ATerm f_0 (ATerm t);
      static ATerm f_0 (ATerm t)
      {
        ATerm g_0 = NULL;
        t = is_string_0_0(t);
        g_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_0, (ATerm) ATinsert(ATempty, g_0));
        t = print_0_0(t);
        t = g_0;
        return(t);
      }
      t = try_1_0(f_0, t);
      return(t);
    }
    t = topdown_1_0(a_0, t);
  }
  t = d_0;
  t = close_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, d_0);
  return(t);
}
static ATerm u_7 (ATerm g_7, ATerm h_7, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_i_4), g_7);
  t = string_tokenize_0_0(t);
  {
    ATerm j_4 = t;
    int k_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_12 = NULL,w_12 = NULL;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = term_l_4;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                v_12 = ATgetFirst((ATermList) t);
                w_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_12;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = v_12;
            t = string_length_0_0(t);
          }
        LocalPopChoice(k_4);
      }
    else
      {
        t = j_4;
        {
          ATerm y_12 = NULL;
          t = last_0_0(t);
          t = string_length_0_0(t);
          y_12 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_12, h_7);
          t = subt_0_0(t);
        }
      }
  }
  return(t);
}
ATerm get_width_0_0 (ATerm t)
{
  ATerm m_4 = t;
  int n_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_4;
      t = get_config_0_0(t);
      LocalPopChoice(n_4);
    }
  else
    {
      t = m_4;
      t = term_p_4;
    }
  return(t);
}
static ATerm h_0 (ATerm t)
{
  if(!(match_cons(t, sym_VS_0)))
    _fail(t);
  return(t);
}
static ATerm j_0 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
static ATerm o_7 (ATerm c_2, ATerm a_2, ATerm t)
{
  ATerm p_0 = NULL,q_0 = NULL,s_0 = NULL,u_0 = NULL,v_0 = NULL;
  t = c_2;
  {
    ATerm t_4 = t;
    int u_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(h_0, t);
        LocalPopChoice(u_4);
      }
    else
      {
        t = t_4;
        t = term_l_4;
      }
  }
  t = inc_0_0(t);
  v_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_0, term_i_4);
  t = copy_char_0_0(t);
  p_0 = t;
  t = c_2;
  {
    ATerm v_4 = t;
    int w_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(j_0, t);
        LocalPopChoice(w_4);
      }
    else
      {
        t = v_4;
        t = term_l_4;
      }
  }
  u_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_0, term_y_4);
  t = copy_char_0_0(t);
  q_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_2, term_y_4);
  t = copy_char_0_0(t);
  s_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, s_0), q_0), p_0);
  t = concat_strings_0_0(t);
  return(t);
}
static ATerm p_7 (ATerm c_0, ATerm n_0, ATerm e_0, ATerm t)
{
  ATerm x_0 = NULL,y_0 = NULL,z_0 = NULL,b_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, c_0, e_0);
  t = o_7(c_0, e_0, t);
  y_0 = t;
  t = n_0;
  t = last_0_0(t);
  if(match_cons(t, sym__2))
    {
      ATerm z_4 = ATgetArgument(t, 0);
      x_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_0;
  t = map_1_0(Fst_0_0, t);
  b_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_0, b_1);
  t = separate_by_0_0(t);
  z_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_0, x_0);
  return(t);
}
static ATerm q_7 (ATerm b_9 (ATerm), ATerm c_9 (ATerm), ATerm d_9 (ATerm), ATerm a_4, ATerm z_3, ATerm t)
{
  ATerm c_1 = NULL,h_1 = NULL,i_1 = NULL,j_1 = NULL,m_1 = NULL;
  t = term_a_5;
  t = d_9(t);
  m_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_4, m_1);
  t = b_9(t);
  if(match_cons(t, sym__2))
    {
      c_1 = ATgetArgument(t, 0);
      h_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_a_5;
  t = c_9(t);
  j_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_1, j_1);
  t = add_0_0(t);
  i_1 = t;
  t = (ATerm) ATinsert(CheckATermList(z_3), (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, c_1), i_1));
  return(t);
}
static ATerm r_7 (ATerm z_8 (ATerm), ATerm a_9 (ATerm), ATerm v_3, ATerm m_2, ATerm w_3, ATerm n_2, ATerm t)
{
  ATerm n_1 = NULL,s_1 = NULL,t_1 = NULL,u_1 = NULL,w_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, v_3, w_3);
  t = z_8(t);
  if(match_cons(t, sym__2))
    {
      n_1 = ATgetArgument(t, 0);
      s_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_a_5;
  t = get_width_0_0(t);
  w_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_1, w_1);
  t = leq_0_0(t);
  t = term_a_5;
  t = a_9(t);
  u_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_1, u_1);
  t = add_0_0(t);
  t_1 = t;
  t = (ATerm) ATinsert(CheckATermList(n_2), (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_2), n_1), t_1));
  return(t);
}
ATerm SOpt_value_1_0 (ATerm w_9 (ATerm), ATerm t)
{
  ATerm x_1 = NULL;
  static ATerm k_0 (ATerm t);
  static ATerm k_0 (ATerm t)
  {
    ATerm y_1 = NULL,e_2 = NULL,l_2 = NULL,o_2 = NULL,p_2 = NULL,l_0 = NULL;
    p_2 = t;
    if(match_cons(t, sym_SOpt_2))
      {
        e_2 = ATgetArgument(t, 0);
        l_2 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(p_2);
    y_1 = t;
    t = e_2;
    t = w_9(t);
    o_2 = t;
    t = l_2;
    if(((x_1 != NULL) && (x_1 != t)))
      _fail(t);
    else
      x_1 = t;
    t = (ATerm) ATmakeAppl(sym_SOpt_2, o_2, l_2);
    l_0 = t;
    t = SSLsetAnnotations(l_0, y_1);
    return(t);
  }
  t = fetch_1_0(k_0, t);
  t = not_null(x_1);
  t = string_to_int_0_0(t);
  return(t);
}
ATerm is_real_hbox_0_0 (ATerm t)
{
  ATerm b_5 = t;
  if((PushChoice() == 0))
    {
      ATerm c_5 = t;
      int d_5 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0_0(t);
          LocalPopChoice(d_5);
        }
      else
        {
          t = c_5;
          {
            ATerm c_3 = NULL,d_3 = NULL,e_3 = NULL,i_0 = NULL,m_0 = NULL,r_0 = NULL,t_2 = NULL;
            c_3 = t;
            if(match_cons(t, sym_H_2))
              {
                d_3 = ATgetArgument(t, 0);
                e_3 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(c_3);
            i_0 = t;
            t = d_3;
            t = Nil_0_0(t);
            m_0 = t;
            t = e_3;
            t = Nil_0_0(t);
            r_0 = t;
            t = (ATerm) ATmakeAppl(sym_H_2, m_0, r_0);
            t_2 = t;
            t = SSLsetAnnotations(t_2, i_0);
          }
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = b_5;
    }
  return(t);
}
static ATerm s_7 (ATerm g_9 (ATerm), ATerm q_4, ATerm r_4, ATerm s_4, ATerm t)
{
  static ATerm t_0 (ATerm t);
  static ATerm w_0 (ATerm t);
  static ATerm t_0 (ATerm t)
  {
    ATerm h_3 = NULL;
    h_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_3, q_4);
    t = g_9(t);
    return(t);
  }
  static ATerm w_0 (ATerm t)
  {
    static ATerm a_1 (ATerm t);
    static ATerm a_1 (ATerm t)
    {
      ATerm o_3 = NULL;
      o_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_3, r_4);
      t = g_9(t);
      return(t);
    }
    t = map_1_0(a_1, t);
    return(t);
  }
  t = s_4;
  t = Cons_2_0(t_0, w_0, t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = Cons_2_0(e_1, Nil_0_0, t);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm e_5 = t;
  int f_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      LocalPopChoice(f_5);
    }
  else
    {
      t = e_5;
      t = Cons_2_0(Nil_0_0, Nil_0_0, t);
    }
  return(t);
}
ATerm is_real_vbox_0_0 (ATerm t)
{
  ATerm g_5 = t;
  if((PushChoice() == 0))
    {
      ATerm h_5 = t;
      int i_5 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0_0(t);
          LocalPopChoice(i_5);
        }
      else
        {
          t = h_5;
          {
            ATerm x_4 = NULL,g_1 = NULL,k_1 = NULL,o_1 = NULL;
            x_4 = t;
            t = SSL_explode_term(x_4);
            if(match_cons(t, sym__2))
              {
                g_1 = ATgetArgument(t, 0);
                k_1 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = k_1;
            t = Cons_2_0(_id, d_1, t);
            o_1 = t;
            t = SSL_mkterm(g_1, o_1);
          }
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = g_5;
    }
  return(t);
}
ATerm align_column_0_0 (ATerm t)
{
  ATerm b_8 = NULL,d_8 = NULL,n_8 = NULL,p_8 = NULL,r_8 = NULL;
  d_8 = t;
  if(match_cons(t, sym__3))
    {
      n_8 = ATgetArgument(t, 0);
      p_8 = ATgetArgument(t, 1);
      r_8 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = p_8;
  {
    ATerm l_5 = t;
    int n_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_AL_1))
          {
            ATerm q_5 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(n_5);
        t = r_8;
        {
          ATerm r_5 = t;
          int s_5 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym__3))
                {
                  ATerm t_5 = ATgetArgument(t, 0);
                  b_8 = ATgetArgument(t, 1);
                  {
                    ATerm u_5 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(s_5);
              t = n_8;
              if(match_int(t, 1))
                {
                  ATerm v_5 = t;
                  int w_5 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATmakeAppl(sym__2, n_8, term_x_5);
                      t = gt_0_0(t);
                      t = r_8;
                      t = align_left_0_0(t);
                      LocalPopChoice(w_5);
                    }
                  else
                    {
                      t = v_5;
                      t = b_8;
                    }
                }
              else
                {
                  t = (ATerm) ATmakeAppl(sym__2, n_8, term_x_5);
                  t = gt_0_0(t);
                  t = r_8;
                  t = align_left_0_0(t);
                }
            }
          else
            {
              t = r_5;
              t = (ATerm) ATmakeAppl(sym__2, n_8, term_x_5);
              t = gt_0_0(t);
              t = r_8;
              t = align_left_0_0(t);
            }
        }
      }
    else
      {
        t = l_5;
        {
          ATerm y_5 = t;
          int z_5 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_AC_1))
                {
                  ATerm a_6 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(z_5);
              t = r_8;
              t = align_center_0_0(t);
            }
          else
            {
              t = y_5;
              if(match_cons(t, sym_AR_1))
                {
                  ATerm b_6 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = r_8;
              t = align_right_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = map_1_0(p_1, t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = try_1_0(q_1, t);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = flatten_list_0_0(t);
  t = concat_strings_0_0(t);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
static ATerm t_7 (ATerm k_9 (ATerm), ATerm p_5, ATerm o_5, ATerm k_5, ATerm m_5, ATerm j_5, ATerm t)
{
  ATerm t_9 = NULL,a_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL;
  t = k_5;
  {
    static ATerm f_1 (ATerm t);
    static ATerm f_1 (ATerm t)
    {
      ATerm l_10 = NULL;
      l_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_10, m_5);
      t = k_9(t);
      return(t);
    }
    t = map_1_0(f_1, t);
  }
  t = unzip_0_0(t);
  t = _2_0(l_1, list_max_0_0, t);
  if(match_cons(t, sym__2))
    {
      a_10 = ATgetArgument(t, 0);
      t_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_9, m_5);
  t = subt_0_0(t);
  f_10 = t;
  {
    ATerm c_6 = t;
    int d_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, o_5, term_x_5);
        t = gt_0_0(t);
        LocalPopChoice(d_6);
        {
          ATerm m_10 = NULL,o_10 = NULL;
          t = p_5;
          if(match_cons(t, sym_AC_1))
            {
              o_10 = ATgetArgument(t, 0);
              t = o_10;
            }
          else
            {
              if(match_cons(t, sym_AR_1))
                {
                  o_10 = ATgetArgument(t, 0);
                  t = o_10;
                }
              else
                {
                  if(match_cons(t, sym_AL_1))
                    {
                      o_10 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = o_10;
                }
            }
          {
            ATerm e_6 = t;
            int f_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SOpt_value_1_0(r_1, t);
                LocalPopChoice(f_6);
              }
            else
              {
                t = e_6;
                t = term_x_5;
              }
          }
          m_10 = t;
          t = (ATerm) ATmakeAppl(sym__2, m_10, term_y_4);
          t = copy_char_0_0(t);
        }
      }
    else
      {
        t = c_6;
        t = term_g_6;
      }
  }
  g_10 = t;
  t = a_10;
  {
    static ATerm v_1 (ATerm t);
    static ATerm v_1 (ATerm t)
    {
      ATerm s_10 = NULL,t_10 = NULL;
      t_10 = t;
      t = (ATerm) ATmakeAppl(sym__3, o_5, p_5, (ATerm) ATmakeAppl(sym__3, term_y_4, t_10, f_10));
      t = align_column_0_0(t);
      s_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_10, g_10);
      t = conc_strings_0_0(t);
      return(t);
    }
    t = map_1_0(v_1, t);
  }
  h_10 = t;
  t = g_10;
  t = string_length_0_0(t);
  j_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_10, t_9);
  t = add_0_0(t);
  i_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_10, (ATerm) ATinsert(CheckATermList(j_5), h_10));
  return(t);
}
ATerm do_A_column_1_0 (ATerm k_9 (ATerm), ATerm t)
{
  ATerm u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_6 = ATgetArgument(t, 0);
      if(match_cons(h_6, sym__2))
        {
          u_10 = ATgetArgument(h_6, 0);
          {
            ATerm j_6 = ATgetArgument(h_6, 1);
            if(match_cons(j_6, sym__2))
              {
                v_10 = ATgetArgument(j_6, 0);
                w_10 = ATgetArgument(j_6, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm i_6 = ATgetArgument(t, 1);
        if(match_cons(i_6, sym__2))
          {
            x_10 = ATgetArgument(i_6, 0);
            y_10 = ATgetArgument(i_6, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = t_7(k_9, u_10, v_10, w_10, x_10, y_10, t);
  return(t);
}
ATerm FitToMax_1_0 (ATerm m_9 (ATerm), ATerm t)
{
  ATerm a_11 = NULL,b_11 = NULL,c_11 = NULL,d_11 = NULL,f_11 = NULL;
  d_11 = t;
  t = length_0_0(t);
  a_11 = t;
  t = term_a_5;
  t = m_9(t);
  f_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_11, a_11);
  t = subt_0_0(t);
  b_11 = t;
  {
    ATerm k_6 = t;
    int l_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, b_11, term_l_4);
        t = gt_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, b_11, (ATerm) ATempty);
        t = copy_0_0(t);
        c_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_11, c_11);
        t = conc_0_0(t);
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
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
                _fail(t);
              t = d_11;
              LocalPopChoice(n_6);
            }
          else
            {
              t = m_6;
              t = (ATerm) ATinsert(ATinsert(ATempty, d_11), term_o_6);
              t = fatal_error_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm p_6 = t;
  if((PushChoice() == 0))
    {
      ATerm m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL,v_2 = NULL;
      q_12 = t;
      if(match_cons(t, sym_R_2))
        {
          n_12 = ATgetArgument(t, 0);
          o_12 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(q_12);
      m_12 = t;
      t = o_12;
      t = Nil_0_0(t);
      p_12 = t;
      t = (ATerm) ATmakeAppl(sym_R_2, n_12, p_12);
      v_2 = t;
      t = SSLsetAnnotations(v_2, m_12);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_6;
    }
  return(t);
}
ATerm construct_rows_0_0 (ATerm t)
{
  t = split_2_0(_id, z_1, t);
  {
    static ATerm r_12 (ATerm t);
    static ATerm r_12 (ATerm t)
    {
      ATerm m_11 = NULL,n_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL;
      if(match_cons(t, sym__2))
        {
          p_11 = ATgetArgument(t, 0);
          s_11 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = p_11;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm x_11 = NULL;
          t = s_11;
          t = reverse_0_0(t);
          x_11 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, x_11));
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              q_11 = ATgetFirst((ATermList) t);
              r_11 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = q_11;
          if(match_cons(t, sym_R_2))
            {
              m_11 = ATgetArgument(t, 0);
              n_11 = ATgetArgument(t, 1);
              {
                ATerm q_6 = t;
                int r_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm c_12 = NULL,d_12 = NULL;
                    t = s_11;
                    t = reverse_0_0(t);
                    c_12 = t;
                    t = (ATerm) ATmakeAppl(sym__2, r_11, (ATerm) ATempty);
                    t = r_12(t);
                    d_12 = t;
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(d_12), (ATerm) ATmakeAppl(sym_R_2, m_11, n_11)), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, c_12));
                    LocalPopChoice(r_6);
                  }
                else
                  {
                    t = q_6;
                    t = (ATerm) ATmakeAppl(sym__2, r_11, (ATerm) ATinsert(CheckATermList(s_11), q_11));
                    t = r_12(t);
                  }
              }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, r_11, (ATerm) ATinsert(CheckATermList(s_11), q_11));
              t = r_12(t);
            }
        }
      return(t);
    }
    t = r_12(t);
  }
  t = filter_1_0(b_2, t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm w_14 = NULL;
  if(match_cons(t, sym_R_2))
    {
      ATerm s_6 = ATgetArgument(t, 0);
      w_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_14;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm t_6 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = t_6;
    }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  if(!(match_cons(t, sym_VS_0)))
    _fail(t);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = _2_0(reverse_0_0, _id, t);
  return(t);
}
ATerm abox2text_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  static ATerm o_18 (ATerm h_14, ATerm i_14, ATerm j_14, ATerm k_14, ATerm l_14, ATerm t);
  static ATerm p_18 (ATerm y_14, ATerm z_14, ATerm a_15, ATerm b_15, ATerm t);
  static ATerm q_18 (ATerm j_15, ATerm k_15, ATerm l_15, ATerm m_15, ATerm t);
  static ATerm r_18 (ATerm z_15, ATerm a_16, ATerm b_16, ATerm c_16, ATerm t);
  static ATerm o_18 (ATerm h_14, ATerm i_14, ATerm j_14, ATerm k_14, ATerm l_14, ATerm t)
  {
    ATerm o_14 = NULL,p_14 = NULL,q_14 = NULL,s_14 = NULL,v_14 = NULL;
    t = j_14;
    t = construct_rows_0_0(t);
    t = map_1_0(d_2, t);
    {
      static ATerm f_2 (ATerm t);
      static ATerm f_2 (ATerm t)
      {
        static ATerm g_2 (ATerm t);
        static ATerm g_2 (ATerm t)
        {
          t = h_14;
          t = length_0_0(t);
          return(t);
        }
        t = FitToMax_1_0(g_2, t);
        return(t);
      }
      t = map_1_0(f_2, t);
    }
    t = matrix_transpose_0_0(t);
    t = reverse_0_0(t);
    t = add_indices_0_0(t);
    t = reverse_0_0(t);
    o_14 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_14, o_14);
    t = zip_0_0(t);
    p_14 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_14, (ATerm) ATmakeAppl(sym__2, k_14, (ATerm) ATempty));
    {
      static ATerm h_2 (ATerm t);
      static ATerm h_2 (ATerm t)
      {
        t = do_A_column_1_0(o_0, t);
        return(t);
      }
      t = foldl_1_0(h_2, t);
    }
    if(match_cons(t, sym__2))
      {
        s_14 = ATgetArgument(t, 0);
        q_14 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = q_14;
    t = reverse_0_0(t);
    t = matrix_transpose_0_0(t);
    {
      static ATerm i_2 (ATerm t);
      static ATerm i_2 (ATerm t)
      {
        ATerm x_14 = NULL;
        x_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_14, s_14);
        return(t);
      }
      t = map_1_0(i_2, t);
    }
    v_14 = t;
    t = (ATerm) ATmakeAppl(sym__3, i_14, v_14, k_14);
    t = p_7(i_14, v_14, k_14, t);
    return(t);
  }
  static ATerm p_18 (ATerm y_14, ATerm z_14, ATerm a_15, ATerm b_15, ATerm t)
  {
    ATerm d_15 = NULL,e_15 = NULL,h_15 = NULL;
    t = y_14;
    {
      ATerm u_6 = t;
      int v_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SOpt_value_1_0(r_2, t);
          LocalPopChoice(v_6);
        }
      else
        {
          t = u_6;
          t = term_l_4;
        }
    }
    h_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_15, h_15);
    t = add_0_0(t);
    e_15 = t;
    t = z_14;
    t = filter_1_0(is_real_vbox_0_0, t);
    d_15 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, a_15);
      }
    else
      {
        ATerm i_15 = NULL;
        t = (ATerm) ATmakeAppl(sym__3, a_15, e_15, d_15);
        t = s_7(o_0, a_15, e_15, d_15, t);
        i_15 = t;
        t = (ATerm) ATmakeAppl(sym__3, y_14, i_15, a_15);
        t = p_7(y_14, i_15, a_15, t);
      }
    return(t);
  }
  static ATerm q_18 (ATerm j_15, ATerm k_15, ATerm l_15, ATerm m_15, ATerm t)
  {
    ATerm p_15 = NULL,r_15 = NULL,s_15 = NULL,t_15 = NULL;
    static ATerm y_2 (ATerm t);
    static ATerm y_2 (ATerm t)
    {
      static ATerm a_3 (ATerm t);
      static ATerm a_3 (ATerm t)
      {
        ATerm y_15 = NULL;
        y_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_15, not_null(s_15));
        t = subt_0_0(t);
        return(t);
      }
      t = _2_0(z_2, a_3, t);
      return(t);
    }
    t = j_15;
    {
      ATerm w_6 = t;
      int x_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SOpt_value_1_0(s_2, t);
          LocalPopChoice(x_6);
        }
      else
        {
          t = w_6;
          t = term_x_5;
        }
    }
    t_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_15, term_y_4);
    t = copy_char_0_0(t);
    r_15 = t;
    t = string_length_0_0(t);
    if(((s_15 != NULL) && (s_15 != t)))
      _fail(t);
    else
      s_15 = t;
    t = k_15;
    t = filter_1_0(is_real_hbox_0_0, t);
    p_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_15, l_15);
    {
      static ATerm u_2 (ATerm t);
      static ATerm u_2 (ATerm t)
      {
        static ATerm w_2 (ATerm t);
        static ATerm w_2 (ATerm t)
        {
          ATerm v_15 = NULL;
          v_15 = t;
          t = (ATerm) ATmakeAppl(sym__2, s_15, v_15);
          t = add_0_0(t);
          return(t);
        }
        t = o_0(t);
        t = _2_0(_id, w_2, t);
        return(t);
      }
      t = thread_map_1_0(u_2, t);
    }
    {
      static ATerm x_2 (ATerm t);
      static ATerm x_2 (ATerm t)
      {
        ATerm w_15 = NULL;
        w_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_15, w_15);
        t = separate_by_0_0(t);
        return(t);
      }
      t = _2_0(x_2, _id, t);
    }
    t = try_1_0(y_2, t);
    return(t);
  }
  static ATerm r_18 (ATerm z_15, ATerm a_16, ATerm b_16, ATerm c_16, ATerm t)
  {
    ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL;
    t = z_15;
    {
      ATerm y_6 = t;
      int z_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SOpt_value_1_0(b_3, t);
          LocalPopChoice(z_6);
        }
      else
        {
          t = y_6;
          t = term_x_5;
        }
    }
    m_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_16, term_y_4);
    t = copy_char_0_0(t);
    g_16 = t;
    t = z_15;
    {
      ATerm a_7 = t;
      int b_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SOpt_value_1_0(f_3, t);
          LocalPopChoice(b_7);
        }
      else
        {
          t = a_7;
          t = term_l_4;
        }
    }
    t = inc_0_0(t);
    l_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_16, term_i_4);
    t = copy_char_0_0(t);
    t = g_16;
    t = string_length_0_0(t);
    e_16 = t;
    t = z_15;
    {
      ATerm c_7 = t;
      int d_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SOpt_value_1_0(g_3, t);
          LocalPopChoice(d_7);
        }
      else
        {
          t = c_7;
          t = term_l_4;
        }
    }
    k_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_16, k_16);
    t = add_0_0(t);
    f_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, b_16)));
    {
      static ATerm i_3 (ATerm t);
      static ATerm i_3 (ATerm t)
      {
        ATerm n_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL;
        r_16 = t;
        if(match_cons(t, sym__2))
          {
            s_16 = ATgetArgument(t, 0);
            t_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_16;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_16 = ATgetFirst((ATermList) t);
            q_16 = (ATerm) ATgetNext((ATermList) t);
            t = n_16;
            if(match_cons(t, sym__2))
              {
                o_16 = ATgetArgument(t, 0);
                p_16 = ATgetArgument(t, 1);
                {
                  ATerm e_7 = t;
                  int f_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      static ATerm j_3 (ATerm t);
                      static ATerm j_3 (ATerm t)
                      {
                        t = e_16;
                        return(t);
                      }
                      t = r_16;
                      t = r_7(o_0, j_3, s_16, o_16, p_16, q_16, t);
                      LocalPopChoice(f_7);
                    }
                  else
                    {
                      t = e_7;
                      {
                        static ATerm n_3 (ATerm t);
                        static ATerm p_3 (ATerm t);
                        static ATerm n_3 (ATerm t)
                        {
                          t = e_16;
                          return(t);
                        }
                        static ATerm p_3 (ATerm t)
                        {
                          t = f_16;
                          return(t);
                        }
                        t = r_16;
                        t = q_7(o_0, n_3, p_3, s_16, t_16, t);
                      }
                    }
                }
              }
            else
              {
                static ATerm q_3 (ATerm t);
                static ATerm r_3 (ATerm t);
                static ATerm q_3 (ATerm t)
                {
                  t = e_16;
                  return(t);
                }
                static ATerm r_3 (ATerm t)
                {
                  t = f_16;
                  return(t);
                }
                t = r_16;
                t = q_7(o_0, q_3, r_3, s_16, t_16, t);
              }
          }
        else
          {
            static ATerm s_3 (ATerm t);
            static ATerm t_3 (ATerm t);
            static ATerm s_3 (ATerm t)
            {
              t = e_16;
              return(t);
            }
            static ATerm t_3 (ATerm t)
            {
              t = f_16;
              return(t);
            }
            t = r_16;
            t = q_7(o_0, s_3, t_3, s_16, t_16, t);
          }
        return(t);
      }
      t = foldl_1_0(i_3, t);
    }
    t = reverse_0_0(t);
    t = map_1_0(u_3, t);
    {
      static ATerm x_3 (ATerm t);
      static ATerm x_3 (ATerm t)
      {
        static ATerm y_3 (ATerm t);
        static ATerm y_3 (ATerm t)
        {
          ATerm g_17 = NULL;
          g_17 = t;
          t = (ATerm) ATmakeAppl(sym__2, g_16, g_17);
          t = separate_by_0_0(t);
          return(t);
        }
        t = _2_0(y_3, _id, t);
        return(t);
      }
      t = map_1_0(x_3, t);
    }
    j_16 = t;
    t = (ATerm) ATmakeAppl(sym__3, z_15, j_16, b_16);
    t = p_7(z_15, j_16, b_16, t);
    return(t);
  }
  ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL;
  p_17 = t;
  if(match_cons(t, sym__2))
    {
      q_17 = ATgetArgument(t, 0);
      t_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_17;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_6, t_17);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_17 = ATgetFirst((ATermList) t);
          s_17 = (ATerm) ATgetNext((ATermList) t);
          t = s_17;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, r_17, t_17);
          t = o_0(t);
        }
      else
        {
          if(match_cons(t, sym_ALT_2))
            {
              r_17 = ATgetArgument(t, 0);
              s_17 = ATgetArgument(t, 1);
              {
                ATerm j_2 = NULL,k_2 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, r_17, t_17);
                t = o_0(t);
                j_2 = t;
                if(match_cons(t, sym__2))
                  {
                    ATerm i_7 = ATgetArgument(t, 0);
                    k_2 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_ALT_2, r_17, s_17), t_17);
                {
                  ATerm j_7 = t;
                  int k_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm q_2 = NULL;
                      t = get_width_0_0(t);
                      q_2 = t;
                      t = (ATerm) ATmakeAppl(sym__2, k_2, q_2);
                      t = leq_0_0(t);
                      LocalPopChoice(k_7);
                      t = j_2;
                    }
                  else
                    {
                      t = j_7;
                      t = (ATerm) ATmakeAppl(sym__2, s_17, t_17);
                      t = o_0(t);
                    }
                }
              }
            }
          else
            {
              if(match_cons(t, sym_R_2))
                {
                  r_17 = ATgetArgument(t, 0);
                  s_17 = ATgetArgument(t, 1);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, r_17, s_17), t_17);
                  t = o_0(t);
                }
              else
                {
                  ATerm l_7 = t;
                  int m_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_FBOX_2))
                        {
                          ATerm n_7 = ATgetArgument(t, 0);
                          s_17 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      LocalPopChoice(m_7);
                      t = (ATerm) ATmakeAppl(sym__2, s_17, t_17);
                      t = o_0(t);
                    }
                  else
                    {
                      t = l_7;
                      {
                        ATerm v_7 = t;
                        int w_7 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_C_2))
                              {
                                ATerm x_7 = ATgetArgument(t, 0);
                                s_17 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(w_7);
                            t = s_17;
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                i_17 = ATgetFirst((ATermList) t);
                                k_17 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = i_17;
                            if(match_cons(t, sym_S_1))
                              {
                                j_17 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = k_17;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym__2, j_17, t_17);
                          }
                        else
                          {
                            t = v_7;
                            if(match_cons(t, sym_S_1))
                              {
                                r_17 = ATgetArgument(t, 0);
                                {
                                  ATerm j_18 = NULL,k_18 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, r_17, t_17);
                                  t = u_7(r_17, t_17, t);
                                  k_18 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, t_17, k_18);
                                  t = add_0_0(t);
                                  j_18 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, r_17, j_18);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_A_3))
                                  {
                                    r_17 = ATgetArgument(t, 0);
                                    s_17 = ATgetArgument(t, 1);
                                    o_17 = ATgetArgument(t, 2);
                                    t = r_17;
                                    if(match_cons(t, sym_AOPTIONS_1))
                                      {
                                        n_17 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = o_17;
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        l_17 = ATgetFirst((ATermList) t);
                                        m_17 = (ATerm) ATgetNext((ATermList) t);
                                        t = m_17;
                                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                          {
                                            t = l_17;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm y_7 = t;
                                                int z_7 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = o_18(n_17, s_17, o_17, t_17, p_17, t);
                                                    LocalPopChoice(z_7);
                                                  }
                                                else
                                                  {
                                                    t = y_7;
                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, t_17);
                                                  }
                                              }
                                            else
                                              {
                                                t = o_18(n_17, s_17, o_17, t_17, p_17, t);
                                              }
                                          }
                                        else
                                          {
                                            t = l_17;
                                            t = o_18(n_17, s_17, o_17, t_17, p_17, t);
                                          }
                                      }
                                    else
                                      {
                                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                          {
                                            ATerm a_8 = t;
                                            int c_8 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = o_18(n_17, s_17, o_17, t_17, p_17, t);
                                                LocalPopChoice(c_8);
                                              }
                                            else
                                              {
                                                t = a_8;
                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, t_17);
                                              }
                                          }
                                        else
                                          {
                                            t = o_18(n_17, s_17, o_17, t_17, p_17, t);
                                          }
                                      }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_V_2))
                                      {
                                        r_17 = ATgetArgument(t, 0);
                                        s_17 = ATgetArgument(t, 1);
                                        t = p_18(r_17, s_17, t_17, p_17, t);
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_H_2))
                                          {
                                            r_17 = ATgetArgument(t, 0);
                                            s_17 = ATgetArgument(t, 1);
                                            t = q_18(r_17, s_17, t_17, p_17, t);
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_HV_2))
                                              {
                                                r_17 = ATgetArgument(t, 0);
                                                s_17 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = r_18(r_17, s_17, t_17, p_17, t);
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
ATerm try_abox2text_0_0 (ATerm t)
{
  ATerm e_8 = t;
  int f_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = abox2text_1_0(try_abox2text_0_0, t);
      LocalPopChoice(f_8);
    }
  else
    {
      t = e_8;
      {
        ATerm s_18 = NULL;
        s_18 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, s_18), term_g_8);
        t = fatal_error_0_0(t);
      }
    }
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm v_18 = NULL;
  v_18 = t;
  if(match_string(t, "-w"))
    {
      t = v_18;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--width", 0, ATtrue)))
        _fail(t);
      t = v_18;
    }
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm w_18 = NULL,x_18 = NULL;
  w_18 = t;
  t = string_to_int_0_0(t);
  x_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_4, x_18);
  t = set_config_0_0(t);
  t = w_18;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = term_h_8;
  return(t);
}
ATerm Abox_2_text_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_4, c_4, d_4, t);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm i_8 = t;
  int j_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Abox_2_text_options_0_0(t);
      LocalPopChoice(j_8);
    }
  else
    {
      t = i_8;
      t = io_options_0_0(t);
    }
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = xtc_io_1_0(g_4, t);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm y_18 = NULL,z_18 = NULL;
  t = read_from_0_0(t);
  z_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_18, term_l_4);
  t = try_abox2text_0_0(t);
  t = Fst_0_0(t);
  y_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_18, term_k_8);
  t = topdown_print_to_0_0(t);
  return(t);
}
ATerm io_Abox_2_text_0_0 (ATerm t)
{
  t = option_wrap_2_0(e_4, f_4, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_Abox_2_text_0_0(t);
  return(t);
}
