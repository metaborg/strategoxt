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
static Symbol sym_Path_1;
static Symbol sym_Path_1;
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
static Symbol sym_Path_1;
static Symbol sym_Path_1;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_Some_1;
static Symbol sym_None_0;
static Symbol sym_selector_2;
static Symbol sym_Path_2;
static Symbol sym_Path1_1;
static Symbol sym_PP_Entry_2;
static Symbol sym_PP_Table_1;
static Symbol sym_SOpt_2;
static Symbol sym_Arg2_2;
static Symbol sym_Arg_1;
static Symbol sym_HV_2;
static Symbol sym_S_1;
static Symbol sym_Strict_0;
static Symbol sym_alt_2;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
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
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
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
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_selector_2 = ATmakeSymbol("selector", 2, ATfalse);
  ATprotectSymbol(sym_selector_2);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Path1_1 = ATmakeSymbol("Path1", 1, ATfalse);
  ATprotectSymbol(sym_Path1_1);
  sym_PP_Entry_2 = ATmakeSymbol("PP-Entry", 2, ATfalse);
  ATprotectSymbol(sym_PP_Entry_2);
  sym_PP_Table_1 = ATmakeSymbol("PP-Table", 1, ATfalse);
  ATprotectSymbol(sym_PP_Table_1);
  sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
  ATprotectSymbol(sym_SOpt_2);
  sym_Arg2_2 = ATmakeSymbol("Arg2", 2, ATfalse);
  ATprotectSymbol(sym_Arg2_2);
  sym_Arg_1 = ATmakeSymbol("Arg", 1, ATfalse);
  ATprotectSymbol(sym_Arg_1);
  sym_HV_2 = ATmakeSymbol("HV", 2, ATfalse);
  ATprotectSymbol(sym_HV_2);
  sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
  ATprotectSymbol(sym_S_1);
  sym_Strict_0 = ATmakeSymbol("Strict", 0, ATfalse);
  ATprotectSymbol(sym_Strict_0);
  sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
  ATprotectSymbol(sym_alt_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
}
static ATerm term_f_11;
static ATerm term_c_11;
static ATerm term_z_10;
static ATerm term_w_10;
static ATerm term_v_10;
static ATerm term_k_10;
static ATerm term_j_10;
static ATerm term_h_10;
static ATerm term_g_10;
static ATerm term_e_10;
static ATerm term_f_9;
static ATerm term_e_9;
static ATerm term_d_9;
static ATerm term_n_6;
static ATerm term_m_6;
static ATerm term_h_5;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_h_5));
  term_h_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("obtaining: ", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No pp entry found for: ", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: cannot rewrite to box: ", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm is_list_0_0 (ATerm t);
ATerm if_2_0 (ATerm u_92 (ATerm), ATerm v_92 (ATerm), ATerm t);
ATerm Tl_0_0 (ATerm t);
ATerm Hd_0_0 (ATerm t);
ATerm flat_list_0_0 (ATerm t);
ATerm Instantiate_1_0 (ATerm f_0 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm m_94 (ATerm), ATerm t);
ATerm TupleToList_0_0 (ATerm t);
static ATerm b_2 (ATerm w_9, ATerm x_9, ATerm v_9, ATerm t);
ATerm instantiate_sep_list_1_0 (ATerm g_18 (ATerm), ATerm t);
ATerm crush_3_0 (ATerm w_112 (ATerm), ATerm x_112 (ATerm), ATerm y_112 (ATerm), ATerm t);
static ATerm x_0 (ATerm t);
ATerm collect_p__1_0 (ATerm k_18 (ATerm), ATerm t);
ATerm even_0_0 (ATerm t);
static ATerm c_2 (ATerm i_17 (ATerm), ATerm c_0, ATerm e_0, ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_2 (ATerm n_9, ATerm p_9, ATerm m_9, ATerm t);
ATerm symbol2abox6_0_0 (ATerm t);
ATerm symbol2abox5_0_0 (ATerm t);
static ATerm f_2 (ATerm t_8, ATerm u_8, ATerm w_8, ATerm v_8, ATerm t);
static ATerm h_2 (ATerm o_8, ATerm p_8, ATerm s_8, ATerm r_8, ATerm q_8, ATerm t);
ATerm index_0_0 (ATerm t);
ATerm Nil_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm w_80 (ATerm), ATerm x_80 (ATerm), ATerm t);
ATerm at_last_1_0 (ATerm w_101 (ATerm), ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm k_2 (ATerm f_8, ATerm e_8, ATerm j_8, ATerm t);
ATerm nzip_1_0 (ATerm k_103 (ATerm), ATerm t);
ATerm table_get_0_0 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm x_2 (ATerm t);
ATerm pp_table_get_0_0 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm trm2abox_appl_0_0 (ATerm t);
ATerm real_to_string_0_0 (ATerm t);
ATerm is_real_0_0 (ATerm t);
ATerm trm2abox_real_0_0 (ATerm t);
ATerm is_int_0_0 (ATerm t);
ATerm trm2abox_int_0_0 (ATerm t);
ATerm is_string_0_0 (ATerm t);
ATerm trm2abox_string_0_0 (ATerm t);
ATerm trm2abox_0_0 (ATerm t);
ATerm xtc_io_transform_1_0 (ATerm c_5 (ATerm), ATerm t);
ATerm xtc_io_1_0 (ATerm o_5 (ATerm), ATerm t);
ATerm concat_strings_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm int_to_string_0_0 (ATerm t);
static ATerm m_3 (ATerm t);
ATerm path_to_string_0_0 (ATerm t);
ATerm table_put_0_0 (ATerm t);
ATerm length_0_0 (ATerm t);
ATerm collect_1_0 (ATerm m_106 (ATerm), ATerm t);
static ATerm n_3 (ATerm t);
ATerm arity_of_template_0_0 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm mk_key_arity_0_0 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm l_2 (ATerm r_10, ATerm s_10, ATerm t);
ATerm string_to_int_0_0 (ATerm t);
ATerm unescape_0_0 (ATerm t);
ATerm un_double_quote_0_0 (ATerm t);
ATerm MakePPTerm_0_0 (ATerm t);
ATerm try_1_0 (ATerm o_92 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm l_94 (ATerm), ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm m_2 (ATerm q_10, ATerm t);
ATerm error_0_0 (ATerm t);
ATerm fatal_error_0_0 (ATerm t);
ATerm has_option_1_0 (ATerm w_119 (ATerm), ATerm t);
static ATerm v_3 (ATerm t);
ATerm type_failure_0_0 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm debug_1_0 (ATerm m_100 (ATerm), ATerm t);
ATerm if_verbose1_1_0 (ATerm d_118 (ATerm), ATerm t);
ATerm map_1_0 (ATerm w_100 (ATerm), ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
ATerm read_pp_tables_0_0 (ATerm t);
ATerm reverse_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm get_config_p_0_0 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm ast2abox_0_0 (ATerm t);
ATerm extend_config_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm e_4 (ATerm), ATerm f_4 (ATerm), ATerm g_4 (ATerm), ATerm t);
ATerm io_options_0_0 (ATerm t);
ATerm option_wrap_2_0 (ATerm v_120 (ATerm), ATerm w_120 (ATerm), ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm m_0 = t;
  int p_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      LocalPopChoice(p_4);
    }
  else
    {
      t = m_0;
      {
        ATerm s_4 = t;
        int y_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(Nil_0_0, flat_list_0_0, t);
            LocalPopChoice(y_4);
          }
        else
          {
            t = s_4;
            {
              ATerm f_5 = t;
              int g_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_0 = NULL,h_0 = NULL,j_0 = NULL;
                  t = Cons_2_0(is_list_0_0, _id, t);
                  j_0 = t;
                  t = Hd_0_0(t);
                  g_0 = t;
                  t = j_0;
                  t = Tl_0_0(t);
                  h_0 = t;
                  t = (ATerm) ATmakeAppl(sym__2, g_0, h_0);
                  t = conc_0_0(t);
                  t = flat_list_0_0(t);
                  LocalPopChoice(g_5);
                }
              else
                {
                  t = f_5;
                  t = Cons_2_0(_id, flat_list_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Instantiate_1_0 (ATerm f_0 (ATerm), ATerm t)
{
  ATerm p_0 = NULL,s_0 = NULL;
  if(match_cons(t, sym_Arg2_2))
    {
      s_0 = ATgetArgument(t, 0);
      p_0 = ATgetArgument(t, 1);
      {
        ATerm v_0 = NULL,w_0 = NULL;
        t = term_h_5;
        t = f_0(t);
        w_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_0, w_0);
        t = index_0_0(t);
        v_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_0, v_0);
        t = index_0_0(t);
      }
    }
  else
    {
      ATerm b_1 = NULL;
      if(match_cons(t, sym_Arg_1))
        {
          s_0 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = term_h_5;
      t = f_0(t);
      b_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_0, b_1);
      t = index_0_0(t);
    }
  return(t);
}
static ATerm b_2 (ATerm w_9, ATerm x_9, ATerm v_9, ATerm t)
{
  ATerm e_1 = NULL;
  static ATerm i_0 (ATerm t);
  static ATerm i_0 (ATerm t)
  {
    static ATerm k_0 (ATerm t);
    static ATerm k_0 (ATerm t)
    {
      ATerm i_5 = t;
      int k_5 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm l_0 (ATerm t);
          static ATerm l_0 (ATerm t)
          {
            t = not_null(e_1);
            return(t);
          }
          t = Instantiate_1_0(l_0, t);
          LocalPopChoice(k_5);
        }
      else
        {
          t = i_5;
          t = flat_list_0_0(t);
        }
      return(t);
    }
    t = try_1_0(k_0, t);
    return(t);
  }
  t = v_9;
  t = TupleToList_0_0(t);
  {
    static ATerm b_0 (ATerm t);
    static ATerm b_0 (ATerm t)
    {
      ATerm f_1 = NULL,g_1 = NULL;
      if(match_cons(t, sym__2))
        {
          f_1 = ATgetArgument(t, 0);
          g_1 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, f_1, w_9, g_1);
      t = k_2(f_1, w_9, g_1, t);
      return(t);
    }
    t = nzip_1_0(b_0, t);
  }
  if(((e_1 != NULL) && (e_1 != t)))
    _fail(t);
  else
    e_1 = t;
  t = x_9;
  t = bottomup_1_0(i_0, t);
  return(t);
}
ATerm instantiate_sep_list_1_0 (ATerm g_18 (ATerm), ATerm t)
{
  static ATerm e_2 (ATerm t);
  static ATerm e_2 (ATerm t)
  {
    ATerm p_5 = t;
    int x_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        LocalPopChoice(x_5);
      }
    else
      {
        t = p_5;
        {
          ATerm a_6 = t;
          int d_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2_0(_id, Nil_0_0, t);
              LocalPopChoice(d_6);
            }
          else
            {
              t = a_6;
              {
                ATerm q_1 = NULL,r_1 = NULL,s_1 = NULL,u_1 = NULL,v_1 = NULL;
                static ATerm n_0 (ATerm t);
                static ATerm q_0 (ATerm t);
                static ATerm n_0 (ATerm t)
                {
                  static ATerm r_0 (ATerm t);
                  static ATerm r_0 (ATerm t)
                  {
                    static ATerm t_0 (ATerm t);
                    static ATerm t_0 (ATerm t)
                    {
                      ATerm e_6 = t;
                      int f_6 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          static ATerm u_0 (ATerm t);
                          static ATerm u_0 (ATerm t)
                          {
                            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_1)), not_null(r_1));
                            return(t);
                          }
                          t = Instantiate_1_0(u_0, t);
                          LocalPopChoice(f_6);
                        }
                      else
                        {
                          t = e_6;
                          t = flat_list_0_0(t);
                        }
                      return(t);
                    }
                    t = try_1_0(t_0, t);
                    return(t);
                  }
                  t = term_h_5;
                  t = g_18(t);
                  t = bottomup_1_0(r_0, t);
                  return(t);
                }
                static ATerm q_0 (ATerm t)
                {
                  t = not_null(v_1);
                  t = e_2(t);
                  return(t);
                }
                q_1 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    if(((r_1 != NULL) && (r_1 != ATgetFirst((ATermList) t))))
                      _fail(ATgetFirst((ATermList) t));
                    else
                      r_1 = ATgetFirst((ATermList) t);
                    s_1 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = s_1;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    if(((u_1 != NULL) && (u_1 != ATgetFirst((ATermList) t))))
                      _fail(ATgetFirst((ATermList) t));
                    else
                      u_1 = ATgetFirst((ATermList) t);
                    if(((v_1 != NULL) && (v_1 != (ATerm) ATgetNext((ATermList) t))))
                      _fail((ATerm) ATgetNext((ATermList) t));
                    else
                      v_1 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = q_1;
                t = Cons_2_0(n_0, q_0, t);
              }
            }
        }
      }
    return(t);
  }
  t = e_2(t);
  return(t);
}
static ATerm x_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_p__1_0 (ATerm k_18 (ATerm), ATerm t)
{
  static ATerm j_2 (ATerm t);
  static ATerm j_2 (ATerm t)
  {
    ATerm g_6 = t;
    int h_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_2 = NULL;
        t = k_18(t);
        i_2 = t;
        t = (ATerm) ATinsert(ATempty, i_2);
        LocalPopChoice(h_6);
      }
    else
      {
        t = g_6;
        t = crush_3_0(x_0, conc_0_0, j_2, t);
      }
    return(t);
  }
  t = j_2(t);
  return(t);
}
static ATerm c_2 (ATerm i_17 (ATerm), ATerm c_0, ATerm e_0, ATerm t)
{
  ATerm o_2 = NULL;
  ATerm i_6 = t;
  int l_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_2 = NULL,q_2 = NULL;
      t = c_0;
      t = even_0_0(t);
      t = term_h_5;
      t = i_17(t);
      p_2 = t;
      t = term_m_6;
      q_2 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_6, p_2, e_0);
      t = k_2(q_2, p_2, e_0, t);
      o_2 = t;
      LocalPopChoice(l_6);
    }
  else
    {
      t = i_6;
      {
        ATerm u_2 = NULL,v_2 = NULL;
        t = term_h_5;
        t = i_17(t);
        u_2 = t;
        t = term_n_6;
        v_2 = t;
        t = (ATerm) ATmakeAppl(sym__3, term_n_6, u_2, e_0);
        t = k_2(v_2, u_2, e_0, t);
        o_2 = t;
      }
    }
  t = o_2;
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm c_3 = NULL,d_3 = NULL,e_3 = NULL,d_0 = NULL;
  e_3 = t;
  if(match_cons(t, sym_S_1))
    {
      d_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_3);
  c_3 = t;
  t = (ATerm) ATmakeAppl(sym_S_1, d_3);
  d_0 = t;
  t = SSLsetAnnotations(d_0, c_3);
  return(t);
}
static ATerm d_2 (ATerm n_9, ATerm p_9, ATerm m_9, ATerm t)
{
  ATerm y_2 = NULL;
  static ATerm d_1 (ATerm t);
  static ATerm d_1 (ATerm t)
  {
    t = p_9;
    return(t);
  }
  t = m_9;
  {
    static ATerm z_0 (ATerm t);
    static ATerm z_0 (ATerm t)
    {
      ATerm z_2 = NULL,a_3 = NULL;
      static ATerm a_1 (ATerm t);
      static ATerm a_1 (ATerm t)
      {
        t = n_9;
        return(t);
      }
      if(match_cons(t, sym__2))
        {
          z_2 = ATgetArgument(t, 0);
          a_3 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = c_2(a_1, z_2, a_3, t);
      return(t);
    }
    t = nzip_1_0(z_0, t);
  }
  y_2 = t;
  {
    ATerm p_6 = t;
    int q_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm q_3 (ATerm t);
        static ATerm q_3 (ATerm t)
        {
          ATerm g_3 = NULL,h_3 = NULL;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = (ATerm) ATempty;
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  g_3 = ATgetFirst((ATermList) t);
                  h_3 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = h_3;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  ATerm r_6 = t;
                  int s_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATinsert(ATempty, g_3);
                      LocalPopChoice(s_6);
                    }
                  else
                    {
                      t = r_6;
                      {
                        ATerm l_3 = NULL;
                        t = h_3;
                        t = q_3(t);
                        l_3 = t;
                        t = (ATerm) ATinsert(ATinsert(CheckATermList(l_3), g_3), g_3);
                      }
                    }
                }
              else
                {
                  ATerm p_3 = NULL;
                  t = h_3;
                  t = q_3(t);
                  p_3 = t;
                  t = (ATerm) ATinsert(ATinsert(CheckATermList(p_3), g_3), g_3);
                }
            }
          return(t);
        }
        t = p_9;
        t = collect_p__1_0(c_1, t);
        t = length_0_0(t);
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 1)))
          _fail(t);
        t = y_2;
        t = q_3(t);
        LocalPopChoice(q_6);
      }
    else
      {
        t = p_6;
        t = y_2;
      }
  }
  t = instantiate_sep_list_1_0(d_1, t);
  return(t);
}
ATerm symbol2abox6_0_0 (ATerm t)
{
  ATerm x_3 = NULL,y_3 = NULL,z_3 = NULL,a_4 = NULL;
  if(match_cons(t, sym__4))
    {
      x_3 = ATgetArgument(t, 0);
      y_3 = ATgetArgument(t, 1);
      z_3 = ATgetArgument(t, 2);
      a_4 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = x_3;
  if(match_string(t, "iter-star-sep"))
    {
      t = (ATerm) ATmakeAppl(sym__3, y_3, z_3, a_4);
      t = d_2(y_3, z_3, a_4, t);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("iter-sep", 0, ATtrue)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, y_3, z_3, a_4);
      t = d_2(y_3, z_3, a_4, t);
    }
  return(t);
}
ATerm symbol2abox5_0_0 (ATerm t)
{
  ATerm q_4 = NULL,r_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL,w_4 = NULL;
  static ATerm i_1 (ATerm t);
  static ATerm i_1 (ATerm t)
  {
    static ATerm k_1 (ATerm t);
    static ATerm k_1 (ATerm t)
    {
      ATerm u_6 = t;
      int x_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm l_1 (ATerm t);
          static ATerm l_1 (ATerm t)
          {
            t = (ATerm) ATinsert(ATempty, not_null(q_4));
            return(t);
          }
          t = Instantiate_1_0(l_1, t);
          LocalPopChoice(x_6);
        }
      else
        {
          t = u_6;
          t = flat_list_0_0(t);
        }
      return(t);
    }
    t = try_1_0(k_1, t);
    return(t);
  }
  r_4 = t;
  if(match_cons(t, sym__4))
    {
      t_4 = ATgetArgument(t, 0);
      u_4 = ATgetArgument(t, 1);
      v_4 = ATgetArgument(t, 2);
      w_4 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = t_4;
  if(match_string(t, "iter"))
    {
      t = r_4;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("iter-star", 0, ATtrue)))
        _fail(t);
      t = r_4;
    }
  t = w_4;
  {
    static ATerm h_1 (ATerm t);
    static ATerm h_1 (ATerm t)
    {
      ATerm x_4 = NULL,z_4 = NULL;
      x_4 = t;
      t = term_n_6;
      z_4 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_6, u_4, x_4);
      t = k_2(z_4, u_4, x_4, t);
      return(t);
    }
    t = map_1_0(h_1, t);
  }
  if(((q_4 != NULL) && (q_4 != t)))
    _fail(t);
  else
    q_4 = t;
  t = v_4;
  t = bottomup_1_0(i_1, t);
  return(t);
}
static ATerm f_2 (ATerm t_8, ATerm u_8, ATerm w_8, ATerm v_8, ATerm t)
{
  ATerm a_5 = NULL,b_5 = NULL;
  static ATerm m_1 (ATerm t);
  static ATerm m_1 (ATerm t)
  {
    static ATerm n_1 (ATerm t);
    static ATerm n_1 (ATerm t)
    {
      ATerm z_6 = t;
      int d_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm o_1 (ATerm t);
          static ATerm o_1 (ATerm t)
          {
            t = (ATerm) ATinsert(ATempty, not_null(a_5));
            return(t);
          }
          t = Instantiate_1_0(o_1, t);
          LocalPopChoice(d_7);
        }
      else
        {
          t = z_6;
          t = flat_list_0_0(t);
        }
      return(t);
    }
    t = try_1_0(n_1, t);
    return(t);
  }
  t = term_n_6;
  b_5 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_n_6, u_8, v_8);
  t = k_2(b_5, u_8, v_8, t);
  if(((a_5 != NULL) && (a_5 != t)))
    _fail(t);
  else
    a_5 = t;
  t = w_8;
  t = bottomup_1_0(m_1, t);
  return(t);
}
static ATerm h_2 (ATerm o_8, ATerm p_8, ATerm s_8, ATerm r_8, ATerm q_8, ATerm t)
{
  ATerm d_5 = NULL,e_5 = NULL;
  static ATerm p_1 (ATerm t);
  static ATerm p_1 (ATerm t)
  {
    static ATerm x_1 (ATerm t);
    static ATerm x_1 (ATerm t)
    {
      ATerm e_7 = t;
      int f_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm y_1 (ATerm t);
          static ATerm y_1 (ATerm t)
          {
            t = (ATerm) ATinsert(ATempty, not_null(e_5));
            return(t);
          }
          t = Instantiate_1_0(y_1, t);
          LocalPopChoice(f_7);
        }
      else
        {
          t = e_7;
          t = flat_list_0_0(t);
        }
      return(t);
    }
    t = try_1_0(x_1, t);
    return(t);
  }
  t = (ATerm) ATmakeAppl(sym__3, r_8, p_8, q_8);
  t = k_2(r_8, p_8, q_8, t);
  if(((e_5 != NULL) && (e_5 != t)))
    _fail(t);
  else
    e_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_8, s_8);
  t = index_0_0(t);
  d_5 = t;
  t = (ATerm) ATinsert(ATempty, d_5);
  t = bottomup_1_0(p_1, t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = try_1_0(r_2, t);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm g_7 = t;
  int h_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Instantiate_1_0(s_2, t);
      LocalPopChoice(h_7);
    }
  else
    {
      t = g_7;
      t = flat_list_0_0(t);
    }
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_2 (ATerm f_8, ATerm e_8, ATerm j_8, ATerm t)
{
  ATerm l_5 = NULL,m_5 = NULL,n_5 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_8, (ATerm) ATinsert(ATempty, f_8));
  t = conc_0_0(t);
  m_5 = t;
  {
    ATerm i_7 = t;
    int j_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_5 = NULL,r_5 = NULL;
        t = pp_table_get_0_0(t);
        if(match_cons(t, sym__2))
          {
            l_5 = ATgetArgument(t, 0);
            n_5 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_5;
        if(match_cons(t, sym_Path_2))
          {
            ATerm k_7 = ATgetArgument(t, 0);
            q_5 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_5;
        {
          static ATerm z_1 (ATerm t);
          static ATerm z_1 (ATerm t)
          {
            static ATerm a_2 (ATerm t);
            static ATerm a_2 (ATerm t)
            {
              ATerm s_5 = NULL,t_5 = NULL,u_5 = NULL,v_5 = NULL,n_2 = NULL;
              v_5 = t;
              if(match_cons(t, sym_selector_2))
                {
                  t_5 = ATgetArgument(t, 0);
                  u_5 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(v_5);
              s_5 = t;
              t = u_5;
              if(((r_5 != NULL) && (r_5 != t)))
                _fail(t);
              else
                r_5 = t;
              t = (ATerm) ATmakeAppl(sym_selector_2, t_5, u_5);
              n_2 = t;
              t = SSLsetAnnotations(n_2, s_5);
              return(t);
            }
            t = Cons_2_0(a_2, Nil_0_0, t);
            return(t);
          }
          t = at_last_1_0(z_1, t);
        }
        t = (ATerm) ATmakeAppl(sym__4, not_null(r_5), m_5, n_5, j_8);
        {
          ATerm l_7 = t;
          int m_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_5 = NULL,z_5 = NULL,b_6 = NULL,c_6 = NULL;
              if(match_cons(t, sym__4))
                {
                  ATerm n_7 = ATgetArgument(t, 0);
                  ATerm o_7 = ATgetArgument(t, 1);
                  ATerm b_8 = ATgetArgument(t, 2);
                  ATerm g_8 = ATgetArgument(t, 3);
                }
              else
                _fail(t);
              t = j_8;
              if(match_cons(t, sym_alt_2))
                {
                  c_6 = ATgetArgument(t, 0);
                  w_5 = ATgetArgument(t, 1);
                  t = w_5;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      ATerm w_6 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, c_6, n_5);
                      t = index_0_0(t);
                      w_6 = t;
                      t = (ATerm) ATinsert(ATempty, w_6);
                      t = bottomup_1_0(g_2, t);
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          z_5 = ATgetFirst((ATermList) t);
                          b_6 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = b_6;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym__4, not_null(r_5), m_5, n_5, j_8);
                      t = h_2(not_null(r_5), m_5, n_5, c_6, z_5, t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Some_1))
                    {
                      c_6 = ATgetArgument(t, 0);
                      t = (ATerm) ATmakeAppl(sym__4, not_null(r_5), m_5, n_5, j_8);
                      t = f_2(not_null(r_5), m_5, n_5, c_6, t);
                    }
                  else
                    {
                      if(!(match_cons(t, sym_None_0)))
                        _fail(t);
                      t = (ATerm) ATempty;
                    }
                }
              LocalPopChoice(m_7);
            }
          else
            {
              t = l_7;
              {
                ATerm h_8 = t;
                int i_8 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = symbol2abox5_0_0(t);
                    LocalPopChoice(i_8);
                  }
                else
                  {
                    t = h_8;
                    {
                      ATerm m_8 = t;
                      int n_8 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = symbol2abox6_0_0(t);
                          LocalPopChoice(n_8);
                        }
                      else
                        {
                          t = m_8;
                          if(match_cons(t, sym__4))
                            {
                              ATerm x_8 = ATgetArgument(t, 0);
                              ATerm a_9 = ATgetArgument(t, 1);
                              ATerm b_9 = ATgetArgument(t, 2);
                              ATerm c_9 = ATgetArgument(t, 3);
                            }
                          else
                            _fail(t);
                          t = not_null(r_5);
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("seq", 0, ATtrue)))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym__4, not_null(r_5), m_5, n_5, j_8);
                          t = b_2(m_5, n_5, j_8, t);
                        }
                    }
                  }
              }
            }
        }
        LocalPopChoice(j_7);
      }
    else
      {
        t = i_7;
        t = j_8;
        t = trm2abox_0_0(t);
      }
  }
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = debug_1_0(x_2, t);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = term_d_9;
  return(t);
}
ATerm pp_table_get_0_0 (ATerm t)
{
  ATerm p_7 = NULL,q_7 = NULL,r_7 = NULL;
  p_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_9, p_7);
  t = table_get_0_0(t);
  if(match_cons(t, sym__2))
    {
      r_7 = ATgetArgument(t, 0);
      q_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_7;
  t = path_to_string_0_0(t);
  t = if_verbose1_1_0(t_2, t);
  t = (ATerm) ATmakeAppl(sym__2, r_7, q_7);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = term_f_9;
  return(t);
}
ATerm trm2abox_appl_0_0 (ATerm t)
{
  ATerm s_7 = NULL,t_7 = NULL,u_7 = NULL,v_7 = NULL,w_7 = NULL,x_7 = NULL;
  static ATerm i_3 (ATerm t);
  static ATerm i_3 (ATerm t)
  {
    static ATerm j_3 (ATerm t);
    static ATerm j_3 (ATerm t)
    {
      ATerm g_9 = t;
      int h_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm k_3 (ATerm t);
          static ATerm k_3 (ATerm t)
          {
            t = not_null(w_7);
            return(t);
          }
          t = Instantiate_1_0(k_3, t);
          LocalPopChoice(h_9);
        }
      else
        {
          t = g_9;
          t = flat_list_0_0(t);
        }
      return(t);
    }
    t = try_1_0(j_3, t);
    return(t);
  }
  x_7 = t;
  t = SSL_explode_term(x_7);
  if(match_cons(t, sym__2))
    {
      u_7 = ATgetArgument(t, 0);
      t_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_7;
  t = length_0_0(t);
  s_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_7, (ATerm) ATinsert(ATempty, u_7));
  {
    ATerm i_9 = t;
    int j_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = pp_table_get_0_0(t);
        LocalPopChoice(j_9);
      }
    else
      {
        t = i_9;
        t = debug_1_0(b_3, t);
        _fail(t);
      }
  }
  if(match_cons(t, sym__2))
    {
      ATerm k_9 = ATgetArgument(t, 0);
      v_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_7;
  {
    static ATerm f_3 (ATerm t);
    static ATerm f_3 (ATerm t)
    {
      ATerm y_7 = NULL,z_7 = NULL,a_8 = NULL;
      if(match_cons(t, sym__2))
        {
          y_7 = ATgetArgument(t, 0);
          z_7 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, u_7);
      a_8 = t;
      t = (ATerm) ATmakeAppl(sym__3, y_7, (ATerm)ATinsert(ATempty, u_7), z_7);
      t = k_2(y_7, a_8, z_7, t);
      return(t);
    }
    t = nzip_1_0(f_3, t);
  }
  if(((w_7 != NULL) && (w_7 != t)))
    _fail(t);
  else
    w_7 = t;
  t = v_7;
  t = bottomup_1_0(i_3, t);
  return(t);
}
ATerm trm2abox_real_0_0 (ATerm t)
{
  ATerm c_8 = NULL;
  t = is_real_0_0(t);
  t = real_to_string_0_0(t);
  c_8 = t;
  t = (ATerm) ATmakeAppl(sym_S_1, c_8);
  return(t);
}
ATerm trm2abox_int_0_0 (ATerm t)
{
  ATerm d_8 = NULL;
  t = is_int_0_0(t);
  t = int_to_string_0_0(t);
  d_8 = t;
  t = (ATerm) ATmakeAppl(sym_S_1, d_8);
  return(t);
}
ATerm trm2abox_string_0_0 (ATerm t)
{
  ATerm k_8 = NULL;
  t = is_string_0_0(t);
  k_8 = t;
  t = (ATerm) ATmakeAppl(sym_S_1, k_8);
  return(t);
}
ATerm trm2abox_0_0 (ATerm t)
{
  ATerm l_9 = t;
  int o_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = trm2abox_string_0_0(t);
      LocalPopChoice(o_9);
    }
  else
    {
      t = l_9;
      {
        ATerm q_9 = t;
        int r_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = trm2abox_int_0_0(t);
            LocalPopChoice(r_9);
          }
        else
          {
            t = q_9;
            {
              ATerm s_9 = t;
              int t_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = trm2abox_real_0_0(t);
                  LocalPopChoice(t_9);
                }
              else
                {
                  t = s_9;
                  {
                    ATerm u_9 = t;
                    int y_9 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm a_0 = NULL;
                        a_0 = t;
                        t = SSL_explode_term(a_0);
                        if(match_cons(t, sym__2))
                          {
                            ATerm z_9 = ATgetArgument(t, 0);
                            ATerm a_10 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = a_0;
                        t = is_list_0_0(t);
                        t = map_1_0(trm2abox_0_0, t);
                        LocalPopChoice(y_9);
                      }
                    else
                      {
                        t = u_9;
                        {
                          ATerm b_10 = t;
                          int c_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = trm2abox_appl_0_0(t);
                              LocalPopChoice(c_10);
                            }
                          else
                            {
                              t = b_10;
                              {
                                ATerm l_8 = NULL;
                                l_8 = t;
                                t = (ATerm) ATinsert(ATinsert(ATempty, l_8), term_e_10);
                                t = fatal_error_0_0(t);
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
static ATerm m_3 (ATerm t)
{
  ATerm f_10 = NULL,m_10 = NULL,n_10 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      f_10 = ATgetArgument(t, 0);
      m_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_10;
  t = int_to_string_0_0(t);
  n_10 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, m_10), term_h_10), n_10), term_g_10);
  return(t);
}
ATerm path_to_string_0_0 (ATerm t)
{
  ATerm y_8 = NULL,z_8 = NULL;
  if(match_cons(t, sym_Path1_1))
    {
      y_8 = ATgetArgument(t, 0);
      t = y_8;
    }
  else
    {
      ATerm d_10 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          y_8 = ATgetArgument(t, 0);
          z_8 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = z_8;
      t = map_1_0(m_3, t);
      t = concat_0_0(t);
      d_10 = t;
      t = (ATerm) ATinsert(CheckATermList(d_10), y_8);
      t = concat_strings_0_0(t);
    }
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm o_10 = NULL,t_10 = NULL,u_10 = NULL,t_6 = NULL;
  u_10 = t;
  if(match_cons(t, sym_Arg_1))
    {
      t_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_10);
  o_10 = t;
  t = (ATerm) ATmakeAppl(sym_Arg_1, t_10);
  t_6 = t;
  t = SSLsetAnnotations(t_6, o_10);
  return(t);
}
ATerm arity_of_template_0_0 (ATerm t)
{
  t = collect_1_0(n_3, t);
  t = length_0_0(t);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm w_11 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      w_11 = ATgetArgument(t, 0);
      {
        ATerm i_10 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = w_11;
  return(t);
}
ATerm mk_key_arity_0_0 (ATerm t)
{
  ATerm m_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL;
  if(match_cons(t, sym_PP_Entry_2))
    {
      q_11 = ATgetArgument(t, 0);
      s_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_11;
  if(match_cons(t, sym_Path_2))
    {
      r_11 = ATgetArgument(t, 0);
      m_11 = ATgetArgument(t, 1);
      {
        ATerm v_11 = NULL;
        t = m_11;
        t = map_1_0(o_3, t);
        v_11 = t;
        t = (ATerm) ATinsert(CheckATermList(v_11), r_11);
      }
    }
  else
    {
      ATerm z_11 = NULL;
      if(match_cons(t, sym_Path1_1))
        {
          r_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_11;
      t = arity_of_template_0_0(t);
      z_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_11, (ATerm) ATinsert(ATempty, r_11));
    }
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = debug_1_0(s_3, t);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  t = term_j_10;
  return(t);
}
static ATerm l_2 (ATerm r_10, ATerm s_10, ATerm t)
{
  ATerm a_12 = NULL,b_12 = NULL;
  t = mk_key_arity_0_0(t);
  b_12 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_e_9, b_12, (ATerm) ATmakeAppl(sym__2, r_10, s_10));
  t = table_put_0_0(t);
  t = r_10;
  t = path_to_string_0_0(t);
  a_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_12, s_10);
  t = if_verbose1_1_0(r_3, t);
  return(t);
}
ATerm MakePPTerm_0_0 (ATerm t)
{
  ATerm e_14 = NULL,f_14 = NULL,g_14 = NULL;
  e_14 = t;
  if(match_cons(t, sym_Arg_1))
    {
      f_14 = ATgetArgument(t, 0);
      {
        ATerm o_0 = NULL,y_0 = NULL,v_6 = NULL;
        t = SSLgetAnnotations(e_14);
        o_0 = t;
        t = f_14;
        t = string_to_int_0_0(t);
        y_0 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, y_0);
        v_6 = t;
        t = SSLsetAnnotations(v_6, o_0);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg2_2))
        {
          f_14 = ATgetArgument(t, 0);
          g_14 = ATgetArgument(t, 1);
          {
            ATerm j_1 = NULL,t_1 = NULL,w_1 = NULL,y_6 = NULL;
            t = SSLgetAnnotations(e_14);
            j_1 = t;
            t = f_14;
            t = string_to_int_0_0(t);
            t_1 = t;
            t = g_14;
            t = string_to_int_0_0(t);
            w_1 = t;
            t = (ATerm) ATmakeAppl(sym_Arg2_2, t_1, w_1);
            y_6 = t;
            t = SSLsetAnnotations(y_6, j_1);
          }
        }
      else
        {
          if(match_cons(t, sym_SOpt_2))
            {
              f_14 = ATgetArgument(t, 0);
              g_14 = ATgetArgument(t, 1);
              {
                ATerm w_2 = NULL,a_7 = NULL;
                t = SSLgetAnnotations(e_14);
                w_2 = t;
                t = (ATerm) ATmakeAppl(sym_SOpt_2, f_14, g_14);
                a_7 = t;
                t = SSLsetAnnotations(a_7, w_2);
              }
            }
          else
            {
              if(match_cons(t, sym_S_1))
                {
                  f_14 = ATgetArgument(t, 0);
                  {
                    ATerm h_4 = NULL,m_4 = NULL,b_7 = NULL;
                    t = SSLgetAnnotations(e_14);
                    h_4 = t;
                    t = f_14;
                    t = un_double_quote_0_0(t);
                    t = unescape_0_0(t);
                    m_4 = t;
                    t = (ATerm) ATmakeAppl(sym_S_1, m_4);
                    b_7 = t;
                    t = SSLsetAnnotations(b_7, h_4);
                  }
                }
              else
                {
                  ATerm j_5 = NULL,y_5 = NULL,c_7 = NULL;
                  if(match_cons(t, sym_selector_2))
                    {
                      f_14 = ATgetArgument(t, 0);
                      g_14 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(e_14);
                  j_5 = t;
                  t = f_14;
                  t = string_to_int_0_0(t);
                  y_5 = t;
                  t = (ATerm) ATmakeAppl(sym_selector_2, y_5, g_14);
                  c_7 = t;
                  t = SSLsetAnnotations(c_7, j_5);
                }
            }
        }
    }
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm p_14 = NULL,q_14 = NULL;
  t = topdown_1_0(u_3, t);
  if(match_cons(t, sym_PP_Entry_2))
    {
      p_14 = ATgetArgument(t, 0);
      q_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_2(p_14, q_14, t);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = try_1_0(MakePPTerm_0_0, t);
  return(t);
}
static ATerm m_2 (ATerm q_10, ATerm t)
{
  t = q_10;
  t = reverse_0_0(t);
  t = map_1_0(t_3, t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_k_10;
  return(t);
}
ATerm type_failure_0_0 (ATerm t)
{
  ATerm l_10 = t;
  int p_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = has_option_1_0(v_3, t);
      t = (ATerm) ATinsert(ATempty, term_v_10);
      t = fatal_error_0_0(t);
      LocalPopChoice(p_10);
    }
  else
    {
      t = l_10;
      t = (ATerm) ATinsert(ATempty, term_w_10);
      t = error_0_0(t);
    }
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm v_14 = NULL,w_14 = NULL,j_6 = NULL,k_6 = NULL;
  t = if_verbose1_1_0(b_4, t);
  t = ReadFromFile_0_0(t);
  w_14 = t;
  t = SSL_explode_term(w_14);
  if(match_cons(t, sym__2))
    {
      k_6 = ATgetArgument(t, 0);
      {
        ATerm x_10 = ATgetArgument(t, 1);
        if(((ATgetType(x_10) == AT_LIST) && !(ATisEmpty(x_10))))
          {
            j_6 = ATgetFirst((ATermList) x_10);
            {
              ATerm y_10 = (ATerm) ATgetNext((ATermList) x_10);
              if(((ATgetType(y_10) != AT_LIST) || !(ATisEmpty(y_10))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = k_6;
  if(!(match_string(t, "\"pp-tables-0\"")))
    {
      t = type_failure_0_0(t);
    }
  t = j_6;
  if(match_cons(t, sym_PP_Table_1))
    {
      v_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_2(v_14, t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  t = debug_1_0(c_4, t);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = term_z_10;
  return(t);
}
ATerm read_pp_tables_0_0 (ATerm t)
{
  ATerm u_14 = NULL;
  u_14 = t;
  t = term_e_9;
  t = table_create_0_0(t);
  t = u_14;
  t = map_1_0(w_3, t);
  return(t);
}
ATerm get_config_p_0_0 (ATerm t)
{
  ATerm a_11 = t;
  int b_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_11;
      t = get_config_0_0(t);
      LocalPopChoice(b_11);
    }
  else
    {
      t = a_11;
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = xtc_io_transform_1_0(i_4, t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = trm2abox_0_0(t);
  t = if_2_0(is_list_0_0, j_4, t);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm y_14 = NULL;
  y_14 = t;
  t = (ATerm) ATmakeAppl(sym_HV_2, (ATerm)ATempty, y_14);
  return(t);
}
ATerm ast2abox_0_0 (ATerm t)
{
  ATerm x_14 = NULL;
  x_14 = t;
  t = get_config_p_0_0(t);
  t = reverse_0_0(t);
  t = read_pp_tables_0_0(t);
  t = x_14;
  t = xtc_io_1_0(d_4, t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm d_11 = t;
  int e_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = io_options_0_0(t);
      LocalPopChoice(e_11);
    }
  else
    {
      t = d_11;
      t = ArgOption_3_0(l_4, n_4, o_4, t);
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm o_6 = NULL;
  o_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_11, (ATerm) ATinsert(ATempty, o_6));
  t = extend_config_0_0(t);
  t = o_6;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_f_11;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_2_0(k_4, ast2abox_0_0, t);
  return(t);
}
