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
Symbol sym_Cons_1;
Symbol sym_Nil_0;
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
  sym_Cons_1 = ATmakeSymbol("Cons", 1, ATfalse);
  ATprotectSymbol(sym_Cons_1);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
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
}
ATerm term_j_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_r_6;
ATerm term_j_6;
ATerm term_a_6;
ATerm term_c_5;
ATerm term_a_5;
ATerm term_s_4;
ATerm term_r_4;
ATerm term_o_4;
ATerm term_l_4;
ATerm term_k_4;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_k_4));
  term_k_4 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_l_4));
  term_l_4 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_o_4));
  term_o_4 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_r_4));
  term_r_4 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_s_4));
  term_s_4 = (ATerm) ATmakeInt(80);
  ATprotect(&(term_a_5));
  term_a_5 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_c_5));
  term_c_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: too many columns in row: ", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: invalid box: ", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-w int | --width int       Specifies max width of output.", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm close_file_0_0 (ATerm t);
ATerm print_0_0 (ATerm t);
ATerm is_string_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm t_88 (ATerm), ATerm t);
ATerm open_file_0_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm topdown_print_to_0_0 (ATerm t);
ATerm Fst_0_0 (ATerm t);
ATerm fatal_error_0_0 (ATerm t);
ATerm add_0_0 (ATerm t);
ATerm string_tokenize_0_0 (ATerm t);
static ATerm u_7 (ATerm m_7, ATerm n_7, ATerm t);
ATerm leq_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm get_width_0_0 (ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm i_0 (ATerm t);
static ATerm k_0 (ATerm t);
static ATerm u_3 (ATerm d_2, ATerm b_2, ATerm t);
static ATerm v_3 (ATerm c_0, ATerm n_0, ATerm e_0, ATerm t);
ATerm separate_by_0_0 (ATerm t);
ATerm _2_0 (ATerm i_73 (ATerm), ATerm j_73 (ATerm), ATerm t);
ATerm map_1_0 (ATerm g_93 (ATerm), ATerm t);
ATerm reverse_0_0 (ATerm t);
static ATerm w_3 (ATerm i_9 (ATerm), ATerm j_9 (ATerm), ATerm k_9 (ATerm), ATerm g_4, ATerm f_4, ATerm t);
static ATerm r_7 (ATerm g_9 (ATerm), ATerm h_9 (ATerm), ATerm b_4, ATerm z_3, ATerm c_4, ATerm a_4, ATerm t);
ATerm foldl_1_0 (ATerm z_100 (ATerm), ATerm t);
ATerm fetch_1_0 (ATerm q_93 (ATerm), ATerm t);
ATerm SOpt_value_1_0 (ATerm c_10 (ATerm), ATerm t);
ATerm string_length_0_0 (ATerm t);
ATerm copy_char_0_0 (ATerm t);
ATerm inc_0_0 (ATerm t);
ATerm subt_0_0 (ATerm t);
ATerm Nil_0_0 (ATerm t);
ATerm try_1_0 (ATerm a_108 (ATerm), ATerm t);
ATerm thread_map_1_0 (ATerm l_101 (ATerm), ATerm t);
ATerm is_real_hbox_0_0 (ATerm t);
ATerm filter_1_0 (ATerm y_101 (ATerm), ATerm t);
static ATerm s_7 (ATerm n_9 (ATerm), ATerm w_4, ATerm x_4, ATerm y_4, ATerm t);
ATerm Cons_2_0 (ATerm w_79 (ATerm), ATerm x_79 (ATerm), ATerm t);
static ATerm a_1 (ATerm t);
static ATerm d_1 (ATerm t);
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
static ATerm f_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm t_7 (ATerm r_9 (ATerm), ATerm v_5, ATerm u_5, ATerm q_5, ATerm s_5, ATerm p_5, ATerm t);
ATerm do_A_column_1_0 (ATerm r_9 (ATerm), ATerm t);
ATerm zip_0_0 (ATerm t);
ATerm add_indices_0_0 (ATerm t);
ATerm length_0_0 (ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm copy_0_0 (ATerm t);
ATerm gt_0_0 (ATerm t);
ATerm FitToMax_1_0 (ATerm t_9 (ATerm), ATerm t);
ATerm split_2_0 (ATerm i_92 (ATerm), ATerm j_92 (ATerm), ATerm t);
static ATerm w_1 (ATerm t);
static ATerm a_2 (ATerm t);
ATerm construct_rows_0_0 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm s_3 (ATerm t);
ATerm abox2text_1_0 (ATerm o_0 (ATerm), ATerm t);
ATerm try_abox2text_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
ATerm xtc_io_1_0 (ATerm n_112 (ATerm), ATerm t);
ATerm io_options_0_0 (ATerm t);
ATerm set_config_0_0 (ATerm t);
ATerm string_to_int_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm o_3 (ATerm), ATerm p_3 (ATerm), ATerm q_3 (ATerm), ATerm t);
static ATerm y_3 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
ATerm Abox_2_text_options_0_0 (ATerm t);
ATerm option_wrap_2_0 (ATerm m_114 (ATerm), ATerm n_114 (ATerm), ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
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
  ATerm b_0 = NULL,f_0 = NULL;
  b_0 = t;
  t = xtc_new_file_0_0(t);
  f_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_0, term_k_4);
  t = open_file_0_0(t);
  t = b_0;
  {
    static ATerm a_0 (ATerm t);
    static ATerm a_0 (ATerm t)
    {
      static ATerm h_0 (ATerm t);
      static ATerm h_0 (ATerm t)
      {
        ATerm g_0 = NULL;
        t = is_string_0_0(t);
        g_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_0, (ATerm) ATinsert(ATempty, g_0));
        t = print_0_0(t);
        t = g_0;
        return(t);
      }
      t = try_1_0(h_0, t);
      return(t);
    }
    t = topdown_1_0(a_0, t);
  }
  t = f_0;
  t = close_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, f_0);
  return(t);
}
static ATerm u_7 (ATerm m_7, ATerm n_7, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_l_4), m_7);
  t = string_tokenize_0_0(t);
  {
    ATerm m_4 = t;
    int n_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_12 = NULL,x_12 = NULL;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = term_o_4;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                w_12 = ATgetFirst((ATermList) t);
                x_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = x_12;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = w_12;
            t = string_length_0_0(t);
          }
        LocalPopChoice(n_4);
      }
    else
      {
        t = m_4;
        {
          ATerm z_12 = NULL;
          t = last_0_0(t);
          t = string_length_0_0(t);
          z_12 = t;
          t = (ATerm) ATmakeAppl(sym__2, z_12, n_7);
          t = subt_0_0(t);
        }
      }
  }
  return(t);
}
ATerm get_width_0_0 (ATerm t)
{
  ATerm p_4 = t;
  int q_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_4;
      t = get_config_0_0(t);
      LocalPopChoice(q_4);
    }
  else
    {
      t = p_4;
      t = term_s_4;
    }
  return(t);
}
static ATerm i_0 (ATerm t)
{
  if(!(match_cons(t, sym_VS_0)))
    _fail(t);
  return(t);
}
static ATerm k_0 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
static ATerm u_3 (ATerm d_2, ATerm b_2, ATerm t)
{
  ATerm p_0 = NULL,r_0 = NULL,t_0 = NULL,v_0 = NULL,x_0 = NULL;
  t = d_2;
  {
    ATerm t_4 = t;
    int u_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(i_0, t);
        LocalPopChoice(u_4);
      }
    else
      {
        t = t_4;
        t = term_o_4;
      }
  }
  t = inc_0_0(t);
  x_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_0, term_l_4);
  t = copy_char_0_0(t);
  p_0 = t;
  t = d_2;
  {
    ATerm v_4 = t;
    int z_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(k_0, t);
        LocalPopChoice(z_4);
      }
    else
      {
        t = v_4;
        t = term_o_4;
      }
  }
  v_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_0, term_a_5);
  t = copy_char_0_0(t);
  r_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_2, term_a_5);
  t = copy_char_0_0(t);
  t_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, t_0), r_0), p_0);
  t = concat_strings_0_0(t);
  return(t);
}
static ATerm v_3 (ATerm c_0, ATerm n_0, ATerm e_0, ATerm t)
{
  ATerm y_0 = NULL,z_0 = NULL,b_1 = NULL,c_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, c_0, e_0);
  t = u_3(c_0, e_0, t);
  z_0 = t;
  t = n_0;
  t = last_0_0(t);
  if(match_cons(t, sym__2))
    {
      ATerm b_5 = ATgetArgument(t, 0);
      y_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_0;
  t = map_1_0(Fst_0_0, t);
  c_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_0, c_1);
  t = separate_by_0_0(t);
  b_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_1, y_0);
  return(t);
}
static ATerm w_3 (ATerm i_9 (ATerm), ATerm j_9 (ATerm), ATerm k_9 (ATerm), ATerm g_4, ATerm f_4, ATerm t)
{
  ATerm h_1 = NULL,i_1 = NULL,j_1 = NULL,l_1 = NULL,n_1 = NULL;
  t = term_c_5;
  t = k_9(t);
  n_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_4, n_1);
  t = i_9(t);
  if(match_cons(t, sym__2))
    {
      h_1 = ATgetArgument(t, 0);
      i_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_c_5;
  t = j_9(t);
  l_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_1, l_1);
  t = add_0_0(t);
  j_1 = t;
  t = (ATerm) ATinsert(CheckATermList(f_4), (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, h_1), j_1));
  return(t);
}
static ATerm r_7 (ATerm g_9 (ATerm), ATerm h_9 (ATerm), ATerm b_4, ATerm z_3, ATerm c_4, ATerm a_4, ATerm t)
{
  ATerm s_1 = NULL,t_1 = NULL,u_1 = NULL,v_1 = NULL,x_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, b_4, c_4);
  t = g_9(t);
  if(match_cons(t, sym__2))
    {
      s_1 = ATgetArgument(t, 0);
      t_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_c_5;
  t = get_width_0_0(t);
  x_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_1, x_1);
  t = leq_0_0(t);
  t = term_c_5;
  t = h_9(t);
  v_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_1, v_1);
  t = add_0_0(t);
  u_1 = t;
  t = (ATerm) ATinsert(CheckATermList(a_4), (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_3), s_1), u_1));
  return(t);
}
ATerm SOpt_value_1_0 (ATerm c_10 (ATerm), ATerm t)
{
  ATerm y_1 = NULL;
  static ATerm l_0 (ATerm t);
  static ATerm l_0 (ATerm t)
  {
    ATerm z_1 = NULL,f_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL,d_0 = NULL;
    n_2 = t;
    if(match_cons(t, sym_SOpt_2))
      {
        f_2 = ATgetArgument(t, 0);
        l_2 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(n_2);
    z_1 = t;
    t = f_2;
    t = c_10(t);
    m_2 = t;
    t = l_2;
    if(((y_1 != NULL) && (y_1 != t)))
      _fail(t);
    else
      y_1 = t;
    t = (ATerm) ATmakeAppl(sym_SOpt_2, m_2, l_2);
    d_0 = t;
    t = SSLsetAnnotations(d_0, z_1);
    return(t);
  }
  t = fetch_1_0(l_0, t);
  t = not_null(y_1);
  t = string_to_int_0_0(t);
  return(t);
}
ATerm is_real_hbox_0_0 (ATerm t)
{
  ATerm d_5 = t;
  if((PushChoice() == 0))
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
          {
            ATerm a_3 = NULL,c_3 = NULL,d_3 = NULL,j_0 = NULL,q_0 = NULL,s_0 = NULL,q_2 = NULL;
            a_3 = t;
            if(match_cons(t, sym_H_2))
              {
                c_3 = ATgetArgument(t, 0);
                d_3 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(a_3);
            j_0 = t;
            t = c_3;
            t = Nil_0_0(t);
            q_0 = t;
            t = d_3;
            t = Nil_0_0(t);
            s_0 = t;
            t = (ATerm) ATmakeAppl(sym_H_2, q_0, s_0);
            q_2 = t;
            t = SSLsetAnnotations(q_2, j_0);
          }
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = d_5;
    }
  return(t);
}
static ATerm s_7 (ATerm n_9 (ATerm), ATerm w_4, ATerm x_4, ATerm y_4, ATerm t)
{
  static ATerm m_0 (ATerm t);
  static ATerm u_0 (ATerm t);
  static ATerm m_0 (ATerm t)
  {
    ATerm i_3 = NULL;
    i_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_3, w_4);
    t = n_9(t);
    return(t);
  }
  static ATerm u_0 (ATerm t)
  {
    static ATerm w_0 (ATerm t);
    static ATerm w_0 (ATerm t)
    {
      ATerm l_3 = NULL;
      l_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_3, x_4);
      t = n_9(t);
      return(t);
    }
    t = map_1_0(w_0, t);
    return(t);
  }
  t = y_4;
  t = Cons_2_0(m_0, u_0, t);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  t = Cons_2_0(d_1, Nil_0_0, t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm g_5 = t;
  int h_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      LocalPopChoice(h_5);
    }
  else
    {
      t = g_5;
      t = Cons_2_0(Nil_0_0, Nil_0_0, t);
    }
  return(t);
}
ATerm is_real_vbox_0_0 (ATerm t)
{
  ATerm i_5 = t;
  if((PushChoice() == 0))
    {
      ATerm j_5 = t;
      int k_5 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0_0(t);
          LocalPopChoice(k_5);
        }
      else
        {
          t = j_5;
          {
            ATerm o_5 = NULL,g_1 = NULL,k_1 = NULL,o_1 = NULL;
            o_5 = t;
            t = SSL_explode_term(o_5);
            if(match_cons(t, sym__2))
              {
                g_1 = ATgetArgument(t, 0);
                k_1 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = k_1;
            t = Cons_2_0(_id, a_1, t);
            o_1 = t;
            t = SSL_mkterm(g_1, o_1);
          }
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_5;
    }
  return(t);
}
ATerm align_column_0_0 (ATerm t)
{
  ATerm c_8 = NULL,l_8 = NULL,o_8 = NULL,p_8 = NULL,s_8 = NULL;
  l_8 = t;
  if(match_cons(t, sym__3))
    {
      o_8 = ATgetArgument(t, 0);
      p_8 = ATgetArgument(t, 1);
      s_8 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = p_8;
  {
    ATerm l_5 = t;
    int m_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_AL_1))
          {
            ATerm n_5 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(m_5);
        t = s_8;
        {
          ATerm r_5 = t;
          int t_5 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym__3))
                {
                  ATerm w_5 = ATgetArgument(t, 0);
                  c_8 = ATgetArgument(t, 1);
                  {
                    ATerm x_5 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(t_5);
              t = o_8;
              if(match_int(t, 1))
                {
                  ATerm y_5 = t;
                  int z_5 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATmakeAppl(sym__2, o_8, term_a_6);
                      t = gt_0_0(t);
                      t = s_8;
                      t = align_left_0_0(t);
                      LocalPopChoice(z_5);
                    }
                  else
                    {
                      t = y_5;
                      t = c_8;
                    }
                }
              else
                {
                  t = (ATerm) ATmakeAppl(sym__2, o_8, term_a_6);
                  t = gt_0_0(t);
                  t = s_8;
                  t = align_left_0_0(t);
                }
            }
          else
            {
              t = r_5;
              t = (ATerm) ATmakeAppl(sym__2, o_8, term_a_6);
              t = gt_0_0(t);
              t = s_8;
              t = align_left_0_0(t);
            }
        }
      }
    else
      {
        t = l_5;
        {
          ATerm b_6 = t;
          int c_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_AC_1))
                {
                  ATerm d_6 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(c_6);
              t = s_8;
              t = align_center_0_0(t);
            }
          else
            {
              t = b_6;
              if(match_cons(t, sym_AR_1))
                {
                  ATerm e_6 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = s_8;
              t = align_right_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = map_1_0(m_1, t);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = try_1_0(p_1, t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = flatten_list_0_0(t);
  t = concat_strings_0_0(t);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
static ATerm t_7 (ATerm r_9 (ATerm), ATerm v_5, ATerm u_5, ATerm q_5, ATerm s_5, ATerm p_5, ATerm t)
{
  ATerm y_9 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL;
  t = q_5;
  {
    static ATerm e_1 (ATerm t);
    static ATerm e_1 (ATerm t)
    {
      ATerm m_10 = NULL;
      m_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_10, s_5);
      t = r_9(t);
      return(t);
    }
    t = map_1_0(e_1, t);
  }
  t = unzip_0_0(t);
  t = _2_0(f_1, list_max_0_0, t);
  if(match_cons(t, sym__2))
    {
      f_10 = ATgetArgument(t, 0);
      y_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_9, s_5);
  t = subt_0_0(t);
  g_10 = t;
  {
    ATerm f_6 = t;
    int g_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, u_5, term_a_6);
        t = gt_0_0(t);
        LocalPopChoice(g_6);
        {
          ATerm n_10 = NULL,p_10 = NULL;
          t = v_5;
          if(match_cons(t, sym_AC_1))
            {
              p_10 = ATgetArgument(t, 0);
              t = p_10;
            }
          else
            {
              if(match_cons(t, sym_AR_1))
                {
                  p_10 = ATgetArgument(t, 0);
                  t = p_10;
                }
              else
                {
                  if(match_cons(t, sym_AL_1))
                    {
                      p_10 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = p_10;
                }
            }
          {
            ATerm h_6 = t;
            int i_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SOpt_value_1_0(q_1, t);
                LocalPopChoice(i_6);
              }
            else
              {
                t = h_6;
                t = term_a_6;
              }
          }
          n_10 = t;
          t = (ATerm) ATmakeAppl(sym__2, n_10, term_a_5);
          t = copy_char_0_0(t);
        }
      }
    else
      {
        t = f_6;
        t = term_j_6;
      }
  }
  h_10 = t;
  t = f_10;
  {
    static ATerm r_1 (ATerm t);
    static ATerm r_1 (ATerm t)
    {
      ATerm t_10 = NULL,u_10 = NULL;
      u_10 = t;
      t = (ATerm) ATmakeAppl(sym__3, u_5, v_5, (ATerm) ATmakeAppl(sym__3, term_a_5, u_10, g_10));
      t = align_column_0_0(t);
      t_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_10, h_10);
      t = conc_strings_0_0(t);
      return(t);
    }
    t = map_1_0(r_1, t);
  }
  i_10 = t;
  t = h_10;
  t = string_length_0_0(t);
  k_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_10, y_9);
  t = add_0_0(t);
  j_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_10, (ATerm) ATinsert(CheckATermList(p_5), i_10));
  return(t);
}
ATerm do_A_column_1_0 (ATerm r_9 (ATerm), ATerm t)
{
  ATerm v_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_6 = ATgetArgument(t, 0);
      if(match_cons(k_6, sym__2))
        {
          v_10 = ATgetArgument(k_6, 0);
          {
            ATerm m_6 = ATgetArgument(k_6, 1);
            if(match_cons(m_6, sym__2))
              {
                w_10 = ATgetArgument(m_6, 0);
                x_10 = ATgetArgument(m_6, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm l_6 = ATgetArgument(t, 1);
        if(match_cons(l_6, sym__2))
          {
            y_10 = ATgetArgument(l_6, 0);
            z_10 = ATgetArgument(l_6, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = t_7(r_9, v_10, w_10, x_10, y_10, z_10, t);
  return(t);
}
ATerm FitToMax_1_0 (ATerm t_9 (ATerm), ATerm t)
{
  ATerm b_11 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL;
  e_11 = t;
  t = length_0_0(t);
  b_11 = t;
  t = term_c_5;
  t = t_9(t);
  f_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_11, b_11);
  t = subt_0_0(t);
  c_11 = t;
  {
    ATerm n_6 = t;
    int o_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, c_11, term_o_4);
        t = gt_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, c_11, (ATerm) ATempty);
        t = copy_0_0(t);
        d_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_11, d_11);
        t = conc_0_0(t);
        LocalPopChoice(o_6);
      }
    else
      {
        t = n_6;
        {
          ATerm p_6 = t;
          int q_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
                _fail(t);
              t = e_11;
              LocalPopChoice(q_6);
            }
          else
            {
              t = p_6;
              t = (ATerm) ATinsert(ATinsert(ATempty, e_11), term_r_6);
              t = fatal_error_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm s_6 = t;
  if((PushChoice() == 0))
    {
      ATerm n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL,s_2 = NULL;
      r_12 = t;
      if(match_cons(t, sym_R_2))
        {
          o_12 = ATgetArgument(t, 0);
          p_12 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(r_12);
      n_12 = t;
      t = p_12;
      t = Nil_0_0(t);
      q_12 = t;
      t = (ATerm) ATmakeAppl(sym_R_2, o_12, q_12);
      s_2 = t;
      t = SSLsetAnnotations(s_2, n_12);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = s_6;
    }
  return(t);
}
ATerm construct_rows_0_0 (ATerm t)
{
  t = split_2_0(_id, w_1, t);
  {
    static ATerm s_12 (ATerm t);
    static ATerm s_12 (ATerm t)
    {
      ATerm n_11 = NULL,o_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL;
      if(match_cons(t, sym__2))
        {
          q_11 = ATgetArgument(t, 0);
          t_11 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = q_11;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm y_11 = NULL;
          t = t_11;
          t = reverse_0_0(t);
          y_11 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, y_11));
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              r_11 = ATgetFirst((ATermList) t);
              s_11 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = r_11;
          if(match_cons(t, sym_R_2))
            {
              n_11 = ATgetArgument(t, 0);
              o_11 = ATgetArgument(t, 1);
              {
                ATerm t_6 = t;
                int u_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm d_12 = NULL,e_12 = NULL;
                    t = t_11;
                    t = reverse_0_0(t);
                    d_12 = t;
                    t = (ATerm) ATmakeAppl(sym__2, s_11, (ATerm) ATempty);
                    t = s_12(t);
                    e_12 = t;
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(e_12), (ATerm) ATmakeAppl(sym_R_2, n_11, o_11)), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, d_12));
                    LocalPopChoice(u_6);
                  }
                else
                  {
                    t = t_6;
                    t = (ATerm) ATmakeAppl(sym__2, s_11, (ATerm) ATinsert(CheckATermList(t_11), r_11));
                    t = s_12(t);
                  }
              }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, s_11, (ATerm) ATinsert(CheckATermList(t_11), r_11));
              t = s_12(t);
            }
        }
      return(t);
    }
    t = s_12(t);
  }
  t = filter_1_0(a_2, t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm x_14 = NULL;
  if(match_cons(t, sym_R_2))
    {
      ATerm v_6 = ATgetArgument(t, 0);
      x_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_14;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm w_6 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = w_6;
    }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  if(!(match_cons(t, sym_VS_0)))
    _fail(t);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  t = _2_0(reverse_0_0, _id, t);
  return(t);
}
ATerm abox2text_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  static ATerm p_18 (ATerm i_14, ATerm j_14, ATerm k_14, ATerm l_14, ATerm m_14, ATerm t);
  static ATerm q_18 (ATerm z_14, ATerm a_15, ATerm b_15, ATerm c_15, ATerm t);
  static ATerm r_18 (ATerm k_15, ATerm l_15, ATerm m_15, ATerm n_15, ATerm t);
  static ATerm s_18 (ATerm a_16, ATerm b_16, ATerm c_16, ATerm d_16, ATerm t);
  static ATerm p_18 (ATerm i_14, ATerm j_14, ATerm k_14, ATerm l_14, ATerm m_14, ATerm t)
  {
    ATerm p_14 = NULL,q_14 = NULL,r_14 = NULL,t_14 = NULL,w_14 = NULL;
    t = k_14;
    t = construct_rows_0_0(t);
    t = map_1_0(c_2, t);
    {
      static ATerm e_2 (ATerm t);
      static ATerm e_2 (ATerm t)
      {
        static ATerm g_2 (ATerm t);
        static ATerm g_2 (ATerm t)
        {
          t = i_14;
          t = length_0_0(t);
          return(t);
        }
        t = FitToMax_1_0(g_2, t);
        return(t);
      }
      t = map_1_0(e_2, t);
    }
    t = matrix_transpose_0_0(t);
    t = reverse_0_0(t);
    t = add_indices_0_0(t);
    t = reverse_0_0(t);
    p_14 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_14, p_14);
    t = zip_0_0(t);
    q_14 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_14, (ATerm) ATmakeAppl(sym__2, l_14, (ATerm) ATempty));
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
        t_14 = ATgetArgument(t, 0);
        r_14 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = r_14;
    t = reverse_0_0(t);
    t = matrix_transpose_0_0(t);
    {
      static ATerm i_2 (ATerm t);
      static ATerm i_2 (ATerm t)
      {
        ATerm y_14 = NULL;
        y_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_14, t_14);
        return(t);
      }
      t = map_1_0(i_2, t);
    }
    w_14 = t;
    t = (ATerm) ATmakeAppl(sym__3, j_14, w_14, l_14);
    t = v_3(j_14, w_14, l_14, t);
    return(t);
  }
  static ATerm q_18 (ATerm z_14, ATerm a_15, ATerm b_15, ATerm c_15, ATerm t)
  {
    ATerm e_15 = NULL,f_15 = NULL,i_15 = NULL;
    t = z_14;
    {
      ATerm x_6 = t;
      int y_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SOpt_value_1_0(j_2, t);
          LocalPopChoice(y_6);
        }
      else
        {
          t = x_6;
          t = term_o_4;
        }
    }
    i_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_15, i_15);
    t = add_0_0(t);
    f_15 = t;
    t = a_15;
    t = filter_1_0(is_real_vbox_0_0, t);
    e_15 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, b_15);
      }
    else
      {
        ATerm j_15 = NULL;
        t = (ATerm) ATmakeAppl(sym__3, b_15, f_15, e_15);
        t = s_7(o_0, b_15, f_15, e_15, t);
        j_15 = t;
        t = (ATerm) ATmakeAppl(sym__3, z_14, j_15, b_15);
        t = v_3(z_14, j_15, b_15, t);
      }
    return(t);
  }
  static ATerm r_18 (ATerm k_15, ATerm l_15, ATerm m_15, ATerm n_15, ATerm t)
  {
    ATerm q_15 = NULL,s_15 = NULL,t_15 = NULL,u_15 = NULL;
    static ATerm w_2 (ATerm t);
    static ATerm w_2 (ATerm t)
    {
      static ATerm y_2 (ATerm t);
      static ATerm y_2 (ATerm t)
      {
        ATerm z_15 = NULL;
        z_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_15, not_null(t_15));
        t = subt_0_0(t);
        return(t);
      }
      t = _2_0(x_2, y_2, t);
      return(t);
    }
    t = k_15;
    {
      ATerm z_6 = t;
      int a_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SOpt_value_1_0(r_2, t);
          LocalPopChoice(a_7);
        }
      else
        {
          t = z_6;
          t = term_a_6;
        }
    }
    u_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_15, term_a_5);
    t = copy_char_0_0(t);
    s_15 = t;
    t = string_length_0_0(t);
    if(((t_15 != NULL) && (t_15 != t)))
      _fail(t);
    else
      t_15 = t;
    t = l_15;
    t = filter_1_0(is_real_hbox_0_0, t);
    q_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_15, m_15);
    {
      static ATerm t_2 (ATerm t);
      static ATerm t_2 (ATerm t)
      {
        static ATerm u_2 (ATerm t);
        static ATerm u_2 (ATerm t)
        {
          ATerm w_15 = NULL;
          w_15 = t;
          t = (ATerm) ATmakeAppl(sym__2, t_15, w_15);
          t = add_0_0(t);
          return(t);
        }
        t = o_0(t);
        t = _2_0(_id, u_2, t);
        return(t);
      }
      t = thread_map_1_0(t_2, t);
    }
    {
      static ATerm v_2 (ATerm t);
      static ATerm v_2 (ATerm t)
      {
        ATerm x_15 = NULL;
        x_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_15, x_15);
        t = separate_by_0_0(t);
        return(t);
      }
      t = _2_0(v_2, _id, t);
    }
    t = try_1_0(w_2, t);
    return(t);
  }
  static ATerm s_18 (ATerm a_16, ATerm b_16, ATerm c_16, ATerm d_16, ATerm t)
  {
    ATerm f_16 = NULL,g_16 = NULL,h_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL;
    t = a_16;
    {
      ATerm b_7 = t;
      int c_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SOpt_value_1_0(z_2, t);
          LocalPopChoice(c_7);
        }
      else
        {
          t = b_7;
          t = term_a_6;
        }
    }
    n_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_16, term_a_5);
    t = copy_char_0_0(t);
    h_16 = t;
    t = a_16;
    {
      ATerm d_7 = t;
      int e_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SOpt_value_1_0(b_3, t);
          LocalPopChoice(e_7);
        }
      else
        {
          t = d_7;
          t = term_o_4;
        }
    }
    t = inc_0_0(t);
    m_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_16, term_l_4);
    t = copy_char_0_0(t);
    t = h_16;
    t = string_length_0_0(t);
    f_16 = t;
    t = a_16;
    {
      ATerm f_7 = t;
      int g_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SOpt_value_1_0(e_3, t);
          LocalPopChoice(g_7);
        }
      else
        {
          t = f_7;
          t = term_o_4;
        }
    }
    l_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_16, l_16);
    t = add_0_0(t);
    g_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, c_16)));
    {
      static ATerm f_3 (ATerm t);
      static ATerm f_3 (ATerm t)
      {
        ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL;
        s_16 = t;
        if(match_cons(t, sym__2))
          {
            t_16 = ATgetArgument(t, 0);
            u_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_16;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_16 = ATgetFirst((ATermList) t);
            r_16 = (ATerm) ATgetNext((ATermList) t);
            t = o_16;
            if(match_cons(t, sym__2))
              {
                p_16 = ATgetArgument(t, 0);
                q_16 = ATgetArgument(t, 1);
                {
                  ATerm h_7 = t;
                  int i_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      static ATerm g_3 (ATerm t);
                      static ATerm g_3 (ATerm t)
                      {
                        t = f_16;
                        return(t);
                      }
                      t = s_16;
                      t = r_7(o_0, g_3, t_16, p_16, q_16, r_16, t);
                      LocalPopChoice(i_7);
                    }
                  else
                    {
                      t = h_7;
                      {
                        static ATerm h_3 (ATerm t);
                        static ATerm j_3 (ATerm t);
                        static ATerm h_3 (ATerm t)
                        {
                          t = f_16;
                          return(t);
                        }
                        static ATerm j_3 (ATerm t)
                        {
                          t = g_16;
                          return(t);
                        }
                        t = s_16;
                        t = w_3(o_0, h_3, j_3, t_16, u_16, t);
                      }
                    }
                }
              }
            else
              {
                static ATerm k_3 (ATerm t);
                static ATerm m_3 (ATerm t);
                static ATerm k_3 (ATerm t)
                {
                  t = f_16;
                  return(t);
                }
                static ATerm m_3 (ATerm t)
                {
                  t = g_16;
                  return(t);
                }
                t = s_16;
                t = w_3(o_0, k_3, m_3, t_16, u_16, t);
              }
          }
        else
          {
            static ATerm n_3 (ATerm t);
            static ATerm r_3 (ATerm t);
            static ATerm n_3 (ATerm t)
            {
              t = f_16;
              return(t);
            }
            static ATerm r_3 (ATerm t)
            {
              t = g_16;
              return(t);
            }
            t = s_16;
            t = w_3(o_0, n_3, r_3, t_16, u_16, t);
          }
        return(t);
      }
      t = foldl_1_0(f_3, t);
    }
    t = reverse_0_0(t);
    t = map_1_0(s_3, t);
    {
      static ATerm t_3 (ATerm t);
      static ATerm t_3 (ATerm t)
      {
        static ATerm x_3 (ATerm t);
        static ATerm x_3 (ATerm t)
        {
          ATerm h_17 = NULL;
          h_17 = t;
          t = (ATerm) ATmakeAppl(sym__2, h_16, h_17);
          t = separate_by_0_0(t);
          return(t);
        }
        t = _2_0(x_3, _id, t);
        return(t);
      }
      t = map_1_0(t_3, t);
    }
    k_16 = t;
    t = (ATerm) ATmakeAppl(sym__3, a_16, k_16, c_16);
    t = v_3(a_16, k_16, c_16, t);
    return(t);
  }
  ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL;
  q_17 = t;
  if(match_cons(t, sym__2))
    {
      r_17 = ATgetArgument(t, 0);
      u_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_17;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATmakeAppl(sym__2, term_j_6, u_17);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_17 = ATgetFirst((ATermList) t);
          t_17 = (ATerm) ATgetNext((ATermList) t);
          t = t_17;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, s_17, u_17);
          t = o_0(t);
        }
      else
        {
          if(match_cons(t, sym_ALT_2))
            {
              s_17 = ATgetArgument(t, 0);
              t_17 = ATgetArgument(t, 1);
              {
                ATerm k_2 = NULL,o_2 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, s_17, u_17);
                t = o_0(t);
                k_2 = t;
                if(match_cons(t, sym__2))
                  {
                    ATerm j_7 = ATgetArgument(t, 0);
                    o_2 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_ALT_2, s_17, t_17), u_17);
                {
                  ATerm k_7 = t;
                  int l_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm p_2 = NULL;
                      t = get_width_0_0(t);
                      p_2 = t;
                      t = (ATerm) ATmakeAppl(sym__2, o_2, p_2);
                      t = leq_0_0(t);
                      LocalPopChoice(l_7);
                      t = k_2;
                    }
                  else
                    {
                      t = k_7;
                      t = (ATerm) ATmakeAppl(sym__2, t_17, u_17);
                      t = o_0(t);
                    }
                }
              }
            }
          else
            {
              if(match_cons(t, sym_R_2))
                {
                  s_17 = ATgetArgument(t, 0);
                  t_17 = ATgetArgument(t, 1);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, s_17, t_17), u_17);
                  t = o_0(t);
                }
              else
                {
                  ATerm o_7 = t;
                  int p_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_FBOX_2))
                        {
                          ATerm q_7 = ATgetArgument(t, 0);
                          t_17 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      LocalPopChoice(p_7);
                      t = (ATerm) ATmakeAppl(sym__2, t_17, u_17);
                      t = o_0(t);
                    }
                  else
                    {
                      t = o_7;
                      {
                        ATerm v_7 = t;
                        int w_7 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_C_2))
                              {
                                ATerm x_7 = ATgetArgument(t, 0);
                                t_17 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(w_7);
                            t = t_17;
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                j_17 = ATgetFirst((ATermList) t);
                                l_17 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = j_17;
                            if(match_cons(t, sym_S_1))
                              {
                                k_17 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = l_17;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym__2, k_17, u_17);
                          }
                        else
                          {
                            t = v_7;
                            if(match_cons(t, sym_S_1))
                              {
                                s_17 = ATgetArgument(t, 0);
                                {
                                  ATerm k_18 = NULL,l_18 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, s_17, u_17);
                                  t = u_7(s_17, u_17, t);
                                  l_18 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, u_17, l_18);
                                  t = add_0_0(t);
                                  k_18 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, s_17, k_18);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_A_3))
                                  {
                                    s_17 = ATgetArgument(t, 0);
                                    t_17 = ATgetArgument(t, 1);
                                    p_17 = ATgetArgument(t, 2);
                                    t = s_17;
                                    if(match_cons(t, sym_AOPTIONS_1))
                                      {
                                        o_17 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = p_17;
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        m_17 = ATgetFirst((ATermList) t);
                                        n_17 = (ATerm) ATgetNext((ATermList) t);
                                        t = n_17;
                                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                          {
                                            t = m_17;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm y_7 = t;
                                                int z_7 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = p_18(o_17, t_17, p_17, u_17, q_17, t);
                                                    LocalPopChoice(z_7);
                                                  }
                                                else
                                                  {
                                                    t = y_7;
                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, u_17);
                                                  }
                                              }
                                            else
                                              {
                                                t = p_18(o_17, t_17, p_17, u_17, q_17, t);
                                              }
                                          }
                                        else
                                          {
                                            t = m_17;
                                            t = p_18(o_17, t_17, p_17, u_17, q_17, t);
                                          }
                                      }
                                    else
                                      {
                                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                          {
                                            ATerm a_8 = t;
                                            int b_8 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = p_18(o_17, t_17, p_17, u_17, q_17, t);
                                                LocalPopChoice(b_8);
                                              }
                                            else
                                              {
                                                t = a_8;
                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, u_17);
                                              }
                                          }
                                        else
                                          {
                                            t = p_18(o_17, t_17, p_17, u_17, q_17, t);
                                          }
                                      }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_V_2))
                                      {
                                        s_17 = ATgetArgument(t, 0);
                                        t_17 = ATgetArgument(t, 1);
                                        t = q_18(s_17, t_17, u_17, q_17, t);
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_H_2))
                                          {
                                            s_17 = ATgetArgument(t, 0);
                                            t_17 = ATgetArgument(t, 1);
                                            t = r_18(s_17, t_17, u_17, q_17, t);
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_HV_2))
                                              {
                                                s_17 = ATgetArgument(t, 0);
                                                t_17 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = s_18(s_17, t_17, u_17, q_17, t);
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
  ATerm d_8 = t;
  int e_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = abox2text_1_0(try_abox2text_0_0, t);
      LocalPopChoice(e_8);
    }
  else
    {
      t = d_8;
      {
        ATerm t_18 = NULL;
        t_18 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, t_18), term_f_8);
        t = fatal_error_0_0(t);
      }
    }
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm w_18 = NULL;
  w_18 = t;
  if(match_string(t, "-w"))
    {
      t = w_18;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--width", 0, ATtrue)))
        _fail(t);
      t = w_18;
    }
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm x_18 = NULL,y_18 = NULL;
  x_18 = t;
  t = string_to_int_0_0(t);
  y_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_4, y_18);
  t = set_config_0_0(t);
  t = x_18;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_g_8;
  return(t);
}
ATerm Abox_2_text_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_3, d_4, e_4, t);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm h_8 = t;
  int i_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Abox_2_text_options_0_0(t);
      LocalPopChoice(i_8);
    }
  else
    {
      t = h_8;
      t = io_options_0_0(t);
    }
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = xtc_io_1_0(j_4, t);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm z_18 = NULL,a_19 = NULL;
  t = read_from_0_0(t);
  a_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_19, term_o_4);
  t = try_abox2text_0_0(t);
  t = Fst_0_0(t);
  z_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_18, term_j_8);
  t = topdown_print_to_0_0(t);
  return(t);
}
ATerm io_Abox_2_text_0_0 (ATerm t)
{
  t = option_wrap_2_0(h_4, i_4, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_Abox_2_text_0_0(t);
  return(t);
}
