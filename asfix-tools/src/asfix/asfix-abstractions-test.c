#include <srts/stratego.h>
#include <ssl/stratego-lib.h>
void init_constant_terms ();
Symbol sym__0;
Symbol sym__1;
Symbol sym__2;
Symbol sym__3;
Symbol sym__4;
Symbol sym__5;
Symbol sym__6;
Symbol sym__7;
Symbol sym__8;
Symbol sym_TagId_empty_0;
Symbol sym_NumChar_1;
Symbol sym_ShortChar_1;
Symbol sym_Character_dunno_a__0_0;
Symbol sym_Character_dunno_b__0_0;
Symbol sym_Character_1;
Symbol sym_range_2;
Symbol sym_CharRange_1;
Symbol sym_conc_ranges_2;
Symbol sym_no_charranges_0;
Symbol sym_CharRanges_1;
Symbol sym_simple_charclass_1;
Symbol sym_not_charclass_1;
Symbol sym_diff_charclass_2;
Symbol sym_and_charclass_2;
Symbol sym_or_charclass_2;
Symbol sym_layout_0;
Symbol sym_cf_1;
Symbol sym_lex_1;
Symbol sym_opt_1;
Symbol sym_seq_1;
Symbol sym_lit_1;
Symbol sym_iter_sep_2;
Symbol sym_iter_star_sep_2;
Symbol sym_iter_1;
Symbol sym_iter_star_1;
Symbol sym_alt_2;
Symbol sym_char_class_1;
Symbol sym_sort_1;
Symbol sym_varsym_1;
Symbol sym_atr_1;
Symbol sym_term_1;
Symbol sym_cons_1;
Symbol sym_bracket_0;
Symbol sym_no_attrs_0;
Symbol sym_attrs_1;
Symbol sym_prod_3;
Symbol sym_appl_2;
Symbol sym_amb_1;
Symbol sym_flatlex_2;
Symbol sym_meta_var_1;
Symbol sym_meta_listvar_1;
Symbol sym_parsetree_2;
Symbol sym_ConcLayout_1;
Symbol sym_id_1;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_Scopes_0;
Symbol sym_Keys_0;
Symbol sym_Keys_1;
Symbol sym_Keys_2;
Symbol sym_Keys_3;
Symbol sym_Keys_4;
Symbol sym_Keys_5;
Symbol sym_Keys_6;
Symbol sym_Keys_7;
Symbol sym_Keys_8;
Symbol sym_Keys_9;
Symbol sym_Keys_10;
Symbol sym_Defined_0;
Symbol sym_Defined_1;
Symbol sym_Defined_2;
Symbol sym_Defined_3;
Symbol sym_Defined_4;
Symbol sym_Defined_5;
Symbol sym_Defined_6;
Symbol sym_Defined_7;
Symbol sym_Defined_8;
Symbol sym_Defined_9;
Symbol sym_Defined_10;
Symbol sym_Undefined_0;
Symbol sym_Infinite_0;
Symbol sym_CUT_0;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
void init_constructors (void)
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
  sym_TagId_empty_0 = ATmakeSymbol("TagId-empty", 0, ATfalse);
  ATprotectSymbol(sym_TagId_empty_0);
  sym_NumChar_1 = ATmakeSymbol("NumChar", 1, ATfalse);
  ATprotectSymbol(sym_NumChar_1);
  sym_ShortChar_1 = ATmakeSymbol("ShortChar", 1, ATfalse);
  ATprotectSymbol(sym_ShortChar_1);
  sym_Character_dunno_a__0_0 = ATmakeSymbol("Character-dunno-a_0", 0, ATfalse);
  ATprotectSymbol(sym_Character_dunno_a__0_0);
  sym_Character_dunno_b__0_0 = ATmakeSymbol("Character-dunno-b_0", 0, ATfalse);
  ATprotectSymbol(sym_Character_dunno_b__0_0);
  sym_Character_1 = ATmakeSymbol("Character", 1, ATfalse);
  ATprotectSymbol(sym_Character_1);
  sym_range_2 = ATmakeSymbol("range", 2, ATfalse);
  ATprotectSymbol(sym_range_2);
  sym_CharRange_1 = ATmakeSymbol("CharRange", 1, ATfalse);
  ATprotectSymbol(sym_CharRange_1);
  sym_conc_ranges_2 = ATmakeSymbol("conc-ranges", 2, ATfalse);
  ATprotectSymbol(sym_conc_ranges_2);
  sym_no_charranges_0 = ATmakeSymbol("no-charranges", 0, ATfalse);
  ATprotectSymbol(sym_no_charranges_0);
  sym_CharRanges_1 = ATmakeSymbol("CharRanges", 1, ATfalse);
  ATprotectSymbol(sym_CharRanges_1);
  sym_simple_charclass_1 = ATmakeSymbol("simple-charclass", 1, ATfalse);
  ATprotectSymbol(sym_simple_charclass_1);
  sym_not_charclass_1 = ATmakeSymbol("not-charclass", 1, ATfalse);
  ATprotectSymbol(sym_not_charclass_1);
  sym_diff_charclass_2 = ATmakeSymbol("diff-charclass", 2, ATfalse);
  ATprotectSymbol(sym_diff_charclass_2);
  sym_and_charclass_2 = ATmakeSymbol("and-charclass", 2, ATfalse);
  ATprotectSymbol(sym_and_charclass_2);
  sym_or_charclass_2 = ATmakeSymbol("or-charclass", 2, ATfalse);
  ATprotectSymbol(sym_or_charclass_2);
  sym_layout_0 = ATmakeSymbol("layout", 0, ATfalse);
  ATprotectSymbol(sym_layout_0);
  sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
  ATprotectSymbol(sym_cf_1);
  sym_lex_1 = ATmakeSymbol("lex", 1, ATfalse);
  ATprotectSymbol(sym_lex_1);
  sym_opt_1 = ATmakeSymbol("opt", 1, ATfalse);
  ATprotectSymbol(sym_opt_1);
  sym_seq_1 = ATmakeSymbol("seq", 1, ATfalse);
  ATprotectSymbol(sym_seq_1);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  sym_iter_sep_2 = ATmakeSymbol("iter-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_sep_2);
  sym_iter_star_sep_2 = ATmakeSymbol("iter-star-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_star_sep_2);
  sym_iter_1 = ATmakeSymbol("iter", 1, ATfalse);
  ATprotectSymbol(sym_iter_1);
  sym_iter_star_1 = ATmakeSymbol("iter-star", 1, ATfalse);
  ATprotectSymbol(sym_iter_star_1);
  sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
  ATprotectSymbol(sym_alt_2);
  sym_char_class_1 = ATmakeSymbol("char-class", 1, ATfalse);
  ATprotectSymbol(sym_char_class_1);
  sym_sort_1 = ATmakeSymbol("sort", 1, ATfalse);
  ATprotectSymbol(sym_sort_1);
  sym_varsym_1 = ATmakeSymbol("varsym", 1, ATfalse);
  ATprotectSymbol(sym_varsym_1);
  sym_atr_1 = ATmakeSymbol("atr", 1, ATfalse);
  ATprotectSymbol(sym_atr_1);
  sym_term_1 = ATmakeSymbol("term", 1, ATfalse);
  ATprotectSymbol(sym_term_1);
  sym_cons_1 = ATmakeSymbol("cons", 1, ATfalse);
  ATprotectSymbol(sym_cons_1);
  sym_bracket_0 = ATmakeSymbol("bracket", 0, ATfalse);
  ATprotectSymbol(sym_bracket_0);
  sym_no_attrs_0 = ATmakeSymbol("no-attrs", 0, ATfalse);
  ATprotectSymbol(sym_no_attrs_0);
  sym_attrs_1 = ATmakeSymbol("attrs", 1, ATfalse);
  ATprotectSymbol(sym_attrs_1);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
  ATprotectSymbol(sym_appl_2);
  sym_amb_1 = ATmakeSymbol("amb", 1, ATfalse);
  ATprotectSymbol(sym_amb_1);
  sym_flatlex_2 = ATmakeSymbol("flatlex", 2, ATfalse);
  ATprotectSymbol(sym_flatlex_2);
  sym_meta_var_1 = ATmakeSymbol("meta-var", 1, ATfalse);
  ATprotectSymbol(sym_meta_var_1);
  sym_meta_listvar_1 = ATmakeSymbol("meta-listvar", 1, ATfalse);
  ATprotectSymbol(sym_meta_listvar_1);
  sym_parsetree_2 = ATmakeSymbol("parsetree", 2, ATfalse);
  ATprotectSymbol(sym_parsetree_2);
  sym_ConcLayout_1 = ATmakeSymbol("ConcLayout", 1, ATfalse);
  ATprotectSymbol(sym_ConcLayout_1);
  sym_id_1 = ATmakeSymbol("id", 1, ATfalse);
  ATprotectSymbol(sym_id_1);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_Keys_0 = ATmakeSymbol("Keys", 0, ATfalse);
  ATprotectSymbol(sym_Keys_0);
  sym_Keys_1 = ATmakeSymbol("Keys", 1, ATfalse);
  ATprotectSymbol(sym_Keys_1);
  sym_Keys_2 = ATmakeSymbol("Keys", 2, ATfalse);
  ATprotectSymbol(sym_Keys_2);
  sym_Keys_3 = ATmakeSymbol("Keys", 3, ATfalse);
  ATprotectSymbol(sym_Keys_3);
  sym_Keys_4 = ATmakeSymbol("Keys", 4, ATfalse);
  ATprotectSymbol(sym_Keys_4);
  sym_Keys_5 = ATmakeSymbol("Keys", 5, ATfalse);
  ATprotectSymbol(sym_Keys_5);
  sym_Keys_6 = ATmakeSymbol("Keys", 6, ATfalse);
  ATprotectSymbol(sym_Keys_6);
  sym_Keys_7 = ATmakeSymbol("Keys", 7, ATfalse);
  ATprotectSymbol(sym_Keys_7);
  sym_Keys_8 = ATmakeSymbol("Keys", 8, ATfalse);
  ATprotectSymbol(sym_Keys_8);
  sym_Keys_9 = ATmakeSymbol("Keys", 9, ATfalse);
  ATprotectSymbol(sym_Keys_9);
  sym_Keys_10 = ATmakeSymbol("Keys", 10, ATfalse);
  ATprotectSymbol(sym_Keys_10);
  sym_Defined_0 = ATmakeSymbol("Defined", 0, ATfalse);
  ATprotectSymbol(sym_Defined_0);
  sym_Defined_1 = ATmakeSymbol("Defined", 1, ATfalse);
  ATprotectSymbol(sym_Defined_1);
  sym_Defined_2 = ATmakeSymbol("Defined", 2, ATfalse);
  ATprotectSymbol(sym_Defined_2);
  sym_Defined_3 = ATmakeSymbol("Defined", 3, ATfalse);
  ATprotectSymbol(sym_Defined_3);
  sym_Defined_4 = ATmakeSymbol("Defined", 4, ATfalse);
  ATprotectSymbol(sym_Defined_4);
  sym_Defined_5 = ATmakeSymbol("Defined", 5, ATfalse);
  ATprotectSymbol(sym_Defined_5);
  sym_Defined_6 = ATmakeSymbol("Defined", 6, ATfalse);
  ATprotectSymbol(sym_Defined_6);
  sym_Defined_7 = ATmakeSymbol("Defined", 7, ATfalse);
  ATprotectSymbol(sym_Defined_7);
  sym_Defined_8 = ATmakeSymbol("Defined", 8, ATfalse);
  ATprotectSymbol(sym_Defined_8);
  sym_Defined_9 = ATmakeSymbol("Defined", 9, ATfalse);
  ATprotectSymbol(sym_Defined_9);
  sym_Defined_10 = ATmakeSymbol("Defined", 10, ATfalse);
  ATprotectSymbol(sym_Defined_10);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
  ATprotectSymbol(sym_CUT_0);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_a_10;
ATerm term_z_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_o_8;
ATerm term_j_8;
ATerm term_e_8;
ATerm term_b_8;
ATerm term_y_7;
ATerm term_t_7;
ATerm term_s_7;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_p_7;
ATerm term_o_7;
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
ATerm term_u_6;
ATerm term_t_6;
ATerm term_s_6;
void init_constant_terms (void)
{
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("  succeeded; result: ", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("test4", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(sym_layout_0);
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(sym_cf_1, term_d_7);
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(sym_opt_1, term_d_7);
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(sym_cf_1, term_f_7);
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(sym_no_attrs_0);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(sym_lex_1, term_d_7);
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("test3b", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(sym_prod_3, (ATerm)ATempty, term_g_7, term_h_7);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(sym_appl_2, term_l_7, (ATerm) ATempty);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(sym_range_2, term_n_7, term_j_7);
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Layout", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(sym_id_1, term_q_7);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("test3a", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("test2e", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("test2d", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("test2c", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("test2b", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("test2a", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("test1a", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(sym__2, term_m_7, term_m_7);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("left", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(sym_atr_1, term_u_8);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("  result not equal: ", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("  expected: ", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("test1", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym__2, term_q_9, term_m_7);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("successes: ", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("failures: ", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(sym__2, term_u_9, term_u_9);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("test suite: ", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("asfix-abstractions-test", 0, ATtrue));
}
ATerm apply_and_show_3 (ATerm, ATerm l_63 (ATerm), ATerm m_63 (ATerm), ATerm n_63 (ATerm));
ATerm test4_0 (ATerm);
ATerm test3b_0 (ATerm);
ATerm test3a_0 (ATerm);
ATerm test2e_0 (ATerm);
ATerm test2d_0 (ATerm);
ATerm test2c_0 (ATerm);
ATerm test2b_0 (ATerm);
ATerm test2a_0 (ATerm);
ATerm test1a_0 (ATerm);
ATerm conc_layout3_0 (ATerm);
ATerm conc_layout2_0 (ATerm);
ATerm conc_layout1_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm record_failure_0 (ATerm);
ATerm add_0 (ATerm);
ATerm record_success_0 (ATerm);
ATerm do_test_2 (ATerm, ATerm p_62 (ATerm), ATerm q_62 (ATerm));
ATerm apply_test_4 (ATerm, ATerm t_62 (ATerm), ATerm u_62 (ATerm), ATerm v_62 (ATerm), ATerm w_62 (ATerm));
ATerm test1_0 (ATerm);
ATerm check_for_failures_0 (ATerm);
ATerm _2 (ATerm, ATerm z_36 (ATerm), ATerm a_37 (ATerm));
ATerm report_test_0 (ATerm);
ATerm init_record_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm x_61 (ATerm));
ATerm test_suite_2 (ATerm, ATerm n_62 (ATerm), ATerm o_62 (ATerm));
ATerm main_0 (ATerm);
ATerm apply_and_show_3 (ATerm t, ATerm l_63 (ATerm), ATerm m_63 (ATerm), ATerm n_63 (ATerm))
{
  ATerm i_0 = NULL;
  ATerm a_0 (ATerm t)
  {
    ATerm m_6 = t;
    int n_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_0 = NULL;
        t = n_63(t);
        {
          t = m_63(t);
          {
            j_0 = t;
            if(((i_0 != NULL) && (i_0 != j_0)))
              _fail(j_0);
            else
              i_0 = j_0;
          }
        }
        LocalPopChoice(n_6);
      }
    else
      {
        t = m_6;
        {
          t = term_s_6;
          {
            t = debug_0(t);
            _fail(t);
          }
        }
      }
    {
      t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_0)), term_t_6);
      t = debug_0(t);
    }
    return(t);
  }
  t = do_test_2(t, l_63, a_0);
  return(t);
}
ATerm test4_0 (ATerm t)
{
  ATerm b_0 (ATerm t)
  {
    t = term_u_6;
    return(t);
  }
  ATerm c_0 (ATerm t)
  {
    ATerm v_6 = t;
    int w_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_layout1_0(t);
        LocalPopChoice(w_6);
      }
    else
      {
        t = v_6;
        {
          ATerm b_7 = t;
          int c_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = conc_layout2_0(t);
              LocalPopChoice(c_7);
            }
          else
            {
              t = b_7;
              t = conc_layout3_0(t);
            }
        }
      }
    return(t);
  }
  ATerm d_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_e_7), term_g_7, term_h_7), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_i_7), term_e_7, term_h_7), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term_j_7))), term_i_7, term_h_7), (ATerm) ATinsert(ATempty, term_j_7)))))), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_e_7), term_g_7, term_h_7), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_i_7), term_e_7, term_h_7), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term_j_7))), term_i_7, term_h_7), (ATerm) ATinsert(ATempty, term_j_7)))))));
    return(t);
  }
  t = apply_and_show_3(t, b_0, c_0, d_0);
  return(t);
}
ATerm test3b_0 (ATerm t)
{
  ATerm e_0 (ATerm t)
  {
    t = term_k_7;
    return(t);
  }
  ATerm f_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, term_m_7, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_i_7), term_e_7, term_h_7), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_p_7), term_o_7))), term_i_7, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_r_7))), (ATerm) ATinsert(ATempty, term_j_7)))));
    return(t);
  }
  ATerm g_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_i_7), term_e_7, term_h_7), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_p_7), term_o_7))), term_i_7, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_r_7))), (ATerm) ATinsert(ATempty, term_j_7))));
    return(t);
  }
  t = apply_test_4(t, e_0, conc_layout2_0, f_0, g_0);
  return(t);
}
ATerm test3a_0 (ATerm t)
{
  ATerm h_0 (ATerm t)
  {
    t = term_s_7;
    return(t);
  }
  ATerm k_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_i_7), term_e_7, term_h_7), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_p_7), term_o_7))), term_i_7, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_r_7))), (ATerm) ATinsert(ATempty, term_j_7)))), term_m_7);
    return(t);
  }
  ATerm l_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_i_7), term_e_7, term_h_7), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_p_7), term_o_7))), term_i_7, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_r_7))), (ATerm) ATinsert(ATempty, term_j_7))));
    return(t);
  }
  t = apply_test_4(t, h_0, conc_layout3_0, k_0, l_0);
  return(t);
}
ATerm test2e_0 (ATerm t)
{
  ATerm f_1 (ATerm t)
  {
    t = term_t_7;
    return(t);
  }
  ATerm g_1 (ATerm t)
  {
    ATerm u_7 = t;
    int v_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_layout1_0(t);
        LocalPopChoice(v_7);
      }
    else
      {
        t = u_7;
        {
          ATerm w_7 = t;
          int x_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = conc_layout2_0(t);
              LocalPopChoice(x_7);
            }
          else
            {
              t = w_7;
              t = conc_layout3_0(t);
            }
        }
      }
    return(t);
  }
  ATerm h_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_i_7), term_e_7, term_h_7), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_p_7), term_o_7))), term_i_7, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_r_7))), (ATerm) ATinsert(ATempty, term_j_7)))), term_m_7);
    return(t);
  }
  ATerm b_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_i_7), term_e_7, term_h_7), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_p_7), term_o_7))), term_i_7, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_r_7))), (ATerm) ATinsert(ATempty, term_j_7))));
    return(t);
  }
  t = apply_test_4(t, f_1, g_1, h_1, b_2);
  return(t);
}
ATerm test2d_0 (ATerm t)
{
  ATerm c_2 (ATerm t)
  {
    t = term_y_7;
    return(t);
  }
  ATerm d_2 (ATerm t)
  {
    ATerm z_7 = t;
    int a_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_layout2_0(t);
        LocalPopChoice(a_8);
      }
    else
      {
        t = z_7;
        t = conc_layout3_0(t);
      }
    return(t);
  }
  ATerm e_4 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, term_m_7, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_i_7), term_e_7, term_h_7), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_p_7), term_o_7))), term_i_7, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_r_7))), (ATerm) ATinsert(ATempty, term_j_7)))));
    return(t);
  }
  ATerm f_4 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_i_7), term_e_7, term_h_7), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_p_7), term_o_7))), term_i_7, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_r_7))), (ATerm) ATinsert(ATempty, term_j_7))));
    return(t);
  }
  t = apply_test_4(t, c_2, d_2, e_4, f_4);
  return(t);
}
ATerm test2c_0 (ATerm t)
{
  ATerm g_4 (ATerm t)
  {
    t = term_b_8;
    return(t);
  }
  ATerm h_4 (ATerm t)
  {
    ATerm c_8 = t;
    int d_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_layout2_0(t);
        LocalPopChoice(d_8);
      }
    else
      {
        t = c_8;
        t = conc_layout3_0(t);
      }
    return(t);
  }
  ATerm k_4 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_i_7), term_e_7, term_h_7), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_p_7), term_o_7))), term_i_7, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_r_7))), (ATerm) ATinsert(ATempty, term_j_7)))), term_m_7);
    return(t);
  }
  ATerm l_4 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_i_7), term_e_7, term_h_7), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_p_7), term_o_7))), term_i_7, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_r_7))), (ATerm) ATinsert(ATempty, term_j_7))));
    return(t);
  }
  t = apply_test_4(t, g_4, h_4, k_4, l_4);
  return(t);
}
ATerm test2b_0 (ATerm t)
{
  ATerm n_4 (ATerm t)
  {
    t = term_e_8;
    return(t);
  }
  ATerm o_4 (ATerm t)
  {
    ATerm f_8 = t;
    int g_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_layout1_0(t);
        LocalPopChoice(g_8);
      }
    else
      {
        t = f_8;
        {
          ATerm h_8 = t;
          int i_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = conc_layout2_0(t);
              LocalPopChoice(i_8);
            }
          else
            {
              t = h_8;
              t = conc_layout3_0(t);
            }
        }
      }
    return(t);
  }
  ATerm p_4 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, term_m_7, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_i_7), term_e_7, term_h_7), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_p_7), term_o_7))), term_i_7, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_r_7))), (ATerm) ATinsert(ATempty, term_j_7)))));
    return(t);
  }
  ATerm u_4 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_i_7), term_e_7, term_h_7), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_p_7), term_o_7))), term_i_7, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_r_7))), (ATerm) ATinsert(ATempty, term_j_7))));
    return(t);
  }
  t = apply_test_4(t, n_4, o_4, p_4, u_4);
  return(t);
}
ATerm test2a_0 (ATerm t)
{
  ATerm v_4 (ATerm t)
  {
    t = term_j_8;
    return(t);
  }
  ATerm w_4 (ATerm t)
  {
    ATerm k_8 = t;
    int l_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_layout1_0(t);
        LocalPopChoice(l_8);
      }
    else
      {
        t = k_8;
        {
          ATerm m_8 = t;
          int n_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = conc_layout2_0(t);
              LocalPopChoice(n_8);
            }
          else
            {
              t = m_8;
              t = conc_layout3_0(t);
            }
        }
      }
    return(t);
  }
  ATerm x_4 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_i_7), term_e_7, term_h_7), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_p_7), term_o_7))), term_i_7, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_r_7))), (ATerm) ATinsert(ATempty, term_j_7)))), term_m_7);
    return(t);
  }
  ATerm z_4 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_i_7), term_e_7, term_h_7), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_p_7), term_o_7))), term_i_7, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_r_7))), (ATerm) ATinsert(ATempty, term_j_7))));
    return(t);
  }
  t = apply_test_4(t, v_4, w_4, x_4, z_4);
  return(t);
}
ATerm test1a_0 (ATerm t)
{
  ATerm a_5 (ATerm t)
  {
    t = term_o_8;
    return(t);
  }
  ATerm b_5 (ATerm t)
  {
    ATerm p_8 = t;
    int q_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_layout1_0(t);
        LocalPopChoice(q_8);
      }
    else
      {
        t = p_8;
        {
          ATerm r_8 = t;
          int s_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = conc_layout2_0(t);
              LocalPopChoice(s_8);
            }
          else
            {
              t = r_8;
              t = conc_layout3_0(t);
            }
        }
      }
    return(t);
  }
  ATerm c_5 (ATerm t)
  {
    t = term_t_8;
    return(t);
  }
  ATerm d_5 (ATerm t)
  {
    t = term_m_7;
    return(t);
  }
  t = apply_test_4(t, a_5, b_5, c_5, d_5);
  return(t);
}
ATerm conc_layout3_0 (ATerm t)
{
  ATerm v_0 = NULL,w_0 = NULL,x_0 = NULL,y_0 = NULL,z_0 = NULL,a_1 = NULL,b_1 = NULL,c_1 = NULL,d_1 = NULL,e_1 = NULL;
  v_0 = t;
  m_0 :
  if(match_cons(v_0, sym__2))
    {
      w_0 = ATgetArgument(v_0, 0);
      x_0 = ATgetArgument(v_0, 1);
      n_0 :
      if(match_cons(x_0, sym_appl_2))
        {
          y_0 = ATgetArgument(x_0, 0);
          e_1 = ATgetArgument(x_0, 1);
          o_0 :
          if(match_cons(y_0, sym_prod_3))
            {
              z_0 = ATgetArgument(y_0, 0);
              a_1 = ATgetArgument(y_0, 1);
              d_1 = ATgetArgument(y_0, 2);
              p_0 :
              if(((ATermList) z_0 == ATempty))
                {
                  q_0 :
                  if(match_cons(a_1, sym_cf_1))
                    {
                      b_1 = ATgetArgument(a_1, 0);
                      r_0 :
                      if(match_cons(b_1, sym_opt_1))
                        {
                          c_1 = ATgetArgument(b_1, 0);
                          s_0 :
                          if(match_cons(c_1, sym_layout_0))
                            {
                              t_0 :
                              if(match_cons(d_1, sym_no_attrs_0))
                                {
                                  u_0 :
                                  if(((ATermList) e_1 == ATempty))
                                    {
                                      t = not_null(w_0);
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                              else
                                {
                                  _fail(t);
                                }
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_layout2_0 (ATerm t)
{
  ATerm r_1 = NULL,s_1 = NULL,t_1 = NULL,u_1 = NULL,v_1 = NULL,w_1 = NULL,x_1 = NULL,y_1 = NULL,z_1 = NULL,a_2 = NULL;
  r_1 = t;
  i_1 :
  if(match_cons(r_1, sym__2))
    {
      s_1 = ATgetArgument(r_1, 0);
      a_2 = ATgetArgument(r_1, 1);
      j_1 :
      if(match_cons(s_1, sym_appl_2))
        {
          t_1 = ATgetArgument(s_1, 0);
          z_1 = ATgetArgument(s_1, 1);
          k_1 :
          if(match_cons(t_1, sym_prod_3))
            {
              u_1 = ATgetArgument(t_1, 0);
              v_1 = ATgetArgument(t_1, 1);
              y_1 = ATgetArgument(t_1, 2);
              l_1 :
              if(((ATermList) u_1 == ATempty))
                {
                  m_1 :
                  if(match_cons(v_1, sym_cf_1))
                    {
                      w_1 = ATgetArgument(v_1, 0);
                      n_1 :
                      if(match_cons(w_1, sym_opt_1))
                        {
                          x_1 = ATgetArgument(w_1, 0);
                          o_1 :
                          if(match_cons(x_1, sym_layout_0))
                            {
                              p_1 :
                              if(match_cons(y_1, sym_no_attrs_0))
                                {
                                  q_1 :
                                  if(((ATermList) z_1 == ATempty))
                                    {
                                      t = not_null(a_2);
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                              else
                                {
                                  _fail(t);
                                }
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_layout1_0 (ATerm t)
{
  ATerm d_3 = NULL,e_3 = NULL,f_3 = NULL,g_3 = NULL,h_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL,z_3 = NULL,a_4 = NULL,b_4 = NULL,c_4 = NULL,d_4 = NULL;
  d_3 = t;
  e_2 :
  if(match_cons(d_3, sym__2))
    {
      e_3 = ATgetArgument(d_3, 0);
      r_3 = ATgetArgument(d_3, 1);
      f_2 :
      if(match_cons(e_3, sym_appl_2))
        {
          f_3 = ATgetArgument(e_3, 0);
          o_3 = ATgetArgument(e_3, 1);
          g_2 :
          if(match_cons(f_3, sym_prod_3))
            {
              g_3 = ATgetArgument(f_3, 0);
              k_3 = ATgetArgument(f_3, 1);
              n_3 = ATgetArgument(f_3, 2);
              h_2 :
              if(((ATgetType(g_3) == AT_LIST) && ((ATermList) g_3 != ATempty)))
                {
                  h_3 = ATgetFirst((ATermList) g_3);
                  j_3 = (ATerm) ATgetNext((ATermList) g_3);
                  i_2 :
                  if(match_cons(h_3, sym_cf_1))
                    {
                      i_3 = ATgetArgument(h_3, 0);
                      j_2 :
                      if(match_cons(i_3, sym_layout_0))
                        {
                          k_2 :
                          if(((ATermList) j_3 == ATempty))
                            {
                              l_2 :
                              if(match_cons(k_3, sym_cf_1))
                                {
                                  l_3 = ATgetArgument(k_3, 0);
                                  m_2 :
                                  if(match_cons(l_3, sym_opt_1))
                                    {
                                      m_3 = ATgetArgument(l_3, 0);
                                      n_2 :
                                      if(match_cons(m_3, sym_layout_0))
                                        {
                                          o_2 :
                                          if(match_cons(n_3, sym_no_attrs_0))
                                            {
                                              p_2 :
                                              if(((ATgetType(o_3) == AT_LIST) && ((ATermList) o_3 != ATempty)))
                                                {
                                                  p_3 = ATgetFirst((ATermList) o_3);
                                                  q_3 = (ATerm) ATgetNext((ATermList) o_3);
                                                  q_2 :
                                                  if(((ATermList) q_3 == ATempty))
                                                    {
                                                      r_2 :
                                                      if(match_cons(r_3, sym_appl_2))
                                                        {
                                                          s_3 = ATgetArgument(r_3, 0);
                                                          b_4 = ATgetArgument(r_3, 1);
                                                          s_2 :
                                                          if(match_cons(s_3, sym_prod_3))
                                                            {
                                                              t_3 = ATgetArgument(s_3, 0);
                                                              x_3 = ATgetArgument(s_3, 1);
                                                              a_4 = ATgetArgument(s_3, 2);
                                                              t_2 :
                                                              if(((ATgetType(t_3) == AT_LIST) && ((ATermList) t_3 != ATempty)))
                                                                {
                                                                  u_3 = ATgetFirst((ATermList) t_3);
                                                                  w_3 = (ATerm) ATgetNext((ATermList) t_3);
                                                                  u_2 :
                                                                  if(match_cons(u_3, sym_cf_1))
                                                                    {
                                                                      v_3 = ATgetArgument(u_3, 0);
                                                                      v_2 :
                                                                      if(match_cons(v_3, sym_layout_0))
                                                                        {
                                                                          w_2 :
                                                                          if(((ATermList) w_3 == ATempty))
                                                                            {
                                                                              x_2 :
                                                                              if(match_cons(x_3, sym_cf_1))
                                                                                {
                                                                                  y_3 = ATgetArgument(x_3, 0);
                                                                                  y_2 :
                                                                                  if(match_cons(y_3, sym_opt_1))
                                                                                    {
                                                                                      z_3 = ATgetArgument(y_3, 0);
                                                                                      z_2 :
                                                                                      if(match_cons(z_3, sym_layout_0))
                                                                                        {
                                                                                          a_3 :
                                                                                          if(match_cons(a_4, sym_no_attrs_0))
                                                                                            {
                                                                                              b_3 :
                                                                                              if(((ATgetType(b_4) == AT_LIST) && ((ATermList) b_4 != ATempty)))
                                                                                                {
                                                                                                  c_4 = ATgetFirst((ATermList) b_4);
                                                                                                  d_4 = (ATerm) ATgetNext((ATermList) b_4);
                                                                                                  c_3 :
                                                                                                  if(((ATermList) d_4 == ATempty))
                                                                                                    {
                                                                                                      t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_e_7), term_g_7, term_h_7), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATempty, term_e_7), term_e_7), term_e_7, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_v_8))), (ATerm) ATinsert(ATinsert(ATempty, not_null(c_4)), not_null(p_3)))));
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      _fail(t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  _fail(t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              _fail(t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      _fail(t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  _fail(t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              _fail(t);
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  _fail(t);
                                                                }
                                                            }
                                                          else
                                                            {
                                                              _fail(t);
                                                            }
                                                        }
                                                      else
                                                        {
                                                          _fail(t);
                                                        }
                                                    }
                                                  else
                                                    {
                                                      _fail(t);
                                                    }
                                                }
                                              else
                                                {
                                                  _fail(t);
                                                }
                                            }
                                          else
                                            {
                                              _fail(t);
                                            }
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                              else
                                {
                                  _fail(t);
                                }
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm w_8;
  w_8 = t;
  {
    ATerm i_4 = NULL;
    ATerm j_4 = NULL;
    j_4 = t;
    if(((i_4 != NULL) && (i_4 != j_4)))
      _fail(j_4);
    else
      i_4 = j_4;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_8, (ATerm) ATinsert(ATempty, not_null(i_4)));
      t = printnl_0(t);
    }
  }
  t = w_8;
  return(t);
}
ATerm record_failure_0 (ATerm t)
{
  ATerm j_5 (ATerm t)
  {
    ATerm m_4 = NULL;
    m_4 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(m_4), term_y_8);
      t = add_0(t);
    }
    return(t);
  }
  t = _2(t, _id, j_5);
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm r_4 = NULL,s_4 = NULL,t_4 = NULL;
  r_4 = t;
  q_4 :
  if(match_cons(r_4, sym__2))
    {
      s_4 = ATgetArgument(r_4, 0);
      t_4 = ATgetArgument(r_4, 1);
      {
        ATerm z_8 = t;
        int a_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(s_4), not_null(t_4));
            LocalPopChoice(a_9);
          }
        else
          {
            t = z_8;
            t = SSL_addr(not_null(s_4), not_null(t_4));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm record_success_0 (ATerm t)
{
  ATerm k_5 (ATerm t)
  {
    ATerm y_4 = NULL;
    y_4 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(y_4), term_y_8);
      t = add_0(t);
    }
    return(t);
  }
  t = _2(t, k_5, _id);
  return(t);
}
ATerm do_test_2 (ATerm t, ATerm p_62 (ATerm), ATerm q_62 (ATerm))
{
  ATerm b_9;
  b_9 = t;
  {
    t = p_62(t);
    t = debug_0(t);
  }
  t = b_9;
  {
    ATerm c_9 = t;
    int d_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_9;
        e_9 = t;
        t = q_62(t);
        t = e_9;
        t = record_success_0(t);
        LocalPopChoice(d_9);
      }
    else
      {
        t = c_9;
        t = record_failure_0(t);
      }
  }
  return(t);
}
ATerm apply_test_4 (ATerm t, ATerm t_62 (ATerm), ATerm u_62 (ATerm), ATerm v_62 (ATerm), ATerm w_62 (ATerm))
{
  ATerm e_5 = NULL,f_5 = NULL;
  ATerm l_5 (ATerm t)
  {
    ATerm h_5 = NULL;
    ATerm f_9 = t;
    int g_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_5 = NULL;
        t = v_62(t);
        {
          t = u_62(t);
          {
            g_5 = t;
            if(((e_5 != NULL) && (e_5 != g_5)))
              _fail(g_5);
            else
              e_5 = g_5;
          }
        }
        LocalPopChoice(g_9);
      }
    else
      {
        t = f_9;
        {
          t = term_s_6;
          {
            t = debug_0(t);
            _fail(t);
          }
        }
      }
    {
      t = w_62(t);
      {
        h_5 = t;
        {
          if(((f_5 != NULL) && (f_5 != h_5)))
            _fail(h_5);
          else
            f_5 = h_5;
          {
            ATerm h_9 = t;
            int i_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_5 = NULL;
                t = not_null(f_5);
                {
                  i_5 = t;
                  if(((e_5 != NULL) && (e_5 != i_5)))
                    _fail(i_5);
                  else
                    e_5 = i_5;
                }
                LocalPopChoice(i_9);
              }
            else
              {
                t = h_9;
                {
                  t = not_null(e_5);
                  {
                    ATerm o_5 (ATerm t)
                    {
                      t = term_j_9;
                      return(t);
                    }
                    t = debug_1(t, o_5);
                    {
                      t = not_null(f_5);
                      {
                        ATerm p_5 (ATerm t)
                        {
                          t = term_k_9;
                          return(t);
                        }
                        t = debug_1(t, p_5);
                        _fail(t);
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
  t = do_test_2(t, t_62, l_5);
  return(t);
}
ATerm test1_0 (ATerm t)
{
  ATerm q_5 (ATerm t)
  {
    t = term_l_9;
    return(t);
  }
  ATerm r_5 (ATerm t)
  {
    ATerm m_9 = t;
    int n_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_layout1_0(t);
        LocalPopChoice(n_9);
      }
    else
      {
        t = m_9;
        {
          ATerm o_9 = t;
          int p_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = conc_layout2_0(t);
              LocalPopChoice(p_9);
            }
          else
            {
              t = o_9;
              t = conc_layout3_0(t);
            }
        }
      }
    return(t);
  }
  ATerm s_5 (ATerm t)
  {
    t = term_r_9;
    return(t);
  }
  ATerm x_5 (ATerm t)
  {
    t = term_q_9;
    return(t);
  }
  t = apply_test_4(t, q_5, r_5, s_5, x_5);
  return(t);
}
ATerm check_for_failures_0 (ATerm t)
{
  ATerm y_5 (ATerm t)
  {
    ATerm n_5 = NULL;
    n_5 = t;
    m_5 :
    if(!(match_int(n_5, 0)))
      {
        _fail(t);
      }
    return(t);
  }
  t = _2(t, _id, y_5);
  return(t);
}
ATerm _2 (ATerm t, ATerm z_36 (ATerm), ATerm a_37 (ATerm))
{
  ATerm u_5 = NULL,v_5 = NULL,w_5 = NULL;
  u_5 = t;
  t_5 :
  if(match_cons(u_5, sym__2))
    {
      v_5 = ATgetArgument(u_5, 0);
      w_5 = ATgetArgument(u_5, 1);
      {
        ATerm a_6 = NULL,c_6 = NULL;
        ATerm b_6 = NULL;
        t = SSLgetAnnotations(not_null(u_5));
        {
          b_6 = t;
          if(((a_6 != NULL) && (a_6 != b_6)))
            _fail(b_6);
          else
            a_6 = b_6;
        }
        {
          t = not_null(v_5);
          {
            ATerm e_6 = NULL;
            t = z_36(t);
            {
              c_6 = t;
              {
                t = not_null(w_5);
                {
                  ATerm g_6 = NULL;
                  t = a_37(t);
                  {
                    e_6 = t;
                    {
                      ATerm h_6 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(c_6), not_null(e_6)), not_null(a_6));
                      {
                        h_6 = t;
                        if(((g_6 != NULL) && (g_6 != h_6)))
                          _fail(h_6);
                        else
                          g_6 = h_6;
                      }
                      t = not_null(g_6);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm report_test_0 (ATerm t)
{
  ATerm z_5 (ATerm t)
  {
    ATerm f_6 (ATerm t)
    {
      t = term_s_9;
      return(t);
    }
    t = debug_1(t, f_6);
    return(t);
  }
  ATerm d_6 (ATerm t)
  {
    ATerm i_6 (ATerm t)
    {
      t = term_t_9;
      return(t);
    }
    t = debug_1(t, i_6);
    return(t);
  }
  t = _2(t, z_5, d_6);
  return(t);
}
ATerm init_record_0 (ATerm t)
{
  t = term_v_9;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm p_6 = NULL,q_6 = NULL,r_6 = NULL;
  p_6 = t;
  o_6 :
  if(match_cons(p_6, sym__2))
    {
      q_6 = ATgetArgument(p_6, 0);
      r_6 = ATgetArgument(p_6, 1);
      {
        ATerm w_9;
        w_9 = t;
        t = SSL_printnl(not_null(q_6), not_null(r_6));
        t = w_9;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm x_61 (ATerm))
{
  ATerm x_9;
  x_9 = t;
  {
    ATerm x_6 = NULL,z_6 = NULL;
    ATerm y_9;
    y_9 = t;
    {
      ATerm y_6 = NULL;
      t = x_61(t);
      {
        y_6 = t;
        if(((x_6 != NULL) && (x_6 != y_6)))
          _fail(y_6);
        else
          x_6 = y_6;
      }
    }
    t = y_9;
    {
      ATerm a_7 = NULL;
      a_7 = t;
      if(((z_6 != NULL) && (z_6 != a_7)))
        _fail(a_7);
      else
        z_6 = a_7;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_6)), not_null(x_6)));
        t = printnl_0(t);
      }
    }
  }
  t = x_9;
  return(t);
}
ATerm test_suite_2 (ATerm t, ATerm n_62 (ATerm), ATerm o_62 (ATerm))
{
  t = n_62(t);
  {
    ATerm j_6 (ATerm t)
    {
      t = term_z_9;
      return(t);
    }
    t = debug_1(t, j_6);
    {
      t = init_record_0(t);
      {
        t = o_62(t);
        {
          t = report_test_0(t);
          t = check_for_failures_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm main_0 (ATerm t)
{
  ATerm k_6 (ATerm t)
  {
    t = term_a_10;
    return(t);
  }
  ATerm l_6 (ATerm t)
  {
    t = test1_0(t);
    {
      t = test1a_0(t);
      {
        t = test2a_0(t);
        {
          t = test2b_0(t);
          {
            t = test2c_0(t);
            {
              t = test2d_0(t);
              {
                t = test2e_0(t);
                {
                  t = test3a_0(t);
                  {
                    t = test3b_0(t);
                    t = test4_0(t);
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
  t = test_suite_2(t, k_6, l_6);
  return(t);
}
