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
Symbol sym_Cons_1;
Symbol sym_Nil_0;
Symbol sym_list_1;
Symbol sym_char_class_1;
Symbol sym_range_2;
Symbol sym_assoc_3;
Symbol sym_assoc_0;
Symbol sym_left_0;
Symbol sym_lit_1;
Symbol sym_char_class_1;
Symbol sym_iter_star_sep_2;
Symbol sym_iter_sep_2;
Symbol sym_iter_star_1;
Symbol sym_iter_1;
Symbol sym_opt_1;
Symbol sym_layout_0;
Symbol sym_lex_1;
Symbol sym_cf_1;
Symbol sym_prod_3;
Symbol sym_no_attrs_0;
Symbol sym_attrs_1;
Symbol sym_assoc_1;
Symbol sym_appl_2;
Symbol sym_list_1;
Symbol sym_list_1;
Symbol sym_lit_1;
Symbol sym_assoc_1;
Symbol sym_lit_1;
Symbol sym_appl_2;
Symbol sym_list_1;
Symbol sym_prod_3;
Symbol sym_attrs_1;
Symbol sym_no_attrs_0;
Symbol sym_assoc_1;
Symbol sym_assoc_0;
Symbol sym_left_0;
Symbol sym_range_2;
Symbol sym_char_class_1;
Symbol sym_layout_0;
Symbol sym_iter_star_sep_2;
Symbol sym_iter_sep_2;
Symbol sym_iter_star_1;
Symbol sym_iter_1;
Symbol sym_opt_1;
Symbol sym_lex_1;
Symbol sym_cf_1;
Symbol sym_lit_1;
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
  sym_Cons_1 = ATmakeSymbol("Cons", 1, ATfalse);
  ATprotectSymbol(sym_Cons_1);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_list_1 = ATmakeSymbol("list", 1, ATfalse);
  ATprotectSymbol(sym_list_1);
  sym_char_class_1 = ATmakeSymbol("char-class", 1, ATfalse);
  ATprotectSymbol(sym_char_class_1);
  sym_range_2 = ATmakeSymbol("range", 2, ATfalse);
  ATprotectSymbol(sym_range_2);
  sym_assoc_3 = ATmakeSymbol("assoc", 3, ATfalse);
  ATprotectSymbol(sym_assoc_3);
  sym_assoc_0 = ATmakeSymbol("assoc", 0, ATfalse);
  ATprotectSymbol(sym_assoc_0);
  sym_left_0 = ATmakeSymbol("left", 0, ATfalse);
  ATprotectSymbol(sym_left_0);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  sym_char_class_1 = ATmakeSymbol("char-class", 1, ATfalse);
  ATprotectSymbol(sym_char_class_1);
  sym_iter_star_sep_2 = ATmakeSymbol("iter-star-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_star_sep_2);
  sym_iter_sep_2 = ATmakeSymbol("iter-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_sep_2);
  sym_iter_star_1 = ATmakeSymbol("iter-star", 1, ATfalse);
  ATprotectSymbol(sym_iter_star_1);
  sym_iter_1 = ATmakeSymbol("iter", 1, ATfalse);
  ATprotectSymbol(sym_iter_1);
  sym_opt_1 = ATmakeSymbol("opt", 1, ATfalse);
  ATprotectSymbol(sym_opt_1);
  sym_layout_0 = ATmakeSymbol("layout", 0, ATfalse);
  ATprotectSymbol(sym_layout_0);
  sym_lex_1 = ATmakeSymbol("lex", 1, ATfalse);
  ATprotectSymbol(sym_lex_1);
  sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
  ATprotectSymbol(sym_cf_1);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_no_attrs_0 = ATmakeSymbol("no-attrs", 0, ATfalse);
  ATprotectSymbol(sym_no_attrs_0);
  sym_attrs_1 = ATmakeSymbol("attrs", 1, ATfalse);
  ATprotectSymbol(sym_attrs_1);
  sym_assoc_1 = ATmakeSymbol("assoc", 1, ATfalse);
  ATprotectSymbol(sym_assoc_1);
  sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
  ATprotectSymbol(sym_appl_2);
  sym_list_1 = ATmakeSymbol("list", 1, ATfalse);
  ATprotectSymbol(sym_list_1);
  sym_list_1 = ATmakeSymbol("list", 1, ATfalse);
  ATprotectSymbol(sym_list_1);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  sym_assoc_1 = ATmakeSymbol("assoc", 1, ATfalse);
  ATprotectSymbol(sym_assoc_1);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
  ATprotectSymbol(sym_appl_2);
  sym_list_1 = ATmakeSymbol("list", 1, ATfalse);
  ATprotectSymbol(sym_list_1);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_attrs_1 = ATmakeSymbol("attrs", 1, ATfalse);
  ATprotectSymbol(sym_attrs_1);
  sym_no_attrs_0 = ATmakeSymbol("no-attrs", 0, ATfalse);
  ATprotectSymbol(sym_no_attrs_0);
  sym_assoc_1 = ATmakeSymbol("assoc", 1, ATfalse);
  ATprotectSymbol(sym_assoc_1);
  sym_assoc_0 = ATmakeSymbol("assoc", 0, ATfalse);
  ATprotectSymbol(sym_assoc_0);
  sym_left_0 = ATmakeSymbol("left", 0, ATfalse);
  ATprotectSymbol(sym_left_0);
  sym_range_2 = ATmakeSymbol("range", 2, ATfalse);
  ATprotectSymbol(sym_range_2);
  sym_char_class_1 = ATmakeSymbol("char-class", 1, ATfalse);
  ATprotectSymbol(sym_char_class_1);
  sym_layout_0 = ATmakeSymbol("layout", 0, ATfalse);
  ATprotectSymbol(sym_layout_0);
  sym_iter_star_sep_2 = ATmakeSymbol("iter-star-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_star_sep_2);
  sym_iter_sep_2 = ATmakeSymbol("iter-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_sep_2);
  sym_iter_star_1 = ATmakeSymbol("iter-star", 1, ATfalse);
  ATprotectSymbol(sym_iter_star_1);
  sym_iter_1 = ATmakeSymbol("iter", 1, ATfalse);
  ATprotectSymbol(sym_iter_1);
  sym_opt_1 = ATmakeSymbol("opt", 1, ATfalse);
  ATprotectSymbol(sym_opt_1);
  sym_lex_1 = ATmakeSymbol("lex", 1, ATfalse);
  ATprotectSymbol(sym_lex_1);
  sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
  ATprotectSymbol(sym_cf_1);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
}
ATerm term_g_4;
ATerm term_f_4;
ATerm term_e_4;
ATerm term_d_4;
ATerm term_c_4;
ATerm term_b_4;
ATerm term_a_4;
ATerm term_p_3;
ATerm term_o_3;
ATerm term_j_3;
ATerm term_r_2;
ATerm term_q_2;
ATerm term_p_2;
ATerm term_b_1;
ATerm term_a_1;
ATerm term_z_0;
ATerm term_y_0;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_y_0));
  term_y_0 = (ATerm) ATmakeAppl(sym_no_attrs_0);
  ATprotect(&(term_z_0));
  term_z_0 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_1));
  term_a_1 = (ATerm) ATmakeInt(255);
  ATprotect(&(term_b_1));
  term_b_1 = (ATerm) ATmakeAppl(sym_range_2, term_z_0, term_a_1);
  ATprotect(&(term_p_2));
  term_p_2 = (ATerm) ATmakeAppl(sym_layout_0);
  ATprotect(&(term_q_2));
  term_q_2 = (ATerm) ATmakeAppl(sym_lex_1, term_p_2);
  ATprotect(&(term_r_2));
  term_r_2 = (ATerm) ATmakeAppl(sym_cf_1, term_p_2);
  ATprotect(&(term_j_3));
  term_j_3 = (ATerm) ATmakeAppl(sym_left_0);
  ATprotect(&(term_o_3));
  term_o_3 = (ATerm) ATmakeAppl(sym_assoc_1, term_j_3);
  ATprotect(&(term_p_3));
  term_p_3 = (ATerm) ATmakeAppl(sym_opt_1, term_p_2);
  ATprotect(&(term_a_4));
  term_a_4 = (ATerm) ATmakeAppl(sym_cf_1, term_p_3);
  ATprotect(&(term_b_4));
  term_b_4 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_c_4));
  term_c_4 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: explode-asfix2me [options]", 0, ATtrue));
  ATprotect(&(term_d_4));
  term_d_4 = (ATerm) ATmakeAppl(ATmakeSymbol("This tool explodes an AsFix2ME term to a valid AsFix2 term. Explosion involes\n", 0, ATtrue));
  ATprotect(&(term_e_4));
  term_e_4 = (ATerm) ATmakeAppl(ATmakeSymbol("unflattening of lists, layout, literals, and lexicals.\n\n", 0, ATtrue));
  ATprotect(&(term_f_4));
  term_f_4 = (ATerm) ATmakeAppl(ATmakeSymbol("Observe that the structure of lexicals cannot be restored. Lexicals are\n", 0, ATtrue));
  ATprotect(&(term_g_4));
  term_g_4 = (ATerm) ATmakeAppl(ATmakeSymbol("unflattened into left linear binary trees.", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm u_1 (ATerm x_9, ATerm y_9, ATerm z_9, ATerm t);
ATerm unflatten_lexical_0_0 (ATerm t);
ATerm try_1_0 (ATerm a_108 (ATerm), ATerm t);
ATerm is_int_0_0 (ATerm t);
ATerm MkLayoutCharacter_0_0 (ATerm t);
ATerm MkLayoutConsList_0_0 (ATerm t);
static ATerm v_1 (ATerm n_9, ATerm t);
ATerm MkCfConsList_1_0 (ATerm g_17 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm w_79 (ATerm), ATerm x_79 (ATerm), ATerm t);
ATerm MkCfConsList_2_0 (ATerm i_17 (ATerm), ATerm j_17 (ATerm), ATerm t);
ATerm MkLexConsList_1_0 (ATerm l_17 (ATerm), ATerm t);
ATerm unflatten_list_0_0 (ATerm t);
ATerm map_1_0 (ATerm g_93 (ATerm), ATerm t);
ATerm explode_string_0_0 (ATerm t);
ATerm list_some_1_0 (ATerm l_93 (ATerm), ATerm t);
static ATerm n_0 (ATerm t);
static ATerm o_0 (ATerm t);
static ATerm w_1 (ATerm c_0, ATerm e_0, ATerm t);
ATerm bottomup_1_0 (ATerm u_88 (ATerm), ATerm t);
ATerm system_about_0_0 (ATerm t);
ATerm default_system_usage_2_0 (ATerm x_116 (ATerm), ATerm y_116 (ATerm), ATerm t);
ATerm io_wrap_4_0 (ATerm d_115 (ATerm), ATerm e_115 (ATerm), ATerm f_115 (ATerm), ATerm g_115 (ATerm), ATerm t);
static ATerm q_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm t_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm x_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm u_1 (ATerm x_9, ATerm y_9, ATerm z_9, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, x_9)), (ATerm)ATmakeAppl(sym_cf_1, x_9), term_y_0), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term_b_1))))), (ATerm)ATmakeAppl(sym_lex_1, x_9), term_y_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, y_9, (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term_b_1)))), term_y_0), z_9))));
  return(t);
}
ATerm unflatten_lexical_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,d_0 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      ATerm c_1 = ATgetArgument(t, 0);
      if(match_cons(c_1, sym_prod_3))
        {
          ATerm i_1 = ATgetArgument(c_1, 0);
          if(((ATgetType(i_1) == AT_LIST) && !(ATisEmpty(i_1))))
            {
              ATerm l_1 = ATgetFirst((ATermList) i_1);
              if(match_cons(l_1, sym_lex_1))
                {
                  a_0 = ATgetArgument(l_1, 0);
                }
              else
                _fail(t);
              {
                ATerm m_1 = (ATerm) ATgetNext((ATermList) i_1);
                if(((ATgetType(m_1) != AT_LIST) || !(ATisEmpty(m_1))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          {
            ATerm j_1 = ATgetArgument(c_1, 1);
            if(match_cons(j_1, sym_cf_1))
              {
                if((a_0 != ATgetArgument(j_1, 0)))
                  {
                    _fail(ATgetArgument(j_1, 0));
                  }
              }
            else
              _fail(t);
          }
          {
            ATerm k_1 = ATgetArgument(c_1, 2);
            if(!(match_cons(k_1, sym_no_attrs_0)))
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm h_1 = ATgetArgument(t, 1);
        if(((ATgetType(h_1) == AT_LIST) && !(ATisEmpty(h_1))))
          {
            ATerm n_1 = ATgetFirst((ATermList) h_1);
            if(match_cons(n_1, sym_appl_2))
              {
                ATerm r_1 = ATgetArgument(n_1, 0);
                if(match_cons(r_1, sym_prod_3))
                  {
                    b_0 = ATgetArgument(r_1, 0);
                    {
                      ATerm t_1 = ATgetArgument(r_1, 1);
                      if(match_cons(t_1, sym_iter_star_1))
                        {
                          ATerm y_1 = ATgetArgument(t_1, 0);
                          if(match_cons(y_1, sym_char_class_1))
                            {
                              ATerm z_1 = ATgetArgument(y_1, 0);
                              if(((ATgetType(z_1) == AT_LIST) && !(ATisEmpty(z_1))))
                                {
                                  ATerm d_2 = ATgetFirst((ATermList) z_1);
                                  if(match_cons(d_2, sym_range_2))
                                    {
                                      ATerm f_2 = ATgetArgument(d_2, 0);
                                      if(((ATgetType(f_2) != AT_INT) || (ATgetInt((ATermInt) f_2) != 0)))
                                        _fail(t);
                                      {
                                        ATerm g_2 = ATgetArgument(d_2, 1);
                                        if(((ATgetType(g_2) != AT_INT) || (ATgetInt((ATermInt) g_2) != 255)))
                                          _fail(t);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  {
                                    ATerm e_2 = (ATerm) ATgetNext((ATermList) z_1);
                                    if(((ATgetType(e_2) != AT_LIST) || !(ATisEmpty(e_2))))
                                      _fail(t);
                                  }
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                    {
                      ATerm x_1 = ATgetArgument(r_1, 2);
                      if(!(match_cons(x_1, sym_no_attrs_0)))
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                d_0 = ATgetArgument(n_1, 1);
              }
            else
              _fail(t);
            {
              ATerm o_1 = (ATerm) ATgetNext((ATermList) h_1);
              if(((ATgetType(o_1) != AT_LIST) || !(ATisEmpty(o_1))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = u_1(a_0, b_0, d_0, t);
  return(t);
}
ATerm MkLayoutCharacter_0_0 (ATerm t)
{
  ATerm l_0 = NULL;
  l_0 = t;
  {
    ATerm h_2 = t;
    int o_2 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_int_0_0(t);
        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_q_2), term_r_2, term_y_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term_b_1))), term_q_2, term_y_0), (ATerm) ATinsert(ATempty, l_0))));
        LocalPopChoice(o_2);
      }
    else
      {
        t = h_2;
        {
          ATerm m_0 = NULL,p_0 = NULL,r_0 = NULL;
          ATerm s_2 = t;
          int t_2 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_appl_2))
                {
                  m_0 = ATgetArgument(t, 0);
                  {
                    ATerm u_2 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(t_2);
              t = m_0;
              {
                ATerm v_2 = t;
                int w_2 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_prod_3))
                      {
                        ATerm x_2 = ATgetArgument(t, 0);
                        p_0 = ATgetArgument(t, 1);
                        {
                          ATerm e_3 = ATgetArgument(t, 2);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(w_2);
                    t = p_0;
                    if(match_cons(t, sym_lex_1))
                      {
                        r_0 = ATgetArgument(t, 0);
                        {
                          ATerm f_3 = t;
                          int g_3 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_q_2), term_r_2, term_y_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, r_0)), term_q_2, term_y_0), (ATerm) ATinsert(ATempty, l_0))));
                              LocalPopChoice(g_3);
                            }
                          else
                            {
                              t = f_3;
                              t = l_0;
                            }
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_lit_1))
                          {
                            r_0 = ATgetArgument(t, 0);
                            {
                              ATerm h_3 = t;
                              int i_3 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_q_2), term_r_2, term_y_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lit_1, r_0)), term_q_2, term_y_0), (ATerm) ATinsert(ATempty, l_0))));
                                  LocalPopChoice(i_3);
                                }
                              else
                                {
                                  t = h_3;
                                  t = l_0;
                                }
                            }
                          }
                        else
                          {
                            t = l_0;
                          }
                      }
                  }
                else
                  {
                    t = v_2;
                    t = l_0;
                  }
              }
            }
          else
            {
              t = s_2;
              t = l_0;
            }
        }
      }
  }
  return(t);
}
ATerm MkLayoutConsList_0_0 (ATerm t)
{
  ATerm d_1 = NULL,e_1 = NULL,f_1 = NULL,g_1 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_1 = ATgetFirst((ATermList) t);
      e_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = e_1;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_1;
      t = MkLayoutCharacter_0_0(t);
    }
  else
    {
      ATerm p_1 = NULL,q_1 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_1 = ATgetFirst((ATermList) t);
          g_1 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_1;
      t = MkLayoutCharacter_0_0(t);
      p_1 = t;
      t = f_1;
      t = MkLayoutCharacter_0_0(t);
      q_1 = t;
      t = (ATerm) ATinsert(CheckATermList(g_1), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATempty, term_r_2), term_r_2), term_r_2, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_o_3))), (ATerm) ATinsert(ATinsert(ATempty, q_1), p_1)));
      t = MkLayoutConsList_0_0(t);
    }
  return(t);
}
static ATerm v_1 (ATerm n_9, ATerm t)
{
  ATerm s_1 = NULL;
  t = n_9;
  t = MkLayoutConsList_0_0(t);
  s_1 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_r_2), term_a_4, term_y_0), (ATerm) ATinsert(ATempty, s_1));
  return(t);
}
ATerm MkCfConsList_1_0 (ATerm g_17 (ATerm), ATerm t)
{
  ATerm a_2 = NULL;
  static ATerm d_3 (ATerm t);
  static ATerm d_3 (ATerm t)
  {
    ATerm i_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_2 = ATgetFirst((ATermList) t);
        j_2 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = j_2;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = i_2;
      }
    else
      {
        ATerm y_2 = NULL,z_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_2 = ATgetFirst((ATermList) t);
            l_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = l_2;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_2 = ATgetFirst((ATermList) t);
            n_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = term_b_4;
        t = g_17(t);
        y_2 = t;
        t = term_b_4;
        t = g_17(t);
        z_2 = t;
        t = term_b_4;
        t = g_17(t);
        a_3 = t;
        t = term_b_4;
        t = g_17(t);
        b_3 = t;
        t = term_b_4;
        t = g_17(t);
        c_3 = t;
        t = (ATerm) ATinsert(CheckATermList(n_2), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, z_2))), term_a_4), (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, y_2))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, a_3)), (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_o_3))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, b_3)), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, c_3)), term_y_0), (ATerm) ATinsert(ATempty, m_2))), k_2), i_2)));
        t = d_3(t);
      }
    return(t);
  }
  static ATerm f_0 (ATerm t);
  static ATerm f_0 (ATerm t)
  {
    ATerm b_2 = NULL,c_2 = NULL;
    if(((a_2 != NULL) && (a_2 != t)))
      _fail(t);
    else
      a_2 = t;
    t = term_b_4;
    t = g_17(t);
    b_2 = t;
    t = term_b_4;
    t = g_17(t);
    c_2 = t;
    t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, b_2)), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, c_2)), term_y_0), (ATerm) ATinsert(ATempty, a_2));
    return(t);
  }
  t = Cons_2_0(f_0, _id, t);
  t = d_3(t);
  return(t);
}
ATerm MkCfConsList_2_0 (ATerm i_17 (ATerm), ATerm j_17 (ATerm), ATerm t)
{
  ATerm k_3 = NULL;
  static ATerm y_4 (ATerm t);
  static ATerm y_4 (ATerm t)
  {
    ATerm q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL,z_3 = NULL;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_3 = ATgetFirst((ATermList) t);
        r_3 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = r_3;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_3;
      }
    else
      {
        ATerm o_4 = NULL,p_4 = NULL,q_4 = NULL,r_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL,w_4 = NULL,x_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_3 = ATgetFirst((ATermList) t);
            t_3 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = t_3;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_3 = ATgetFirst((ATermList) t);
            v_3 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_3;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_3 = ATgetFirst((ATermList) t);
            x_3 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = x_3;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_3 = ATgetFirst((ATermList) t);
            z_3 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = term_b_4;
        t = i_17(t);
        o_4 = t;
        t = term_b_4;
        t = j_17(t);
        p_4 = t;
        t = term_b_4;
        t = j_17(t);
        q_4 = t;
        t = term_b_4;
        t = i_17(t);
        r_4 = t;
        t = term_b_4;
        t = j_17(t);
        s_4 = t;
        t = term_b_4;
        t = i_17(t);
        t_4 = t;
        t = term_b_4;
        t = j_17(t);
        u_4 = t;
        t = term_b_4;
        t = i_17(t);
        v_4 = t;
        t = term_b_4;
        t = i_17(t);
        w_4 = t;
        t = term_b_4;
        t = j_17(t);
        x_4 = t;
        t = (ATerm) ATinsert(CheckATermList(z_3), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, r_4, s_4))), term_a_4), q_4), term_a_4), (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, o_4, p_4))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, t_4, u_4)), (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_o_3))), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, v_4)), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, w_4, x_4)), term_y_0), (ATerm) ATinsert(ATempty, y_3))), w_3), u_3), s_3), q_3)));
        t = y_4(t);
      }
    return(t);
  }
  static ATerm g_0 (ATerm t);
  static ATerm g_0 (ATerm t)
  {
    ATerm l_3 = NULL,m_3 = NULL,n_3 = NULL;
    if(((k_3 != NULL) && (k_3 != t)))
      _fail(t);
    else
      k_3 = t;
    t = term_b_4;
    t = i_17(t);
    l_3 = t;
    t = term_b_4;
    t = i_17(t);
    m_3 = t;
    t = term_b_4;
    t = j_17(t);
    n_3 = t;
    t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, l_3)), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, m_3, n_3)), term_y_0), (ATerm) ATinsert(ATempty, k_3));
    return(t);
  }
  t = Cons_2_0(g_0, _id, t);
  t = y_4(t);
  return(t);
}
ATerm MkLexConsList_1_0 (ATerm l_17 (ATerm), ATerm t)
{
  static ATerm x_5 (ATerm t);
  static ATerm x_5 (ATerm t)
  {
    ATerm c_5 = NULL,d_5 = NULL,e_5 = NULL,f_5 = NULL;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_5 = ATgetFirst((ATermList) t);
        d_5 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = d_5;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        ATerm k_5 = NULL,l_5 = NULL;
        t = term_b_4;
        t = l_17(t);
        k_5 = t;
        t = term_b_4;
        t = l_17(t);
        l_5 = t;
        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, k_5)), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, l_5)), term_y_0), (ATerm) ATinsert(ATempty, c_5));
      }
    else
      {
        ATerm q_5 = NULL,r_5 = NULL,s_5 = NULL,t_5 = NULL,u_5 = NULL,v_5 = NULL,w_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_5 = ATgetFirst((ATermList) t);
            f_5 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = term_b_4;
        t = l_17(t);
        q_5 = t;
        t = term_b_4;
        t = l_17(t);
        r_5 = t;
        t = term_b_4;
        t = l_17(t);
        s_5 = t;
        t = term_b_4;
        t = l_17(t);
        t_5 = t;
        t = term_b_4;
        t = l_17(t);
        u_5 = t;
        t = term_b_4;
        t = l_17(t);
        v_5 = t;
        t = term_b_4;
        t = l_17(t);
        w_5 = t;
        t = (ATerm) ATinsert(CheckATermList(f_5), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, r_5))), (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, q_5))), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, s_5)), (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_o_3))), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, v_5)), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, w_5)), term_y_0), (ATerm) ATinsert(ATempty, e_5))), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, t_5)), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, u_5)), term_y_0), (ATerm) ATinsert(ATempty, c_5)))));
        t = x_5(t);
      }
    return(t);
  }
  t = x_5(t);
  return(t);
}
ATerm unflatten_list_0_0 (ATerm t)
{
  ATerm f_6 = NULL,g_6 = NULL,h_6 = NULL,j_6 = NULL,k_6 = NULL,l_6 = NULL,m_6 = NULL,n_6 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      j_6 = ATgetArgument(t, 0);
      n_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_6;
  if(match_cons(t, sym_list_1))
    {
      k_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_6;
  if(match_cons(t, sym_iter_1))
    {
      l_6 = ATgetArgument(t, 0);
      {
        static ATerm h_0 (ATerm t);
        static ATerm h_0 (ATerm t)
        {
          t = l_6;
          return(t);
        }
        t = n_6;
        t = MkLexConsList_1_0(h_0, t);
      }
    }
  else
    {
      if(match_cons(t, sym_iter_star_1))
        {
          l_6 = ATgetArgument(t, 0);
          t = n_6;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              g_6 = ATgetFirst((ATermList) t);
              h_6 = (ATerm) ATgetNext((ATermList) t);
              {
                ATerm t_6 = NULL;
                t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_list_1, (ATerm) ATmakeAppl(sym_iter_1, l_6)), (ATerm) ATinsert(CheckATermList(h_6), g_6));
                t = unflatten_list_0_0(t);
                t_6 = t;
                t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, l_6))), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, l_6)), term_y_0), (ATerm) ATinsert(ATempty, t_6));
              }
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, l_6)), term_y_0), (ATerm) ATempty);
            }
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              l_6 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = l_6;
          if(match_cons(t, sym_iter_sep_2))
            {
              m_6 = ATgetArgument(t, 0);
              f_6 = ATgetArgument(t, 1);
              {
                static ATerm i_0 (ATerm t);
                static ATerm j_0 (ATerm t);
                static ATerm i_0 (ATerm t)
                {
                  t = m_6;
                  return(t);
                }
                static ATerm j_0 (ATerm t)
                {
                  t = f_6;
                  return(t);
                }
                t = n_6;
                t = MkCfConsList_2_0(i_0, j_0, t);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  m_6 = ATgetArgument(t, 0);
                  f_6 = ATgetArgument(t, 1);
                  t = n_6;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      g_6 = ATgetFirst((ATermList) t);
                      h_6 = (ATerm) ATgetNext((ATermList) t);
                      {
                        ATerm c_7 = NULL;
                        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_list_1, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, m_6, f_6))), (ATerm) ATinsert(CheckATermList(h_6), g_6));
                        t = unflatten_list_0_0(t);
                        c_7 = t;
                        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, m_6, f_6))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_sep_2, m_6, f_6)), term_y_0), (ATerm) ATinsert(ATempty, c_7));
                      }
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_sep_2, m_6, f_6)), term_y_0), (ATerm) ATempty);
                    }
                }
              else
                {
                  if(match_cons(t, sym_iter_1))
                    {
                      m_6 = ATgetArgument(t, 0);
                      {
                        static ATerm k_0 (ATerm t);
                        static ATerm k_0 (ATerm t)
                        {
                          t = m_6;
                          return(t);
                        }
                        t = n_6;
                        t = MkCfConsList_1_0(k_0, t);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_star_1))
                        {
                          m_6 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = n_6;
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          g_6 = ATgetFirst((ATermList) t);
                          h_6 = (ATerm) ATgetNext((ATermList) t);
                          {
                            ATerm k_7 = NULL;
                            t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_list_1, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, m_6))), (ATerm) ATinsert(CheckATermList(h_6), g_6));
                            t = unflatten_list_0_0(t);
                            k_7 = t;
                            t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, m_6))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_1, m_6)), term_y_0), (ATerm) ATinsert(ATempty, k_7));
                          }
                        }
                      else
                        {
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_1, m_6)), term_y_0), (ATerm) ATempty);
                        }
                    }
                }
            }
        }
    }
  return(t);
}
static ATerm n_0 (ATerm t)
{
  ATerm n_7 = NULL,o_7 = NULL,p_7 = NULL;
  if(match_cons(t, sym_lit_1))
    {
      p_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_7;
  t = explode_string_0_0(t);
  o_7 = t;
  t = map_1_0(o_0, t);
  n_7 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, n_7, (ATerm)ATmakeAppl(sym_lit_1, p_7), term_y_0), o_7);
  return(t);
}
static ATerm o_0 (ATerm t)
{
  ATerm a_8 = NULL;
  a_8 = t;
  t = (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, a_8));
  return(t);
}
static ATerm w_1 (ATerm c_0, ATerm e_0, ATerm t)
{
  ATerm m_7 = NULL;
  t = e_0;
  t = list_some_1_0(n_0, t);
  m_7 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, c_0, m_7);
  return(t);
}
static ATerm q_0 (ATerm t)
{
  t = default_system_usage_2_0(t_0, u_0, t);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  t = bottomup_1_0(v_0, t);
  return(t);
}
static ATerm t_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_c_4);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_4), term_f_4), term_e_4), term_d_4);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = try_1_0(w_0, t);
  t = try_1_0(unflatten_list_0_0, t);
  t = try_1_0(x_0, t);
  t = try_1_0(unflatten_lexical_0_0, t);
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm l_8 = NULL,r_8 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      l_8 = ATgetArgument(t, 0);
      r_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_1(l_8, r_8, t);
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm i_9 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      ATerm h_4 = ATgetArgument(t, 0);
      if(match_cons(h_4, sym_prod_3))
        {
          ATerm i_4 = ATgetArgument(h_4, 0);
          if(((ATgetType(i_4) == AT_LIST) && !(ATisEmpty(i_4))))
            {
              ATerm l_4 = ATgetFirst((ATermList) i_4);
              if(match_cons(l_4, sym_cf_1))
                {
                  ATerm n_4 = ATgetArgument(l_4, 0);
                  if(!(match_cons(n_4, sym_layout_0)))
                    _fail(t);
                }
              else
                _fail(t);
              {
                ATerm m_4 = (ATerm) ATgetNext((ATermList) i_4);
                if(((ATgetType(m_4) != AT_LIST) || !(ATisEmpty(m_4))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          {
            ATerm j_4 = ATgetArgument(h_4, 1);
            if(match_cons(j_4, sym_cf_1))
              {
                ATerm z_4 = ATgetArgument(j_4, 0);
                if(match_cons(z_4, sym_opt_1))
                  {
                    ATerm a_5 = ATgetArgument(z_4, 0);
                    if(!(match_cons(a_5, sym_layout_0)))
                      _fail(t);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
          {
            ATerm k_4 = ATgetArgument(h_4, 2);
            if(!(match_cons(k_4, sym_no_attrs_0)))
              _fail(t);
          }
        }
      else
        _fail(t);
      i_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_1(i_9, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_wrap_4_0(_fail, q_0, system_about_0_0, s_0, t);
  return(t);
}
