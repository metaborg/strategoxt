#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_Meta_1;
static Symbol sym_Syntax_1;
static Symbol sym_TopSort_1;
static Symbol sym_HeuristicFilters_1;
static Symbol sym_Off_0;
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
static Symbol sym_FILE_1;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_Specification_1;
static Symbol sym_Module_2;
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
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Module_2 = ATmakeSymbol("Module", 2, ATfalse);
  ATprotectSymbol(sym_Module_2);
}
static ATerm term_q_9;
static ATerm term_p_9;
static ATerm term_e_9;
static ATerm term_d_9;
static ATerm term_c_9;
static ATerm term_b_9;
static ATerm term_a_9;
static ATerm term_z_8;
static ATerm term_y_8;
static ATerm term_x_8;
static ATerm term_w_8;
static ATerm term_v_8;
static ATerm term_u_8;
static ATerm term_t_8;
static ATerm term_q_8;
static ATerm term_p_8;
static ATerm term_o_8;
static ATerm term_m_8;
static ATerm term_j_8;
static ATerm term_i_8;
static ATerm term_h_8;
static ATerm term_g_8;
static ATerm term_f_8;
static ATerm term_c_8;
static ATerm term_b_8;
static ATerm term_a_8;
static ATerm term_z_7;
static ATerm term_y_7;
static ATerm term_u_7;
static ATerm term_t_7;
static ATerm term_s_7;
static ATerm term_m_7;
static ATerm term_l_7;
static ATerm term_k_7;
static ATerm term_j_7;
static ATerm term_i_7;
static ATerm term_d_7;
static ATerm term_c_7;
static ATerm term_b_7;
static ATerm term_y_6;
static ATerm term_x_6;
static ATerm term_w_6;
static ATerm term_v_6;
static ATerm term_u_6;
static ATerm term_r_6;
static ATerm term_q_6;
static ATerm term_n_6;
static ATerm term_k_6;
static ATerm term_j_6;
static ATerm term_i_6;
static ATerm term_h_6;
static ATerm term_g_6;
static ATerm term_f_6;
static ATerm term_c_6;
static ATerm term_y_5;
static ATerm term_v_5;
static ATerm term_u_5;
static ATerm term_t_5;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(ATmakeSymbol(" ** Warning: Mismatch between basename of input file (", 0, ATtrue));
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(ATmakeSymbol(") and module name (", 0, ATtrue));
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(ATmakeSymbol(") specified", 0, ATtrue));
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-fi", 0, ATtrue));
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-fe", 0, ATtrue));
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax-definition: ", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("def", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax definition: ", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol("creating syntax definition", 0, ATtrue));
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-sdf", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("get-parse-table: ", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("tbl", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("using parse table: ", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("creating parse table", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf2table", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax: ", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax: ", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--default-syntax", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("get-meta: ", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("meta", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("syn", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("** Warning: Meta data ", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" for module ", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" not valid.", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(sym_Meta_1, (ATerm) ATempty);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-module: ", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr arguments: ", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--concrete", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("atree", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("meta-explode", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-desugar", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--desugaring", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-I p|--Include p   include modules from directory p", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax syn        use syntax syn", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--default-syntax syn        use syntax syn as default", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(sym__2, term_y_8, term_z_8);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-silent ", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(sym__2, term_f_8, term_c_9);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--desugaring on/off : turn desugaring on or off (default: on)", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("./", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm pass_verbose_0_0 (ATerm t);
ATerm xtc_transform_2_0 (ATerm l_6 (ATerm), ATerm m_6 (ATerm), ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm concat_strings_0_0 (ATerm t);
ATerm get_filename_0_0 (ATerm t);
ATerm check_module_name_0_1 (ATerm b_0, ATerm t);
ATerm read_from_0_0 (ATerm t);
ATerm if_not_silent_1_0 (ATerm l_121 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm guarantee_extension_1_0 (ATerm u_112 (ATerm), ATerm t);
ATerm copy_to_1_0 (ATerm p_6 (ATerm), ATerm t);
ATerm if_keep1_1_0 (ATerm w_119 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm c_101 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm z_118 (ATerm), ATerm t);
ATerm is_string_0_0 (ATerm t);
ATerm pass_sort_0_0 (ATerm t);
static ATerm e_0 (ATerm t);
ATerm pass_filters_0_0 (ATerm t);
ATerm if_verbose3_1_0 (ATerm w_118 (ATerm), ATerm t);
static ATerm f_0 (ATerm t);
ATerm pass_sglr_verbose_0_0 (ATerm t);
ATerm rename_to_1_0 (ATerm o_6 (ATerm), ATerm t);
ATerm map_1_0 (ATerm m_101 (ATerm), ATerm t);
static ATerm g_0 (ATerm t);
static ATerm h_0 (ATerm t);
static ATerm i_0 (ATerm t);
static ATerm j_0 (ATerm t);
static ATerm k_0 (ATerm t);
static ATerm l_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm n_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm v_0 (ATerm t);
ATerm get_syntax_definition_0_0 (ATerm t);
ATerm say_1_0 (ATerm q_100 (ATerm), ATerm t);
ATerm find_in_path_0_0 (ATerm t);
ATerm find_in_includes_1_0 (ATerm b_27 (ATerm), ATerm t);
static ATerm y_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
ATerm get_parse_table_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm v_118 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm w_101 (ATerm), ATerm t);
static ATerm v_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
ATerm get_syntax_0_0 (ATerm t);
ATerm error_0_0 (ATerm t);
ATerm is_list_0_0 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
ATerm get_meta_0_0 (ATerm t);
ATerm basename_0_0 (ATerm t);
ATerm FILE_1_0 (ATerm q_4 (ATerm), ATerm t);
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
static ATerm b_4 (ATerm t);
static ATerm s_4 (ATerm t);
ATerm parse_module_0_0 (ATerm t);
ATerm extend_config_0_0 (ATerm t);
ATerm xtc_find_path_0_0 (ATerm t);
ATerm set_config_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm g_4 (ATerm), ATerm h_4 (ATerm), ATerm i_4 (ATerm), ATerm t);
ATerm Option_3_0 (ATerm j_4 (ATerm), ATerm k_4 (ATerm), ATerm l_4 (ATerm), ATerm t);
static ATerm t_4 (ATerm t);
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
ATerm parse_stratego_options_0_0 (ATerm t);
ATerm xtc_iowrap_2_0 (ATerm d_6 (ATerm), ATerm e_6 (ATerm), ATerm t);
static ATerm l_5 (ATerm t);
ATerm parse_stratego_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm check_module_name_0_1 (ATerm b_0, ATerm t)
{
  ATerm z_0 = NULL,a_1 = NULL;
  z_0 = t;
  {
    ATerm m_5 = t;
    int n_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Specification_1))
          {
            ATerm o_5 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(n_5);
        t = z_0;
      }
    else
      {
        t = m_5;
        if(match_cons(t, sym_Module_2))
          {
            a_1 = ATgetArgument(t, 0);
            {
              ATerm p_5 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = z_0;
        {
          ATerm q_5 = t;
          int r_5 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_5 = t;
              if((PushChoice() == 0))
                {
                  t = b_0;
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
                  t = s_5;
                }
              t = z_0;
              LocalPopChoice(r_5);
              {
                static ATerm a_0 (ATerm t);
                static ATerm a_0 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_5), a_1), term_u_5), b_0), term_t_5);
                  t = concat_strings_0_0(t);
                  return(t);
                }
                t = say_1_0(a_0, t);
              }
            }
          else
            {
              t = q_5;
            }
        }
      }
  }
  return(t);
}
ATerm pass_sort_0_0 (ATerm t)
{
  ATerm e_1 = NULL;
  ATerm w_5 = t;
  int x_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_1 = NULL,h_1 = NULL;
      f_1 = t;
      if(match_cons(t, sym_Meta_1))
        {
          h_1 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_1;
      {
        static ATerm c_0 (ATerm t);
        static ATerm c_0 (ATerm t)
        {
          if(match_cons(t, sym_TopSort_1))
            {
              if(((e_1 != NULL) && (e_1 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                e_1 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_elem_1_0(c_0, t);
      }
      t = f_1;
      LocalPopChoice(x_5);
      {
        ATerm i_1 = NULL;
        t = not_null(e_1);
        t = is_string_0_0(t);
        i_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, i_1), term_y_5);
      }
    }
  else
    {
      t = w_5;
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm e_0 (ATerm t)
{
  if(match_cons(t, sym_HeuristicFilters_1))
    {
      ATerm z_5 = ATgetArgument(t, 0);
      if(!(match_cons(z_5, sym_Off_0)))
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm pass_filters_0_0 (ATerm t)
{
  ATerm a_6 = t;
  int b_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_1 = NULL,m_1 = NULL;
      j_1 = t;
      if(match_cons(t, sym_Meta_1))
        {
          m_1 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_1;
      t = fetch_elem_1_0(e_0, t);
      t = j_1;
      LocalPopChoice(b_6);
      t = (ATerm) ATinsert(ATinsert(ATempty, term_f_6), term_c_6);
    }
  else
    {
      t = a_6;
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm f_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_g_6);
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
  t = term_h_6;
  return(t);
}
static ATerm i_0 (ATerm t)
{
  t = term_i_6;
  return(t);
}
static ATerm j_0 (ATerm t)
{
  t = term_j_6;
  return(t);
}
static ATerm k_0 (ATerm t)
{
  t = say_1_0(l_0, t);
  return(t);
}
static ATerm l_0 (ATerm t)
{
  t = term_k_6;
  return(t);
}
static ATerm m_0 (ATerm t)
{
  t = term_n_6;
  return(t);
}
static ATerm n_0 (ATerm t)
{
  t = term_q_6;
  return(t);
}
static ATerm u_0 (ATerm t)
{
  t = term_r_6;
  t = get_config_0_0(t);
  t = map_1_0(v_0, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm w_1 = NULL;
  w_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_1), term_r_6);
  return(t);
}
ATerm get_syntax_definition_0_0 (ATerm t)
{
  ATerm n_1 = NULL,o_1 = NULL;
  t = if_verbose6_1_0(g_0, t);
  o_1 = t;
  t = guarantee_extension_1_0(i_0, t);
  n_1 = t;
  t = o_1;
  {
    ATerm s_6 = t;
    int t_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_1 = NULL;
        t = n_1;
        t = find_in_includes_1_0(j_0, t);
        q_1 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, q_1);
        LocalPopChoice(t_6);
      }
    else
      {
        t = s_6;
        {
          ATerm s_1 = NULL;
          static ATerm w_0 (ATerm t);
          static ATerm w_0 (ATerm t)
          {
            t = n_1;
            return(t);
          }
          t = if_verbose2_1_0(k_0, t);
          t = guarantee_extension_1_0(m_0, t);
          s_1 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, s_1);
          t = xtc_transform_2_0(n_0, u_0, t);
          t = rename_to_1_0(w_0, t);
        }
      }
  }
  return(t);
}
ATerm find_in_includes_1_0 (ATerm b_27 (ATerm), ATerm t)
{
  ATerm y_1 = NULL,e_2 = NULL;
  static ATerm x_0 (ATerm t);
  static ATerm x_0 (ATerm t)
  {
    t = debug_1_0(b_27, t);
    return(t);
  }
  e_2 = t;
  t = term_r_6;
  t = get_config_0_0(t);
  y_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_2, y_1);
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
  t = term_u_6;
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = term_v_6;
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = term_w_6;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = say_1_0(k_1, t);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = term_x_6;
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_y_6;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = debug_1_0(u_1, t);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = term_w_6;
  return(t);
}
ATerm get_parse_table_0_0 (ATerm t)
{
  ATerm f_2 = NULL,h_2 = NULL;
  t = if_verbose6_1_0(y_0, t);
  f_2 = t;
  t = guarantee_extension_1_0(c_1, t);
  h_2 = t;
  {
    ATerm z_6 = t;
    int a_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_2 = NULL;
        t = find_in_includes_1_0(d_1, t);
        i_2 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, i_2);
        LocalPopChoice(a_7);
      }
    else
      {
        t = z_6;
        {
          static ATerm r_1 (ATerm t);
          static ATerm r_1 (ATerm t)
          {
            t = h_2;
            return(t);
          }
          t = if_verbose2_1_0(g_1, t);
          t = f_2;
          t = get_syntax_definition_0_0(t);
          {
            static ATerm p_1 (ATerm t);
            static ATerm p_1 (ATerm t)
            {
              t = (ATerm) ATinsert(ATinsert(ATempty, f_2), term_b_7);
              return(t);
            }
            t = xtc_transform_2_0(l_1, p_1, t);
          }
          t = rename_to_1_0(r_1, t);
        }
      }
  }
  t = if_verbose6_1_0(t_1, t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = debug_1_0(x_1, t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = term_c_7;
  return(t);
}
static ATerm z_1 (ATerm t)
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
  t = term_d_7;
  return(t);
}
ATerm get_syntax_0_0 (ATerm t)
{
  t = if_verbose6_1_0(v_1, t);
  {
    ATerm e_7 = t;
    int f_7 = stack_ptr;
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
        t = fetch_elem_1_0(z_1, t);
        LocalPopChoice(f_7);
      }
    else
      {
        t = e_7;
        {
          ATerm g_7 = t;
          int h_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_i_7;
              t = get_config_0_0(t);
              LocalPopChoice(h_7);
            }
          else
            {
              t = g_7;
              t = term_j_7;
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
  t = term_k_7;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = guarantee_extension_1_0(j_2, t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_l_7;
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = guarantee_extension_1_0(m_2, t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_m_7;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = debug_1_0(p_2, t);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_k_7;
  return(t);
}
ATerm get_meta_0_0 (ATerm t)
{
  ATerm s_2 = NULL;
  t = if_verbose6_1_0(c_2, t);
  {
    ATerm n_7 = t;
    int o_7 = stack_ptr;
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
        t = FILE_1_0(g_2, t);
        t = read_from_0_0(t);
        {
          ATerm p_7 = t;
          int q_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_0 = NULL;
              o_0 = t;
              {
                ATerm r_7 = t;
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
                    t = r_7;
                  }
              }
              t = o_0;
              LocalPopChoice(q_7);
              {
                ATerm t_0 = NULL;
                t_0 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_7), d_3), term_t_7), t_0), term_s_7);
                t = error_0_0(t);
                _fail(t);
              }
            }
          else
            {
              t = p_7;
            }
        }
        LocalPopChoice(o_7);
      }
    else
      {
        t = n_7;
        {
          ATerm v_7 = t;
          int w_7 = stack_ptr;
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
                    ATerm x_7 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Meta_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Syntax_1, s_2)));
              LocalPopChoice(w_7);
            }
          else
            {
              t = v_7;
              t = term_y_7;
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
  t = term_z_7;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_a_8;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = debug_1_0(x_2, t);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = term_b_8;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_c_8;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL;
  s_3 = t;
  t = pass_verbose_0_0(t);
  t_3 = t;
  t = s_3;
  {
    ATerm d_8 = t;
    int e_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_8;
        t = get_config_0_0(t);
        t = s_3;
        LocalPopChoice(e_8);
        t = (ATerm) ATinsert(ATempty, term_g_8);
      }
    else
      {
        t = d_8;
        t = (ATerm) ATempty;
      }
  }
  u_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_3), t_3);
  t = concat_0_0(t);
  r_3 = t;
  t = (ATerm) ATinsert(CheckATermList(r_3), term_h_8);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = term_i_8;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_j_8;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm v_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL;
  w_3 = t;
  t = pass_verbose_0_0(t);
  x_3 = t;
  t = w_3;
  {
    ATerm k_8 = t;
    int l_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_8;
        t = get_config_0_0(t);
        t = w_3;
        LocalPopChoice(l_8);
        t = (ATerm) ATinsert(ATempty, term_f_8);
      }
    else
      {
        t = k_8;
        t = (ATerm) ATempty;
      }
  }
  y_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_3), x_3);
  t = concat_0_0(t);
  v_3 = t;
  t = (ATerm) ATinsert(CheckATermList(v_3), term_h_8);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  t = term_m_8;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm a_4 = NULL;
  t = pass_verbose_0_0(t);
  a_4 = t;
  t = (ATerm) ATinsert(CheckATermList(a_4), term_h_8);
  return(t);
}
ATerm parse_module_0_0 (ATerm t)
{
  ATerm h_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL;
  t = if_verbose6_1_0(q_2, t);
  h_3 = t;
  if(match_cons(t, sym_FILE_1))
    {
      ATerm n_8 = ATgetArgument(t, 0);
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
      t = term_o_8;
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
      t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(m_3), i_3), term_q_8), term_p_8);
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
    static ATerm z_3 (ATerm t);
    static ATerm z_3 (ATerm t)
    {
      t = read_from_0_0(t);
      t = check_module_name_0_1(not_null(k_3), t);
      return(t);
    }
    t = if_not_silent_1_0(z_3, t);
  }
  t = l_3;
  {
    ATerm r_8 = t;
    int s_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_8;
        t = get_config_0_0(t);
        t = l_3;
        LocalPopChoice(s_8);
      }
    else
      {
        t = r_8;
        t = xtc_transform_2_0(b_4, s_4, t);
      }
  }
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm c_4 = NULL;
  c_4 = t;
  if(match_string(t, "-I"))
    {
      t = c_4;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = c_4;
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm d_4 = NULL;
  d_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_6, (ATerm) ATinsert(ATempty, d_4));
  t = extend_config_0_0(t);
  t = d_4;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_u_8;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--syntax", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm e_4 = NULL;
  e_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_8, e_4);
  t = set_config_0_0(t);
  t = e_4;
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = term_w_8;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--default-syntax", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm f_4 = NULL;
  f_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_7, f_4);
  t = set_config_0_0(t);
  t = f_4;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = term_x_8;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-silent", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm m_4 = NULL;
  m_4 = t;
  t = term_a_9;
  t = set_config_0_0(t);
  t = m_4;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = term_b_9;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm n_4 = NULL;
  n_4 = t;
  t = term_d_9;
  t = set_config_0_0(t);
  t = n_4;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = term_f_8;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--desugaring", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm o_4 = NULL;
  o_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_8, o_4);
  t = set_config_0_0(t);
  t = o_4;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_e_9;
  return(t);
}
ATerm parse_stratego_options_0_0 (ATerm t)
{
  ATerm f_9 = t;
  int g_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(t_4, u_4, v_4, t);
      LocalPopChoice(g_9);
    }
  else
    {
      t = f_9;
      {
        ATerm h_9 = t;
        int i_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(w_4, x_4, y_4, t);
            LocalPopChoice(i_9);
          }
        else
          {
            t = h_9;
            {
              ATerm j_9 = t;
              int k_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(z_4, a_5, b_5, t);
                  LocalPopChoice(k_9);
                }
              else
                {
                  t = j_9;
                  {
                    ATerm l_9 = t;
                    int m_9 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(c_5, d_5, e_5, t);
                        LocalPopChoice(m_9);
                      }
                    else
                      {
                        t = l_9;
                        {
                          ATerm n_9 = t;
                          int o_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(f_5, g_5, h_5, t);
                              LocalPopChoice(o_9);
                            }
                          else
                            {
                              t = n_9;
                              t = ArgOption_3_0(i_5, j_5, k_5, t);
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
static ATerm l_5 (ATerm t)
{
  ATerm p_4 = NULL,r_4 = NULL;
  p_4 = t;
  t = term_p_9;
  t = xtc_find_path_0_0(t);
  r_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_6, (ATerm) ATinsert(ATinsert(ATempty, r_4), term_q_9));
  t = extend_config_0_0(t);
  t = p_4;
  t = parse_module_0_0(t);
  return(t);
}
ATerm parse_stratego_0_0 (ATerm t)
{
  t = xtc_iowrap_2_0(parse_stratego_options_0_0, l_5, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = parse_stratego_0_0(t);
  return(t);
}
