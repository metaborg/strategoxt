#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Meta_1;
Symbol sym_Syntax_1;
Symbol sym_TopSort_1;
Symbol sym_HeuristicFilters_1;
Symbol sym_Off_0;
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
Symbol sym_Specification_1;
Symbol sym_Module_2;
static void init_module_constructors (void)
{
  sym_Meta_1 = ATmakeSymbol("Meta", 1, ATfalse);
  ATprotectSymbol(sym_Meta_1);
  sym_Syntax_1 = ATmakeSymbol("Syntax", 1, ATfalse);
  ATprotectSymbol(sym_Syntax_1);
  sym_TopSort_1 = ATmakeSymbol("TopSort", 1, ATfalse);
  ATprotectSymbol(sym_TopSort_1);
  sym_HeuristicFilters_1 = ATmakeSymbol("HeuristicFilters", 1, ATfalse);
  ATprotectSymbol(sym_HeuristicFilters_1);
  sym_Off_0 = ATmakeSymbol("Off", 0, ATfalse);
  ATprotectSymbol(sym_Off_0);
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
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Module_2 = ATmakeSymbol("Module", 2, ATfalse);
  ATprotectSymbol(sym_Module_2);
}
ATerm term_l_9;
ATerm term_k_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_h_8;
ATerm term_e_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_x_7;
ATerm term_w_7;
ATerm term_v_7;
ATerm term_u_7;
ATerm term_t_7;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_y_6;
ATerm term_x_6;
ATerm term_w_6;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_r_6;
ATerm term_q_6;
ATerm term_p_6;
ATerm term_m_6;
ATerm term_l_6;
ATerm term_k_6;
ATerm term_j_6;
ATerm term_i_6;
ATerm term_h_6;
ATerm term_g_6;
ATerm term_f_6;
ATerm term_e_6;
ATerm term_d_6;
ATerm term_z_5;
ATerm term_w_5;
ATerm term_v_5;
ATerm term_u_5;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(ATmakeSymbol(" ** Warning: Mismatch between basename of input file (", 0, ATtrue));
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(ATmakeSymbol(") and module name (", 0, ATtrue));
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(ATmakeSymbol(") specified", 0, ATtrue));
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-fi", 0, ATtrue));
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-fe", 0, ATtrue));
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax-definition: ", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol("def", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax definition: ", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("creating syntax definition", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf", 0, ATtrue));
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-sdf", 0, ATtrue));
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("get-parse-table: ", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol("tbl", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("using parse table: ", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("creating parse table", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf2table", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax: ", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax: ", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--default-syntax", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("get-meta: ", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("meta", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("syn", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("** Warning: Meta data ", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" for module ", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" not valid.", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(sym_Meta_1, (ATerm) ATempty);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-module: ", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr arguments: ", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--concrete", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("atree", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("meta-explode", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-desugar", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--desugaring", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-I p|--Include p   include modules from directory p", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax syn        use syntax syn", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--default-syntax syn        use syntax syn as default", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(sym__2, term_t_8, term_u_8);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-silent ", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(sym__2, term_a_8, term_x_8);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--desugaring on/off : turn desugaring on or off (default: on)", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("./", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm pass_verbose_0_0 (ATerm t);
ATerm xtc_transform_2_0 (ATerm k_118 (ATerm), ATerm l_118 (ATerm), ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm concat_strings_0_0 (ATerm t);
ATerm get_filename_0_0 (ATerm t);
ATerm check_module_name_0_1 (ATerm a_0, ATerm t);
ATerm read_from_0_0 (ATerm t);
ATerm if_not_silent_1_0 (ATerm l_119 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm guarantee_extension_1_0 (ATerm n_116 (ATerm), ATerm t);
ATerm copy_to_1_0 (ATerm v_3 (ATerm), ATerm t);
ATerm if_keep1_1_0 (ATerm y_115 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm w_92 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm k_114 (ATerm), ATerm t);
ATerm is_string_0_0 (ATerm t);
ATerm pass_sort_0_0 (ATerm t);
static ATerm e_0 (ATerm t);
ATerm pass_filters_0_0 (ATerm t);
ATerm if_verbose3_1_0 (ATerm h_114 (ATerm), ATerm t);
static ATerm f_0 (ATerm t);
ATerm pass_sglr_verbose_0_0 (ATerm t);
ATerm rename_to_1_0 (ATerm u_3 (ATerm), ATerm t);
ATerm map_1_0 (ATerm o_97 (ATerm), ATerm t);
static ATerm g_0 (ATerm t);
static ATerm h_0 (ATerm t);
static ATerm i_0 (ATerm t);
static ATerm j_0 (ATerm t);
static ATerm k_0 (ATerm t);
static ATerm l_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm o_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm v_0 (ATerm t);
ATerm get_syntax_definition_0_0 (ATerm t);
ATerm say_1_0 (ATerm k_92 (ATerm), ATerm t);
ATerm find_in_path_0_0 (ATerm t);
ATerm find_in_includes_1_0 (ATerm n_22 (ATerm), ATerm t);
static ATerm y_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm u_1 (ATerm t);
ATerm get_parse_table_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm g_114 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm a_98 (ATerm), ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
ATerm get_syntax_0_0 (ATerm t);
ATerm error_0_0 (ATerm t);
ATerm is_list_0_0 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
ATerm get_meta_0_0 (ATerm t);
ATerm basename_0_0 (ATerm t);
ATerm FILE_1_0 (ATerm g_89 (ATerm), ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm t_4 (ATerm t);
ATerm parse_module_0_0 (ATerm t);
ATerm extend_config_0_0 (ATerm t);
ATerm xtc_find_path_0_0 (ATerm t);
ATerm set_config_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm z_3 (ATerm), ATerm a_4 (ATerm), ATerm b_4 (ATerm), ATerm t);
ATerm Option_3_0 (ATerm w_3 (ATerm), ATerm x_3 (ATerm), ATerm y_3 (ATerm), ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
ATerm parse_stratego_options_0_0 (ATerm t);
ATerm xtc_iowrap_2_0 (ATerm c_118 (ATerm), ATerm d_118 (ATerm), ATerm t);
static ATerm m_5 (ATerm t);
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
  ATerm z_0 = NULL,a_1 = NULL;
  z_0 = t;
  {
    ATerm n_5 = t;
    int o_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Specification_1))
          {
            ATerm p_5 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(o_5);
        t = z_0;
      }
    else
      {
        t = n_5;
        if(match_cons(t, sym_Module_2))
          {
            a_1 = ATgetArgument(t, 0);
            {
              ATerm q_5 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = z_0;
        {
          ATerm r_5 = t;
          int s_5 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_5 = t;
              if((PushChoice() == 0))
                {
                  t = a_0;
                  t = get_filename_0_0(t);
                  if((a_1 != t))
                    {
                      _fail(t);
                    }
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = t_5;
                }
              t = z_0;
              LocalPopChoice(s_5);
              {
                static ATerm b_0 (ATerm t);
                static ATerm b_0 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_5), a_1), term_v_5), a_0), term_u_5);
                  t = concat_strings_0_0(t);
                  return(t);
                }
                t = say_1_0(b_0, t);
              }
            }
          else
            {
              t = r_5;
            }
        }
      }
  }
  return(t);
}
ATerm pass_sort_0_0 (ATerm t)
{
  ATerm f_1 = NULL;
  ATerm x_5 = t;
  int y_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_1 = NULL,i_1 = NULL;
      g_1 = t;
      if(match_cons(t, sym_Meta_1))
        {
          i_1 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_1;
      {
        static ATerm c_0 (ATerm t);
        static ATerm c_0 (ATerm t)
        {
          if(match_cons(t, sym_TopSort_1))
            {
              if(((f_1 != NULL) && (f_1 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                f_1 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_elem_1_0(c_0, t);
      }
      t = g_1;
      LocalPopChoice(y_5);
      {
        ATerm j_1 = NULL;
        t = not_null(f_1);
        t = is_string_0_0(t);
        j_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, j_1), term_z_5);
      }
    }
  else
    {
      t = x_5;
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm e_0 (ATerm t)
{
  if(match_cons(t, sym_HeuristicFilters_1))
    {
      ATerm a_6 = ATgetArgument(t, 0);
      if(!(match_cons(a_6, sym_Off_0)))
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm pass_filters_0_0 (ATerm t)
{
  ATerm b_6 = t;
  int c_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_1 = NULL,n_1 = NULL;
      k_1 = t;
      if(match_cons(t, sym_Meta_1))
        {
          n_1 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_1;
      t = fetch_elem_1_0(e_0, t);
      t = k_1;
      LocalPopChoice(c_6);
      t = (ATerm) ATinsert(ATinsert(ATempty, term_e_6), term_d_6);
    }
  else
    {
      t = b_6;
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm f_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_f_6);
  return(t);
}
ATerm pass_sglr_verbose_0_0 (ATerm t)
{
  t = (ATerm) ATempty;
  t = if_verbose3_1_0(f_0, t);
  return(t);
}
static ATerm g_0 (ATerm t)
{
  t = debug_1_0(h_0, t);
  return(t);
}
static ATerm h_0 (ATerm t)
{
  t = term_g_6;
  return(t);
}
static ATerm i_0 (ATerm t)
{
  t = term_h_6;
  return(t);
}
static ATerm j_0 (ATerm t)
{
  t = term_i_6;
  return(t);
}
static ATerm k_0 (ATerm t)
{
  t = say_1_0(l_0, t);
  return(t);
}
static ATerm l_0 (ATerm t)
{
  t = term_j_6;
  return(t);
}
static ATerm m_0 (ATerm t)
{
  t = term_k_6;
  return(t);
}
static ATerm o_0 (ATerm t)
{
  t = term_l_6;
  return(t);
}
static ATerm u_0 (ATerm t)
{
  t = term_m_6;
  t = get_config_0_0(t);
  t = map_1_0(v_0, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm x_1 = NULL;
  x_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_1), term_m_6);
  return(t);
}
ATerm get_syntax_definition_0_0 (ATerm t)
{
  ATerm o_1 = NULL,p_1 = NULL;
  t = if_verbose6_1_0(g_0, t);
  p_1 = t;
  t = guarantee_extension_1_0(i_0, t);
  o_1 = t;
  t = p_1;
  {
    ATerm n_6 = t;
    int o_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_1 = NULL;
        t = o_1;
        t = find_in_includes_1_0(j_0, t);
        r_1 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, r_1);
        LocalPopChoice(o_6);
      }
    else
      {
        t = n_6;
        {
          ATerm t_1 = NULL;
          static ATerm w_0 (ATerm t);
          static ATerm w_0 (ATerm t)
          {
            t = o_1;
            return(t);
          }
          t = if_verbose2_1_0(k_0, t);
          t = guarantee_extension_1_0(m_0, t);
          t_1 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, t_1);
          t = xtc_transform_2_0(o_0, u_0, t);
          t = rename_to_1_0(w_0, t);
        }
      }
  }
  return(t);
}
ATerm find_in_includes_1_0 (ATerm n_22 (ATerm), ATerm t)
{
  ATerm z_1 = NULL,f_2 = NULL;
  static ATerm x_0 (ATerm t);
  static ATerm x_0 (ATerm t)
  {
    t = debug_1_0(n_22, t);
    return(t);
  }
  f_2 = t;
  t = term_m_6;
  t = get_config_0_0(t);
  z_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_2, z_1);
  t = find_in_path_0_0(t);
  t = if_verbose2_1_0(x_0, t);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  t = debug_1_0(b_1, t);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = term_p_6;
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = term_q_6;
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = term_r_6;
  return(t);
}
static ATerm e_1 (ATerm t)
{
  t = say_1_0(h_1, t);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_s_6;
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_t_6;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = debug_1_0(u_1, t);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = term_r_6;
  return(t);
}
ATerm get_parse_table_0_0 (ATerm t)
{
  ATerm g_2 = NULL,h_2 = NULL;
  t = if_verbose6_1_0(y_0, t);
  g_2 = t;
  t = guarantee_extension_1_0(c_1, t);
  h_2 = t;
  {
    ATerm u_6 = t;
    int v_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_2 = NULL;
        t = find_in_includes_1_0(d_1, t);
        i_2 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, i_2);
        LocalPopChoice(v_6);
      }
    else
      {
        t = u_6;
        {
          static ATerm q_1 (ATerm t);
          static ATerm q_1 (ATerm t)
          {
            t = h_2;
            return(t);
          }
          t = if_verbose2_1_0(e_1, t);
          t = g_2;
          t = get_syntax_definition_0_0(t);
          {
            static ATerm m_1 (ATerm t);
            static ATerm m_1 (ATerm t)
            {
              t = (ATerm) ATinsert(ATinsert(ATempty, g_2), term_w_6);
              return(t);
            }
            t = xtc_transform_2_0(l_1, m_1, t);
          }
          t = rename_to_1_0(q_1, t);
        }
      }
  }
  t = if_verbose6_1_0(s_1, t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = debug_1_0(w_1, t);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = term_x_6;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm n_2 = NULL;
  if(match_cons(t, sym_Syntax_1))
    {
      n_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_2;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = debug_1_0(b_2, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = term_y_6;
  return(t);
}
ATerm get_syntax_0_0 (ATerm t)
{
  t = if_verbose6_1_0(v_1, t);
  {
    ATerm z_6 = t;
    int a_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_2 = NULL;
        if(match_cons(t, sym_Meta_1))
          {
            l_2 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = l_2;
        t = fetch_elem_1_0(y_1, t);
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
              t = term_d_7;
              t = get_config_0_0(t);
              LocalPopChoice(c_7);
            }
          else
            {
              t = b_7;
              t = term_e_7;
            }
        }
      }
  }
  t = if_verbose2_1_0(a_2, t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = debug_1_0(d_2, t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_f_7;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = guarantee_extension_1_0(j_2, t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_g_7;
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = guarantee_extension_1_0(m_2, t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_h_7;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = debug_1_0(p_2, t);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_f_7;
  return(t);
}
ATerm get_meta_0_0 (ATerm t)
{
  ATerm s_2 = NULL;
  t = if_verbose6_1_0(c_2, t);
  {
    ATerm i_7 = t;
    int j_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_3 = NULL,d_3 = NULL;
        c_3 = t;
        if(match_cons(t, sym_FILE_1))
          {
            d_3 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = c_3;
        t = FILE_1_0(e_2, t);
        t = read_from_0_0(t);
        {
          ATerm k_7 = t;
          int l_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_0 = NULL;
              n_0 = t;
              {
                ATerm m_7 = t;
                if((PushChoice() == 0))
                  {
                    ATerm p_0 = NULL,q_0 = NULL,r_0 = NULL,s_0 = NULL,d_0 = NULL;
                    s_0 = t;
                    if(match_cons(t, sym_Meta_1))
                      {
                        q_0 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(s_0);
                    p_0 = t;
                    t = q_0;
                    t = is_list_0_0(t);
                    r_0 = t;
                    t = (ATerm) ATmakeAppl(sym_Meta_1, r_0);
                    d_0 = t;
                    t = SSLsetAnnotations(d_0, p_0);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = m_7;
                  }
              }
              t = n_0;
              LocalPopChoice(l_7);
              {
                ATerm t_0 = NULL;
                t_0 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_7), d_3), term_o_7), t_0), term_n_7);
                t = error_0_0(t);
                _fail(t);
              }
            }
          else
            {
              t = k_7;
            }
        }
        LocalPopChoice(j_7);
      }
    else
      {
        t = i_7;
        {
          ATerm q_7 = t;
          int r_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_3 = NULL;
              t = FILE_1_0(k_2, t);
              t = read_from_0_0(t);
              e_3 = t;
              t = SSL_explode_term(e_3);
              if(match_cons(t, sym__2))
                {
                  s_2 = ATgetArgument(t, 0);
                  {
                    ATerm s_7 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Meta_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Syntax_1, s_2)));
              LocalPopChoice(r_7);
            }
          else
            {
              t = q_7;
              t = term_t_7;
            }
        }
      }
  }
  t = if_verbose6_1_0(o_2, t);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = debug_1_0(r_2, t);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = term_u_7;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_v_7;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = debug_1_0(x_2, t);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = term_w_7;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_x_7;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm r_3 = NULL,s_3 = NULL,t_3 = NULL,c_4 = NULL;
  s_3 = t;
  t = pass_verbose_0_0(t);
  t_3 = t;
  t = s_3;
  {
    ATerm y_7 = t;
    int z_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_8;
        t = get_config_0_0(t);
        t = s_3;
        LocalPopChoice(z_7);
        t = (ATerm) ATinsert(ATempty, term_b_8);
      }
    else
      {
        t = y_7;
        t = (ATerm) ATempty;
      }
  }
  c_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_4), t_3);
  t = concat_0_0(t);
  r_3 = t;
  t = (ATerm) ATinsert(CheckATermList(r_3), term_c_8);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = term_d_8;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_e_8;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm d_4 = NULL,e_4 = NULL,f_4 = NULL,g_4 = NULL;
  e_4 = t;
  t = pass_verbose_0_0(t);
  f_4 = t;
  t = e_4;
  {
    ATerm f_8 = t;
    int g_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_8;
        t = get_config_0_0(t);
        t = e_4;
        LocalPopChoice(g_8);
        t = (ATerm) ATinsert(ATempty, term_a_8);
      }
    else
      {
        t = f_8;
        t = (ATerm) ATempty;
      }
  }
  g_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_4), f_4);
  t = concat_0_0(t);
  d_4 = t;
  t = (ATerm) ATinsert(CheckATermList(d_4), term_c_8);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_h_8;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm i_4 = NULL;
  t = pass_verbose_0_0(t);
  i_4 = t;
  t = (ATerm) ATinsert(CheckATermList(i_4), term_c_8);
  return(t);
}
ATerm parse_module_0_0 (ATerm t)
{
  ATerm h_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL;
  t = if_verbose6_1_0(q_2, t);
  h_3 = t;
  if(match_cons(t, sym_FILE_1))
    {
      ATerm i_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_3;
  {
    static ATerm t_2 (ATerm t);
    static ATerm t_2 (ATerm t)
    {
      t = basename_0_0(t);
      if(((k_3 != NULL) && (k_3 != t)))
        _fail(t);
      else
        k_3 = t;
      return(t);
    }
    t = FILE_1_0(t_2, t);
  }
  t = h_3;
  t = get_meta_0_0(t);
  j_3 = t;
  t = get_syntax_0_0(t);
  t = get_parse_table_0_0(t);
  if(match_cons(t, sym_FILE_1))
    {
      i_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_3;
  {
    static ATerm v_2 (ATerm t);
    static ATerm v_2 (ATerm t)
    {
      ATerm m_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL;
      t = term_j_8;
      t = pass_sglr_verbose_0_0(t);
      o_3 = t;
      t = j_3;
      t = pass_filters_0_0(t);
      p_3 = t;
      t = j_3;
      t = pass_sort_0_0(t);
      q_3 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, q_3), p_3), o_3);
      t = concat_0_0(t);
      m_3 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(m_3), i_3), term_l_8), term_k_8);
      t = if_verbose6_1_0(w_2, t);
      return(t);
    }
    t = xtc_transform_2_0(u_2, v_2, t);
  }
  t = xtc_transform_2_0(y_2, z_2, t);
  {
    static ATerm a_3 (ATerm t);
    static ATerm a_3 (ATerm t)
    {
      static ATerm b_3 (ATerm t);
      static ATerm b_3 (ATerm t)
      {
        t = not_null(k_3);
        t = guarantee_extension_1_0(f_3, t);
        return(t);
      }
      t = copy_to_1_0(b_3, t);
      return(t);
    }
    t = if_keep1_1_0(a_3, t);
  }
  t = xtc_transform_2_0(g_3, n_3, t);
  l_3 = t;
  {
    static ATerm h_4 (ATerm t);
    static ATerm h_4 (ATerm t)
    {
      t = read_from_0_0(t);
      t = check_module_name_0_1(not_null(k_3), t);
      return(t);
    }
    t = if_not_silent_1_0(h_4, t);
  }
  t = l_3;
  {
    ATerm m_8 = t;
    int n_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_8;
        t = get_config_0_0(t);
        t = l_3;
        LocalPopChoice(n_8);
      }
    else
      {
        t = m_8;
        t = xtc_transform_2_0(j_4, t_4, t);
      }
  }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm k_4 = NULL;
  k_4 = t;
  if(match_string(t, "-I"))
    {
      t = k_4;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = k_4;
    }
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm l_4 = NULL;
  l_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_6, (ATerm) ATinsert(ATempty, l_4));
  t = extend_config_0_0(t);
  t = l_4;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_p_8;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--syntax", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm m_4 = NULL;
  m_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_8, m_4);
  t = set_config_0_0(t);
  t = m_4;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = term_r_8;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--default-syntax", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm n_4 = NULL;
  n_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_7, n_4);
  t = set_config_0_0(t);
  t = n_4;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_s_8;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-silent", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm o_4 = NULL;
  o_4 = t;
  t = term_v_8;
  t = set_config_0_0(t);
  t = o_4;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_w_8;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm p_4 = NULL;
  p_4 = t;
  t = term_y_8;
  t = set_config_0_0(t);
  t = p_4;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = term_a_8;
  return(t);
}
static ATerm j_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--desugaring", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm q_4 = NULL;
  q_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_8, q_4);
  t = set_config_0_0(t);
  t = q_4;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = term_z_8;
  return(t);
}
ATerm parse_stratego_options_0_0 (ATerm t)
{
  ATerm a_9 = t;
  int b_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(u_4, v_4, w_4, t);
      LocalPopChoice(b_9);
    }
  else
    {
      t = a_9;
      {
        ATerm c_9 = t;
        int d_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(x_4, y_4, z_4, t);
            LocalPopChoice(d_9);
          }
        else
          {
            t = c_9;
            {
              ATerm e_9 = t;
              int f_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(a_5, b_5, c_5, t);
                  LocalPopChoice(f_9);
                }
              else
                {
                  t = e_9;
                  {
                    ATerm g_9 = t;
                    int h_9 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(d_5, e_5, f_5, t);
                        LocalPopChoice(h_9);
                      }
                    else
                      {
                        t = g_9;
                        {
                          ATerm i_9 = t;
                          int j_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(g_5, h_5, i_5, t);
                              LocalPopChoice(j_9);
                            }
                          else
                            {
                              t = i_9;
                              t = ArgOption_3_0(j_5, k_5, l_5, t);
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
static ATerm m_5 (ATerm t)
{
  ATerm r_4 = NULL,s_4 = NULL;
  r_4 = t;
  t = term_k_9;
  t = xtc_find_path_0_0(t);
  s_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_6, (ATerm) ATinsert(ATinsert(ATempty, s_4), term_l_9));
  t = extend_config_0_0(t);
  t = r_4;
  t = parse_module_0_0(t);
  return(t);
}
ATerm parse_stratego_0_0 (ATerm t)
{
  t = xtc_iowrap_2_0(parse_stratego_options_0_0, m_5, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = parse_stratego_0_0(t);
  return(t);
}
