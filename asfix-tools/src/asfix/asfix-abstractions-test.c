#include <srts/stratego.h>
#include <srts/stratego-lib.h>
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
Symbol sym__9;
Symbol sym__10;
Symbol sym__11;
Symbol sym__12;
Symbol sym__13;
Symbol sym__14;
Symbol sym__15;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_stderr_0;
Symbol sym_id_1;
Symbol sym_layout_0;
Symbol sym_cf_1;
Symbol sym_lex_1;
Symbol sym_opt_1;
Symbol sym_char_class_1;
Symbol sym_atr_1;
Symbol sym_no_attrs_0;
Symbol sym_attrs_1;
Symbol sym_prod_3;
Symbol sym_appl_2;
Symbol sym_range_2;
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_id_1 = ATmakeSymbol("id", 1, ATfalse);
  ATprotectSymbol(sym_id_1);
  sym_layout_0 = ATmakeSymbol("layout", 0, ATfalse);
  ATprotectSymbol(sym_layout_0);
  sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
  ATprotectSymbol(sym_cf_1);
  sym_lex_1 = ATmakeSymbol("lex", 1, ATfalse);
  ATprotectSymbol(sym_lex_1);
  sym_opt_1 = ATmakeSymbol("opt", 1, ATfalse);
  ATprotectSymbol(sym_opt_1);
  sym_char_class_1 = ATmakeSymbol("char-class", 1, ATfalse);
  ATprotectSymbol(sym_char_class_1);
  sym_atr_1 = ATmakeSymbol("atr", 1, ATfalse);
  ATprotectSymbol(sym_atr_1);
  sym_no_attrs_0 = ATmakeSymbol("no-attrs", 0, ATfalse);
  ATprotectSymbol(sym_no_attrs_0);
  sym_attrs_1 = ATmakeSymbol("attrs", 1, ATfalse);
  ATprotectSymbol(sym_attrs_1);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
  ATprotectSymbol(sym_appl_2);
  sym_range_2 = ATmakeSymbol("range", 2, ATfalse);
  ATprotectSymbol(sym_range_2);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_c_7;
ATerm term_b_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_t_6;
ATerm term_i_6;
ATerm term_f_6;
ATerm term_e_6;
ATerm term_p_4;
ATerm term_k_4;
ATerm term_f_4;
ATerm term_a_4;
ATerm term_x_3;
ATerm term_u_3;
ATerm term_p_3;
ATerm term_g_3;
ATerm term_f_3;
ATerm term_e_3;
ATerm term_d_3;
ATerm term_c_3;
ATerm term_b_3;
ATerm term_a_3;
ATerm term_z_2;
ATerm term_q_2;
ATerm term_p_2;
ATerm term_o_2;
ATerm term_n_2;
ATerm term_m_2;
ATerm term_l_2;
ATerm term_k_2;
ATerm term_j_2;
ATerm term_e_2;
ATerm term_d_2;
ATerm term_c_2;
void init_constant_terms (void)
{
  ATprotect(&(term_c_2));
  term_c_2 = (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue));
  ATprotect(&(term_d_2));
  term_d_2 = (ATerm) ATmakeAppl(ATmakeSymbol("  succeeded; result: ", 0, ATtrue));
  ATprotect(&(term_e_2));
  term_e_2 = (ATerm) ATmakeAppl(ATmakeSymbol("test4", 0, ATtrue));
  ATprotect(&(term_j_2));
  term_j_2 = (ATerm) ATmakeAppl(sym_layout_0);
  ATprotect(&(term_k_2));
  term_k_2 = (ATerm) ATmakeAppl(sym_cf_1, term_j_2);
  ATprotect(&(term_l_2));
  term_l_2 = (ATerm) ATmakeAppl(sym_opt_1, term_j_2);
  ATprotect(&(term_m_2));
  term_m_2 = (ATerm) ATmakeAppl(sym_cf_1, term_l_2);
  ATprotect(&(term_n_2));
  term_n_2 = (ATerm) ATmakeAppl(sym_no_attrs_0);
  ATprotect(&(term_o_2));
  term_o_2 = (ATerm) ATmakeAppl(sym_lex_1, term_j_2);
  ATprotect(&(term_p_2));
  term_p_2 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_q_2));
  term_q_2 = (ATerm) ATmakeAppl(ATmakeSymbol("test3b", 0, ATtrue));
  ATprotect(&(term_z_2));
  term_z_2 = (ATerm) ATmakeAppl(sym_prod_3, (ATerm)ATempty, term_m_2, term_n_2);
  ATprotect(&(term_a_3));
  term_a_3 = (ATerm) ATmakeAppl(sym_appl_2, term_z_2, (ATerm) ATempty);
  ATprotect(&(term_b_3));
  term_b_3 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_c_3));
  term_c_3 = (ATerm) ATmakeAppl(sym_range_2, term_b_3, term_p_2);
  ATprotect(&(term_d_3));
  term_d_3 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_e_3));
  term_e_3 = (ATerm) ATmakeAppl(ATmakeSymbol("Layout", 0, ATtrue));
  ATprotect(&(term_f_3));
  term_f_3 = (ATerm) ATmakeAppl(sym_id_1, term_e_3);
  ATprotect(&(term_g_3));
  term_g_3 = (ATerm) ATmakeAppl(ATmakeSymbol("test3a", 0, ATtrue));
  ATprotect(&(term_p_3));
  term_p_3 = (ATerm) ATmakeAppl(ATmakeSymbol("test2e", 0, ATtrue));
  ATprotect(&(term_u_3));
  term_u_3 = (ATerm) ATmakeAppl(ATmakeSymbol("test2d", 0, ATtrue));
  ATprotect(&(term_x_3));
  term_x_3 = (ATerm) ATmakeAppl(ATmakeSymbol("test2c", 0, ATtrue));
  ATprotect(&(term_a_4));
  term_a_4 = (ATerm) ATmakeAppl(ATmakeSymbol("test2b", 0, ATtrue));
  ATprotect(&(term_f_4));
  term_f_4 = (ATerm) ATmakeAppl(ATmakeSymbol("test2a", 0, ATtrue));
  ATprotect(&(term_k_4));
  term_k_4 = (ATerm) ATmakeAppl(ATmakeSymbol("test1a", 0, ATtrue));
  ATprotect(&(term_p_4));
  term_p_4 = (ATerm) ATmakeAppl(sym__2, term_a_3, term_a_3);
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(ATmakeSymbol("left", 0, ATtrue));
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(sym_atr_1, term_e_6);
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("test1", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(sym__2, term_y_6, term_a_3);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(sym__2, term_a_7, term_a_7);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("asfix-abstractions-test", 0, ATtrue));
}
ATerm apply_and_show_3_0 (ATerm r_60 (ATerm), ATerm s_60 (ATerm), ATerm t_60 (ATerm), ATerm);
ATerm b_0 (ATerm);
ATerm c_0 (ATerm);
ATerm d_0 (ATerm);
ATerm test4_0_0 (ATerm);
ATerm e_0 (ATerm);
ATerm f_0 (ATerm);
ATerm h_0 (ATerm);
ATerm j_0 (ATerm);
ATerm test3b_0_0 (ATerm);
ATerm k_0 (ATerm);
ATerm l_0 (ATerm);
ATerm n_0 (ATerm);
ATerm o_0 (ATerm);
ATerm test3a_0_0 (ATerm);
ATerm p_0 (ATerm);
ATerm r_0 (ATerm);
ATerm s_0 (ATerm);
ATerm t_0 (ATerm);
ATerm test2e_0_0 (ATerm);
ATerm u_0 (ATerm);
ATerm v_0 (ATerm);
ATerm w_0 (ATerm);
ATerm x_0 (ATerm);
ATerm test2d_0_0 (ATerm);
ATerm y_0 (ATerm);
ATerm z_0 (ATerm);
ATerm a_1 (ATerm);
ATerm b_1 (ATerm);
ATerm test2c_0_0 (ATerm);
ATerm c_1 (ATerm);
ATerm d_1 (ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm test2b_0_0 (ATerm);
ATerm g_1 (ATerm);
ATerm h_1 (ATerm);
ATerm i_1 (ATerm);
ATerm j_1 (ATerm);
ATerm test2a_0_0 (ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm test1a_0_0 (ATerm);
ATerm conc_layout1_0_0 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm do_test_2_0 (ATerm v_59 (ATerm), ATerm w_59 (ATerm), ATerm);
ATerm apply_test_4_0 (ATerm z_59 (ATerm), ATerm a_60 (ATerm), ATerm b_60 (ATerm), ATerm c_60 (ATerm), ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm test1_0_0 (ATerm);
ATerm _2_0 (ATerm m_47 (ATerm), ATerm n_47 (ATerm), ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm test_suite_2_0 (ATerm t_59 (ATerm), ATerm u_59 (ATerm), ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm apply_and_show_3_0 (ATerm r_60 (ATerm), ATerm s_60 (ATerm), ATerm t_60 (ATerm), ATerm t)
{
  ATerm a_0 (ATerm t)
  {
    ATerm g_0 = NULL;
    ATerm a_2 = t;
    int b_2 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_60(t);
        t = s_60(t);
        ;
        LocalPopChoice(b_2);
      }
    else
      {
        t = a_2;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue))));
        t = term_c_2;
        _fail(t);
      }
    g_0 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATempty, g_0), (ATerm) ATmakeAppl(ATmakeSymbol("  succeeded; result: ", 0, ATtrue)))));
    t = (ATerm) ATinsert(ATinsert(ATempty, g_0), term_d_2);
    return(t);
  }
  t = do_test_2_0(r_60, a_0, t);
  return(t);
}
ATerm b_0 (ATerm t)
{
  t = term_e_2;
  return(t);
}
ATerm c_0 (ATerm t)
{
  ATerm f_2 = t;
  int g_2 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_layout1_0_0(t);
      ;
      LocalPopChoice(g_2);
    }
  else
    {
      t = f_2;
      {
        ATerm v_4 = NULL,w_4 = NULL,y_4 = NULL,a_5 = NULL,b_5 = NULL,c_5 = NULL,d_5 = NULL,f_5 = NULL,g_5 = NULL,h_5 = NULL,i_5 = NULL,j_5 = NULL,k_5 = NULL,l_5 = NULL,m_5 = NULL,n_5 = NULL;
        if(match_cons(t, sym__2))
          {
            f_5 = ATgetArgument(t, 0);
            g_5 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_5;
        if(match_cons(t, sym_appl_2))
          {
            h_5 = ATgetArgument(t, 0);
            n_5 = ATgetArgument(t, 1);
            t = n_5;
            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
              {
                t = h_5;
                if(match_cons(t, sym_prod_3))
                  {
                    i_5 = ATgetArgument(t, 0);
                    j_5 = ATgetArgument(t, 1);
                    m_5 = ATgetArgument(t, 2);
                    t = m_5;
                    if(match_cons(t, sym_no_attrs_0))
                      {
                        t = j_5;
                        if(match_cons(t, sym_cf_1))
                          {
                            k_5 = ATgetArgument(t, 0);
                            t = k_5;
                            if(match_cons(t, sym_opt_1))
                              {
                                l_5 = ATgetArgument(t, 0);
                                t = l_5;
                                if(match_cons(t, sym_layout_0))
                                  {
                                    t = i_5;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = f_5;
                                        if(match_cons(t, sym_appl_2))
                                          {
                                            v_4 = ATgetArgument(t, 0);
                                            d_5 = ATgetArgument(t, 1);
                                            t = d_5;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                t = v_4;
                                                if(match_cons(t, sym_prod_3))
                                                  {
                                                    w_4 = ATgetArgument(t, 0);
                                                    y_4 = ATgetArgument(t, 1);
                                                    c_5 = ATgetArgument(t, 2);
                                                    t = c_5;
                                                    if(match_cons(t, sym_no_attrs_0))
                                                      {
                                                        t = y_4;
                                                        if(match_cons(t, sym_cf_1))
                                                          {
                                                            a_5 = ATgetArgument(t, 0);
                                                            t = a_5;
                                                            if(match_cons(t, sym_opt_1))
                                                              {
                                                                b_5 = ATgetArgument(t, 0);
                                                                t = b_5;
                                                                if(match_cons(t, sym_layout_0))
                                                                  {
                                                                    t = w_4;
                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                      {
                                                                        ATerm h_2 = t;
                                                                        int i_2 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = g_5;
                                                                            ;
                                                                            LocalPopChoice(i_2);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = h_2;
                                                                            t = f_5;
                                                                          }
                                                                      }
                                                                    else
                                                                      {
                                                                        t = f_5;
                                                                      }
                                                                  }
                                                                else
                                                                  {
                                                                    t = f_5;
                                                                  }
                                                              }
                                                            else
                                                              {
                                                                t = f_5;
                                                              }
                                                          }
                                                        else
                                                          {
                                                            t = f_5;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = f_5;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = f_5;
                                                  }
                                              }
                                            else
                                              {
                                                t = f_5;
                                              }
                                          }
                                        else
                                          {
                                            t = f_5;
                                          }
                                      }
                                    else
                                      {
                                        t = f_5;
                                        if(match_cons(t, sym_appl_2))
                                          {
                                            v_4 = ATgetArgument(t, 0);
                                            d_5 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = v_4;
                                        if(match_cons(t, sym_prod_3))
                                          {
                                            w_4 = ATgetArgument(t, 0);
                                            y_4 = ATgetArgument(t, 1);
                                            c_5 = ATgetArgument(t, 2);
                                          }
                                        else
                                          _fail(t);
                                        t = w_4;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = y_4;
                                        if(match_cons(t, sym_cf_1))
                                          {
                                            a_5 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = a_5;
                                        if(match_cons(t, sym_opt_1))
                                          {
                                            b_5 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = b_5;
                                        if(!(match_cons(t, sym_layout_0)))
                                          _fail(t);
                                        t = c_5;
                                        if(!(match_cons(t, sym_no_attrs_0)))
                                          _fail(t);
                                        t = d_5;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = g_5;
                                      }
                                  }
                                else
                                  {
                                    t = f_5;
                                    if(match_cons(t, sym_appl_2))
                                      {
                                        v_4 = ATgetArgument(t, 0);
                                        d_5 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = v_4;
                                    if(match_cons(t, sym_prod_3))
                                      {
                                        w_4 = ATgetArgument(t, 0);
                                        y_4 = ATgetArgument(t, 1);
                                        c_5 = ATgetArgument(t, 2);
                                      }
                                    else
                                      _fail(t);
                                    t = w_4;
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = y_4;
                                    if(match_cons(t, sym_cf_1))
                                      {
                                        a_5 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = a_5;
                                    if(match_cons(t, sym_opt_1))
                                      {
                                        b_5 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = b_5;
                                    if(!(match_cons(t, sym_layout_0)))
                                      _fail(t);
                                    t = c_5;
                                    if(!(match_cons(t, sym_no_attrs_0)))
                                      _fail(t);
                                    t = d_5;
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = g_5;
                                  }
                              }
                            else
                              {
                                t = f_5;
                                if(match_cons(t, sym_appl_2))
                                  {
                                    v_4 = ATgetArgument(t, 0);
                                    d_5 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = v_4;
                                if(match_cons(t, sym_prod_3))
                                  {
                                    w_4 = ATgetArgument(t, 0);
                                    y_4 = ATgetArgument(t, 1);
                                    c_5 = ATgetArgument(t, 2);
                                  }
                                else
                                  _fail(t);
                                t = w_4;
                                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                  _fail(t);
                                t = y_4;
                                if(match_cons(t, sym_cf_1))
                                  {
                                    a_5 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = a_5;
                                if(match_cons(t, sym_opt_1))
                                  {
                                    b_5 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = b_5;
                                if(!(match_cons(t, sym_layout_0)))
                                  _fail(t);
                                t = c_5;
                                if(!(match_cons(t, sym_no_attrs_0)))
                                  _fail(t);
                                t = d_5;
                                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                  _fail(t);
                                t = g_5;
                              }
                          }
                        else
                          {
                            t = f_5;
                            if(match_cons(t, sym_appl_2))
                              {
                                v_4 = ATgetArgument(t, 0);
                                d_5 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = v_4;
                            if(match_cons(t, sym_prod_3))
                              {
                                w_4 = ATgetArgument(t, 0);
                                y_4 = ATgetArgument(t, 1);
                                c_5 = ATgetArgument(t, 2);
                              }
                            else
                              _fail(t);
                            t = w_4;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = y_4;
                            if(match_cons(t, sym_cf_1))
                              {
                                a_5 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = a_5;
                            if(match_cons(t, sym_opt_1))
                              {
                                b_5 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = b_5;
                            if(!(match_cons(t, sym_layout_0)))
                              _fail(t);
                            t = c_5;
                            if(!(match_cons(t, sym_no_attrs_0)))
                              _fail(t);
                            t = d_5;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = g_5;
                          }
                      }
                    else
                      {
                        t = f_5;
                        if(match_cons(t, sym_appl_2))
                          {
                            v_4 = ATgetArgument(t, 0);
                            d_5 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = v_4;
                        if(match_cons(t, sym_prod_3))
                          {
                            w_4 = ATgetArgument(t, 0);
                            y_4 = ATgetArgument(t, 1);
                            c_5 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = w_4;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = y_4;
                        if(match_cons(t, sym_cf_1))
                          {
                            a_5 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = a_5;
                        if(match_cons(t, sym_opt_1))
                          {
                            b_5 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = b_5;
                        if(!(match_cons(t, sym_layout_0)))
                          _fail(t);
                        t = c_5;
                        if(!(match_cons(t, sym_no_attrs_0)))
                          _fail(t);
                        t = d_5;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = g_5;
                      }
                  }
                else
                  {
                    t = f_5;
                    if(match_cons(t, sym_appl_2))
                      {
                        v_4 = ATgetArgument(t, 0);
                        d_5 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = v_4;
                    if(match_cons(t, sym_prod_3))
                      {
                        w_4 = ATgetArgument(t, 0);
                        y_4 = ATgetArgument(t, 1);
                        c_5 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = w_4;
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    t = y_4;
                    if(match_cons(t, sym_cf_1))
                      {
                        a_5 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = a_5;
                    if(match_cons(t, sym_opt_1))
                      {
                        b_5 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = b_5;
                    if(!(match_cons(t, sym_layout_0)))
                      _fail(t);
                    t = c_5;
                    if(!(match_cons(t, sym_no_attrs_0)))
                      _fail(t);
                    t = d_5;
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    t = g_5;
                  }
              }
            else
              {
                t = f_5;
                if(match_cons(t, sym_appl_2))
                  {
                    v_4 = ATgetArgument(t, 0);
                    d_5 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = v_4;
                if(match_cons(t, sym_prod_3))
                  {
                    w_4 = ATgetArgument(t, 0);
                    y_4 = ATgetArgument(t, 1);
                    c_5 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = w_4;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = y_4;
                if(match_cons(t, sym_cf_1))
                  {
                    a_5 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = a_5;
                if(match_cons(t, sym_opt_1))
                  {
                    b_5 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = b_5;
                if(!(match_cons(t, sym_layout_0)))
                  _fail(t);
                t = c_5;
                if(!(match_cons(t, sym_no_attrs_0)))
                  _fail(t);
                t = d_5;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = g_5;
              }
          }
        else
          {
            t = f_5;
            if(match_cons(t, sym_appl_2))
              {
                v_4 = ATgetArgument(t, 0);
                d_5 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = v_4;
            if(match_cons(t, sym_prod_3))
              {
                w_4 = ATgetArgument(t, 0);
                y_4 = ATgetArgument(t, 1);
                c_5 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = w_4;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = y_4;
            if(match_cons(t, sym_cf_1))
              {
                a_5 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = a_5;
            if(match_cons(t, sym_opt_1))
              {
                b_5 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = b_5;
            if(!(match_cons(t, sym_layout_0)))
              _fail(t);
            t = c_5;
            if(!(match_cons(t, sym_no_attrs_0)))
              _fail(t);
            t = d_5;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = g_5;
          }
      }
    }
  return(t);
}
ATerm d_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_k_2), term_m_2, term_n_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_o_2), term_k_2, term_n_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term_p_2))), term_o_2, term_n_2), (ATerm) ATinsert(ATempty, term_p_2)))))), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_k_2), term_m_2, term_n_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_o_2), term_k_2, term_n_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term_p_2))), term_o_2, term_n_2), (ATerm) ATinsert(ATempty, term_p_2)))))));
  return(t);
}
ATerm test4_0_0 (ATerm t)
{
  t = apply_and_show_3_0(b_0, c_0, d_0, t);
  return(t);
}
ATerm e_0 (ATerm t)
{
  t = term_q_2;
  return(t);
}
ATerm f_0 (ATerm t)
{
  ATerm g_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_2 = ATgetArgument(t, 0);
      if(match_cons(r_2, sym_appl_2))
        {
          ATerm s_2 = ATgetArgument(r_2, 0);
          if(match_cons(s_2, sym_prod_3))
            {
              ATerm u_2 = ATgetArgument(s_2, 0);
              if(((ATgetType(u_2) != AT_LIST) || !(ATisEmpty(u_2))))
                _fail(t);
              {
                ATerm v_2 = ATgetArgument(s_2, 1);
                if(match_cons(v_2, sym_cf_1))
                  {
                    ATerm x_2 = ATgetArgument(v_2, 0);
                    if(match_cons(x_2, sym_opt_1))
                      {
                        ATerm y_2 = ATgetArgument(x_2, 0);
                        if(!(match_cons(y_2, sym_layout_0)))
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
              {
                ATerm w_2 = ATgetArgument(s_2, 2);
                if(!(match_cons(w_2, sym_no_attrs_0)))
                  _fail(t);
              }
            }
          else
            _fail(t);
          {
            ATerm t_2 = ATgetArgument(r_2, 1);
            if(((ATgetType(t_2) != AT_LIST) || !(ATisEmpty(t_2))))
              _fail(t);
          }
        }
      else
        _fail(t);
      g_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_6;
  return(t);
}
ATerm h_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_a_3, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_o_2), term_k_2, term_n_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_d_3), term_c_3))), term_o_2, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_f_3))), (ATerm) ATinsert(ATempty, term_p_2)))));
  return(t);
}
ATerm j_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_o_2), term_k_2, term_n_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_d_3), term_c_3))), term_o_2, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_f_3))), (ATerm) ATinsert(ATempty, term_p_2))));
  return(t);
}
ATerm test3b_0_0 (ATerm t)
{
  t = apply_test_4_0(e_0, f_0, h_0, j_0, t);
  return(t);
}
ATerm k_0 (ATerm t)
{
  t = term_g_3;
  return(t);
}
ATerm l_0 (ATerm t)
{
  ATerm h_6 = NULL;
  if(match_cons(t, sym__2))
    {
      h_6 = ATgetArgument(t, 0);
      {
        ATerm h_3 = ATgetArgument(t, 1);
        if(match_cons(h_3, sym_appl_2))
          {
            ATerm i_3 = ATgetArgument(h_3, 0);
            if(match_cons(i_3, sym_prod_3))
              {
                ATerm k_3 = ATgetArgument(i_3, 0);
                if(((ATgetType(k_3) != AT_LIST) || !(ATisEmpty(k_3))))
                  _fail(t);
                {
                  ATerm l_3 = ATgetArgument(i_3, 1);
                  if(match_cons(l_3, sym_cf_1))
                    {
                      ATerm n_3 = ATgetArgument(l_3, 0);
                      if(match_cons(n_3, sym_opt_1))
                        {
                          ATerm o_3 = ATgetArgument(n_3, 0);
                          if(!(match_cons(o_3, sym_layout_0)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
                {
                  ATerm m_3 = ATgetArgument(i_3, 2);
                  if(!(match_cons(m_3, sym_no_attrs_0)))
                    _fail(t);
                }
              }
            else
              _fail(t);
            {
              ATerm j_3 = ATgetArgument(h_3, 1);
              if(((ATgetType(j_3) != AT_LIST) || !(ATisEmpty(j_3))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_6;
  return(t);
}
ATerm n_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_o_2), term_k_2, term_n_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_d_3), term_c_3))), term_o_2, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_f_3))), (ATerm) ATinsert(ATempty, term_p_2)))), term_a_3);
  return(t);
}
ATerm o_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_o_2), term_k_2, term_n_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_d_3), term_c_3))), term_o_2, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_f_3))), (ATerm) ATinsert(ATempty, term_p_2))));
  return(t);
}
ATerm test3a_0_0 (ATerm t)
{
  t = apply_test_4_0(k_0, l_0, n_0, o_0, t);
  return(t);
}
ATerm p_0 (ATerm t)
{
  t = term_p_3;
  return(t);
}
ATerm r_0 (ATerm t)
{
  ATerm q_3 = t;
  int r_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_layout1_0_0(t);
      ;
      LocalPopChoice(r_3);
    }
  else
    {
      t = q_3;
      {
        ATerm x_9 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL;
        if(match_cons(t, sym__2))
          {
            f_10 = ATgetArgument(t, 0);
            g_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_10;
        if(match_cons(t, sym_appl_2))
          {
            h_10 = ATgetArgument(t, 0);
            n_10 = ATgetArgument(t, 1);
            t = n_10;
            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
              {
                t = h_10;
                if(match_cons(t, sym_prod_3))
                  {
                    i_10 = ATgetArgument(t, 0);
                    j_10 = ATgetArgument(t, 1);
                    m_10 = ATgetArgument(t, 2);
                    t = m_10;
                    if(match_cons(t, sym_no_attrs_0))
                      {
                        t = j_10;
                        if(match_cons(t, sym_cf_1))
                          {
                            k_10 = ATgetArgument(t, 0);
                            t = k_10;
                            if(match_cons(t, sym_opt_1))
                              {
                                l_10 = ATgetArgument(t, 0);
                                t = l_10;
                                if(match_cons(t, sym_layout_0))
                                  {
                                    t = i_10;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = f_10;
                                        if(match_cons(t, sym_appl_2))
                                          {
                                            x_9 = ATgetArgument(t, 0);
                                            d_10 = ATgetArgument(t, 1);
                                            t = d_10;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                t = x_9;
                                                if(match_cons(t, sym_prod_3))
                                                  {
                                                    y_9 = ATgetArgument(t, 0);
                                                    z_9 = ATgetArgument(t, 1);
                                                    c_10 = ATgetArgument(t, 2);
                                                    t = c_10;
                                                    if(match_cons(t, sym_no_attrs_0))
                                                      {
                                                        t = z_9;
                                                        if(match_cons(t, sym_cf_1))
                                                          {
                                                            a_10 = ATgetArgument(t, 0);
                                                            t = a_10;
                                                            if(match_cons(t, sym_opt_1))
                                                              {
                                                                b_10 = ATgetArgument(t, 0);
                                                                t = b_10;
                                                                if(match_cons(t, sym_layout_0))
                                                                  {
                                                                    t = y_9;
                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                      {
                                                                        ATerm s_3 = t;
                                                                        int t_3 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = g_10;
                                                                            ;
                                                                            LocalPopChoice(t_3);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = s_3;
                                                                            t = f_10;
                                                                          }
                                                                      }
                                                                    else
                                                                      {
                                                                        t = f_10;
                                                                      }
                                                                  }
                                                                else
                                                                  {
                                                                    t = f_10;
                                                                  }
                                                              }
                                                            else
                                                              {
                                                                t = f_10;
                                                              }
                                                          }
                                                        else
                                                          {
                                                            t = f_10;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = f_10;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = f_10;
                                                  }
                                              }
                                            else
                                              {
                                                t = f_10;
                                              }
                                          }
                                        else
                                          {
                                            t = f_10;
                                          }
                                      }
                                    else
                                      {
                                        t = f_10;
                                        if(match_cons(t, sym_appl_2))
                                          {
                                            x_9 = ATgetArgument(t, 0);
                                            d_10 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = x_9;
                                        if(match_cons(t, sym_prod_3))
                                          {
                                            y_9 = ATgetArgument(t, 0);
                                            z_9 = ATgetArgument(t, 1);
                                            c_10 = ATgetArgument(t, 2);
                                          }
                                        else
                                          _fail(t);
                                        t = y_9;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = z_9;
                                        if(match_cons(t, sym_cf_1))
                                          {
                                            a_10 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = a_10;
                                        if(match_cons(t, sym_opt_1))
                                          {
                                            b_10 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = b_10;
                                        if(!(match_cons(t, sym_layout_0)))
                                          _fail(t);
                                        t = c_10;
                                        if(!(match_cons(t, sym_no_attrs_0)))
                                          _fail(t);
                                        t = d_10;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = g_10;
                                      }
                                  }
                                else
                                  {
                                    t = f_10;
                                    if(match_cons(t, sym_appl_2))
                                      {
                                        x_9 = ATgetArgument(t, 0);
                                        d_10 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = x_9;
                                    if(match_cons(t, sym_prod_3))
                                      {
                                        y_9 = ATgetArgument(t, 0);
                                        z_9 = ATgetArgument(t, 1);
                                        c_10 = ATgetArgument(t, 2);
                                      }
                                    else
                                      _fail(t);
                                    t = y_9;
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = z_9;
                                    if(match_cons(t, sym_cf_1))
                                      {
                                        a_10 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = a_10;
                                    if(match_cons(t, sym_opt_1))
                                      {
                                        b_10 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = b_10;
                                    if(!(match_cons(t, sym_layout_0)))
                                      _fail(t);
                                    t = c_10;
                                    if(!(match_cons(t, sym_no_attrs_0)))
                                      _fail(t);
                                    t = d_10;
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = g_10;
                                  }
                              }
                            else
                              {
                                t = f_10;
                                if(match_cons(t, sym_appl_2))
                                  {
                                    x_9 = ATgetArgument(t, 0);
                                    d_10 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = x_9;
                                if(match_cons(t, sym_prod_3))
                                  {
                                    y_9 = ATgetArgument(t, 0);
                                    z_9 = ATgetArgument(t, 1);
                                    c_10 = ATgetArgument(t, 2);
                                  }
                                else
                                  _fail(t);
                                t = y_9;
                                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                  _fail(t);
                                t = z_9;
                                if(match_cons(t, sym_cf_1))
                                  {
                                    a_10 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = a_10;
                                if(match_cons(t, sym_opt_1))
                                  {
                                    b_10 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = b_10;
                                if(!(match_cons(t, sym_layout_0)))
                                  _fail(t);
                                t = c_10;
                                if(!(match_cons(t, sym_no_attrs_0)))
                                  _fail(t);
                                t = d_10;
                                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                  _fail(t);
                                t = g_10;
                              }
                          }
                        else
                          {
                            t = f_10;
                            if(match_cons(t, sym_appl_2))
                              {
                                x_9 = ATgetArgument(t, 0);
                                d_10 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = x_9;
                            if(match_cons(t, sym_prod_3))
                              {
                                y_9 = ATgetArgument(t, 0);
                                z_9 = ATgetArgument(t, 1);
                                c_10 = ATgetArgument(t, 2);
                              }
                            else
                              _fail(t);
                            t = y_9;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = z_9;
                            if(match_cons(t, sym_cf_1))
                              {
                                a_10 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = a_10;
                            if(match_cons(t, sym_opt_1))
                              {
                                b_10 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = b_10;
                            if(!(match_cons(t, sym_layout_0)))
                              _fail(t);
                            t = c_10;
                            if(!(match_cons(t, sym_no_attrs_0)))
                              _fail(t);
                            t = d_10;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = g_10;
                          }
                      }
                    else
                      {
                        t = f_10;
                        if(match_cons(t, sym_appl_2))
                          {
                            x_9 = ATgetArgument(t, 0);
                            d_10 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = x_9;
                        if(match_cons(t, sym_prod_3))
                          {
                            y_9 = ATgetArgument(t, 0);
                            z_9 = ATgetArgument(t, 1);
                            c_10 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = y_9;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = z_9;
                        if(match_cons(t, sym_cf_1))
                          {
                            a_10 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = a_10;
                        if(match_cons(t, sym_opt_1))
                          {
                            b_10 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = b_10;
                        if(!(match_cons(t, sym_layout_0)))
                          _fail(t);
                        t = c_10;
                        if(!(match_cons(t, sym_no_attrs_0)))
                          _fail(t);
                        t = d_10;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = g_10;
                      }
                  }
                else
                  {
                    t = f_10;
                    if(match_cons(t, sym_appl_2))
                      {
                        x_9 = ATgetArgument(t, 0);
                        d_10 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = x_9;
                    if(match_cons(t, sym_prod_3))
                      {
                        y_9 = ATgetArgument(t, 0);
                        z_9 = ATgetArgument(t, 1);
                        c_10 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = y_9;
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    t = z_9;
                    if(match_cons(t, sym_cf_1))
                      {
                        a_10 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = a_10;
                    if(match_cons(t, sym_opt_1))
                      {
                        b_10 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = b_10;
                    if(!(match_cons(t, sym_layout_0)))
                      _fail(t);
                    t = c_10;
                    if(!(match_cons(t, sym_no_attrs_0)))
                      _fail(t);
                    t = d_10;
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    t = g_10;
                  }
              }
            else
              {
                t = f_10;
                if(match_cons(t, sym_appl_2))
                  {
                    x_9 = ATgetArgument(t, 0);
                    d_10 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = x_9;
                if(match_cons(t, sym_prod_3))
                  {
                    y_9 = ATgetArgument(t, 0);
                    z_9 = ATgetArgument(t, 1);
                    c_10 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = y_9;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = z_9;
                if(match_cons(t, sym_cf_1))
                  {
                    a_10 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = a_10;
                if(match_cons(t, sym_opt_1))
                  {
                    b_10 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = b_10;
                if(!(match_cons(t, sym_layout_0)))
                  _fail(t);
                t = c_10;
                if(!(match_cons(t, sym_no_attrs_0)))
                  _fail(t);
                t = d_10;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = g_10;
              }
          }
        else
          {
            t = f_10;
            if(match_cons(t, sym_appl_2))
              {
                x_9 = ATgetArgument(t, 0);
                d_10 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = x_9;
            if(match_cons(t, sym_prod_3))
              {
                y_9 = ATgetArgument(t, 0);
                z_9 = ATgetArgument(t, 1);
                c_10 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = y_9;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = z_9;
            if(match_cons(t, sym_cf_1))
              {
                a_10 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = a_10;
            if(match_cons(t, sym_opt_1))
              {
                b_10 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = b_10;
            if(!(match_cons(t, sym_layout_0)))
              _fail(t);
            t = c_10;
            if(!(match_cons(t, sym_no_attrs_0)))
              _fail(t);
            t = d_10;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = g_10;
          }
      }
    }
  return(t);
}
ATerm s_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_o_2), term_k_2, term_n_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_d_3), term_c_3))), term_o_2, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_f_3))), (ATerm) ATinsert(ATempty, term_p_2)))), term_a_3);
  return(t);
}
ATerm t_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_o_2), term_k_2, term_n_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_d_3), term_c_3))), term_o_2, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_f_3))), (ATerm) ATinsert(ATempty, term_p_2))));
  return(t);
}
ATerm test2e_0_0 (ATerm t)
{
  t = apply_test_4_0(p_0, r_0, s_0, t_0, t);
  return(t);
}
ATerm u_0 (ATerm t)
{
  t = term_u_3;
  return(t);
}
ATerm v_0 (ATerm t)
{
  ATerm v_14 = NULL,w_14 = NULL,x_14 = NULL,y_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL;
  if(match_cons(t, sym__2))
    {
      d_15 = ATgetArgument(t, 0);
      e_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_15;
  if(match_cons(t, sym_appl_2))
    {
      f_15 = ATgetArgument(t, 0);
      l_15 = ATgetArgument(t, 1);
      t = l_15;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = f_15;
          if(match_cons(t, sym_prod_3))
            {
              g_15 = ATgetArgument(t, 0);
              h_15 = ATgetArgument(t, 1);
              k_15 = ATgetArgument(t, 2);
              t = k_15;
              if(match_cons(t, sym_no_attrs_0))
                {
                  t = h_15;
                  if(match_cons(t, sym_cf_1))
                    {
                      i_15 = ATgetArgument(t, 0);
                      t = i_15;
                      if(match_cons(t, sym_opt_1))
                        {
                          j_15 = ATgetArgument(t, 0);
                          t = j_15;
                          if(match_cons(t, sym_layout_0))
                            {
                              t = g_15;
                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                {
                                  t = d_15;
                                  if(match_cons(t, sym_appl_2))
                                    {
                                      v_14 = ATgetArgument(t, 0);
                                      b_15 = ATgetArgument(t, 1);
                                      t = b_15;
                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                        {
                                          t = v_14;
                                          if(match_cons(t, sym_prod_3))
                                            {
                                              w_14 = ATgetArgument(t, 0);
                                              x_14 = ATgetArgument(t, 1);
                                              a_15 = ATgetArgument(t, 2);
                                              t = a_15;
                                              if(match_cons(t, sym_no_attrs_0))
                                                {
                                                  t = x_14;
                                                  if(match_cons(t, sym_cf_1))
                                                    {
                                                      y_14 = ATgetArgument(t, 0);
                                                      t = y_14;
                                                      if(match_cons(t, sym_opt_1))
                                                        {
                                                          z_14 = ATgetArgument(t, 0);
                                                          t = z_14;
                                                          if(match_cons(t, sym_layout_0))
                                                            {
                                                              t = w_14;
                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                {
                                                                  ATerm v_3 = t;
                                                                  int w_3 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = e_15;
                                                                      ;
                                                                      LocalPopChoice(w_3);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = v_3;
                                                                      t = d_15;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  t = d_15;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              t = d_15;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          t = d_15;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      t = d_15;
                                                    }
                                                }
                                              else
                                                {
                                                  t = d_15;
                                                }
                                            }
                                          else
                                            {
                                              t = d_15;
                                            }
                                        }
                                      else
                                        {
                                          t = d_15;
                                        }
                                    }
                                  else
                                    {
                                      t = d_15;
                                    }
                                }
                              else
                                {
                                  t = d_15;
                                  if(match_cons(t, sym_appl_2))
                                    {
                                      v_14 = ATgetArgument(t, 0);
                                      b_15 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = v_14;
                                  if(match_cons(t, sym_prod_3))
                                    {
                                      w_14 = ATgetArgument(t, 0);
                                      x_14 = ATgetArgument(t, 1);
                                      a_15 = ATgetArgument(t, 2);
                                    }
                                  else
                                    _fail(t);
                                  t = w_14;
                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                    _fail(t);
                                  t = x_14;
                                  if(match_cons(t, sym_cf_1))
                                    {
                                      y_14 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = y_14;
                                  if(match_cons(t, sym_opt_1))
                                    {
                                      z_14 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = z_14;
                                  if(!(match_cons(t, sym_layout_0)))
                                    _fail(t);
                                  t = a_15;
                                  if(!(match_cons(t, sym_no_attrs_0)))
                                    _fail(t);
                                  t = b_15;
                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                    _fail(t);
                                  t = e_15;
                                }
                            }
                          else
                            {
                              t = d_15;
                              if(match_cons(t, sym_appl_2))
                                {
                                  v_14 = ATgetArgument(t, 0);
                                  b_15 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = v_14;
                              if(match_cons(t, sym_prod_3))
                                {
                                  w_14 = ATgetArgument(t, 0);
                                  x_14 = ATgetArgument(t, 1);
                                  a_15 = ATgetArgument(t, 2);
                                }
                              else
                                _fail(t);
                              t = w_14;
                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                _fail(t);
                              t = x_14;
                              if(match_cons(t, sym_cf_1))
                                {
                                  y_14 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = y_14;
                              if(match_cons(t, sym_opt_1))
                                {
                                  z_14 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = z_14;
                              if(!(match_cons(t, sym_layout_0)))
                                _fail(t);
                              t = a_15;
                              if(!(match_cons(t, sym_no_attrs_0)))
                                _fail(t);
                              t = b_15;
                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                _fail(t);
                              t = e_15;
                            }
                        }
                      else
                        {
                          t = d_15;
                          if(match_cons(t, sym_appl_2))
                            {
                              v_14 = ATgetArgument(t, 0);
                              b_15 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = v_14;
                          if(match_cons(t, sym_prod_3))
                            {
                              w_14 = ATgetArgument(t, 0);
                              x_14 = ATgetArgument(t, 1);
                              a_15 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          t = w_14;
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = x_14;
                          if(match_cons(t, sym_cf_1))
                            {
                              y_14 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = y_14;
                          if(match_cons(t, sym_opt_1))
                            {
                              z_14 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = z_14;
                          if(!(match_cons(t, sym_layout_0)))
                            _fail(t);
                          t = a_15;
                          if(!(match_cons(t, sym_no_attrs_0)))
                            _fail(t);
                          t = b_15;
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = e_15;
                        }
                    }
                  else
                    {
                      t = d_15;
                      if(match_cons(t, sym_appl_2))
                        {
                          v_14 = ATgetArgument(t, 0);
                          b_15 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = v_14;
                      if(match_cons(t, sym_prod_3))
                        {
                          w_14 = ATgetArgument(t, 0);
                          x_14 = ATgetArgument(t, 1);
                          a_15 = ATgetArgument(t, 2);
                        }
                      else
                        _fail(t);
                      t = w_14;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = x_14;
                      if(match_cons(t, sym_cf_1))
                        {
                          y_14 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = y_14;
                      if(match_cons(t, sym_opt_1))
                        {
                          z_14 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = z_14;
                      if(!(match_cons(t, sym_layout_0)))
                        _fail(t);
                      t = a_15;
                      if(!(match_cons(t, sym_no_attrs_0)))
                        _fail(t);
                      t = b_15;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = e_15;
                    }
                }
              else
                {
                  t = d_15;
                  if(match_cons(t, sym_appl_2))
                    {
                      v_14 = ATgetArgument(t, 0);
                      b_15 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = v_14;
                  if(match_cons(t, sym_prod_3))
                    {
                      w_14 = ATgetArgument(t, 0);
                      x_14 = ATgetArgument(t, 1);
                      a_15 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = w_14;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = x_14;
                  if(match_cons(t, sym_cf_1))
                    {
                      y_14 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = y_14;
                  if(match_cons(t, sym_opt_1))
                    {
                      z_14 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = z_14;
                  if(!(match_cons(t, sym_layout_0)))
                    _fail(t);
                  t = a_15;
                  if(!(match_cons(t, sym_no_attrs_0)))
                    _fail(t);
                  t = b_15;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = e_15;
                }
            }
          else
            {
              t = d_15;
              if(match_cons(t, sym_appl_2))
                {
                  v_14 = ATgetArgument(t, 0);
                  b_15 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = v_14;
              if(match_cons(t, sym_prod_3))
                {
                  w_14 = ATgetArgument(t, 0);
                  x_14 = ATgetArgument(t, 1);
                  a_15 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = w_14;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = x_14;
              if(match_cons(t, sym_cf_1))
                {
                  y_14 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = y_14;
              if(match_cons(t, sym_opt_1))
                {
                  z_14 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = z_14;
              if(!(match_cons(t, sym_layout_0)))
                _fail(t);
              t = a_15;
              if(!(match_cons(t, sym_no_attrs_0)))
                _fail(t);
              t = b_15;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = e_15;
            }
        }
      else
        {
          t = d_15;
          if(match_cons(t, sym_appl_2))
            {
              v_14 = ATgetArgument(t, 0);
              b_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = v_14;
          if(match_cons(t, sym_prod_3))
            {
              w_14 = ATgetArgument(t, 0);
              x_14 = ATgetArgument(t, 1);
              a_15 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = w_14;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = x_14;
          if(match_cons(t, sym_cf_1))
            {
              y_14 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = y_14;
          if(match_cons(t, sym_opt_1))
            {
              z_14 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_14;
          if(!(match_cons(t, sym_layout_0)))
            _fail(t);
          t = a_15;
          if(!(match_cons(t, sym_no_attrs_0)))
            _fail(t);
          t = b_15;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = e_15;
        }
    }
  else
    {
      t = d_15;
      if(match_cons(t, sym_appl_2))
        {
          v_14 = ATgetArgument(t, 0);
          b_15 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = v_14;
      if(match_cons(t, sym_prod_3))
        {
          w_14 = ATgetArgument(t, 0);
          x_14 = ATgetArgument(t, 1);
          a_15 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = w_14;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = x_14;
      if(match_cons(t, sym_cf_1))
        {
          y_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_14;
      if(match_cons(t, sym_opt_1))
        {
          z_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_14;
      if(!(match_cons(t, sym_layout_0)))
        _fail(t);
      t = a_15;
      if(!(match_cons(t, sym_no_attrs_0)))
        _fail(t);
      t = b_15;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = e_15;
    }
  return(t);
}
ATerm w_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_a_3, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_o_2), term_k_2, term_n_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_d_3), term_c_3))), term_o_2, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_f_3))), (ATerm) ATinsert(ATempty, term_p_2)))));
  return(t);
}
ATerm x_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_o_2), term_k_2, term_n_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_d_3), term_c_3))), term_o_2, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_f_3))), (ATerm) ATinsert(ATempty, term_p_2))));
  return(t);
}
ATerm test2d_0_0 (ATerm t)
{
  t = apply_test_4_0(u_0, v_0, w_0, x_0, t);
  return(t);
}
ATerm y_0 (ATerm t)
{
  t = term_x_3;
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm t_19 = NULL,u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL,y_19 = NULL,z_19 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL,k_20 = NULL,l_20 = NULL;
  if(match_cons(t, sym__2))
    {
      b_20 = ATgetArgument(t, 0);
      c_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_20;
  if(match_cons(t, sym_appl_2))
    {
      d_20 = ATgetArgument(t, 0);
      l_20 = ATgetArgument(t, 1);
      t = l_20;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = d_20;
          if(match_cons(t, sym_prod_3))
            {
              e_20 = ATgetArgument(t, 0);
              f_20 = ATgetArgument(t, 1);
              k_20 = ATgetArgument(t, 2);
              t = k_20;
              if(match_cons(t, sym_no_attrs_0))
                {
                  t = f_20;
                  if(match_cons(t, sym_cf_1))
                    {
                      g_20 = ATgetArgument(t, 0);
                      t = g_20;
                      if(match_cons(t, sym_opt_1))
                        {
                          h_20 = ATgetArgument(t, 0);
                          t = h_20;
                          if(match_cons(t, sym_layout_0))
                            {
                              t = e_20;
                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                {
                                  t = b_20;
                                  if(match_cons(t, sym_appl_2))
                                    {
                                      t_19 = ATgetArgument(t, 0);
                                      z_19 = ATgetArgument(t, 1);
                                      t = z_19;
                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                        {
                                          t = t_19;
                                          if(match_cons(t, sym_prod_3))
                                            {
                                              u_19 = ATgetArgument(t, 0);
                                              v_19 = ATgetArgument(t, 1);
                                              y_19 = ATgetArgument(t, 2);
                                              t = y_19;
                                              if(match_cons(t, sym_no_attrs_0))
                                                {
                                                  t = v_19;
                                                  if(match_cons(t, sym_cf_1))
                                                    {
                                                      w_19 = ATgetArgument(t, 0);
                                                      t = w_19;
                                                      if(match_cons(t, sym_opt_1))
                                                        {
                                                          x_19 = ATgetArgument(t, 0);
                                                          t = x_19;
                                                          if(match_cons(t, sym_layout_0))
                                                            {
                                                              t = u_19;
                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                {
                                                                  ATerm y_3 = t;
                                                                  int z_3 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = c_20;
                                                                      ;
                                                                      LocalPopChoice(z_3);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = y_3;
                                                                      t = b_20;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  t = b_20;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              t = b_20;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          t = b_20;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      t = b_20;
                                                    }
                                                }
                                              else
                                                {
                                                  t = b_20;
                                                }
                                            }
                                          else
                                            {
                                              t = b_20;
                                            }
                                        }
                                      else
                                        {
                                          t = b_20;
                                        }
                                    }
                                  else
                                    {
                                      t = b_20;
                                    }
                                }
                              else
                                {
                                  t = b_20;
                                  if(match_cons(t, sym_appl_2))
                                    {
                                      t_19 = ATgetArgument(t, 0);
                                      z_19 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = t_19;
                                  if(match_cons(t, sym_prod_3))
                                    {
                                      u_19 = ATgetArgument(t, 0);
                                      v_19 = ATgetArgument(t, 1);
                                      y_19 = ATgetArgument(t, 2);
                                    }
                                  else
                                    _fail(t);
                                  t = u_19;
                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                    _fail(t);
                                  t = v_19;
                                  if(match_cons(t, sym_cf_1))
                                    {
                                      w_19 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = w_19;
                                  if(match_cons(t, sym_opt_1))
                                    {
                                      x_19 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = x_19;
                                  if(!(match_cons(t, sym_layout_0)))
                                    _fail(t);
                                  t = y_19;
                                  if(!(match_cons(t, sym_no_attrs_0)))
                                    _fail(t);
                                  t = z_19;
                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                    _fail(t);
                                  t = c_20;
                                }
                            }
                          else
                            {
                              t = b_20;
                              if(match_cons(t, sym_appl_2))
                                {
                                  t_19 = ATgetArgument(t, 0);
                                  z_19 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = t_19;
                              if(match_cons(t, sym_prod_3))
                                {
                                  u_19 = ATgetArgument(t, 0);
                                  v_19 = ATgetArgument(t, 1);
                                  y_19 = ATgetArgument(t, 2);
                                }
                              else
                                _fail(t);
                              t = u_19;
                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                _fail(t);
                              t = v_19;
                              if(match_cons(t, sym_cf_1))
                                {
                                  w_19 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = w_19;
                              if(match_cons(t, sym_opt_1))
                                {
                                  x_19 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = x_19;
                              if(!(match_cons(t, sym_layout_0)))
                                _fail(t);
                              t = y_19;
                              if(!(match_cons(t, sym_no_attrs_0)))
                                _fail(t);
                              t = z_19;
                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                _fail(t);
                              t = c_20;
                            }
                        }
                      else
                        {
                          t = b_20;
                          if(match_cons(t, sym_appl_2))
                            {
                              t_19 = ATgetArgument(t, 0);
                              z_19 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = t_19;
                          if(match_cons(t, sym_prod_3))
                            {
                              u_19 = ATgetArgument(t, 0);
                              v_19 = ATgetArgument(t, 1);
                              y_19 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          t = u_19;
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = v_19;
                          if(match_cons(t, sym_cf_1))
                            {
                              w_19 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = w_19;
                          if(match_cons(t, sym_opt_1))
                            {
                              x_19 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = x_19;
                          if(!(match_cons(t, sym_layout_0)))
                            _fail(t);
                          t = y_19;
                          if(!(match_cons(t, sym_no_attrs_0)))
                            _fail(t);
                          t = z_19;
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = c_20;
                        }
                    }
                  else
                    {
                      t = b_20;
                      if(match_cons(t, sym_appl_2))
                        {
                          t_19 = ATgetArgument(t, 0);
                          z_19 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = t_19;
                      if(match_cons(t, sym_prod_3))
                        {
                          u_19 = ATgetArgument(t, 0);
                          v_19 = ATgetArgument(t, 1);
                          y_19 = ATgetArgument(t, 2);
                        }
                      else
                        _fail(t);
                      t = u_19;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = v_19;
                      if(match_cons(t, sym_cf_1))
                        {
                          w_19 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = w_19;
                      if(match_cons(t, sym_opt_1))
                        {
                          x_19 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = x_19;
                      if(!(match_cons(t, sym_layout_0)))
                        _fail(t);
                      t = y_19;
                      if(!(match_cons(t, sym_no_attrs_0)))
                        _fail(t);
                      t = z_19;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = c_20;
                    }
                }
              else
                {
                  t = b_20;
                  if(match_cons(t, sym_appl_2))
                    {
                      t_19 = ATgetArgument(t, 0);
                      z_19 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = t_19;
                  if(match_cons(t, sym_prod_3))
                    {
                      u_19 = ATgetArgument(t, 0);
                      v_19 = ATgetArgument(t, 1);
                      y_19 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = u_19;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = v_19;
                  if(match_cons(t, sym_cf_1))
                    {
                      w_19 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = w_19;
                  if(match_cons(t, sym_opt_1))
                    {
                      x_19 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = x_19;
                  if(!(match_cons(t, sym_layout_0)))
                    _fail(t);
                  t = y_19;
                  if(!(match_cons(t, sym_no_attrs_0)))
                    _fail(t);
                  t = z_19;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = c_20;
                }
            }
          else
            {
              t = b_20;
              if(match_cons(t, sym_appl_2))
                {
                  t_19 = ATgetArgument(t, 0);
                  z_19 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = t_19;
              if(match_cons(t, sym_prod_3))
                {
                  u_19 = ATgetArgument(t, 0);
                  v_19 = ATgetArgument(t, 1);
                  y_19 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = u_19;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = v_19;
              if(match_cons(t, sym_cf_1))
                {
                  w_19 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = w_19;
              if(match_cons(t, sym_opt_1))
                {
                  x_19 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = x_19;
              if(!(match_cons(t, sym_layout_0)))
                _fail(t);
              t = y_19;
              if(!(match_cons(t, sym_no_attrs_0)))
                _fail(t);
              t = z_19;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = c_20;
            }
        }
      else
        {
          t = b_20;
          if(match_cons(t, sym_appl_2))
            {
              t_19 = ATgetArgument(t, 0);
              z_19 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = t_19;
          if(match_cons(t, sym_prod_3))
            {
              u_19 = ATgetArgument(t, 0);
              v_19 = ATgetArgument(t, 1);
              y_19 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = u_19;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = v_19;
          if(match_cons(t, sym_cf_1))
            {
              w_19 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = w_19;
          if(match_cons(t, sym_opt_1))
            {
              x_19 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = x_19;
          if(!(match_cons(t, sym_layout_0)))
            _fail(t);
          t = y_19;
          if(!(match_cons(t, sym_no_attrs_0)))
            _fail(t);
          t = z_19;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = c_20;
        }
    }
  else
    {
      t = b_20;
      if(match_cons(t, sym_appl_2))
        {
          t_19 = ATgetArgument(t, 0);
          z_19 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = t_19;
      if(match_cons(t, sym_prod_3))
        {
          u_19 = ATgetArgument(t, 0);
          v_19 = ATgetArgument(t, 1);
          y_19 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = u_19;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = v_19;
      if(match_cons(t, sym_cf_1))
        {
          w_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_19;
      if(match_cons(t, sym_opt_1))
        {
          x_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_19;
      if(!(match_cons(t, sym_layout_0)))
        _fail(t);
      t = y_19;
      if(!(match_cons(t, sym_no_attrs_0)))
        _fail(t);
      t = z_19;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = c_20;
    }
  return(t);
}
ATerm a_1 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_o_2), term_k_2, term_n_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_d_3), term_c_3))), term_o_2, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_f_3))), (ATerm) ATinsert(ATempty, term_p_2)))), term_a_3);
  return(t);
}
ATerm b_1 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_o_2), term_k_2, term_n_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_d_3), term_c_3))), term_o_2, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_f_3))), (ATerm) ATinsert(ATempty, term_p_2))));
  return(t);
}
ATerm test2c_0_0 (ATerm t)
{
  t = apply_test_4_0(y_0, z_0, a_1, b_1, t);
  return(t);
}
ATerm c_1 (ATerm t)
{
  t = term_a_4;
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm b_4 = t;
  int c_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_layout1_0_0(t);
      ;
      LocalPopChoice(c_4);
    }
  else
    {
      t = b_4;
      {
        ATerm t_24 = NULL,u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL;
        if(match_cons(t, sym__2))
          {
            b_25 = ATgetArgument(t, 0);
            c_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_25;
        if(match_cons(t, sym_appl_2))
          {
            d_25 = ATgetArgument(t, 0);
            j_25 = ATgetArgument(t, 1);
            t = j_25;
            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
              {
                t = d_25;
                if(match_cons(t, sym_prod_3))
                  {
                    e_25 = ATgetArgument(t, 0);
                    f_25 = ATgetArgument(t, 1);
                    i_25 = ATgetArgument(t, 2);
                    t = i_25;
                    if(match_cons(t, sym_no_attrs_0))
                      {
                        t = f_25;
                        if(match_cons(t, sym_cf_1))
                          {
                            g_25 = ATgetArgument(t, 0);
                            t = g_25;
                            if(match_cons(t, sym_opt_1))
                              {
                                h_25 = ATgetArgument(t, 0);
                                t = h_25;
                                if(match_cons(t, sym_layout_0))
                                  {
                                    t = e_25;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = b_25;
                                        if(match_cons(t, sym_appl_2))
                                          {
                                            t_24 = ATgetArgument(t, 0);
                                            z_24 = ATgetArgument(t, 1);
                                            t = z_24;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                t = t_24;
                                                if(match_cons(t, sym_prod_3))
                                                  {
                                                    u_24 = ATgetArgument(t, 0);
                                                    v_24 = ATgetArgument(t, 1);
                                                    y_24 = ATgetArgument(t, 2);
                                                    t = y_24;
                                                    if(match_cons(t, sym_no_attrs_0))
                                                      {
                                                        t = v_24;
                                                        if(match_cons(t, sym_cf_1))
                                                          {
                                                            w_24 = ATgetArgument(t, 0);
                                                            t = w_24;
                                                            if(match_cons(t, sym_opt_1))
                                                              {
                                                                x_24 = ATgetArgument(t, 0);
                                                                t = x_24;
                                                                if(match_cons(t, sym_layout_0))
                                                                  {
                                                                    t = u_24;
                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                      {
                                                                        ATerm d_4 = t;
                                                                        int e_4 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = c_25;
                                                                            ;
                                                                            LocalPopChoice(e_4);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = d_4;
                                                                            t = b_25;
                                                                          }
                                                                      }
                                                                    else
                                                                      {
                                                                        t = b_25;
                                                                      }
                                                                  }
                                                                else
                                                                  {
                                                                    t = b_25;
                                                                  }
                                                              }
                                                            else
                                                              {
                                                                t = b_25;
                                                              }
                                                          }
                                                        else
                                                          {
                                                            t = b_25;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = b_25;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = b_25;
                                                  }
                                              }
                                            else
                                              {
                                                t = b_25;
                                              }
                                          }
                                        else
                                          {
                                            t = b_25;
                                          }
                                      }
                                    else
                                      {
                                        t = b_25;
                                        if(match_cons(t, sym_appl_2))
                                          {
                                            t_24 = ATgetArgument(t, 0);
                                            z_24 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = t_24;
                                        if(match_cons(t, sym_prod_3))
                                          {
                                            u_24 = ATgetArgument(t, 0);
                                            v_24 = ATgetArgument(t, 1);
                                            y_24 = ATgetArgument(t, 2);
                                          }
                                        else
                                          _fail(t);
                                        t = u_24;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = v_24;
                                        if(match_cons(t, sym_cf_1))
                                          {
                                            w_24 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = w_24;
                                        if(match_cons(t, sym_opt_1))
                                          {
                                            x_24 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = x_24;
                                        if(!(match_cons(t, sym_layout_0)))
                                          _fail(t);
                                        t = y_24;
                                        if(!(match_cons(t, sym_no_attrs_0)))
                                          _fail(t);
                                        t = z_24;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = c_25;
                                      }
                                  }
                                else
                                  {
                                    t = b_25;
                                    if(match_cons(t, sym_appl_2))
                                      {
                                        t_24 = ATgetArgument(t, 0);
                                        z_24 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = t_24;
                                    if(match_cons(t, sym_prod_3))
                                      {
                                        u_24 = ATgetArgument(t, 0);
                                        v_24 = ATgetArgument(t, 1);
                                        y_24 = ATgetArgument(t, 2);
                                      }
                                    else
                                      _fail(t);
                                    t = u_24;
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = v_24;
                                    if(match_cons(t, sym_cf_1))
                                      {
                                        w_24 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = w_24;
                                    if(match_cons(t, sym_opt_1))
                                      {
                                        x_24 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = x_24;
                                    if(!(match_cons(t, sym_layout_0)))
                                      _fail(t);
                                    t = y_24;
                                    if(!(match_cons(t, sym_no_attrs_0)))
                                      _fail(t);
                                    t = z_24;
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = c_25;
                                  }
                              }
                            else
                              {
                                t = b_25;
                                if(match_cons(t, sym_appl_2))
                                  {
                                    t_24 = ATgetArgument(t, 0);
                                    z_24 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = t_24;
                                if(match_cons(t, sym_prod_3))
                                  {
                                    u_24 = ATgetArgument(t, 0);
                                    v_24 = ATgetArgument(t, 1);
                                    y_24 = ATgetArgument(t, 2);
                                  }
                                else
                                  _fail(t);
                                t = u_24;
                                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                  _fail(t);
                                t = v_24;
                                if(match_cons(t, sym_cf_1))
                                  {
                                    w_24 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = w_24;
                                if(match_cons(t, sym_opt_1))
                                  {
                                    x_24 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = x_24;
                                if(!(match_cons(t, sym_layout_0)))
                                  _fail(t);
                                t = y_24;
                                if(!(match_cons(t, sym_no_attrs_0)))
                                  _fail(t);
                                t = z_24;
                                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                  _fail(t);
                                t = c_25;
                              }
                          }
                        else
                          {
                            t = b_25;
                            if(match_cons(t, sym_appl_2))
                              {
                                t_24 = ATgetArgument(t, 0);
                                z_24 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = t_24;
                            if(match_cons(t, sym_prod_3))
                              {
                                u_24 = ATgetArgument(t, 0);
                                v_24 = ATgetArgument(t, 1);
                                y_24 = ATgetArgument(t, 2);
                              }
                            else
                              _fail(t);
                            t = u_24;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = v_24;
                            if(match_cons(t, sym_cf_1))
                              {
                                w_24 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = w_24;
                            if(match_cons(t, sym_opt_1))
                              {
                                x_24 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = x_24;
                            if(!(match_cons(t, sym_layout_0)))
                              _fail(t);
                            t = y_24;
                            if(!(match_cons(t, sym_no_attrs_0)))
                              _fail(t);
                            t = z_24;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = c_25;
                          }
                      }
                    else
                      {
                        t = b_25;
                        if(match_cons(t, sym_appl_2))
                          {
                            t_24 = ATgetArgument(t, 0);
                            z_24 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = t_24;
                        if(match_cons(t, sym_prod_3))
                          {
                            u_24 = ATgetArgument(t, 0);
                            v_24 = ATgetArgument(t, 1);
                            y_24 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = u_24;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = v_24;
                        if(match_cons(t, sym_cf_1))
                          {
                            w_24 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = w_24;
                        if(match_cons(t, sym_opt_1))
                          {
                            x_24 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = x_24;
                        if(!(match_cons(t, sym_layout_0)))
                          _fail(t);
                        t = y_24;
                        if(!(match_cons(t, sym_no_attrs_0)))
                          _fail(t);
                        t = z_24;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = c_25;
                      }
                  }
                else
                  {
                    t = b_25;
                    if(match_cons(t, sym_appl_2))
                      {
                        t_24 = ATgetArgument(t, 0);
                        z_24 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = t_24;
                    if(match_cons(t, sym_prod_3))
                      {
                        u_24 = ATgetArgument(t, 0);
                        v_24 = ATgetArgument(t, 1);
                        y_24 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = u_24;
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    t = v_24;
                    if(match_cons(t, sym_cf_1))
                      {
                        w_24 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = w_24;
                    if(match_cons(t, sym_opt_1))
                      {
                        x_24 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = x_24;
                    if(!(match_cons(t, sym_layout_0)))
                      _fail(t);
                    t = y_24;
                    if(!(match_cons(t, sym_no_attrs_0)))
                      _fail(t);
                    t = z_24;
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    t = c_25;
                  }
              }
            else
              {
                t = b_25;
                if(match_cons(t, sym_appl_2))
                  {
                    t_24 = ATgetArgument(t, 0);
                    z_24 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = t_24;
                if(match_cons(t, sym_prod_3))
                  {
                    u_24 = ATgetArgument(t, 0);
                    v_24 = ATgetArgument(t, 1);
                    y_24 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = u_24;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = v_24;
                if(match_cons(t, sym_cf_1))
                  {
                    w_24 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = w_24;
                if(match_cons(t, sym_opt_1))
                  {
                    x_24 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = x_24;
                if(!(match_cons(t, sym_layout_0)))
                  _fail(t);
                t = y_24;
                if(!(match_cons(t, sym_no_attrs_0)))
                  _fail(t);
                t = z_24;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = c_25;
              }
          }
        else
          {
            t = b_25;
            if(match_cons(t, sym_appl_2))
              {
                t_24 = ATgetArgument(t, 0);
                z_24 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = t_24;
            if(match_cons(t, sym_prod_3))
              {
                u_24 = ATgetArgument(t, 0);
                v_24 = ATgetArgument(t, 1);
                y_24 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = u_24;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = v_24;
            if(match_cons(t, sym_cf_1))
              {
                w_24 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = w_24;
            if(match_cons(t, sym_opt_1))
              {
                x_24 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = x_24;
            if(!(match_cons(t, sym_layout_0)))
              _fail(t);
            t = y_24;
            if(!(match_cons(t, sym_no_attrs_0)))
              _fail(t);
            t = z_24;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = c_25;
          }
      }
    }
  return(t);
}
ATerm e_1 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_a_3, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_o_2), term_k_2, term_n_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_d_3), term_c_3))), term_o_2, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_f_3))), (ATerm) ATinsert(ATempty, term_p_2)))));
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_o_2), term_k_2, term_n_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_d_3), term_c_3))), term_o_2, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_f_3))), (ATerm) ATinsert(ATempty, term_p_2))));
  return(t);
}
ATerm test2b_0_0 (ATerm t)
{
  t = apply_test_4_0(c_1, d_1, e_1, f_1, t);
  return(t);
}
ATerm g_1 (ATerm t)
{
  t = term_f_4;
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm g_4 = t;
  int h_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_layout1_0_0(t);
      ;
      LocalPopChoice(h_4);
    }
  else
    {
      t = g_4;
      {
        ATerm r_29 = NULL,s_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL,z_29 = NULL,a_30 = NULL,b_30 = NULL,c_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL,g_30 = NULL,h_30 = NULL;
        if(match_cons(t, sym__2))
          {
            z_29 = ATgetArgument(t, 0);
            a_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_30;
        if(match_cons(t, sym_appl_2))
          {
            b_30 = ATgetArgument(t, 0);
            h_30 = ATgetArgument(t, 1);
            t = h_30;
            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
              {
                t = b_30;
                if(match_cons(t, sym_prod_3))
                  {
                    c_30 = ATgetArgument(t, 0);
                    d_30 = ATgetArgument(t, 1);
                    g_30 = ATgetArgument(t, 2);
                    t = g_30;
                    if(match_cons(t, sym_no_attrs_0))
                      {
                        t = d_30;
                        if(match_cons(t, sym_cf_1))
                          {
                            e_30 = ATgetArgument(t, 0);
                            t = e_30;
                            if(match_cons(t, sym_opt_1))
                              {
                                f_30 = ATgetArgument(t, 0);
                                t = f_30;
                                if(match_cons(t, sym_layout_0))
                                  {
                                    t = c_30;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = z_29;
                                        if(match_cons(t, sym_appl_2))
                                          {
                                            r_29 = ATgetArgument(t, 0);
                                            x_29 = ATgetArgument(t, 1);
                                            t = x_29;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                t = r_29;
                                                if(match_cons(t, sym_prod_3))
                                                  {
                                                    s_29 = ATgetArgument(t, 0);
                                                    t_29 = ATgetArgument(t, 1);
                                                    w_29 = ATgetArgument(t, 2);
                                                    t = w_29;
                                                    if(match_cons(t, sym_no_attrs_0))
                                                      {
                                                        t = t_29;
                                                        if(match_cons(t, sym_cf_1))
                                                          {
                                                            u_29 = ATgetArgument(t, 0);
                                                            t = u_29;
                                                            if(match_cons(t, sym_opt_1))
                                                              {
                                                                v_29 = ATgetArgument(t, 0);
                                                                t = v_29;
                                                                if(match_cons(t, sym_layout_0))
                                                                  {
                                                                    t = s_29;
                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                      {
                                                                        ATerm i_4 = t;
                                                                        int j_4 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = a_30;
                                                                            ;
                                                                            LocalPopChoice(j_4);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = i_4;
                                                                            t = z_29;
                                                                          }
                                                                      }
                                                                    else
                                                                      {
                                                                        t = z_29;
                                                                      }
                                                                  }
                                                                else
                                                                  {
                                                                    t = z_29;
                                                                  }
                                                              }
                                                            else
                                                              {
                                                                t = z_29;
                                                              }
                                                          }
                                                        else
                                                          {
                                                            t = z_29;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = z_29;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = z_29;
                                                  }
                                              }
                                            else
                                              {
                                                t = z_29;
                                              }
                                          }
                                        else
                                          {
                                            t = z_29;
                                          }
                                      }
                                    else
                                      {
                                        t = z_29;
                                        if(match_cons(t, sym_appl_2))
                                          {
                                            r_29 = ATgetArgument(t, 0);
                                            x_29 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = r_29;
                                        if(match_cons(t, sym_prod_3))
                                          {
                                            s_29 = ATgetArgument(t, 0);
                                            t_29 = ATgetArgument(t, 1);
                                            w_29 = ATgetArgument(t, 2);
                                          }
                                        else
                                          _fail(t);
                                        t = s_29;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = t_29;
                                        if(match_cons(t, sym_cf_1))
                                          {
                                            u_29 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = u_29;
                                        if(match_cons(t, sym_opt_1))
                                          {
                                            v_29 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = v_29;
                                        if(!(match_cons(t, sym_layout_0)))
                                          _fail(t);
                                        t = w_29;
                                        if(!(match_cons(t, sym_no_attrs_0)))
                                          _fail(t);
                                        t = x_29;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = a_30;
                                      }
                                  }
                                else
                                  {
                                    t = z_29;
                                    if(match_cons(t, sym_appl_2))
                                      {
                                        r_29 = ATgetArgument(t, 0);
                                        x_29 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = r_29;
                                    if(match_cons(t, sym_prod_3))
                                      {
                                        s_29 = ATgetArgument(t, 0);
                                        t_29 = ATgetArgument(t, 1);
                                        w_29 = ATgetArgument(t, 2);
                                      }
                                    else
                                      _fail(t);
                                    t = s_29;
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = t_29;
                                    if(match_cons(t, sym_cf_1))
                                      {
                                        u_29 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = u_29;
                                    if(match_cons(t, sym_opt_1))
                                      {
                                        v_29 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = v_29;
                                    if(!(match_cons(t, sym_layout_0)))
                                      _fail(t);
                                    t = w_29;
                                    if(!(match_cons(t, sym_no_attrs_0)))
                                      _fail(t);
                                    t = x_29;
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = a_30;
                                  }
                              }
                            else
                              {
                                t = z_29;
                                if(match_cons(t, sym_appl_2))
                                  {
                                    r_29 = ATgetArgument(t, 0);
                                    x_29 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = r_29;
                                if(match_cons(t, sym_prod_3))
                                  {
                                    s_29 = ATgetArgument(t, 0);
                                    t_29 = ATgetArgument(t, 1);
                                    w_29 = ATgetArgument(t, 2);
                                  }
                                else
                                  _fail(t);
                                t = s_29;
                                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                  _fail(t);
                                t = t_29;
                                if(match_cons(t, sym_cf_1))
                                  {
                                    u_29 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = u_29;
                                if(match_cons(t, sym_opt_1))
                                  {
                                    v_29 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = v_29;
                                if(!(match_cons(t, sym_layout_0)))
                                  _fail(t);
                                t = w_29;
                                if(!(match_cons(t, sym_no_attrs_0)))
                                  _fail(t);
                                t = x_29;
                                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                  _fail(t);
                                t = a_30;
                              }
                          }
                        else
                          {
                            t = z_29;
                            if(match_cons(t, sym_appl_2))
                              {
                                r_29 = ATgetArgument(t, 0);
                                x_29 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = r_29;
                            if(match_cons(t, sym_prod_3))
                              {
                                s_29 = ATgetArgument(t, 0);
                                t_29 = ATgetArgument(t, 1);
                                w_29 = ATgetArgument(t, 2);
                              }
                            else
                              _fail(t);
                            t = s_29;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = t_29;
                            if(match_cons(t, sym_cf_1))
                              {
                                u_29 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = u_29;
                            if(match_cons(t, sym_opt_1))
                              {
                                v_29 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = v_29;
                            if(!(match_cons(t, sym_layout_0)))
                              _fail(t);
                            t = w_29;
                            if(!(match_cons(t, sym_no_attrs_0)))
                              _fail(t);
                            t = x_29;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = a_30;
                          }
                      }
                    else
                      {
                        t = z_29;
                        if(match_cons(t, sym_appl_2))
                          {
                            r_29 = ATgetArgument(t, 0);
                            x_29 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = r_29;
                        if(match_cons(t, sym_prod_3))
                          {
                            s_29 = ATgetArgument(t, 0);
                            t_29 = ATgetArgument(t, 1);
                            w_29 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = s_29;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = t_29;
                        if(match_cons(t, sym_cf_1))
                          {
                            u_29 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = u_29;
                        if(match_cons(t, sym_opt_1))
                          {
                            v_29 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = v_29;
                        if(!(match_cons(t, sym_layout_0)))
                          _fail(t);
                        t = w_29;
                        if(!(match_cons(t, sym_no_attrs_0)))
                          _fail(t);
                        t = x_29;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = a_30;
                      }
                  }
                else
                  {
                    t = z_29;
                    if(match_cons(t, sym_appl_2))
                      {
                        r_29 = ATgetArgument(t, 0);
                        x_29 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = r_29;
                    if(match_cons(t, sym_prod_3))
                      {
                        s_29 = ATgetArgument(t, 0);
                        t_29 = ATgetArgument(t, 1);
                        w_29 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = s_29;
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    t = t_29;
                    if(match_cons(t, sym_cf_1))
                      {
                        u_29 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = u_29;
                    if(match_cons(t, sym_opt_1))
                      {
                        v_29 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = v_29;
                    if(!(match_cons(t, sym_layout_0)))
                      _fail(t);
                    t = w_29;
                    if(!(match_cons(t, sym_no_attrs_0)))
                      _fail(t);
                    t = x_29;
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    t = a_30;
                  }
              }
            else
              {
                t = z_29;
                if(match_cons(t, sym_appl_2))
                  {
                    r_29 = ATgetArgument(t, 0);
                    x_29 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = r_29;
                if(match_cons(t, sym_prod_3))
                  {
                    s_29 = ATgetArgument(t, 0);
                    t_29 = ATgetArgument(t, 1);
                    w_29 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = s_29;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = t_29;
                if(match_cons(t, sym_cf_1))
                  {
                    u_29 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = u_29;
                if(match_cons(t, sym_opt_1))
                  {
                    v_29 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = v_29;
                if(!(match_cons(t, sym_layout_0)))
                  _fail(t);
                t = w_29;
                if(!(match_cons(t, sym_no_attrs_0)))
                  _fail(t);
                t = x_29;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = a_30;
              }
          }
        else
          {
            t = z_29;
            if(match_cons(t, sym_appl_2))
              {
                r_29 = ATgetArgument(t, 0);
                x_29 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = r_29;
            if(match_cons(t, sym_prod_3))
              {
                s_29 = ATgetArgument(t, 0);
                t_29 = ATgetArgument(t, 1);
                w_29 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = s_29;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = t_29;
            if(match_cons(t, sym_cf_1))
              {
                u_29 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = u_29;
            if(match_cons(t, sym_opt_1))
              {
                v_29 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = v_29;
            if(!(match_cons(t, sym_layout_0)))
              _fail(t);
            t = w_29;
            if(!(match_cons(t, sym_no_attrs_0)))
              _fail(t);
            t = x_29;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = a_30;
          }
      }
    }
  return(t);
}
ATerm i_1 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_o_2), term_k_2, term_n_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_d_3), term_c_3))), term_o_2, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_f_3))), (ATerm) ATinsert(ATempty, term_p_2)))), term_a_3);
  return(t);
}
ATerm j_1 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_o_2), term_k_2, term_n_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_d_3), term_c_3))), term_o_2, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_f_3))), (ATerm) ATinsert(ATempty, term_p_2))));
  return(t);
}
ATerm test2a_0_0 (ATerm t)
{
  t = apply_test_4_0(g_1, h_1, i_1, j_1, t);
  return(t);
}
ATerm k_1 (ATerm t)
{
  t = term_k_4;
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm l_4 = t;
  int m_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_layout1_0_0(t);
      ;
      LocalPopChoice(m_4);
    }
  else
    {
      t = l_4;
      {
        ATerm p_34 = NULL,q_34 = NULL,r_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL,x_34 = NULL,y_34 = NULL,z_34 = NULL,a_35 = NULL,b_35 = NULL,c_35 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL;
        if(match_cons(t, sym__2))
          {
            x_34 = ATgetArgument(t, 0);
            y_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_34;
        if(match_cons(t, sym_appl_2))
          {
            z_34 = ATgetArgument(t, 0);
            f_35 = ATgetArgument(t, 1);
            t = f_35;
            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
              {
                t = z_34;
                if(match_cons(t, sym_prod_3))
                  {
                    a_35 = ATgetArgument(t, 0);
                    b_35 = ATgetArgument(t, 1);
                    e_35 = ATgetArgument(t, 2);
                    t = e_35;
                    if(match_cons(t, sym_no_attrs_0))
                      {
                        t = b_35;
                        if(match_cons(t, sym_cf_1))
                          {
                            c_35 = ATgetArgument(t, 0);
                            t = c_35;
                            if(match_cons(t, sym_opt_1))
                              {
                                d_35 = ATgetArgument(t, 0);
                                t = d_35;
                                if(match_cons(t, sym_layout_0))
                                  {
                                    t = a_35;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = x_34;
                                        if(match_cons(t, sym_appl_2))
                                          {
                                            p_34 = ATgetArgument(t, 0);
                                            v_34 = ATgetArgument(t, 1);
                                            t = v_34;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                t = p_34;
                                                if(match_cons(t, sym_prod_3))
                                                  {
                                                    q_34 = ATgetArgument(t, 0);
                                                    r_34 = ATgetArgument(t, 1);
                                                    u_34 = ATgetArgument(t, 2);
                                                    t = u_34;
                                                    if(match_cons(t, sym_no_attrs_0))
                                                      {
                                                        t = r_34;
                                                        if(match_cons(t, sym_cf_1))
                                                          {
                                                            s_34 = ATgetArgument(t, 0);
                                                            t = s_34;
                                                            if(match_cons(t, sym_opt_1))
                                                              {
                                                                t_34 = ATgetArgument(t, 0);
                                                                t = t_34;
                                                                if(match_cons(t, sym_layout_0))
                                                                  {
                                                                    t = q_34;
                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                      {
                                                                        ATerm n_4 = t;
                                                                        int o_4 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = y_34;
                                                                            ;
                                                                            LocalPopChoice(o_4);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = n_4;
                                                                            t = x_34;
                                                                          }
                                                                      }
                                                                    else
                                                                      {
                                                                        t = x_34;
                                                                      }
                                                                  }
                                                                else
                                                                  {
                                                                    t = x_34;
                                                                  }
                                                              }
                                                            else
                                                              {
                                                                t = x_34;
                                                              }
                                                          }
                                                        else
                                                          {
                                                            t = x_34;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = x_34;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = x_34;
                                                  }
                                              }
                                            else
                                              {
                                                t = x_34;
                                              }
                                          }
                                        else
                                          {
                                            t = x_34;
                                          }
                                      }
                                    else
                                      {
                                        t = x_34;
                                        if(match_cons(t, sym_appl_2))
                                          {
                                            p_34 = ATgetArgument(t, 0);
                                            v_34 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = p_34;
                                        if(match_cons(t, sym_prod_3))
                                          {
                                            q_34 = ATgetArgument(t, 0);
                                            r_34 = ATgetArgument(t, 1);
                                            u_34 = ATgetArgument(t, 2);
                                          }
                                        else
                                          _fail(t);
                                        t = q_34;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = r_34;
                                        if(match_cons(t, sym_cf_1))
                                          {
                                            s_34 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = s_34;
                                        if(match_cons(t, sym_opt_1))
                                          {
                                            t_34 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = t_34;
                                        if(!(match_cons(t, sym_layout_0)))
                                          _fail(t);
                                        t = u_34;
                                        if(!(match_cons(t, sym_no_attrs_0)))
                                          _fail(t);
                                        t = v_34;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = y_34;
                                      }
                                  }
                                else
                                  {
                                    t = x_34;
                                    if(match_cons(t, sym_appl_2))
                                      {
                                        p_34 = ATgetArgument(t, 0);
                                        v_34 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = p_34;
                                    if(match_cons(t, sym_prod_3))
                                      {
                                        q_34 = ATgetArgument(t, 0);
                                        r_34 = ATgetArgument(t, 1);
                                        u_34 = ATgetArgument(t, 2);
                                      }
                                    else
                                      _fail(t);
                                    t = q_34;
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = r_34;
                                    if(match_cons(t, sym_cf_1))
                                      {
                                        s_34 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = s_34;
                                    if(match_cons(t, sym_opt_1))
                                      {
                                        t_34 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = t_34;
                                    if(!(match_cons(t, sym_layout_0)))
                                      _fail(t);
                                    t = u_34;
                                    if(!(match_cons(t, sym_no_attrs_0)))
                                      _fail(t);
                                    t = v_34;
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = y_34;
                                  }
                              }
                            else
                              {
                                t = x_34;
                                if(match_cons(t, sym_appl_2))
                                  {
                                    p_34 = ATgetArgument(t, 0);
                                    v_34 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = p_34;
                                if(match_cons(t, sym_prod_3))
                                  {
                                    q_34 = ATgetArgument(t, 0);
                                    r_34 = ATgetArgument(t, 1);
                                    u_34 = ATgetArgument(t, 2);
                                  }
                                else
                                  _fail(t);
                                t = q_34;
                                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                  _fail(t);
                                t = r_34;
                                if(match_cons(t, sym_cf_1))
                                  {
                                    s_34 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = s_34;
                                if(match_cons(t, sym_opt_1))
                                  {
                                    t_34 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = t_34;
                                if(!(match_cons(t, sym_layout_0)))
                                  _fail(t);
                                t = u_34;
                                if(!(match_cons(t, sym_no_attrs_0)))
                                  _fail(t);
                                t = v_34;
                                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                  _fail(t);
                                t = y_34;
                              }
                          }
                        else
                          {
                            t = x_34;
                            if(match_cons(t, sym_appl_2))
                              {
                                p_34 = ATgetArgument(t, 0);
                                v_34 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = p_34;
                            if(match_cons(t, sym_prod_3))
                              {
                                q_34 = ATgetArgument(t, 0);
                                r_34 = ATgetArgument(t, 1);
                                u_34 = ATgetArgument(t, 2);
                              }
                            else
                              _fail(t);
                            t = q_34;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = r_34;
                            if(match_cons(t, sym_cf_1))
                              {
                                s_34 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = s_34;
                            if(match_cons(t, sym_opt_1))
                              {
                                t_34 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = t_34;
                            if(!(match_cons(t, sym_layout_0)))
                              _fail(t);
                            t = u_34;
                            if(!(match_cons(t, sym_no_attrs_0)))
                              _fail(t);
                            t = v_34;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = y_34;
                          }
                      }
                    else
                      {
                        t = x_34;
                        if(match_cons(t, sym_appl_2))
                          {
                            p_34 = ATgetArgument(t, 0);
                            v_34 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = p_34;
                        if(match_cons(t, sym_prod_3))
                          {
                            q_34 = ATgetArgument(t, 0);
                            r_34 = ATgetArgument(t, 1);
                            u_34 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = q_34;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = r_34;
                        if(match_cons(t, sym_cf_1))
                          {
                            s_34 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = s_34;
                        if(match_cons(t, sym_opt_1))
                          {
                            t_34 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = t_34;
                        if(!(match_cons(t, sym_layout_0)))
                          _fail(t);
                        t = u_34;
                        if(!(match_cons(t, sym_no_attrs_0)))
                          _fail(t);
                        t = v_34;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = y_34;
                      }
                  }
                else
                  {
                    t = x_34;
                    if(match_cons(t, sym_appl_2))
                      {
                        p_34 = ATgetArgument(t, 0);
                        v_34 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = p_34;
                    if(match_cons(t, sym_prod_3))
                      {
                        q_34 = ATgetArgument(t, 0);
                        r_34 = ATgetArgument(t, 1);
                        u_34 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = q_34;
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    t = r_34;
                    if(match_cons(t, sym_cf_1))
                      {
                        s_34 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = s_34;
                    if(match_cons(t, sym_opt_1))
                      {
                        t_34 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = t_34;
                    if(!(match_cons(t, sym_layout_0)))
                      _fail(t);
                    t = u_34;
                    if(!(match_cons(t, sym_no_attrs_0)))
                      _fail(t);
                    t = v_34;
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    t = y_34;
                  }
              }
            else
              {
                t = x_34;
                if(match_cons(t, sym_appl_2))
                  {
                    p_34 = ATgetArgument(t, 0);
                    v_34 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = p_34;
                if(match_cons(t, sym_prod_3))
                  {
                    q_34 = ATgetArgument(t, 0);
                    r_34 = ATgetArgument(t, 1);
                    u_34 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = q_34;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = r_34;
                if(match_cons(t, sym_cf_1))
                  {
                    s_34 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = s_34;
                if(match_cons(t, sym_opt_1))
                  {
                    t_34 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = t_34;
                if(!(match_cons(t, sym_layout_0)))
                  _fail(t);
                t = u_34;
                if(!(match_cons(t, sym_no_attrs_0)))
                  _fail(t);
                t = v_34;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = y_34;
              }
          }
        else
          {
            t = x_34;
            if(match_cons(t, sym_appl_2))
              {
                p_34 = ATgetArgument(t, 0);
                v_34 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = p_34;
            if(match_cons(t, sym_prod_3))
              {
                q_34 = ATgetArgument(t, 0);
                r_34 = ATgetArgument(t, 1);
                u_34 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = q_34;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = r_34;
            if(match_cons(t, sym_cf_1))
              {
                s_34 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = s_34;
            if(match_cons(t, sym_opt_1))
              {
                t_34 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = t_34;
            if(!(match_cons(t, sym_layout_0)))
              _fail(t);
            t = u_34;
            if(!(match_cons(t, sym_no_attrs_0)))
              _fail(t);
            t = v_34;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = y_34;
          }
      }
    }
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = term_p_4;
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = term_a_3;
  return(t);
}
ATerm test1a_0_0 (ATerm t)
{
  t = apply_test_4_0(k_1, l_1, m_1, n_1, t);
  return(t);
}
ATerm conc_layout1_0_0 (ATerm t)
{
  ATerm y_35 = NULL,z_35 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_4 = ATgetArgument(t, 0);
      if(match_cons(q_4, sym_appl_2))
        {
          ATerm s_4 = ATgetArgument(q_4, 0);
          if(match_cons(s_4, sym_prod_3))
            {
              ATerm u_4 = ATgetArgument(s_4, 0);
              if(((ATgetType(u_4) == AT_LIST) && !(ATisEmpty(u_4))))
                {
                  ATerm e_5 = ATgetFirst((ATermList) u_4);
                  if(match_cons(e_5, sym_cf_1))
                    {
                      ATerm p_5 = ATgetArgument(e_5, 0);
                      if(!(match_cons(p_5, sym_layout_0)))
                        _fail(t);
                    }
                  else
                    _fail(t);
                  {
                    ATerm o_5 = (ATerm) ATgetNext((ATermList) u_4);
                    if(((ATgetType(o_5) != AT_LIST) || !(ATisEmpty(o_5))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              {
                ATerm x_4 = ATgetArgument(s_4, 1);
                if(match_cons(x_4, sym_cf_1))
                  {
                    ATerm q_5 = ATgetArgument(x_4, 0);
                    if(match_cons(q_5, sym_opt_1))
                      {
                        ATerm r_5 = ATgetArgument(q_5, 0);
                        if(!(match_cons(r_5, sym_layout_0)))
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
              {
                ATerm z_4 = ATgetArgument(s_4, 2);
                if(!(match_cons(z_4, sym_no_attrs_0)))
                  _fail(t);
              }
            }
          else
            _fail(t);
          {
            ATerm t_4 = ATgetArgument(q_4, 1);
            if(((ATgetType(t_4) == AT_LIST) && !(ATisEmpty(t_4))))
              {
                y_35 = ATgetFirst((ATermList) t_4);
                {
                  ATerm s_5 = (ATerm) ATgetNext((ATermList) t_4);
                  if(((ATgetType(s_5) != AT_LIST) || !(ATisEmpty(s_5))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm r_4 = ATgetArgument(t, 1);
        if(match_cons(r_4, sym_appl_2))
          {
            ATerm t_5 = ATgetArgument(r_4, 0);
            if(match_cons(t_5, sym_prod_3))
              {
                ATerm v_5 = ATgetArgument(t_5, 0);
                if(((ATgetType(v_5) == AT_LIST) && !(ATisEmpty(v_5))))
                  {
                    ATerm y_5 = ATgetFirst((ATermList) v_5);
                    if(match_cons(y_5, sym_cf_1))
                      {
                        ATerm a_6 = ATgetArgument(y_5, 0);
                        if(!(match_cons(a_6, sym_layout_0)))
                          _fail(t);
                      }
                    else
                      _fail(t);
                    {
                      ATerm z_5 = (ATerm) ATgetNext((ATermList) v_5);
                      if(((ATgetType(z_5) != AT_LIST) || !(ATisEmpty(z_5))))
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                {
                  ATerm w_5 = ATgetArgument(t_5, 1);
                  if(match_cons(w_5, sym_cf_1))
                    {
                      ATerm b_6 = ATgetArgument(w_5, 0);
                      if(match_cons(b_6, sym_opt_1))
                        {
                          ATerm c_6 = ATgetArgument(b_6, 0);
                          if(!(match_cons(c_6, sym_layout_0)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
                {
                  ATerm x_5 = ATgetArgument(t_5, 2);
                  if(!(match_cons(x_5, sym_no_attrs_0)))
                    _fail(t);
                }
              }
            else
              _fail(t);
            {
              ATerm u_5 = ATgetArgument(r_4, 1);
              if(((ATgetType(u_5) == AT_LIST) && !(ATisEmpty(u_5))))
                {
                  z_35 = ATgetFirst((ATermList) u_5);
                  {
                    ATerm d_6 = (ATerm) ATgetNext((ATermList) u_5);
                    if(((ATgetType(d_6) != AT_LIST) || !(ATisEmpty(d_6))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_k_2), term_m_2, term_n_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATempty, term_k_2), term_k_2), term_k_2, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_f_6))), (ATerm) ATinsert(ATinsert(ATempty, z_35), y_35))));
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm c_36 = NULL;
  c_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_36, term_i_6);
  {
    ATerm j_6 = t;
    int k_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(c_36, (ATerm) ATmakeInt(1));
        ;
        LocalPopChoice(k_6);
      }
    else
      {
        t = j_6;
        t = SSL_addr(c_36, (ATerm) ATmakeInt(1));
      }
  }
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm d_36 = NULL;
  d_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_36, term_i_6);
  {
    ATerm l_6 = t;
    int m_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(d_36, (ATerm) ATmakeInt(1));
        ;
        LocalPopChoice(m_6);
      }
    else
      {
        t = l_6;
        t = SSL_addr(d_36, (ATerm) ATmakeInt(1));
      }
  }
  return(t);
}
ATerm do_test_2_0 (ATerm v_59 (ATerm), ATerm w_59 (ATerm), ATerm t)
{
  ATerm a_36 = NULL,b_36 = NULL;
  a_36 = t;
  t = v_59(t);
  b_36 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, b_36));
  t = a_36;
  {
    ATerm n_6 = t;
    int o_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_59(t);
        t = a_36;
        t = _2_0(o_1, _id, t);
        ;
        LocalPopChoice(o_6);
      }
    else
      {
        t = n_6;
        t = _2_0(_id, p_1, t);
      }
  }
  return(t);
}
ATerm apply_test_4_0 (ATerm z_59 (ATerm), ATerm a_60 (ATerm), ATerm b_60 (ATerm), ATerm c_60 (ATerm), ATerm t)
{
  ATerm e_36 = NULL,f_36 = NULL;
  ATerm q_1 (ATerm t)
  {
    ATerm p_6 = t;
    int q_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_60(t);
        t = a_60(t);
        ;
        LocalPopChoice(q_6);
      }
    else
      {
        t = p_6;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue))));
        t = term_c_2;
        _fail(t);
      }
    if(((e_36 != NULL) && (e_36 != t)))
      _fail(t);
    else
      e_36 = t;
    t = c_60(t);
    if(((f_36 != NULL) && (f_36 != t)))
      _fail(t);
    else
      f_36 = t;
    {
      ATerm r_6 = t;
      int s_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = not_null(f_36);
          if(((e_36 != NULL) && (e_36 != t)))
            _fail(t);
          else
            e_36 = t;
          ;
          LocalPopChoice(s_6);
        }
      else
        {
          t = r_6;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(e_36)), (ATerm) ATmakeAppl(ATmakeSymbol("  result not equal: ", 0, ATtrue))));
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(f_36)), (ATerm) ATmakeAppl(ATmakeSymbol("  expected: ", 0, ATtrue))));
          t = not_null(f_36);
          _fail(t);
        }
    }
    return(t);
  }
  t = do_test_2_0(z_59, q_1, t);
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = term_t_6;
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm u_6 = t;
  int v_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_layout1_0_0(t);
      ;
      LocalPopChoice(v_6);
    }
  else
    {
      t = u_6;
      {
        ATerm v_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL,i_40 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL;
        if(match_cons(t, sym__2))
          {
            d_40 = ATgetArgument(t, 0);
            e_40 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_40;
        if(match_cons(t, sym_appl_2))
          {
            f_40 = ATgetArgument(t, 0);
            l_40 = ATgetArgument(t, 1);
            t = l_40;
            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
              {
                t = f_40;
                if(match_cons(t, sym_prod_3))
                  {
                    g_40 = ATgetArgument(t, 0);
                    h_40 = ATgetArgument(t, 1);
                    k_40 = ATgetArgument(t, 2);
                    t = k_40;
                    if(match_cons(t, sym_no_attrs_0))
                      {
                        t = h_40;
                        if(match_cons(t, sym_cf_1))
                          {
                            i_40 = ATgetArgument(t, 0);
                            t = i_40;
                            if(match_cons(t, sym_opt_1))
                              {
                                j_40 = ATgetArgument(t, 0);
                                t = j_40;
                                if(match_cons(t, sym_layout_0))
                                  {
                                    t = g_40;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = d_40;
                                        if(match_cons(t, sym_appl_2))
                                          {
                                            v_39 = ATgetArgument(t, 0);
                                            b_40 = ATgetArgument(t, 1);
                                            t = b_40;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                t = v_39;
                                                if(match_cons(t, sym_prod_3))
                                                  {
                                                    w_39 = ATgetArgument(t, 0);
                                                    x_39 = ATgetArgument(t, 1);
                                                    a_40 = ATgetArgument(t, 2);
                                                    t = a_40;
                                                    if(match_cons(t, sym_no_attrs_0))
                                                      {
                                                        t = x_39;
                                                        if(match_cons(t, sym_cf_1))
                                                          {
                                                            y_39 = ATgetArgument(t, 0);
                                                            t = y_39;
                                                            if(match_cons(t, sym_opt_1))
                                                              {
                                                                z_39 = ATgetArgument(t, 0);
                                                                t = z_39;
                                                                if(match_cons(t, sym_layout_0))
                                                                  {
                                                                    t = w_39;
                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                      {
                                                                        ATerm w_6 = t;
                                                                        int x_6 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = e_40;
                                                                            ;
                                                                            LocalPopChoice(x_6);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = w_6;
                                                                            t = d_40;
                                                                          }
                                                                      }
                                                                    else
                                                                      {
                                                                        t = d_40;
                                                                      }
                                                                  }
                                                                else
                                                                  {
                                                                    t = d_40;
                                                                  }
                                                              }
                                                            else
                                                              {
                                                                t = d_40;
                                                              }
                                                          }
                                                        else
                                                          {
                                                            t = d_40;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = d_40;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = d_40;
                                                  }
                                              }
                                            else
                                              {
                                                t = d_40;
                                              }
                                          }
                                        else
                                          {
                                            t = d_40;
                                          }
                                      }
                                    else
                                      {
                                        t = d_40;
                                        if(match_cons(t, sym_appl_2))
                                          {
                                            v_39 = ATgetArgument(t, 0);
                                            b_40 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = v_39;
                                        if(match_cons(t, sym_prod_3))
                                          {
                                            w_39 = ATgetArgument(t, 0);
                                            x_39 = ATgetArgument(t, 1);
                                            a_40 = ATgetArgument(t, 2);
                                          }
                                        else
                                          _fail(t);
                                        t = w_39;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = x_39;
                                        if(match_cons(t, sym_cf_1))
                                          {
                                            y_39 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = y_39;
                                        if(match_cons(t, sym_opt_1))
                                          {
                                            z_39 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = z_39;
                                        if(!(match_cons(t, sym_layout_0)))
                                          _fail(t);
                                        t = a_40;
                                        if(!(match_cons(t, sym_no_attrs_0)))
                                          _fail(t);
                                        t = b_40;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = e_40;
                                      }
                                  }
                                else
                                  {
                                    t = d_40;
                                    if(match_cons(t, sym_appl_2))
                                      {
                                        v_39 = ATgetArgument(t, 0);
                                        b_40 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = v_39;
                                    if(match_cons(t, sym_prod_3))
                                      {
                                        w_39 = ATgetArgument(t, 0);
                                        x_39 = ATgetArgument(t, 1);
                                        a_40 = ATgetArgument(t, 2);
                                      }
                                    else
                                      _fail(t);
                                    t = w_39;
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = x_39;
                                    if(match_cons(t, sym_cf_1))
                                      {
                                        y_39 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = y_39;
                                    if(match_cons(t, sym_opt_1))
                                      {
                                        z_39 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = z_39;
                                    if(!(match_cons(t, sym_layout_0)))
                                      _fail(t);
                                    t = a_40;
                                    if(!(match_cons(t, sym_no_attrs_0)))
                                      _fail(t);
                                    t = b_40;
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = e_40;
                                  }
                              }
                            else
                              {
                                t = d_40;
                                if(match_cons(t, sym_appl_2))
                                  {
                                    v_39 = ATgetArgument(t, 0);
                                    b_40 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = v_39;
                                if(match_cons(t, sym_prod_3))
                                  {
                                    w_39 = ATgetArgument(t, 0);
                                    x_39 = ATgetArgument(t, 1);
                                    a_40 = ATgetArgument(t, 2);
                                  }
                                else
                                  _fail(t);
                                t = w_39;
                                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                  _fail(t);
                                t = x_39;
                                if(match_cons(t, sym_cf_1))
                                  {
                                    y_39 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = y_39;
                                if(match_cons(t, sym_opt_1))
                                  {
                                    z_39 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = z_39;
                                if(!(match_cons(t, sym_layout_0)))
                                  _fail(t);
                                t = a_40;
                                if(!(match_cons(t, sym_no_attrs_0)))
                                  _fail(t);
                                t = b_40;
                                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                  _fail(t);
                                t = e_40;
                              }
                          }
                        else
                          {
                            t = d_40;
                            if(match_cons(t, sym_appl_2))
                              {
                                v_39 = ATgetArgument(t, 0);
                                b_40 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = v_39;
                            if(match_cons(t, sym_prod_3))
                              {
                                w_39 = ATgetArgument(t, 0);
                                x_39 = ATgetArgument(t, 1);
                                a_40 = ATgetArgument(t, 2);
                              }
                            else
                              _fail(t);
                            t = w_39;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = x_39;
                            if(match_cons(t, sym_cf_1))
                              {
                                y_39 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = y_39;
                            if(match_cons(t, sym_opt_1))
                              {
                                z_39 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = z_39;
                            if(!(match_cons(t, sym_layout_0)))
                              _fail(t);
                            t = a_40;
                            if(!(match_cons(t, sym_no_attrs_0)))
                              _fail(t);
                            t = b_40;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = e_40;
                          }
                      }
                    else
                      {
                        t = d_40;
                        if(match_cons(t, sym_appl_2))
                          {
                            v_39 = ATgetArgument(t, 0);
                            b_40 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = v_39;
                        if(match_cons(t, sym_prod_3))
                          {
                            w_39 = ATgetArgument(t, 0);
                            x_39 = ATgetArgument(t, 1);
                            a_40 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = w_39;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = x_39;
                        if(match_cons(t, sym_cf_1))
                          {
                            y_39 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = y_39;
                        if(match_cons(t, sym_opt_1))
                          {
                            z_39 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = z_39;
                        if(!(match_cons(t, sym_layout_0)))
                          _fail(t);
                        t = a_40;
                        if(!(match_cons(t, sym_no_attrs_0)))
                          _fail(t);
                        t = b_40;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = e_40;
                      }
                  }
                else
                  {
                    t = d_40;
                    if(match_cons(t, sym_appl_2))
                      {
                        v_39 = ATgetArgument(t, 0);
                        b_40 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = v_39;
                    if(match_cons(t, sym_prod_3))
                      {
                        w_39 = ATgetArgument(t, 0);
                        x_39 = ATgetArgument(t, 1);
                        a_40 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = w_39;
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    t = x_39;
                    if(match_cons(t, sym_cf_1))
                      {
                        y_39 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = y_39;
                    if(match_cons(t, sym_opt_1))
                      {
                        z_39 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = z_39;
                    if(!(match_cons(t, sym_layout_0)))
                      _fail(t);
                    t = a_40;
                    if(!(match_cons(t, sym_no_attrs_0)))
                      _fail(t);
                    t = b_40;
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    t = e_40;
                  }
              }
            else
              {
                t = d_40;
                if(match_cons(t, sym_appl_2))
                  {
                    v_39 = ATgetArgument(t, 0);
                    b_40 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = v_39;
                if(match_cons(t, sym_prod_3))
                  {
                    w_39 = ATgetArgument(t, 0);
                    x_39 = ATgetArgument(t, 1);
                    a_40 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = w_39;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = x_39;
                if(match_cons(t, sym_cf_1))
                  {
                    y_39 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = y_39;
                if(match_cons(t, sym_opt_1))
                  {
                    z_39 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = z_39;
                if(!(match_cons(t, sym_layout_0)))
                  _fail(t);
                t = a_40;
                if(!(match_cons(t, sym_no_attrs_0)))
                  _fail(t);
                t = b_40;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = e_40;
              }
          }
        else
          {
            t = d_40;
            if(match_cons(t, sym_appl_2))
              {
                v_39 = ATgetArgument(t, 0);
                b_40 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = v_39;
            if(match_cons(t, sym_prod_3))
              {
                w_39 = ATgetArgument(t, 0);
                x_39 = ATgetArgument(t, 1);
                a_40 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = w_39;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = x_39;
            if(match_cons(t, sym_cf_1))
              {
                y_39 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = y_39;
            if(match_cons(t, sym_opt_1))
              {
                z_39 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = z_39;
            if(!(match_cons(t, sym_layout_0)))
              _fail(t);
            t = a_40;
            if(!(match_cons(t, sym_no_attrs_0)))
              _fail(t);
            t = b_40;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = e_40;
          }
      }
    }
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = term_z_6;
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = term_y_6;
  return(t);
}
ATerm test1_0_0 (ATerm t)
{
  t = apply_test_4_0(r_1, s_1, t_1, u_1, t);
  return(t);
}
ATerm _2_0 (ATerm m_47 (ATerm), ATerm n_47 (ATerm), ATerm t)
{
  ATerm e_41 = NULL,f_41 = NULL,g_41 = NULL,h_41 = NULL,i_41 = NULL,j_41 = NULL;
  j_41 = t;
  if(match_cons(t, sym__2))
    {
      f_41 = ATgetArgument(t, 0);
      g_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_41);
  e_41 = t;
  t = f_41;
  t = m_47(t);
  h_41 = t;
  t = g_41;
  t = n_47(t);
  i_41 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, h_41, i_41), e_41);
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm m_0 = NULL;
  m_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, m_0), (ATerm) ATmakeAppl(ATmakeSymbol("successes: ", 0, ATtrue))));
  t = m_0;
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm q_0 = NULL;
  q_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, q_0), (ATerm) ATmakeAppl(ATmakeSymbol("failures: ", 0, ATtrue))));
  t = q_0;
  return(t);
}
ATerm x_1 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  return(t);
}
ATerm test_suite_2_0 (ATerm t_59 (ATerm), ATerm u_59 (ATerm), ATerm t)
{
  ATerm i_0 = NULL;
  t = t_59(t);
  i_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, i_0), (ATerm) ATmakeAppl(ATmakeSymbol("test suite: ", 0, ATtrue))));
  t = term_b_7;
  t = u_59(t);
  t = _2_0(v_1, w_1, t);
  t = _2_0(_id, x_1, t);
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = term_c_7;
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = test1_0_0(t);
  t = test1a_0_0(t);
  t = test2a_0_0(t);
  t = test2b_0_0(t);
  t = test2c_0_0(t);
  t = test2d_0_0(t);
  t = test2e_0_0(t);
  t = test3a_0_0(t);
  t = test3b_0_0(t);
  t = test4_0_0(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = test_suite_2_0(y_1, z_1, t);
  return(t);
}
