#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Meta_1;
Symbol sym_Syntax_1;
Symbol sym_TopSort_1;
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
Symbol sym_Specification_1;
Symbol sym_Module_2;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
static void init_module_constructors (void)
{
  sym_Meta_1 = ATmakeSymbol("Meta", 1, ATfalse);
  ATprotectSymbol(sym_Meta_1);
  sym_Syntax_1 = ATmakeSymbol("Syntax", 1, ATfalse);
  ATprotectSymbol(sym_Syntax_1);
  sym_TopSort_1 = ATmakeSymbol("TopSort", 1, ATfalse);
  ATprotectSymbol(sym_TopSort_1);
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
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Module_2 = ATmakeSymbol("Module", 2, ATfalse);
  ATprotectSymbol(sym_Module_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
}
ATerm term_x_7;
ATerm term_w_7;
ATerm term_n_7;
ATerm term_m_7;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_x_6;
ATerm term_w_6;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_r_6;
ATerm term_q_6;
ATerm term_p_6;
ATerm term_o_6;
ATerm term_n_6;
ATerm term_k_6;
ATerm term_j_6;
ATerm term_i_6;
ATerm term_d_6;
ATerm term_a_6;
ATerm term_z_5;
ATerm term_v_5;
ATerm term_u_5;
ATerm term_t_5;
ATerm term_s_5;
ATerm term_p_5;
ATerm term_o_5;
ATerm term_n_5;
ATerm term_m_5;
ATerm term_l_5;
ATerm term_i_5;
ATerm term_h_5;
ATerm term_g_5;
ATerm term_f_5;
ATerm term_e_5;
ATerm term_d_5;
ATerm term_c_5;
ATerm term_b_5;
ATerm term_y_4;
ATerm term_x_4;
ATerm term_w_4;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_w_4));
  term_w_4 = (ATerm) ATmakeAppl(ATmakeSymbol(" ** Warning: Mismatch between basename of input file (", 0, ATtrue));
  ATprotect(&(term_x_4));
  term_x_4 = (ATerm) ATmakeAppl(ATmakeSymbol(") and module name (", 0, ATtrue));
  ATprotect(&(term_y_4));
  term_y_4 = (ATerm) ATmakeAppl(ATmakeSymbol(") specified", 0, ATtrue));
  ATprotect(&(term_b_5));
  term_b_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_c_5));
  term_c_5 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax-definition: ", 0, ATtrue));
  ATprotect(&(term_d_5));
  term_d_5 = (ATerm) ATmakeAppl(ATmakeSymbol("def", 0, ATtrue));
  ATprotect(&(term_e_5));
  term_e_5 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax definition: ", 0, ATtrue));
  ATprotect(&(term_f_5));
  term_f_5 = (ATerm) ATmakeAppl(ATmakeSymbol("creating syntax definition", 0, ATtrue));
  ATprotect(&(term_g_5));
  term_g_5 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf", 0, ATtrue));
  ATprotect(&(term_h_5));
  term_h_5 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-sdf", 0, ATtrue));
  ATprotect(&(term_i_5));
  term_i_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_l_5));
  term_l_5 = (ATerm) ATmakeAppl(ATmakeSymbol("get-parse-table: ", 0, ATtrue));
  ATprotect(&(term_m_5));
  term_m_5 = (ATerm) ATmakeAppl(ATmakeSymbol("tbl", 0, ATtrue));
  ATprotect(&(term_n_5));
  term_n_5 = (ATerm) ATmakeAppl(ATmakeSymbol("using parse table: ", 0, ATtrue));
  ATprotect(&(term_o_5));
  term_o_5 = (ATerm) ATmakeAppl(ATmakeSymbol("creating parse table", 0, ATtrue));
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf2table", 0, ATtrue));
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(ATmakeSymbol("get-meta: ", 0, ATtrue));
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(ATmakeSymbol("meta", 0, ATtrue));
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(ATmakeSymbol("syn", 0, ATtrue));
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax: ", 0, ATtrue));
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax: ", 0, ATtrue));
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Meta data ", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" for module ", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" not valid: ", 0, ATtrue));
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--default-syntax", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-module: ", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--concrete", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("atree", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("meta-explode", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-desugar", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-I p|--Include p   include modules from directory p", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax syn        use syntax syn", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--default-syntax syn        use syntax syn as default", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(sym__2, term_i_7, term_j_7);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-silent ", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(sym__2, term_t_6, term_m_7);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("./", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm pass_verbose_0_0 (ATerm t);
ATerm xtc_transform_2_0 (ATerm i_109 (ATerm), ATerm j_109 (ATerm), ATerm t);
ATerm concat_strings_0_0 (ATerm t);
ATerm eq_0_0 (ATerm t);
ATerm get_filename_0_0 (ATerm t);
ATerm check_module_name_0_1 (ATerm a_0, ATerm t);
ATerm read_from_0_0 (ATerm t);
ATerm if_not_silent_1_0 (ATerm j_110 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm guarantee_extension_1_0 (ATerm l_107 (ATerm), ATerm t);
ATerm copy_to_1_0 (ATerm f_3 (ATerm), ATerm t);
ATerm if_keep1_1_0 (ATerm w_106 (ATerm), ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm if_verbose3_1_0 (ATerm f_105 (ATerm), ATerm t);
ATerm is_string_0_0 (ATerm t);
static ATerm c_0 (ATerm t);
ATerm pass_sort_0_0 (ATerm t);
ATerm rename_to_1_0 (ATerm e_3 (ATerm), ATerm t);
ATerm map_1_0 (ATerm r_89 (ATerm), ATerm t);
static ATerm d_0 (ATerm t);
static ATerm e_0 (ATerm t);
static ATerm g_0 (ATerm t);
static ATerm h_0 (ATerm t);
static ATerm i_0 (ATerm t);
static ATerm j_0 (ATerm t);
static ATerm k_0 (ATerm t);
static ATerm l_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm n_0 (ATerm t);
ATerm get_syntax_definition_0_0 (ATerm t);
ATerm say_1_0 (ATerm m_84 (ATerm), ATerm t);
ATerm find_in_path_0_0 (ATerm t);
ATerm find_in_includes_1_0 (ATerm k_20 (ATerm), ATerm t);
static ATerm q_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm h_1 (ATerm t);
ATerm get_parse_table_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm e_105 (ATerm), ATerm t);
ATerm error_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm d_90 (ATerm), ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm l_2 (ATerm t);
ATerm get_meta_0_0 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
ATerm get_syntax_0_0 (ATerm t);
ATerm basename_0_0 (ATerm t);
ATerm FILE_1_0 (ATerm i_81 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm y_84 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm i_105 (ATerm), ATerm t);
static ATerm d_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm z_3 (ATerm t);
ATerm parse_module_0_0 (ATerm t);
ATerm extend_config_0_0 (ATerm t);
ATerm xtc_find_path_0_0 (ATerm t);
ATerm set_config_0_0 (ATerm t);
ATerm Option_3_0 (ATerm g_3 (ATerm), ATerm h_3 (ATerm), ATerm i_3 (ATerm), ATerm t);
ATerm ArgOption_3_0 (ATerm j_3 (ATerm), ATerm k_3 (ATerm), ATerm l_3 (ATerm), ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
ATerm parse_stratego_options_0_0 (ATerm t);
ATerm xtc_iowrap_2_0 (ATerm a_109 (ATerm), ATerm b_109 (ATerm), ATerm t);
static ATerm p_4 (ATerm t);
ATerm parse_stratego_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm check_module_name_0_1 (ATerm a_0, ATerm t)
{
  ATerm t_0 = NULL,u_0 = NULL;
  t_0 = t;
  {
    ATerm q_4 = t;
    int r_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Specification_1))
          {
            ATerm s_4 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(r_4);
        t = t_0;
      }
    else
      {
        t = q_4;
        if(match_cons(t, sym_Module_2))
          {
            u_0 = ATgetArgument(t, 0);
            {
              ATerm t_4 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = t_0;
        {
          ATerm u_4 = t;
          int v_4 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_0 = NULL;
              t = a_0;
              t = get_filename_0_0(t);
              f_0 = t;
              t = (ATerm) ATmakeAppl(sym__2, u_0, f_0);
              t = eq_0_0(t);
              LocalPopChoice(v_4);
            }
          else
            {
              t = u_4;
              {
                static ATerm b_0 (ATerm t);
                static ATerm b_0 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_4), u_0), term_x_4), a_0), term_w_4);
                  t = concat_strings_0_0(t);
                  return(t);
                }
                t = say_1_0(b_0, t);
              }
            }
        }
      }
  }
  return(t);
}
static ATerm c_0 (ATerm t)
{
  ATerm c_1 = NULL;
  if(match_cons(t, sym_TopSort_1))
    {
      c_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_1;
  return(t);
}
ATerm pass_sort_0_0 (ATerm t)
{
  ATerm z_4 = t;
  int a_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_0 = NULL,a_1 = NULL;
      t = get_meta_0_0(t);
      if(match_cons(t, sym_Meta_1))
        {
          a_1 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_1;
      t = fetch_elem_1_0(c_0, t);
      t = is_string_0_0(t);
      x_0 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, x_0), term_b_5);
      LocalPopChoice(a_5);
    }
  else
    {
      t = z_4;
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm d_0 (ATerm t)
{
  t = debug_1_0(e_0, t);
  return(t);
}
static ATerm e_0 (ATerm t)
{
  t = term_c_5;
  return(t);
}
static ATerm g_0 (ATerm t)
{
  t = term_d_5;
  return(t);
}
static ATerm h_0 (ATerm t)
{
  t = term_e_5;
  return(t);
}
static ATerm i_0 (ATerm t)
{
  t = say_1_0(j_0, t);
  return(t);
}
static ATerm j_0 (ATerm t)
{
  t = term_f_5;
  return(t);
}
static ATerm k_0 (ATerm t)
{
  t = term_g_5;
  return(t);
}
static ATerm l_0 (ATerm t)
{
  t = term_h_5;
  return(t);
}
static ATerm m_0 (ATerm t)
{
  t = term_i_5;
  t = get_config_0_0(t);
  t = map_1_0(n_0, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm n_0 (ATerm t)
{
  ATerm n_1 = NULL;
  n_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_1), term_i_5);
  return(t);
}
ATerm get_syntax_definition_0_0 (ATerm t)
{
  ATerm e_1 = NULL,g_1 = NULL;
  t = if_verbose6_1_0(d_0, t);
  g_1 = t;
  t = guarantee_extension_1_0(g_0, t);
  e_1 = t;
  t = g_1;
  {
    ATerm j_5 = t;
    int k_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_1 = NULL;
        t = e_1;
        t = find_in_includes_1_0(h_0, t);
        k_1 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, k_1);
        LocalPopChoice(k_5);
      }
    else
      {
        t = j_5;
        {
          ATerm m_1 = NULL;
          static ATerm o_0 (ATerm t);
          static ATerm o_0 (ATerm t)
          {
            t = e_1;
            return(t);
          }
          t = if_verbose2_1_0(i_0, t);
          t = guarantee_extension_1_0(k_0, t);
          m_1 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, m_1);
          t = xtc_transform_2_0(l_0, m_0, t);
          t = rename_to_1_0(o_0, t);
        }
      }
  }
  return(t);
}
ATerm find_in_includes_1_0 (ATerm k_20 (ATerm), ATerm t)
{
  ATerm o_1 = NULL,p_1 = NULL;
  static ATerm p_0 (ATerm t);
  static ATerm p_0 (ATerm t)
  {
    t = debug_1_0(k_20, t);
    return(t);
  }
  p_1 = t;
  t = term_i_5;
  t = get_config_0_0(t);
  o_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_1, o_1);
  t = find_in_path_0_0(t);
  t = if_verbose2_1_0(p_0, t);
  return(t);
}
static ATerm q_0 (ATerm t)
{
  t = debug_1_0(r_0, t);
  return(t);
}
static ATerm r_0 (ATerm t)
{
  t = term_l_5;
  return(t);
}
static ATerm s_0 (ATerm t)
{
  t = term_m_5;
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = term_n_5;
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = say_1_0(y_0, t);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  t = term_o_5;
  return(t);
}
static ATerm z_0 (ATerm t)
{
  t = term_p_5;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = debug_1_0(h_1, t);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_n_5;
  return(t);
}
ATerm get_parse_table_0_0 (ATerm t)
{
  ATerm q_1 = NULL,r_1 = NULL;
  t = if_verbose6_1_0(q_0, t);
  q_1 = t;
  t = guarantee_extension_1_0(s_0, t);
  r_1 = t;
  {
    ATerm q_5 = t;
    int r_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_1 = NULL;
        t = find_in_includes_1_0(v_0, t);
        s_1 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, s_1);
        LocalPopChoice(r_5);
      }
    else
      {
        t = q_5;
        {
          static ATerm d_1 (ATerm t);
          static ATerm d_1 (ATerm t)
          {
            t = r_1;
            return(t);
          }
          t = if_verbose2_1_0(w_0, t);
          t = q_1;
          t = get_syntax_definition_0_0(t);
          {
            static ATerm b_1 (ATerm t);
            static ATerm b_1 (ATerm t)
            {
              t = (ATerm) ATinsert(ATinsert(ATempty, q_1), term_s_5);
              return(t);
            }
            t = xtc_transform_2_0(z_0, b_1, t);
          }
          t = rename_to_1_0(d_1, t);
        }
      }
  }
  t = if_verbose6_1_0(f_1, t);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = debug_1_0(j_1, t);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_t_5;
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = guarantee_extension_1_0(v_1, t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_u_5;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = guarantee_extension_1_0(b_2, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = term_v_5;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = debug_1_0(l_2, t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_t_5;
  return(t);
}
ATerm get_meta_0_0 (ATerm t)
{
  ATerm t_1 = NULL;
  t = if_verbose6_1_0(i_1, t);
  {
    ATerm w_5 = t;
    int x_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = FILE_1_0(l_1, t);
        t = read_from_0_0(t);
        LocalPopChoice(x_5);
      }
    else
      {
        t = w_5;
        {
          ATerm u_1 = NULL;
          t = FILE_1_0(z_1, t);
          t = read_from_0_0(t);
          u_1 = t;
          t = SSL_explode_term(u_1);
          if(match_cons(t, sym__2))
            {
              t_1 = ATgetArgument(t, 0);
              {
                ATerm y_5 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Meta_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Syntax_1, t_1)));
        }
      }
  }
  t = if_verbose6_1_0(c_2, t);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = debug_1_0(r_2, t);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = term_z_5;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm a_2 = NULL;
  if(match_cons(t, sym_Syntax_1))
    {
      a_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_2;
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = debug_1_0(c_3, t);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_a_6;
  return(t);
}
ATerm get_syntax_0_0 (ATerm t)
{
  ATerm w_1 = NULL;
  t = if_verbose6_1_0(q_2, t);
  if(match_cons(t, sym_FILE_1))
    {
      w_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm b_6 = t;
    int c_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_d_6;
        t = get_config_0_0(t);
        LocalPopChoice(c_6);
      }
    else
      {
        t = b_6;
        {
          ATerm e_6 = t;
          int f_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_1 = NULL,y_1 = NULL;
              t = get_meta_0_0(t);
              y_1 = t;
              if(match_cons(t, sym_Meta_1))
                {
                  x_1 = ATgetArgument(t, 0);
                  {
                    ATerm g_6 = t;
                    int h_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = x_1;
                        t = fetch_elem_1_0(a_3, t);
                        LocalPopChoice(h_6);
                      }
                    else
                      {
                        t = g_6;
                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_6), w_1), term_j_6), y_1), term_i_6);
                        t = error_0_0(t);
                        _fail(t);
                      }
                  }
                }
              else
                {
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_6), w_1), term_j_6), y_1), term_i_6);
                  t = error_0_0(t);
                  _fail(t);
                }
              LocalPopChoice(f_6);
            }
          else
            {
              t = e_6;
              {
                ATerm l_6 = t;
                int m_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_n_6;
                    t = get_config_0_0(t);
                    LocalPopChoice(m_6);
                  }
                else
                  {
                    t = l_6;
                    t = term_o_6;
                  }
              }
            }
        }
      }
  }
  t = if_verbose2_1_0(b_3, t);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = debug_1_0(m_3, t);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = term_p_6;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = term_q_6;
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_r_6);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_s_6;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm k_2 = NULL,m_2 = NULL,n_2 = NULL;
  t = pass_verbose_0_0(t);
  m_2 = t;
  t = term_t_6;
  {
    ATerm u_6 = t;
    int v_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(v_6);
        t = (ATerm) ATinsert(ATempty, term_w_6);
      }
    else
      {
        t = u_6;
        t = (ATerm) ATempty;
      }
  }
  n_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_2), m_2);
  t = concat_0_0(t);
  k_2 = t;
  t = (ATerm) ATinsert(CheckATermList(k_2), term_x_6);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_y_6;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_z_6;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm o_2 = NULL,p_2 = NULL;
  t = pass_verbose_0_0(t);
  o_2 = t;
  t = term_t_6;
  {
    ATerm a_7 = t;
    int b_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(b_7);
        t = (ATerm) ATinsert(ATempty, term_t_6);
      }
    else
      {
        t = a_7;
        t = (ATerm) ATempty;
      }
  }
  p_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_2), o_2);
  t = concat_0_0(t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_c_7;
  return(t);
}
ATerm parse_module_0_0 (ATerm t)
{
  ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL,g_2 = NULL,h_2 = NULL;
  t = if_verbose6_1_0(d_3, t);
  h_2 = t;
  {
    static ATerm n_3 (ATerm t);
    static ATerm n_3 (ATerm t)
    {
      t = basename_0_0(t);
      if(((f_2 != NULL) && (f_2 != t)))
        _fail(t);
      else
        f_2 = t;
      return(t);
    }
    t = FILE_1_0(n_3, t);
  }
  t = h_2;
  t = get_syntax_0_0(t);
  t = get_parse_table_0_0(t);
  if(match_cons(t, sym_FILE_1))
    {
      d_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_2;
  t = pass_sort_0_0(t);
  e_2 = t;
  t = h_2;
  {
    static ATerm p_3 (ATerm t);
    static ATerm p_3 (ATerm t)
    {
      ATerm i_2 = NULL,j_2 = NULL;
      t = (ATerm) ATempty;
      t = if_verbose3_1_0(q_3, t);
      j_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_2, e_2);
      t = conc_0_0(t);
      i_2 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(i_2), d_2), term_e_7), term_d_7);
      return(t);
    }
    t = xtc_transform_2_0(o_3, p_3, t);
  }
  t = xtc_transform_2_0(r_3, s_3, t);
  {
    static ATerm t_3 (ATerm t);
    static ATerm t_3 (ATerm t)
    {
      static ATerm u_3 (ATerm t);
      static ATerm u_3 (ATerm t)
      {
        t = not_null(f_2);
        t = guarantee_extension_1_0(v_3, t);
        return(t);
      }
      t = copy_to_1_0(u_3, t);
      return(t);
    }
    t = if_keep1_1_0(t_3, t);
  }
  t = xtc_transform_2_0(w_3, x_3, t);
  g_2 = t;
  {
    static ATerm y_3 (ATerm t);
    static ATerm y_3 (ATerm t)
    {
      t = read_from_0_0(t);
      t = check_module_name_0_1(not_null(f_2), t);
      return(t);
    }
    t = if_not_silent_1_0(y_3, t);
  }
  t = g_2;
  t = xtc_transform_2_0(z_3, pass_verbose_0_0, t);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm s_2 = NULL;
  s_2 = t;
  if(match_string(t, "-I"))
    {
      t = s_2;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = s_2;
    }
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm t_2 = NULL;
  t_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_5, (ATerm) ATinsert(ATempty, t_2));
  t = extend_config_0_0(t);
  t = t_2;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = term_f_7;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--syntax", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm u_2 = NULL;
  u_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_6, u_2);
  t = set_config_0_0(t);
  t = u_2;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = term_g_7;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--default-syntax", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm v_2 = NULL;
  v_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_6, v_2);
  t = set_config_0_0(t);
  t = v_2;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = term_h_7;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-silent", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm w_2 = NULL;
  w_2 = t;
  t = term_k_7;
  t = set_config_0_0(t);
  t = w_2;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = term_l_7;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm x_2 = NULL;
  x_2 = t;
  t = term_n_7;
  t = set_config_0_0(t);
  t = x_2;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_t_6;
  return(t);
}
ATerm parse_stratego_options_0_0 (ATerm t)
{
  ATerm o_7 = t;
  int p_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(a_4, b_4, c_4, t);
      LocalPopChoice(p_7);
    }
  else
    {
      t = o_7;
      {
        ATerm q_7 = t;
        int r_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(d_4, e_4, f_4, t);
            LocalPopChoice(r_7);
          }
        else
          {
            t = q_7;
            {
              ATerm s_7 = t;
              int t_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(g_4, h_4, i_4, t);
                  LocalPopChoice(t_7);
                }
              else
                {
                  t = s_7;
                  {
                    ATerm u_7 = t;
                    int v_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(j_4, k_4, l_4, t);
                        LocalPopChoice(v_7);
                      }
                    else
                      {
                        t = u_7;
                        t = Option_3_0(m_4, n_4, o_4, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm y_2 = NULL,z_2 = NULL;
  y_2 = t;
  t = term_w_7;
  t = xtc_find_path_0_0(t);
  z_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_5, (ATerm) ATinsert(ATinsert(ATempty, z_2), term_x_7));
  t = extend_config_0_0(t);
  t = y_2;
  t = parse_module_0_0(t);
  return(t);
}
ATerm parse_stratego_0_0 (ATerm t)
{
  t = xtc_iowrap_2_0(parse_stratego_options_0_0, p_4, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = parse_stratego_0_0(t);
  return(t);
}
