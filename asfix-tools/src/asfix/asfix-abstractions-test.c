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
ATerm term_q_7;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_m_7;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_e_7;
ATerm term_z_6;
ATerm term_w_6;
ATerm term_t_6;
ATerm term_c_5;
ATerm term_b_5;
ATerm term_a_5;
ATerm term_v_4;
ATerm term_q_4;
ATerm term_l_4;
ATerm term_i_4;
ATerm term_f_4;
ATerm term_a_4;
ATerm term_r_3;
ATerm term_q_3;
ATerm term_p_3;
ATerm term_o_3;
ATerm term_n_3;
ATerm term_m_3;
ATerm term_l_3;
ATerm term_k_3;
ATerm term_b_3;
ATerm term_a_3;
ATerm term_z_2;
ATerm term_y_2;
ATerm term_x_2;
ATerm term_w_2;
ATerm term_v_2;
ATerm term_u_2;
ATerm term_p_2;
ATerm term_o_2;
ATerm term_n_2;
ATerm term_m_2;
void init_constant_terms (void)
{
  ATprotect(&(term_m_2));
  term_m_2 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_2));
  term_n_2 = (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue));
  ATprotect(&(term_o_2));
  term_o_2 = (ATerm) ATmakeAppl(ATmakeSymbol("  succeeded; result: ", 0, ATtrue));
  ATprotect(&(term_p_2));
  term_p_2 = (ATerm) ATmakeAppl(ATmakeSymbol("test4", 0, ATtrue));
  ATprotect(&(term_u_2));
  term_u_2 = (ATerm) ATmakeAppl(sym_layout_0);
  ATprotect(&(term_v_2));
  term_v_2 = (ATerm) ATmakeAppl(sym_cf_1, term_u_2);
  ATprotect(&(term_w_2));
  term_w_2 = (ATerm) ATmakeAppl(sym_opt_1, term_u_2);
  ATprotect(&(term_x_2));
  term_x_2 = (ATerm) ATmakeAppl(sym_cf_1, term_w_2);
  ATprotect(&(term_y_2));
  term_y_2 = (ATerm) ATmakeAppl(sym_no_attrs_0);
  ATprotect(&(term_z_2));
  term_z_2 = (ATerm) ATmakeAppl(sym_lex_1, term_u_2);
  ATprotect(&(term_a_3));
  term_a_3 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_b_3));
  term_b_3 = (ATerm) ATmakeAppl(ATmakeSymbol("test3b", 0, ATtrue));
  ATprotect(&(term_k_3));
  term_k_3 = (ATerm) ATmakeAppl(sym_prod_3, (ATerm)ATempty, term_x_2, term_y_2);
  ATprotect(&(term_l_3));
  term_l_3 = (ATerm) ATmakeAppl(sym_appl_2, term_k_3, (ATerm) ATempty);
  ATprotect(&(term_m_3));
  term_m_3 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_n_3));
  term_n_3 = (ATerm) ATmakeAppl(sym_range_2, term_m_3, term_a_3);
  ATprotect(&(term_o_3));
  term_o_3 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_p_3));
  term_p_3 = (ATerm) ATmakeAppl(ATmakeSymbol("Layout", 0, ATtrue));
  ATprotect(&(term_q_3));
  term_q_3 = (ATerm) ATmakeAppl(sym_id_1, term_p_3);
  ATprotect(&(term_r_3));
  term_r_3 = (ATerm) ATmakeAppl(ATmakeSymbol("test3a", 0, ATtrue));
  ATprotect(&(term_a_4));
  term_a_4 = (ATerm) ATmakeAppl(ATmakeSymbol("test2e", 0, ATtrue));
  ATprotect(&(term_f_4));
  term_f_4 = (ATerm) ATmakeAppl(ATmakeSymbol("test2d", 0, ATtrue));
  ATprotect(&(term_i_4));
  term_i_4 = (ATerm) ATmakeAppl(ATmakeSymbol("test2c", 0, ATtrue));
  ATprotect(&(term_l_4));
  term_l_4 = (ATerm) ATmakeAppl(ATmakeSymbol("test2b", 0, ATtrue));
  ATprotect(&(term_q_4));
  term_q_4 = (ATerm) ATmakeAppl(ATmakeSymbol("test2a", 0, ATtrue));
  ATprotect(&(term_v_4));
  term_v_4 = (ATerm) ATmakeAppl(ATmakeSymbol("test1a", 0, ATtrue));
  ATprotect(&(term_a_5));
  term_a_5 = (ATerm) ATmakeAppl(sym__2, term_l_3, term_l_3);
  ATprotect(&(term_b_5));
  term_b_5 = (ATerm) ATmakeAppl(ATmakeSymbol("left", 0, ATtrue));
  ATprotect(&(term_c_5));
  term_c_5 = (ATerm) ATmakeAppl(sym_atr_1, term_b_5);
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("  result not equal: ", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("  expected: ", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("test1", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(sym__2, term_j_7, term_l_3);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("test suite: ", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("successes: ", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("failures: ", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(sym__2, term_o_7, term_o_7);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("asfix-abstractions-test", 0, ATtrue));
}
ATerm apply_and_show_3_0 (ATerm s_60 (ATerm), ATerm t_60 (ATerm), ATerm u_60 (ATerm), ATerm);
ATerm d_0 (ATerm);
ATerm e_0 (ATerm);
ATerm f_0 (ATerm);
ATerm test4_0_0 (ATerm);
ATerm h_0 (ATerm);
ATerm i_0 (ATerm);
ATerm l_0 (ATerm);
ATerm m_0 (ATerm);
ATerm test3b_0_0 (ATerm);
ATerm p_0 (ATerm);
ATerm s_0 (ATerm);
ATerm t_0 (ATerm);
ATerm u_0 (ATerm);
ATerm test3a_0_0 (ATerm);
ATerm v_0 (ATerm);
ATerm w_0 (ATerm);
ATerm x_0 (ATerm);
ATerm y_0 (ATerm);
ATerm test2e_0_0 (ATerm);
ATerm z_0 (ATerm);
ATerm a_1 (ATerm);
ATerm b_1 (ATerm);
ATerm c_1 (ATerm);
ATerm test2d_0_0 (ATerm);
ATerm d_1 (ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm test2c_0_0 (ATerm);
ATerm h_1 (ATerm);
ATerm i_1 (ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm test2b_0_0 (ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm test2a_0_0 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm test1a_0_0 (ATerm);
ATerm n_0 (ATerm e_47, ATerm f_47, ATerm);
ATerm conc_layout1_0_0 (ATerm);
ATerm o_0 (ATerm t_31, ATerm u_31, ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm do_test_2_0 (ATerm w_59 (ATerm), ATerm x_59 (ATerm), ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm apply_test_4_0 (ATerm a_60 (ATerm), ATerm b_60 (ATerm), ATerm c_60 (ATerm), ATerm d_60 (ATerm), ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm test1_0_0 (ATerm);
ATerm _2_0 (ATerm n_47 (ATerm), ATerm o_47 (ATerm), ATerm);
ATerm debug_1_0 (ATerm l_79 (ATerm), ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm test_suite_2_0 (ATerm u_59 (ATerm), ATerm v_59 (ATerm), ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm apply_and_show_3_0 (ATerm s_60 (ATerm), ATerm t_60 (ATerm), ATerm u_60 (ATerm), ATerm t)
{
  ATerm c_0 (ATerm t)
  {
    ATerm g_0 = NULL,j_0 = NULL,k_0 = NULL;
    ATerm k_2 = t;
    int l_2 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_60(t);
        t = t_60(t);
        ;
        LocalPopChoice(l_2);
      }
    else
      {
        t = k_2;
        {
          ATerm q_0 = NULL,r_0 = NULL;
          t = term_m_2;
          q_0 = t;
          t = (ATerm) ATinsert(ATempty, term_n_2);
          r_0 = t;
          t = SSL_printnl(q_0, r_0);
          t = term_n_2;
          _fail(t);
        }
      }
    g_0 = t;
    t = term_m_2;
    j_0 = t;
    t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATempty, g_0), term_o_2));
    k_0 = t;
    t = SSL_printnl(j_0, k_0);
    t = (ATerm) ATinsert(ATinsert(ATempty, g_0), term_o_2);
    return(t);
  }
  t = do_test_2_0(s_60, c_0, t);
  return(t);
}
ATerm d_0 (ATerm t)
{
  t = term_p_2;
  return(t);
}
ATerm e_0 (ATerm t)
{
  ATerm q_2 = t;
  int r_2 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_layout1_0_0(t);
      ;
      LocalPopChoice(r_2);
    }
  else
    {
      t = q_2;
      {
        ATerm o_5 = NULL,p_5 = NULL,q_5 = NULL,r_5 = NULL,s_5 = NULL,t_5 = NULL,u_5 = NULL,w_5 = NULL,x_5 = NULL,y_5 = NULL,z_5 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL,d_6 = NULL,e_6 = NULL;
        if(match_cons(t, sym__2))
          {
            w_5 = ATgetArgument(t, 0);
            x_5 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_5;
        if(match_cons(t, sym_appl_2))
          {
            y_5 = ATgetArgument(t, 0);
            e_6 = ATgetArgument(t, 1);
            t = e_6;
            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
              {
                t = y_5;
                if(match_cons(t, sym_prod_3))
                  {
                    z_5 = ATgetArgument(t, 0);
                    a_6 = ATgetArgument(t, 1);
                    d_6 = ATgetArgument(t, 2);
                    t = d_6;
                    if(match_cons(t, sym_no_attrs_0))
                      {
                        t = a_6;
                        if(match_cons(t, sym_cf_1))
                          {
                            b_6 = ATgetArgument(t, 0);
                            t = b_6;
                            if(match_cons(t, sym_opt_1))
                              {
                                c_6 = ATgetArgument(t, 0);
                                t = c_6;
                                if(match_cons(t, sym_layout_0))
                                  {
                                    t = z_5;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = w_5;
                                        if(match_cons(t, sym_appl_2))
                                          {
                                            o_5 = ATgetArgument(t, 0);
                                            u_5 = ATgetArgument(t, 1);
                                            t = u_5;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                t = o_5;
                                                if(match_cons(t, sym_prod_3))
                                                  {
                                                    p_5 = ATgetArgument(t, 0);
                                                    q_5 = ATgetArgument(t, 1);
                                                    t_5 = ATgetArgument(t, 2);
                                                    t = t_5;
                                                    if(match_cons(t, sym_no_attrs_0))
                                                      {
                                                        t = q_5;
                                                        if(match_cons(t, sym_cf_1))
                                                          {
                                                            r_5 = ATgetArgument(t, 0);
                                                            t = r_5;
                                                            if(match_cons(t, sym_opt_1))
                                                              {
                                                                s_5 = ATgetArgument(t, 0);
                                                                t = s_5;
                                                                if(match_cons(t, sym_layout_0))
                                                                  {
                                                                    t = p_5;
                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                      {
                                                                        ATerm s_2 = t;
                                                                        int t_2 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = x_5;
                                                                            ;
                                                                            LocalPopChoice(t_2);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = s_2;
                                                                            t = w_5;
                                                                          }
                                                                      }
                                                                    else
                                                                      {
                                                                        t = w_5;
                                                                      }
                                                                  }
                                                                else
                                                                  {
                                                                    t = w_5;
                                                                  }
                                                              }
                                                            else
                                                              {
                                                                t = w_5;
                                                              }
                                                          }
                                                        else
                                                          {
                                                            t = w_5;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = w_5;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = w_5;
                                                  }
                                              }
                                            else
                                              {
                                                t = w_5;
                                              }
                                          }
                                        else
                                          {
                                            t = w_5;
                                          }
                                      }
                                    else
                                      {
                                        t = w_5;
                                        if(match_cons(t, sym_appl_2))
                                          {
                                            o_5 = ATgetArgument(t, 0);
                                            u_5 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = o_5;
                                        if(match_cons(t, sym_prod_3))
                                          {
                                            p_5 = ATgetArgument(t, 0);
                                            q_5 = ATgetArgument(t, 1);
                                            t_5 = ATgetArgument(t, 2);
                                          }
                                        else
                                          _fail(t);
                                        t = p_5;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = q_5;
                                        if(match_cons(t, sym_cf_1))
                                          {
                                            r_5 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = r_5;
                                        if(match_cons(t, sym_opt_1))
                                          {
                                            s_5 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = s_5;
                                        if(!(match_cons(t, sym_layout_0)))
                                          _fail(t);
                                        t = t_5;
                                        if(!(match_cons(t, sym_no_attrs_0)))
                                          _fail(t);
                                        t = u_5;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = x_5;
                                      }
                                  }
                                else
                                  {
                                    t = w_5;
                                    if(match_cons(t, sym_appl_2))
                                      {
                                        o_5 = ATgetArgument(t, 0);
                                        u_5 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = o_5;
                                    if(match_cons(t, sym_prod_3))
                                      {
                                        p_5 = ATgetArgument(t, 0);
                                        q_5 = ATgetArgument(t, 1);
                                        t_5 = ATgetArgument(t, 2);
                                      }
                                    else
                                      _fail(t);
                                    t = p_5;
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = q_5;
                                    if(match_cons(t, sym_cf_1))
                                      {
                                        r_5 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = r_5;
                                    if(match_cons(t, sym_opt_1))
                                      {
                                        s_5 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = s_5;
                                    if(!(match_cons(t, sym_layout_0)))
                                      _fail(t);
                                    t = t_5;
                                    if(!(match_cons(t, sym_no_attrs_0)))
                                      _fail(t);
                                    t = u_5;
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = x_5;
                                  }
                              }
                            else
                              {
                                t = w_5;
                                if(match_cons(t, sym_appl_2))
                                  {
                                    o_5 = ATgetArgument(t, 0);
                                    u_5 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = o_5;
                                if(match_cons(t, sym_prod_3))
                                  {
                                    p_5 = ATgetArgument(t, 0);
                                    q_5 = ATgetArgument(t, 1);
                                    t_5 = ATgetArgument(t, 2);
                                  }
                                else
                                  _fail(t);
                                t = p_5;
                                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                  _fail(t);
                                t = q_5;
                                if(match_cons(t, sym_cf_1))
                                  {
                                    r_5 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = r_5;
                                if(match_cons(t, sym_opt_1))
                                  {
                                    s_5 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = s_5;
                                if(!(match_cons(t, sym_layout_0)))
                                  _fail(t);
                                t = t_5;
                                if(!(match_cons(t, sym_no_attrs_0)))
                                  _fail(t);
                                t = u_5;
                                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                  _fail(t);
                                t = x_5;
                              }
                          }
                        else
                          {
                            t = w_5;
                            if(match_cons(t, sym_appl_2))
                              {
                                o_5 = ATgetArgument(t, 0);
                                u_5 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = o_5;
                            if(match_cons(t, sym_prod_3))
                              {
                                p_5 = ATgetArgument(t, 0);
                                q_5 = ATgetArgument(t, 1);
                                t_5 = ATgetArgument(t, 2);
                              }
                            else
                              _fail(t);
                            t = p_5;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = q_5;
                            if(match_cons(t, sym_cf_1))
                              {
                                r_5 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = r_5;
                            if(match_cons(t, sym_opt_1))
                              {
                                s_5 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = s_5;
                            if(!(match_cons(t, sym_layout_0)))
                              _fail(t);
                            t = t_5;
                            if(!(match_cons(t, sym_no_attrs_0)))
                              _fail(t);
                            t = u_5;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = x_5;
                          }
                      }
                    else
                      {
                        t = w_5;
                        if(match_cons(t, sym_appl_2))
                          {
                            o_5 = ATgetArgument(t, 0);
                            u_5 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = o_5;
                        if(match_cons(t, sym_prod_3))
                          {
                            p_5 = ATgetArgument(t, 0);
                            q_5 = ATgetArgument(t, 1);
                            t_5 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = p_5;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = q_5;
                        if(match_cons(t, sym_cf_1))
                          {
                            r_5 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = r_5;
                        if(match_cons(t, sym_opt_1))
                          {
                            s_5 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = s_5;
                        if(!(match_cons(t, sym_layout_0)))
                          _fail(t);
                        t = t_5;
                        if(!(match_cons(t, sym_no_attrs_0)))
                          _fail(t);
                        t = u_5;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = x_5;
                      }
                  }
                else
                  {
                    t = w_5;
                    if(match_cons(t, sym_appl_2))
                      {
                        o_5 = ATgetArgument(t, 0);
                        u_5 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = o_5;
                    if(match_cons(t, sym_prod_3))
                      {
                        p_5 = ATgetArgument(t, 0);
                        q_5 = ATgetArgument(t, 1);
                        t_5 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = p_5;
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    t = q_5;
                    if(match_cons(t, sym_cf_1))
                      {
                        r_5 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = r_5;
                    if(match_cons(t, sym_opt_1))
                      {
                        s_5 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = s_5;
                    if(!(match_cons(t, sym_layout_0)))
                      _fail(t);
                    t = t_5;
                    if(!(match_cons(t, sym_no_attrs_0)))
                      _fail(t);
                    t = u_5;
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    t = x_5;
                  }
              }
            else
              {
                t = w_5;
                if(match_cons(t, sym_appl_2))
                  {
                    o_5 = ATgetArgument(t, 0);
                    u_5 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = o_5;
                if(match_cons(t, sym_prod_3))
                  {
                    p_5 = ATgetArgument(t, 0);
                    q_5 = ATgetArgument(t, 1);
                    t_5 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = p_5;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = q_5;
                if(match_cons(t, sym_cf_1))
                  {
                    r_5 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = r_5;
                if(match_cons(t, sym_opt_1))
                  {
                    s_5 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = s_5;
                if(!(match_cons(t, sym_layout_0)))
                  _fail(t);
                t = t_5;
                if(!(match_cons(t, sym_no_attrs_0)))
                  _fail(t);
                t = u_5;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = x_5;
              }
          }
        else
          {
            t = w_5;
            if(match_cons(t, sym_appl_2))
              {
                o_5 = ATgetArgument(t, 0);
                u_5 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = o_5;
            if(match_cons(t, sym_prod_3))
              {
                p_5 = ATgetArgument(t, 0);
                q_5 = ATgetArgument(t, 1);
                t_5 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = p_5;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = q_5;
            if(match_cons(t, sym_cf_1))
              {
                r_5 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = r_5;
            if(match_cons(t, sym_opt_1))
              {
                s_5 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = s_5;
            if(!(match_cons(t, sym_layout_0)))
              _fail(t);
            t = t_5;
            if(!(match_cons(t, sym_no_attrs_0)))
              _fail(t);
            t = u_5;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = x_5;
          }
      }
    }
  return(t);
}
ATerm f_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_v_2), term_x_2, term_y_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_z_2), term_v_2, term_y_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term_a_3))), term_z_2, term_y_2), (ATerm) ATinsert(ATempty, term_a_3)))))), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_v_2), term_x_2, term_y_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_z_2), term_v_2, term_y_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term_a_3))), term_z_2, term_y_2), (ATerm) ATinsert(ATempty, term_a_3)))))));
  return(t);
}
ATerm test4_0_0 (ATerm t)
{
  t = apply_and_show_3_0(d_0, e_0, f_0, t);
  return(t);
}
ATerm h_0 (ATerm t)
{
  t = term_b_3;
  return(t);
}
ATerm i_0 (ATerm t)
{
  ATerm x_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_3 = ATgetArgument(t, 0);
      if(match_cons(c_3, sym_appl_2))
        {
          ATerm d_3 = ATgetArgument(c_3, 0);
          if(match_cons(d_3, sym_prod_3))
            {
              ATerm f_3 = ATgetArgument(d_3, 0);
              if(((ATgetType(f_3) != AT_LIST) || !(ATisEmpty(f_3))))
                _fail(t);
              {
                ATerm g_3 = ATgetArgument(d_3, 1);
                if(match_cons(g_3, sym_cf_1))
                  {
                    ATerm i_3 = ATgetArgument(g_3, 0);
                    if(match_cons(i_3, sym_opt_1))
                      {
                        ATerm j_3 = ATgetArgument(i_3, 0);
                        if(!(match_cons(j_3, sym_layout_0)))
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
              {
                ATerm h_3 = ATgetArgument(d_3, 2);
                if(!(match_cons(h_3, sym_no_attrs_0)))
                  _fail(t);
              }
            }
          else
            _fail(t);
          {
            ATerm e_3 = ATgetArgument(c_3, 1);
            if(((ATgetType(e_3) != AT_LIST) || !(ATisEmpty(e_3))))
              _fail(t);
          }
        }
      else
        _fail(t);
      x_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_6;
  return(t);
}
ATerm l_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_l_3, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_z_2), term_v_2, term_y_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_o_3), term_n_3))), term_z_2, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_q_3))), (ATerm) ATinsert(ATempty, term_a_3)))));
  return(t);
}
ATerm m_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_z_2), term_v_2, term_y_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_o_3), term_n_3))), term_z_2, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_q_3))), (ATerm) ATinsert(ATempty, term_a_3))));
  return(t);
}
ATerm test3b_0_0 (ATerm t)
{
  t = apply_test_4_0(h_0, i_0, l_0, m_0, t);
  return(t);
}
ATerm p_0 (ATerm t)
{
  t = term_r_3;
  return(t);
}
ATerm s_0 (ATerm t)
{
  ATerm y_6 = NULL;
  if(match_cons(t, sym__2))
    {
      y_6 = ATgetArgument(t, 0);
      {
        ATerm s_3 = ATgetArgument(t, 1);
        if(match_cons(s_3, sym_appl_2))
          {
            ATerm t_3 = ATgetArgument(s_3, 0);
            if(match_cons(t_3, sym_prod_3))
              {
                ATerm v_3 = ATgetArgument(t_3, 0);
                if(((ATgetType(v_3) != AT_LIST) || !(ATisEmpty(v_3))))
                  _fail(t);
                {
                  ATerm w_3 = ATgetArgument(t_3, 1);
                  if(match_cons(w_3, sym_cf_1))
                    {
                      ATerm y_3 = ATgetArgument(w_3, 0);
                      if(match_cons(y_3, sym_opt_1))
                        {
                          ATerm z_3 = ATgetArgument(y_3, 0);
                          if(!(match_cons(z_3, sym_layout_0)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
                {
                  ATerm x_3 = ATgetArgument(t_3, 2);
                  if(!(match_cons(x_3, sym_no_attrs_0)))
                    _fail(t);
                }
              }
            else
              _fail(t);
            {
              ATerm u_3 = ATgetArgument(s_3, 1);
              if(((ATgetType(u_3) != AT_LIST) || !(ATisEmpty(u_3))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = y_6;
  return(t);
}
ATerm t_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_z_2), term_v_2, term_y_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_o_3), term_n_3))), term_z_2, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_q_3))), (ATerm) ATinsert(ATempty, term_a_3)))), term_l_3);
  return(t);
}
ATerm u_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_z_2), term_v_2, term_y_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_o_3), term_n_3))), term_z_2, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_q_3))), (ATerm) ATinsert(ATempty, term_a_3))));
  return(t);
}
ATerm test3a_0_0 (ATerm t)
{
  t = apply_test_4_0(p_0, s_0, t_0, u_0, t);
  return(t);
}
ATerm v_0 (ATerm t)
{
  t = term_a_4;
  return(t);
}
ATerm w_0 (ATerm t)
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
        ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL;
        if(match_cons(t, sym__2))
          {
            w_10 = ATgetArgument(t, 0);
            x_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_10;
        if(match_cons(t, sym_appl_2))
          {
            y_10 = ATgetArgument(t, 0);
            e_11 = ATgetArgument(t, 1);
            t = e_11;
            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
              {
                t = y_10;
                if(match_cons(t, sym_prod_3))
                  {
                    z_10 = ATgetArgument(t, 0);
                    a_11 = ATgetArgument(t, 1);
                    d_11 = ATgetArgument(t, 2);
                    t = d_11;
                    if(match_cons(t, sym_no_attrs_0))
                      {
                        t = a_11;
                        if(match_cons(t, sym_cf_1))
                          {
                            b_11 = ATgetArgument(t, 0);
                            t = b_11;
                            if(match_cons(t, sym_opt_1))
                              {
                                c_11 = ATgetArgument(t, 0);
                                t = c_11;
                                if(match_cons(t, sym_layout_0))
                                  {
                                    t = z_10;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = w_10;
                                        if(match_cons(t, sym_appl_2))
                                          {
                                            o_10 = ATgetArgument(t, 0);
                                            u_10 = ATgetArgument(t, 1);
                                            t = u_10;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                t = o_10;
                                                if(match_cons(t, sym_prod_3))
                                                  {
                                                    p_10 = ATgetArgument(t, 0);
                                                    q_10 = ATgetArgument(t, 1);
                                                    t_10 = ATgetArgument(t, 2);
                                                    t = t_10;
                                                    if(match_cons(t, sym_no_attrs_0))
                                                      {
                                                        t = q_10;
                                                        if(match_cons(t, sym_cf_1))
                                                          {
                                                            r_10 = ATgetArgument(t, 0);
                                                            t = r_10;
                                                            if(match_cons(t, sym_opt_1))
                                                              {
                                                                s_10 = ATgetArgument(t, 0);
                                                                t = s_10;
                                                                if(match_cons(t, sym_layout_0))
                                                                  {
                                                                    t = p_10;
                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                      {
                                                                        ATerm d_4 = t;
                                                                        int e_4 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = x_10;
                                                                            ;
                                                                            LocalPopChoice(e_4);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = d_4;
                                                                            t = w_10;
                                                                          }
                                                                      }
                                                                    else
                                                                      {
                                                                        t = w_10;
                                                                      }
                                                                  }
                                                                else
                                                                  {
                                                                    t = w_10;
                                                                  }
                                                              }
                                                            else
                                                              {
                                                                t = w_10;
                                                              }
                                                          }
                                                        else
                                                          {
                                                            t = w_10;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = w_10;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = w_10;
                                                  }
                                              }
                                            else
                                              {
                                                t = w_10;
                                              }
                                          }
                                        else
                                          {
                                            t = w_10;
                                          }
                                      }
                                    else
                                      {
                                        t = w_10;
                                        if(match_cons(t, sym_appl_2))
                                          {
                                            o_10 = ATgetArgument(t, 0);
                                            u_10 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = o_10;
                                        if(match_cons(t, sym_prod_3))
                                          {
                                            p_10 = ATgetArgument(t, 0);
                                            q_10 = ATgetArgument(t, 1);
                                            t_10 = ATgetArgument(t, 2);
                                          }
                                        else
                                          _fail(t);
                                        t = p_10;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = q_10;
                                        if(match_cons(t, sym_cf_1))
                                          {
                                            r_10 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = r_10;
                                        if(match_cons(t, sym_opt_1))
                                          {
                                            s_10 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = s_10;
                                        if(!(match_cons(t, sym_layout_0)))
                                          _fail(t);
                                        t = t_10;
                                        if(!(match_cons(t, sym_no_attrs_0)))
                                          _fail(t);
                                        t = u_10;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = x_10;
                                      }
                                  }
                                else
                                  {
                                    t = w_10;
                                    if(match_cons(t, sym_appl_2))
                                      {
                                        o_10 = ATgetArgument(t, 0);
                                        u_10 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = o_10;
                                    if(match_cons(t, sym_prod_3))
                                      {
                                        p_10 = ATgetArgument(t, 0);
                                        q_10 = ATgetArgument(t, 1);
                                        t_10 = ATgetArgument(t, 2);
                                      }
                                    else
                                      _fail(t);
                                    t = p_10;
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = q_10;
                                    if(match_cons(t, sym_cf_1))
                                      {
                                        r_10 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = r_10;
                                    if(match_cons(t, sym_opt_1))
                                      {
                                        s_10 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = s_10;
                                    if(!(match_cons(t, sym_layout_0)))
                                      _fail(t);
                                    t = t_10;
                                    if(!(match_cons(t, sym_no_attrs_0)))
                                      _fail(t);
                                    t = u_10;
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = x_10;
                                  }
                              }
                            else
                              {
                                t = w_10;
                                if(match_cons(t, sym_appl_2))
                                  {
                                    o_10 = ATgetArgument(t, 0);
                                    u_10 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = o_10;
                                if(match_cons(t, sym_prod_3))
                                  {
                                    p_10 = ATgetArgument(t, 0);
                                    q_10 = ATgetArgument(t, 1);
                                    t_10 = ATgetArgument(t, 2);
                                  }
                                else
                                  _fail(t);
                                t = p_10;
                                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                  _fail(t);
                                t = q_10;
                                if(match_cons(t, sym_cf_1))
                                  {
                                    r_10 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = r_10;
                                if(match_cons(t, sym_opt_1))
                                  {
                                    s_10 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = s_10;
                                if(!(match_cons(t, sym_layout_0)))
                                  _fail(t);
                                t = t_10;
                                if(!(match_cons(t, sym_no_attrs_0)))
                                  _fail(t);
                                t = u_10;
                                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                  _fail(t);
                                t = x_10;
                              }
                          }
                        else
                          {
                            t = w_10;
                            if(match_cons(t, sym_appl_2))
                              {
                                o_10 = ATgetArgument(t, 0);
                                u_10 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = o_10;
                            if(match_cons(t, sym_prod_3))
                              {
                                p_10 = ATgetArgument(t, 0);
                                q_10 = ATgetArgument(t, 1);
                                t_10 = ATgetArgument(t, 2);
                              }
                            else
                              _fail(t);
                            t = p_10;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = q_10;
                            if(match_cons(t, sym_cf_1))
                              {
                                r_10 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = r_10;
                            if(match_cons(t, sym_opt_1))
                              {
                                s_10 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = s_10;
                            if(!(match_cons(t, sym_layout_0)))
                              _fail(t);
                            t = t_10;
                            if(!(match_cons(t, sym_no_attrs_0)))
                              _fail(t);
                            t = u_10;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = x_10;
                          }
                      }
                    else
                      {
                        t = w_10;
                        if(match_cons(t, sym_appl_2))
                          {
                            o_10 = ATgetArgument(t, 0);
                            u_10 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = o_10;
                        if(match_cons(t, sym_prod_3))
                          {
                            p_10 = ATgetArgument(t, 0);
                            q_10 = ATgetArgument(t, 1);
                            t_10 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = p_10;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = q_10;
                        if(match_cons(t, sym_cf_1))
                          {
                            r_10 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = r_10;
                        if(match_cons(t, sym_opt_1))
                          {
                            s_10 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = s_10;
                        if(!(match_cons(t, sym_layout_0)))
                          _fail(t);
                        t = t_10;
                        if(!(match_cons(t, sym_no_attrs_0)))
                          _fail(t);
                        t = u_10;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = x_10;
                      }
                  }
                else
                  {
                    t = w_10;
                    if(match_cons(t, sym_appl_2))
                      {
                        o_10 = ATgetArgument(t, 0);
                        u_10 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = o_10;
                    if(match_cons(t, sym_prod_3))
                      {
                        p_10 = ATgetArgument(t, 0);
                        q_10 = ATgetArgument(t, 1);
                        t_10 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = p_10;
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    t = q_10;
                    if(match_cons(t, sym_cf_1))
                      {
                        r_10 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = r_10;
                    if(match_cons(t, sym_opt_1))
                      {
                        s_10 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = s_10;
                    if(!(match_cons(t, sym_layout_0)))
                      _fail(t);
                    t = t_10;
                    if(!(match_cons(t, sym_no_attrs_0)))
                      _fail(t);
                    t = u_10;
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    t = x_10;
                  }
              }
            else
              {
                t = w_10;
                if(match_cons(t, sym_appl_2))
                  {
                    o_10 = ATgetArgument(t, 0);
                    u_10 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = o_10;
                if(match_cons(t, sym_prod_3))
                  {
                    p_10 = ATgetArgument(t, 0);
                    q_10 = ATgetArgument(t, 1);
                    t_10 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = p_10;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = q_10;
                if(match_cons(t, sym_cf_1))
                  {
                    r_10 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = r_10;
                if(match_cons(t, sym_opt_1))
                  {
                    s_10 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = s_10;
                if(!(match_cons(t, sym_layout_0)))
                  _fail(t);
                t = t_10;
                if(!(match_cons(t, sym_no_attrs_0)))
                  _fail(t);
                t = u_10;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = x_10;
              }
          }
        else
          {
            t = w_10;
            if(match_cons(t, sym_appl_2))
              {
                o_10 = ATgetArgument(t, 0);
                u_10 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = o_10;
            if(match_cons(t, sym_prod_3))
              {
                p_10 = ATgetArgument(t, 0);
                q_10 = ATgetArgument(t, 1);
                t_10 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = p_10;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = q_10;
            if(match_cons(t, sym_cf_1))
              {
                r_10 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = r_10;
            if(match_cons(t, sym_opt_1))
              {
                s_10 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = s_10;
            if(!(match_cons(t, sym_layout_0)))
              _fail(t);
            t = t_10;
            if(!(match_cons(t, sym_no_attrs_0)))
              _fail(t);
            t = u_10;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = x_10;
          }
      }
    }
  return(t);
}
ATerm x_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_z_2), term_v_2, term_y_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_o_3), term_n_3))), term_z_2, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_q_3))), (ATerm) ATinsert(ATempty, term_a_3)))), term_l_3);
  return(t);
}
ATerm y_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_z_2), term_v_2, term_y_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_o_3), term_n_3))), term_z_2, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_q_3))), (ATerm) ATinsert(ATempty, term_a_3))));
  return(t);
}
ATerm test2e_0_0 (ATerm t)
{
  t = apply_test_4_0(v_0, w_0, x_0, y_0, t);
  return(t);
}
ATerm z_0 (ATerm t)
{
  t = term_f_4;
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL;
  if(match_cons(t, sym__2))
    {
      u_15 = ATgetArgument(t, 0);
      v_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_15;
  if(match_cons(t, sym_appl_2))
    {
      w_15 = ATgetArgument(t, 0);
      c_16 = ATgetArgument(t, 1);
      t = c_16;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = w_15;
          if(match_cons(t, sym_prod_3))
            {
              x_15 = ATgetArgument(t, 0);
              y_15 = ATgetArgument(t, 1);
              b_16 = ATgetArgument(t, 2);
              t = b_16;
              if(match_cons(t, sym_no_attrs_0))
                {
                  t = y_15;
                  if(match_cons(t, sym_cf_1))
                    {
                      z_15 = ATgetArgument(t, 0);
                      t = z_15;
                      if(match_cons(t, sym_opt_1))
                        {
                          a_16 = ATgetArgument(t, 0);
                          t = a_16;
                          if(match_cons(t, sym_layout_0))
                            {
                              t = x_15;
                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                {
                                  t = u_15;
                                  if(match_cons(t, sym_appl_2))
                                    {
                                      m_15 = ATgetArgument(t, 0);
                                      s_15 = ATgetArgument(t, 1);
                                      t = s_15;
                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                        {
                                          t = m_15;
                                          if(match_cons(t, sym_prod_3))
                                            {
                                              n_15 = ATgetArgument(t, 0);
                                              o_15 = ATgetArgument(t, 1);
                                              r_15 = ATgetArgument(t, 2);
                                              t = r_15;
                                              if(match_cons(t, sym_no_attrs_0))
                                                {
                                                  t = o_15;
                                                  if(match_cons(t, sym_cf_1))
                                                    {
                                                      p_15 = ATgetArgument(t, 0);
                                                      t = p_15;
                                                      if(match_cons(t, sym_opt_1))
                                                        {
                                                          q_15 = ATgetArgument(t, 0);
                                                          t = q_15;
                                                          if(match_cons(t, sym_layout_0))
                                                            {
                                                              t = n_15;
                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                {
                                                                  ATerm g_4 = t;
                                                                  int h_4 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = v_15;
                                                                      ;
                                                                      LocalPopChoice(h_4);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = g_4;
                                                                      t = u_15;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  t = u_15;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              t = u_15;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          t = u_15;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      t = u_15;
                                                    }
                                                }
                                              else
                                                {
                                                  t = u_15;
                                                }
                                            }
                                          else
                                            {
                                              t = u_15;
                                            }
                                        }
                                      else
                                        {
                                          t = u_15;
                                        }
                                    }
                                  else
                                    {
                                      t = u_15;
                                    }
                                }
                              else
                                {
                                  t = u_15;
                                  if(match_cons(t, sym_appl_2))
                                    {
                                      m_15 = ATgetArgument(t, 0);
                                      s_15 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = m_15;
                                  if(match_cons(t, sym_prod_3))
                                    {
                                      n_15 = ATgetArgument(t, 0);
                                      o_15 = ATgetArgument(t, 1);
                                      r_15 = ATgetArgument(t, 2);
                                    }
                                  else
                                    _fail(t);
                                  t = n_15;
                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                    _fail(t);
                                  t = o_15;
                                  if(match_cons(t, sym_cf_1))
                                    {
                                      p_15 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = p_15;
                                  if(match_cons(t, sym_opt_1))
                                    {
                                      q_15 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = q_15;
                                  if(!(match_cons(t, sym_layout_0)))
                                    _fail(t);
                                  t = r_15;
                                  if(!(match_cons(t, sym_no_attrs_0)))
                                    _fail(t);
                                  t = s_15;
                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                    _fail(t);
                                  t = v_15;
                                }
                            }
                          else
                            {
                              t = u_15;
                              if(match_cons(t, sym_appl_2))
                                {
                                  m_15 = ATgetArgument(t, 0);
                                  s_15 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = m_15;
                              if(match_cons(t, sym_prod_3))
                                {
                                  n_15 = ATgetArgument(t, 0);
                                  o_15 = ATgetArgument(t, 1);
                                  r_15 = ATgetArgument(t, 2);
                                }
                              else
                                _fail(t);
                              t = n_15;
                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                _fail(t);
                              t = o_15;
                              if(match_cons(t, sym_cf_1))
                                {
                                  p_15 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = p_15;
                              if(match_cons(t, sym_opt_1))
                                {
                                  q_15 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = q_15;
                              if(!(match_cons(t, sym_layout_0)))
                                _fail(t);
                              t = r_15;
                              if(!(match_cons(t, sym_no_attrs_0)))
                                _fail(t);
                              t = s_15;
                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                _fail(t);
                              t = v_15;
                            }
                        }
                      else
                        {
                          t = u_15;
                          if(match_cons(t, sym_appl_2))
                            {
                              m_15 = ATgetArgument(t, 0);
                              s_15 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = m_15;
                          if(match_cons(t, sym_prod_3))
                            {
                              n_15 = ATgetArgument(t, 0);
                              o_15 = ATgetArgument(t, 1);
                              r_15 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          t = n_15;
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = o_15;
                          if(match_cons(t, sym_cf_1))
                            {
                              p_15 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = p_15;
                          if(match_cons(t, sym_opt_1))
                            {
                              q_15 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = q_15;
                          if(!(match_cons(t, sym_layout_0)))
                            _fail(t);
                          t = r_15;
                          if(!(match_cons(t, sym_no_attrs_0)))
                            _fail(t);
                          t = s_15;
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = v_15;
                        }
                    }
                  else
                    {
                      t = u_15;
                      if(match_cons(t, sym_appl_2))
                        {
                          m_15 = ATgetArgument(t, 0);
                          s_15 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = m_15;
                      if(match_cons(t, sym_prod_3))
                        {
                          n_15 = ATgetArgument(t, 0);
                          o_15 = ATgetArgument(t, 1);
                          r_15 = ATgetArgument(t, 2);
                        }
                      else
                        _fail(t);
                      t = n_15;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = o_15;
                      if(match_cons(t, sym_cf_1))
                        {
                          p_15 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = p_15;
                      if(match_cons(t, sym_opt_1))
                        {
                          q_15 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = q_15;
                      if(!(match_cons(t, sym_layout_0)))
                        _fail(t);
                      t = r_15;
                      if(!(match_cons(t, sym_no_attrs_0)))
                        _fail(t);
                      t = s_15;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = v_15;
                    }
                }
              else
                {
                  t = u_15;
                  if(match_cons(t, sym_appl_2))
                    {
                      m_15 = ATgetArgument(t, 0);
                      s_15 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = m_15;
                  if(match_cons(t, sym_prod_3))
                    {
                      n_15 = ATgetArgument(t, 0);
                      o_15 = ATgetArgument(t, 1);
                      r_15 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = n_15;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = o_15;
                  if(match_cons(t, sym_cf_1))
                    {
                      p_15 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = p_15;
                  if(match_cons(t, sym_opt_1))
                    {
                      q_15 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = q_15;
                  if(!(match_cons(t, sym_layout_0)))
                    _fail(t);
                  t = r_15;
                  if(!(match_cons(t, sym_no_attrs_0)))
                    _fail(t);
                  t = s_15;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = v_15;
                }
            }
          else
            {
              t = u_15;
              if(match_cons(t, sym_appl_2))
                {
                  m_15 = ATgetArgument(t, 0);
                  s_15 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = m_15;
              if(match_cons(t, sym_prod_3))
                {
                  n_15 = ATgetArgument(t, 0);
                  o_15 = ATgetArgument(t, 1);
                  r_15 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = n_15;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = o_15;
              if(match_cons(t, sym_cf_1))
                {
                  p_15 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = p_15;
              if(match_cons(t, sym_opt_1))
                {
                  q_15 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = q_15;
              if(!(match_cons(t, sym_layout_0)))
                _fail(t);
              t = r_15;
              if(!(match_cons(t, sym_no_attrs_0)))
                _fail(t);
              t = s_15;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = v_15;
            }
        }
      else
        {
          t = u_15;
          if(match_cons(t, sym_appl_2))
            {
              m_15 = ATgetArgument(t, 0);
              s_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = m_15;
          if(match_cons(t, sym_prod_3))
            {
              n_15 = ATgetArgument(t, 0);
              o_15 = ATgetArgument(t, 1);
              r_15 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = n_15;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = o_15;
          if(match_cons(t, sym_cf_1))
            {
              p_15 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = p_15;
          if(match_cons(t, sym_opt_1))
            {
              q_15 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_15;
          if(!(match_cons(t, sym_layout_0)))
            _fail(t);
          t = r_15;
          if(!(match_cons(t, sym_no_attrs_0)))
            _fail(t);
          t = s_15;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = v_15;
        }
    }
  else
    {
      t = u_15;
      if(match_cons(t, sym_appl_2))
        {
          m_15 = ATgetArgument(t, 0);
          s_15 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = m_15;
      if(match_cons(t, sym_prod_3))
        {
          n_15 = ATgetArgument(t, 0);
          o_15 = ATgetArgument(t, 1);
          r_15 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = n_15;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = o_15;
      if(match_cons(t, sym_cf_1))
        {
          p_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_15;
      if(match_cons(t, sym_opt_1))
        {
          q_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_15;
      if(!(match_cons(t, sym_layout_0)))
        _fail(t);
      t = r_15;
      if(!(match_cons(t, sym_no_attrs_0)))
        _fail(t);
      t = s_15;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = v_15;
    }
  return(t);
}
ATerm b_1 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_l_3, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_z_2), term_v_2, term_y_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_o_3), term_n_3))), term_z_2, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_q_3))), (ATerm) ATinsert(ATempty, term_a_3)))));
  return(t);
}
ATerm c_1 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_z_2), term_v_2, term_y_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_o_3), term_n_3))), term_z_2, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_q_3))), (ATerm) ATinsert(ATempty, term_a_3))));
  return(t);
}
ATerm test2d_0_0 (ATerm t)
{
  t = apply_test_4_0(z_0, a_1, b_1, c_1, t);
  return(t);
}
ATerm d_1 (ATerm t)
{
  t = term_i_4;
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm m_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL,u_20 = NULL,v_20 = NULL,w_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL;
  if(match_cons(t, sym__2))
    {
      u_20 = ATgetArgument(t, 0);
      v_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_20;
  if(match_cons(t, sym_appl_2))
    {
      w_20 = ATgetArgument(t, 0);
      c_21 = ATgetArgument(t, 1);
      t = c_21;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = w_20;
          if(match_cons(t, sym_prod_3))
            {
              x_20 = ATgetArgument(t, 0);
              y_20 = ATgetArgument(t, 1);
              b_21 = ATgetArgument(t, 2);
              t = b_21;
              if(match_cons(t, sym_no_attrs_0))
                {
                  t = y_20;
                  if(match_cons(t, sym_cf_1))
                    {
                      z_20 = ATgetArgument(t, 0);
                      t = z_20;
                      if(match_cons(t, sym_opt_1))
                        {
                          a_21 = ATgetArgument(t, 0);
                          t = a_21;
                          if(match_cons(t, sym_layout_0))
                            {
                              t = x_20;
                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                {
                                  t = u_20;
                                  if(match_cons(t, sym_appl_2))
                                    {
                                      m_20 = ATgetArgument(t, 0);
                                      s_20 = ATgetArgument(t, 1);
                                      t = s_20;
                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                        {
                                          t = m_20;
                                          if(match_cons(t, sym_prod_3))
                                            {
                                              n_20 = ATgetArgument(t, 0);
                                              o_20 = ATgetArgument(t, 1);
                                              r_20 = ATgetArgument(t, 2);
                                              t = r_20;
                                              if(match_cons(t, sym_no_attrs_0))
                                                {
                                                  t = o_20;
                                                  if(match_cons(t, sym_cf_1))
                                                    {
                                                      p_20 = ATgetArgument(t, 0);
                                                      t = p_20;
                                                      if(match_cons(t, sym_opt_1))
                                                        {
                                                          q_20 = ATgetArgument(t, 0);
                                                          t = q_20;
                                                          if(match_cons(t, sym_layout_0))
                                                            {
                                                              t = n_20;
                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                {
                                                                  ATerm j_4 = t;
                                                                  int k_4 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = v_20;
                                                                      ;
                                                                      LocalPopChoice(k_4);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = j_4;
                                                                      t = u_20;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  t = u_20;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              t = u_20;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          t = u_20;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      t = u_20;
                                                    }
                                                }
                                              else
                                                {
                                                  t = u_20;
                                                }
                                            }
                                          else
                                            {
                                              t = u_20;
                                            }
                                        }
                                      else
                                        {
                                          t = u_20;
                                        }
                                    }
                                  else
                                    {
                                      t = u_20;
                                    }
                                }
                              else
                                {
                                  t = u_20;
                                  if(match_cons(t, sym_appl_2))
                                    {
                                      m_20 = ATgetArgument(t, 0);
                                      s_20 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = m_20;
                                  if(match_cons(t, sym_prod_3))
                                    {
                                      n_20 = ATgetArgument(t, 0);
                                      o_20 = ATgetArgument(t, 1);
                                      r_20 = ATgetArgument(t, 2);
                                    }
                                  else
                                    _fail(t);
                                  t = n_20;
                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                    _fail(t);
                                  t = o_20;
                                  if(match_cons(t, sym_cf_1))
                                    {
                                      p_20 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = p_20;
                                  if(match_cons(t, sym_opt_1))
                                    {
                                      q_20 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = q_20;
                                  if(!(match_cons(t, sym_layout_0)))
                                    _fail(t);
                                  t = r_20;
                                  if(!(match_cons(t, sym_no_attrs_0)))
                                    _fail(t);
                                  t = s_20;
                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                    _fail(t);
                                  t = v_20;
                                }
                            }
                          else
                            {
                              t = u_20;
                              if(match_cons(t, sym_appl_2))
                                {
                                  m_20 = ATgetArgument(t, 0);
                                  s_20 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = m_20;
                              if(match_cons(t, sym_prod_3))
                                {
                                  n_20 = ATgetArgument(t, 0);
                                  o_20 = ATgetArgument(t, 1);
                                  r_20 = ATgetArgument(t, 2);
                                }
                              else
                                _fail(t);
                              t = n_20;
                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                _fail(t);
                              t = o_20;
                              if(match_cons(t, sym_cf_1))
                                {
                                  p_20 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = p_20;
                              if(match_cons(t, sym_opt_1))
                                {
                                  q_20 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = q_20;
                              if(!(match_cons(t, sym_layout_0)))
                                _fail(t);
                              t = r_20;
                              if(!(match_cons(t, sym_no_attrs_0)))
                                _fail(t);
                              t = s_20;
                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                _fail(t);
                              t = v_20;
                            }
                        }
                      else
                        {
                          t = u_20;
                          if(match_cons(t, sym_appl_2))
                            {
                              m_20 = ATgetArgument(t, 0);
                              s_20 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = m_20;
                          if(match_cons(t, sym_prod_3))
                            {
                              n_20 = ATgetArgument(t, 0);
                              o_20 = ATgetArgument(t, 1);
                              r_20 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          t = n_20;
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = o_20;
                          if(match_cons(t, sym_cf_1))
                            {
                              p_20 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = p_20;
                          if(match_cons(t, sym_opt_1))
                            {
                              q_20 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = q_20;
                          if(!(match_cons(t, sym_layout_0)))
                            _fail(t);
                          t = r_20;
                          if(!(match_cons(t, sym_no_attrs_0)))
                            _fail(t);
                          t = s_20;
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = v_20;
                        }
                    }
                  else
                    {
                      t = u_20;
                      if(match_cons(t, sym_appl_2))
                        {
                          m_20 = ATgetArgument(t, 0);
                          s_20 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = m_20;
                      if(match_cons(t, sym_prod_3))
                        {
                          n_20 = ATgetArgument(t, 0);
                          o_20 = ATgetArgument(t, 1);
                          r_20 = ATgetArgument(t, 2);
                        }
                      else
                        _fail(t);
                      t = n_20;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = o_20;
                      if(match_cons(t, sym_cf_1))
                        {
                          p_20 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = p_20;
                      if(match_cons(t, sym_opt_1))
                        {
                          q_20 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = q_20;
                      if(!(match_cons(t, sym_layout_0)))
                        _fail(t);
                      t = r_20;
                      if(!(match_cons(t, sym_no_attrs_0)))
                        _fail(t);
                      t = s_20;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = v_20;
                    }
                }
              else
                {
                  t = u_20;
                  if(match_cons(t, sym_appl_2))
                    {
                      m_20 = ATgetArgument(t, 0);
                      s_20 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = m_20;
                  if(match_cons(t, sym_prod_3))
                    {
                      n_20 = ATgetArgument(t, 0);
                      o_20 = ATgetArgument(t, 1);
                      r_20 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = n_20;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = o_20;
                  if(match_cons(t, sym_cf_1))
                    {
                      p_20 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = p_20;
                  if(match_cons(t, sym_opt_1))
                    {
                      q_20 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = q_20;
                  if(!(match_cons(t, sym_layout_0)))
                    _fail(t);
                  t = r_20;
                  if(!(match_cons(t, sym_no_attrs_0)))
                    _fail(t);
                  t = s_20;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = v_20;
                }
            }
          else
            {
              t = u_20;
              if(match_cons(t, sym_appl_2))
                {
                  m_20 = ATgetArgument(t, 0);
                  s_20 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = m_20;
              if(match_cons(t, sym_prod_3))
                {
                  n_20 = ATgetArgument(t, 0);
                  o_20 = ATgetArgument(t, 1);
                  r_20 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = n_20;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = o_20;
              if(match_cons(t, sym_cf_1))
                {
                  p_20 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = p_20;
              if(match_cons(t, sym_opt_1))
                {
                  q_20 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = q_20;
              if(!(match_cons(t, sym_layout_0)))
                _fail(t);
              t = r_20;
              if(!(match_cons(t, sym_no_attrs_0)))
                _fail(t);
              t = s_20;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = v_20;
            }
        }
      else
        {
          t = u_20;
          if(match_cons(t, sym_appl_2))
            {
              m_20 = ATgetArgument(t, 0);
              s_20 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = m_20;
          if(match_cons(t, sym_prod_3))
            {
              n_20 = ATgetArgument(t, 0);
              o_20 = ATgetArgument(t, 1);
              r_20 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = n_20;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = o_20;
          if(match_cons(t, sym_cf_1))
            {
              p_20 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = p_20;
          if(match_cons(t, sym_opt_1))
            {
              q_20 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_20;
          if(!(match_cons(t, sym_layout_0)))
            _fail(t);
          t = r_20;
          if(!(match_cons(t, sym_no_attrs_0)))
            _fail(t);
          t = s_20;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = v_20;
        }
    }
  else
    {
      t = u_20;
      if(match_cons(t, sym_appl_2))
        {
          m_20 = ATgetArgument(t, 0);
          s_20 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = m_20;
      if(match_cons(t, sym_prod_3))
        {
          n_20 = ATgetArgument(t, 0);
          o_20 = ATgetArgument(t, 1);
          r_20 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = n_20;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = o_20;
      if(match_cons(t, sym_cf_1))
        {
          p_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_20;
      if(match_cons(t, sym_opt_1))
        {
          q_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_20;
      if(!(match_cons(t, sym_layout_0)))
        _fail(t);
      t = r_20;
      if(!(match_cons(t, sym_no_attrs_0)))
        _fail(t);
      t = s_20;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = v_20;
    }
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_z_2), term_v_2, term_y_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_o_3), term_n_3))), term_z_2, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_q_3))), (ATerm) ATinsert(ATempty, term_a_3)))), term_l_3);
  return(t);
}
ATerm g_1 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_z_2), term_v_2, term_y_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_o_3), term_n_3))), term_z_2, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_q_3))), (ATerm) ATinsert(ATempty, term_a_3))));
  return(t);
}
ATerm test2c_0_0 (ATerm t)
{
  t = apply_test_4_0(d_1, e_1, f_1, g_1, t);
  return(t);
}
ATerm h_1 (ATerm t)
{
  t = term_l_4;
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm m_4 = t;
  int n_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_layout1_0_0(t);
      ;
      LocalPopChoice(n_4);
    }
  else
    {
      t = m_4;
      {
        ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL,a_26 = NULL;
        if(match_cons(t, sym__2))
          {
            s_25 = ATgetArgument(t, 0);
            t_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_25;
        if(match_cons(t, sym_appl_2))
          {
            u_25 = ATgetArgument(t, 0);
            a_26 = ATgetArgument(t, 1);
            t = a_26;
            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
              {
                t = u_25;
                if(match_cons(t, sym_prod_3))
                  {
                    v_25 = ATgetArgument(t, 0);
                    w_25 = ATgetArgument(t, 1);
                    z_25 = ATgetArgument(t, 2);
                    t = z_25;
                    if(match_cons(t, sym_no_attrs_0))
                      {
                        t = w_25;
                        if(match_cons(t, sym_cf_1))
                          {
                            x_25 = ATgetArgument(t, 0);
                            t = x_25;
                            if(match_cons(t, sym_opt_1))
                              {
                                y_25 = ATgetArgument(t, 0);
                                t = y_25;
                                if(match_cons(t, sym_layout_0))
                                  {
                                    t = v_25;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = s_25;
                                        if(match_cons(t, sym_appl_2))
                                          {
                                            k_25 = ATgetArgument(t, 0);
                                            q_25 = ATgetArgument(t, 1);
                                            t = q_25;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                t = k_25;
                                                if(match_cons(t, sym_prod_3))
                                                  {
                                                    l_25 = ATgetArgument(t, 0);
                                                    m_25 = ATgetArgument(t, 1);
                                                    p_25 = ATgetArgument(t, 2);
                                                    t = p_25;
                                                    if(match_cons(t, sym_no_attrs_0))
                                                      {
                                                        t = m_25;
                                                        if(match_cons(t, sym_cf_1))
                                                          {
                                                            n_25 = ATgetArgument(t, 0);
                                                            t = n_25;
                                                            if(match_cons(t, sym_opt_1))
                                                              {
                                                                o_25 = ATgetArgument(t, 0);
                                                                t = o_25;
                                                                if(match_cons(t, sym_layout_0))
                                                                  {
                                                                    t = l_25;
                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                      {
                                                                        ATerm o_4 = t;
                                                                        int p_4 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = t_25;
                                                                            ;
                                                                            LocalPopChoice(p_4);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = o_4;
                                                                            t = s_25;
                                                                          }
                                                                      }
                                                                    else
                                                                      {
                                                                        t = s_25;
                                                                      }
                                                                  }
                                                                else
                                                                  {
                                                                    t = s_25;
                                                                  }
                                                              }
                                                            else
                                                              {
                                                                t = s_25;
                                                              }
                                                          }
                                                        else
                                                          {
                                                            t = s_25;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = s_25;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = s_25;
                                                  }
                                              }
                                            else
                                              {
                                                t = s_25;
                                              }
                                          }
                                        else
                                          {
                                            t = s_25;
                                          }
                                      }
                                    else
                                      {
                                        t = s_25;
                                        if(match_cons(t, sym_appl_2))
                                          {
                                            k_25 = ATgetArgument(t, 0);
                                            q_25 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = k_25;
                                        if(match_cons(t, sym_prod_3))
                                          {
                                            l_25 = ATgetArgument(t, 0);
                                            m_25 = ATgetArgument(t, 1);
                                            p_25 = ATgetArgument(t, 2);
                                          }
                                        else
                                          _fail(t);
                                        t = l_25;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = m_25;
                                        if(match_cons(t, sym_cf_1))
                                          {
                                            n_25 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = n_25;
                                        if(match_cons(t, sym_opt_1))
                                          {
                                            o_25 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = o_25;
                                        if(!(match_cons(t, sym_layout_0)))
                                          _fail(t);
                                        t = p_25;
                                        if(!(match_cons(t, sym_no_attrs_0)))
                                          _fail(t);
                                        t = q_25;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = t_25;
                                      }
                                  }
                                else
                                  {
                                    t = s_25;
                                    if(match_cons(t, sym_appl_2))
                                      {
                                        k_25 = ATgetArgument(t, 0);
                                        q_25 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = k_25;
                                    if(match_cons(t, sym_prod_3))
                                      {
                                        l_25 = ATgetArgument(t, 0);
                                        m_25 = ATgetArgument(t, 1);
                                        p_25 = ATgetArgument(t, 2);
                                      }
                                    else
                                      _fail(t);
                                    t = l_25;
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = m_25;
                                    if(match_cons(t, sym_cf_1))
                                      {
                                        n_25 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = n_25;
                                    if(match_cons(t, sym_opt_1))
                                      {
                                        o_25 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = o_25;
                                    if(!(match_cons(t, sym_layout_0)))
                                      _fail(t);
                                    t = p_25;
                                    if(!(match_cons(t, sym_no_attrs_0)))
                                      _fail(t);
                                    t = q_25;
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = t_25;
                                  }
                              }
                            else
                              {
                                t = s_25;
                                if(match_cons(t, sym_appl_2))
                                  {
                                    k_25 = ATgetArgument(t, 0);
                                    q_25 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = k_25;
                                if(match_cons(t, sym_prod_3))
                                  {
                                    l_25 = ATgetArgument(t, 0);
                                    m_25 = ATgetArgument(t, 1);
                                    p_25 = ATgetArgument(t, 2);
                                  }
                                else
                                  _fail(t);
                                t = l_25;
                                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                  _fail(t);
                                t = m_25;
                                if(match_cons(t, sym_cf_1))
                                  {
                                    n_25 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = n_25;
                                if(match_cons(t, sym_opt_1))
                                  {
                                    o_25 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = o_25;
                                if(!(match_cons(t, sym_layout_0)))
                                  _fail(t);
                                t = p_25;
                                if(!(match_cons(t, sym_no_attrs_0)))
                                  _fail(t);
                                t = q_25;
                                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                  _fail(t);
                                t = t_25;
                              }
                          }
                        else
                          {
                            t = s_25;
                            if(match_cons(t, sym_appl_2))
                              {
                                k_25 = ATgetArgument(t, 0);
                                q_25 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = k_25;
                            if(match_cons(t, sym_prod_3))
                              {
                                l_25 = ATgetArgument(t, 0);
                                m_25 = ATgetArgument(t, 1);
                                p_25 = ATgetArgument(t, 2);
                              }
                            else
                              _fail(t);
                            t = l_25;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = m_25;
                            if(match_cons(t, sym_cf_1))
                              {
                                n_25 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = n_25;
                            if(match_cons(t, sym_opt_1))
                              {
                                o_25 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = o_25;
                            if(!(match_cons(t, sym_layout_0)))
                              _fail(t);
                            t = p_25;
                            if(!(match_cons(t, sym_no_attrs_0)))
                              _fail(t);
                            t = q_25;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = t_25;
                          }
                      }
                    else
                      {
                        t = s_25;
                        if(match_cons(t, sym_appl_2))
                          {
                            k_25 = ATgetArgument(t, 0);
                            q_25 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = k_25;
                        if(match_cons(t, sym_prod_3))
                          {
                            l_25 = ATgetArgument(t, 0);
                            m_25 = ATgetArgument(t, 1);
                            p_25 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = l_25;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = m_25;
                        if(match_cons(t, sym_cf_1))
                          {
                            n_25 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = n_25;
                        if(match_cons(t, sym_opt_1))
                          {
                            o_25 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = o_25;
                        if(!(match_cons(t, sym_layout_0)))
                          _fail(t);
                        t = p_25;
                        if(!(match_cons(t, sym_no_attrs_0)))
                          _fail(t);
                        t = q_25;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = t_25;
                      }
                  }
                else
                  {
                    t = s_25;
                    if(match_cons(t, sym_appl_2))
                      {
                        k_25 = ATgetArgument(t, 0);
                        q_25 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = k_25;
                    if(match_cons(t, sym_prod_3))
                      {
                        l_25 = ATgetArgument(t, 0);
                        m_25 = ATgetArgument(t, 1);
                        p_25 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = l_25;
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    t = m_25;
                    if(match_cons(t, sym_cf_1))
                      {
                        n_25 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = n_25;
                    if(match_cons(t, sym_opt_1))
                      {
                        o_25 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = o_25;
                    if(!(match_cons(t, sym_layout_0)))
                      _fail(t);
                    t = p_25;
                    if(!(match_cons(t, sym_no_attrs_0)))
                      _fail(t);
                    t = q_25;
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    t = t_25;
                  }
              }
            else
              {
                t = s_25;
                if(match_cons(t, sym_appl_2))
                  {
                    k_25 = ATgetArgument(t, 0);
                    q_25 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = k_25;
                if(match_cons(t, sym_prod_3))
                  {
                    l_25 = ATgetArgument(t, 0);
                    m_25 = ATgetArgument(t, 1);
                    p_25 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = l_25;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = m_25;
                if(match_cons(t, sym_cf_1))
                  {
                    n_25 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = n_25;
                if(match_cons(t, sym_opt_1))
                  {
                    o_25 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = o_25;
                if(!(match_cons(t, sym_layout_0)))
                  _fail(t);
                t = p_25;
                if(!(match_cons(t, sym_no_attrs_0)))
                  _fail(t);
                t = q_25;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = t_25;
              }
          }
        else
          {
            t = s_25;
            if(match_cons(t, sym_appl_2))
              {
                k_25 = ATgetArgument(t, 0);
                q_25 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = k_25;
            if(match_cons(t, sym_prod_3))
              {
                l_25 = ATgetArgument(t, 0);
                m_25 = ATgetArgument(t, 1);
                p_25 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = l_25;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = m_25;
            if(match_cons(t, sym_cf_1))
              {
                n_25 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = n_25;
            if(match_cons(t, sym_opt_1))
              {
                o_25 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = o_25;
            if(!(match_cons(t, sym_layout_0)))
              _fail(t);
            t = p_25;
            if(!(match_cons(t, sym_no_attrs_0)))
              _fail(t);
            t = q_25;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = t_25;
          }
      }
    }
  return(t);
}
ATerm j_1 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_l_3, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_z_2), term_v_2, term_y_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_o_3), term_n_3))), term_z_2, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_q_3))), (ATerm) ATinsert(ATempty, term_a_3)))));
  return(t);
}
ATerm k_1 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_z_2), term_v_2, term_y_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_o_3), term_n_3))), term_z_2, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_q_3))), (ATerm) ATinsert(ATempty, term_a_3))));
  return(t);
}
ATerm test2b_0_0 (ATerm t)
{
  t = apply_test_4_0(h_1, i_1, j_1, k_1, t);
  return(t);
}
ATerm l_1 (ATerm t)
{
  t = term_q_4;
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm r_4 = t;
  int s_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_layout1_0_0(t);
      ;
      LocalPopChoice(s_4);
    }
  else
    {
      t = r_4;
      {
        ATerm i_30 = NULL,j_30 = NULL,k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL,o_30 = NULL,q_30 = NULL,r_30 = NULL,s_30 = NULL,t_30 = NULL,u_30 = NULL,v_30 = NULL,w_30 = NULL,x_30 = NULL,y_30 = NULL;
        if(match_cons(t, sym__2))
          {
            q_30 = ATgetArgument(t, 0);
            r_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_30;
        if(match_cons(t, sym_appl_2))
          {
            s_30 = ATgetArgument(t, 0);
            y_30 = ATgetArgument(t, 1);
            t = y_30;
            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
              {
                t = s_30;
                if(match_cons(t, sym_prod_3))
                  {
                    t_30 = ATgetArgument(t, 0);
                    u_30 = ATgetArgument(t, 1);
                    x_30 = ATgetArgument(t, 2);
                    t = x_30;
                    if(match_cons(t, sym_no_attrs_0))
                      {
                        t = u_30;
                        if(match_cons(t, sym_cf_1))
                          {
                            v_30 = ATgetArgument(t, 0);
                            t = v_30;
                            if(match_cons(t, sym_opt_1))
                              {
                                w_30 = ATgetArgument(t, 0);
                                t = w_30;
                                if(match_cons(t, sym_layout_0))
                                  {
                                    t = t_30;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = q_30;
                                        if(match_cons(t, sym_appl_2))
                                          {
                                            i_30 = ATgetArgument(t, 0);
                                            o_30 = ATgetArgument(t, 1);
                                            t = o_30;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                t = i_30;
                                                if(match_cons(t, sym_prod_3))
                                                  {
                                                    j_30 = ATgetArgument(t, 0);
                                                    k_30 = ATgetArgument(t, 1);
                                                    n_30 = ATgetArgument(t, 2);
                                                    t = n_30;
                                                    if(match_cons(t, sym_no_attrs_0))
                                                      {
                                                        t = k_30;
                                                        if(match_cons(t, sym_cf_1))
                                                          {
                                                            l_30 = ATgetArgument(t, 0);
                                                            t = l_30;
                                                            if(match_cons(t, sym_opt_1))
                                                              {
                                                                m_30 = ATgetArgument(t, 0);
                                                                t = m_30;
                                                                if(match_cons(t, sym_layout_0))
                                                                  {
                                                                    t = j_30;
                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                      {
                                                                        ATerm t_4 = t;
                                                                        int u_4 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = r_30;
                                                                            ;
                                                                            LocalPopChoice(u_4);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = t_4;
                                                                            t = q_30;
                                                                          }
                                                                      }
                                                                    else
                                                                      {
                                                                        t = q_30;
                                                                      }
                                                                  }
                                                                else
                                                                  {
                                                                    t = q_30;
                                                                  }
                                                              }
                                                            else
                                                              {
                                                                t = q_30;
                                                              }
                                                          }
                                                        else
                                                          {
                                                            t = q_30;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = q_30;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = q_30;
                                                  }
                                              }
                                            else
                                              {
                                                t = q_30;
                                              }
                                          }
                                        else
                                          {
                                            t = q_30;
                                          }
                                      }
                                    else
                                      {
                                        t = q_30;
                                        if(match_cons(t, sym_appl_2))
                                          {
                                            i_30 = ATgetArgument(t, 0);
                                            o_30 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = i_30;
                                        if(match_cons(t, sym_prod_3))
                                          {
                                            j_30 = ATgetArgument(t, 0);
                                            k_30 = ATgetArgument(t, 1);
                                            n_30 = ATgetArgument(t, 2);
                                          }
                                        else
                                          _fail(t);
                                        t = j_30;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = k_30;
                                        if(match_cons(t, sym_cf_1))
                                          {
                                            l_30 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = l_30;
                                        if(match_cons(t, sym_opt_1))
                                          {
                                            m_30 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = m_30;
                                        if(!(match_cons(t, sym_layout_0)))
                                          _fail(t);
                                        t = n_30;
                                        if(!(match_cons(t, sym_no_attrs_0)))
                                          _fail(t);
                                        t = o_30;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = r_30;
                                      }
                                  }
                                else
                                  {
                                    t = q_30;
                                    if(match_cons(t, sym_appl_2))
                                      {
                                        i_30 = ATgetArgument(t, 0);
                                        o_30 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = i_30;
                                    if(match_cons(t, sym_prod_3))
                                      {
                                        j_30 = ATgetArgument(t, 0);
                                        k_30 = ATgetArgument(t, 1);
                                        n_30 = ATgetArgument(t, 2);
                                      }
                                    else
                                      _fail(t);
                                    t = j_30;
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = k_30;
                                    if(match_cons(t, sym_cf_1))
                                      {
                                        l_30 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = l_30;
                                    if(match_cons(t, sym_opt_1))
                                      {
                                        m_30 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = m_30;
                                    if(!(match_cons(t, sym_layout_0)))
                                      _fail(t);
                                    t = n_30;
                                    if(!(match_cons(t, sym_no_attrs_0)))
                                      _fail(t);
                                    t = o_30;
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = r_30;
                                  }
                              }
                            else
                              {
                                t = q_30;
                                if(match_cons(t, sym_appl_2))
                                  {
                                    i_30 = ATgetArgument(t, 0);
                                    o_30 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = i_30;
                                if(match_cons(t, sym_prod_3))
                                  {
                                    j_30 = ATgetArgument(t, 0);
                                    k_30 = ATgetArgument(t, 1);
                                    n_30 = ATgetArgument(t, 2);
                                  }
                                else
                                  _fail(t);
                                t = j_30;
                                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                  _fail(t);
                                t = k_30;
                                if(match_cons(t, sym_cf_1))
                                  {
                                    l_30 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = l_30;
                                if(match_cons(t, sym_opt_1))
                                  {
                                    m_30 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = m_30;
                                if(!(match_cons(t, sym_layout_0)))
                                  _fail(t);
                                t = n_30;
                                if(!(match_cons(t, sym_no_attrs_0)))
                                  _fail(t);
                                t = o_30;
                                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                  _fail(t);
                                t = r_30;
                              }
                          }
                        else
                          {
                            t = q_30;
                            if(match_cons(t, sym_appl_2))
                              {
                                i_30 = ATgetArgument(t, 0);
                                o_30 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = i_30;
                            if(match_cons(t, sym_prod_3))
                              {
                                j_30 = ATgetArgument(t, 0);
                                k_30 = ATgetArgument(t, 1);
                                n_30 = ATgetArgument(t, 2);
                              }
                            else
                              _fail(t);
                            t = j_30;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = k_30;
                            if(match_cons(t, sym_cf_1))
                              {
                                l_30 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = l_30;
                            if(match_cons(t, sym_opt_1))
                              {
                                m_30 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = m_30;
                            if(!(match_cons(t, sym_layout_0)))
                              _fail(t);
                            t = n_30;
                            if(!(match_cons(t, sym_no_attrs_0)))
                              _fail(t);
                            t = o_30;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = r_30;
                          }
                      }
                    else
                      {
                        t = q_30;
                        if(match_cons(t, sym_appl_2))
                          {
                            i_30 = ATgetArgument(t, 0);
                            o_30 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = i_30;
                        if(match_cons(t, sym_prod_3))
                          {
                            j_30 = ATgetArgument(t, 0);
                            k_30 = ATgetArgument(t, 1);
                            n_30 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = j_30;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = k_30;
                        if(match_cons(t, sym_cf_1))
                          {
                            l_30 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = l_30;
                        if(match_cons(t, sym_opt_1))
                          {
                            m_30 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = m_30;
                        if(!(match_cons(t, sym_layout_0)))
                          _fail(t);
                        t = n_30;
                        if(!(match_cons(t, sym_no_attrs_0)))
                          _fail(t);
                        t = o_30;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = r_30;
                      }
                  }
                else
                  {
                    t = q_30;
                    if(match_cons(t, sym_appl_2))
                      {
                        i_30 = ATgetArgument(t, 0);
                        o_30 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = i_30;
                    if(match_cons(t, sym_prod_3))
                      {
                        j_30 = ATgetArgument(t, 0);
                        k_30 = ATgetArgument(t, 1);
                        n_30 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = j_30;
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    t = k_30;
                    if(match_cons(t, sym_cf_1))
                      {
                        l_30 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = l_30;
                    if(match_cons(t, sym_opt_1))
                      {
                        m_30 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = m_30;
                    if(!(match_cons(t, sym_layout_0)))
                      _fail(t);
                    t = n_30;
                    if(!(match_cons(t, sym_no_attrs_0)))
                      _fail(t);
                    t = o_30;
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    t = r_30;
                  }
              }
            else
              {
                t = q_30;
                if(match_cons(t, sym_appl_2))
                  {
                    i_30 = ATgetArgument(t, 0);
                    o_30 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = i_30;
                if(match_cons(t, sym_prod_3))
                  {
                    j_30 = ATgetArgument(t, 0);
                    k_30 = ATgetArgument(t, 1);
                    n_30 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = j_30;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = k_30;
                if(match_cons(t, sym_cf_1))
                  {
                    l_30 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = l_30;
                if(match_cons(t, sym_opt_1))
                  {
                    m_30 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = m_30;
                if(!(match_cons(t, sym_layout_0)))
                  _fail(t);
                t = n_30;
                if(!(match_cons(t, sym_no_attrs_0)))
                  _fail(t);
                t = o_30;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = r_30;
              }
          }
        else
          {
            t = q_30;
            if(match_cons(t, sym_appl_2))
              {
                i_30 = ATgetArgument(t, 0);
                o_30 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = i_30;
            if(match_cons(t, sym_prod_3))
              {
                j_30 = ATgetArgument(t, 0);
                k_30 = ATgetArgument(t, 1);
                n_30 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = j_30;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = k_30;
            if(match_cons(t, sym_cf_1))
              {
                l_30 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = l_30;
            if(match_cons(t, sym_opt_1))
              {
                m_30 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = m_30;
            if(!(match_cons(t, sym_layout_0)))
              _fail(t);
            t = n_30;
            if(!(match_cons(t, sym_no_attrs_0)))
              _fail(t);
            t = o_30;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = r_30;
          }
      }
    }
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_z_2), term_v_2, term_y_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_o_3), term_n_3))), term_z_2, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_q_3))), (ATerm) ATinsert(ATempty, term_a_3)))), term_l_3);
  return(t);
}
ATerm o_1 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_z_2), term_v_2, term_y_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_o_3), term_n_3))), term_z_2, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_q_3))), (ATerm) ATinsert(ATempty, term_a_3))));
  return(t);
}
ATerm test2a_0_0 (ATerm t)
{
  t = apply_test_4_0(l_1, m_1, n_1, o_1, t);
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = term_v_4;
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm w_4 = t;
  int x_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_layout1_0_0(t);
      ;
      LocalPopChoice(x_4);
    }
  else
    {
      t = w_4;
      {
        ATerm i_35 = NULL,j_35 = NULL,k_35 = NULL,l_35 = NULL,m_35 = NULL,n_35 = NULL,o_35 = NULL,q_35 = NULL,r_35 = NULL,s_35 = NULL,t_35 = NULL,u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL;
        if(match_cons(t, sym__2))
          {
            q_35 = ATgetArgument(t, 0);
            r_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_35;
        if(match_cons(t, sym_appl_2))
          {
            s_35 = ATgetArgument(t, 0);
            y_35 = ATgetArgument(t, 1);
            t = y_35;
            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
              {
                t = s_35;
                if(match_cons(t, sym_prod_3))
                  {
                    t_35 = ATgetArgument(t, 0);
                    u_35 = ATgetArgument(t, 1);
                    x_35 = ATgetArgument(t, 2);
                    t = x_35;
                    if(match_cons(t, sym_no_attrs_0))
                      {
                        t = u_35;
                        if(match_cons(t, sym_cf_1))
                          {
                            v_35 = ATgetArgument(t, 0);
                            t = v_35;
                            if(match_cons(t, sym_opt_1))
                              {
                                w_35 = ATgetArgument(t, 0);
                                t = w_35;
                                if(match_cons(t, sym_layout_0))
                                  {
                                    t = t_35;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = q_35;
                                        if(match_cons(t, sym_appl_2))
                                          {
                                            i_35 = ATgetArgument(t, 0);
                                            o_35 = ATgetArgument(t, 1);
                                            t = o_35;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                t = i_35;
                                                if(match_cons(t, sym_prod_3))
                                                  {
                                                    j_35 = ATgetArgument(t, 0);
                                                    k_35 = ATgetArgument(t, 1);
                                                    n_35 = ATgetArgument(t, 2);
                                                    t = n_35;
                                                    if(match_cons(t, sym_no_attrs_0))
                                                      {
                                                        t = k_35;
                                                        if(match_cons(t, sym_cf_1))
                                                          {
                                                            l_35 = ATgetArgument(t, 0);
                                                            t = l_35;
                                                            if(match_cons(t, sym_opt_1))
                                                              {
                                                                m_35 = ATgetArgument(t, 0);
                                                                t = m_35;
                                                                if(match_cons(t, sym_layout_0))
                                                                  {
                                                                    t = j_35;
                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                      {
                                                                        ATerm y_4 = t;
                                                                        int z_4 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = r_35;
                                                                            ;
                                                                            LocalPopChoice(z_4);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = y_4;
                                                                            t = q_35;
                                                                          }
                                                                      }
                                                                    else
                                                                      {
                                                                        t = q_35;
                                                                      }
                                                                  }
                                                                else
                                                                  {
                                                                    t = q_35;
                                                                  }
                                                              }
                                                            else
                                                              {
                                                                t = q_35;
                                                              }
                                                          }
                                                        else
                                                          {
                                                            t = q_35;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = q_35;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = q_35;
                                                  }
                                              }
                                            else
                                              {
                                                t = q_35;
                                              }
                                          }
                                        else
                                          {
                                            t = q_35;
                                          }
                                      }
                                    else
                                      {
                                        t = q_35;
                                        if(match_cons(t, sym_appl_2))
                                          {
                                            i_35 = ATgetArgument(t, 0);
                                            o_35 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = i_35;
                                        if(match_cons(t, sym_prod_3))
                                          {
                                            j_35 = ATgetArgument(t, 0);
                                            k_35 = ATgetArgument(t, 1);
                                            n_35 = ATgetArgument(t, 2);
                                          }
                                        else
                                          _fail(t);
                                        t = j_35;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = k_35;
                                        if(match_cons(t, sym_cf_1))
                                          {
                                            l_35 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = l_35;
                                        if(match_cons(t, sym_opt_1))
                                          {
                                            m_35 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = m_35;
                                        if(!(match_cons(t, sym_layout_0)))
                                          _fail(t);
                                        t = n_35;
                                        if(!(match_cons(t, sym_no_attrs_0)))
                                          _fail(t);
                                        t = o_35;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = r_35;
                                      }
                                  }
                                else
                                  {
                                    t = q_35;
                                    if(match_cons(t, sym_appl_2))
                                      {
                                        i_35 = ATgetArgument(t, 0);
                                        o_35 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = i_35;
                                    if(match_cons(t, sym_prod_3))
                                      {
                                        j_35 = ATgetArgument(t, 0);
                                        k_35 = ATgetArgument(t, 1);
                                        n_35 = ATgetArgument(t, 2);
                                      }
                                    else
                                      _fail(t);
                                    t = j_35;
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = k_35;
                                    if(match_cons(t, sym_cf_1))
                                      {
                                        l_35 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = l_35;
                                    if(match_cons(t, sym_opt_1))
                                      {
                                        m_35 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = m_35;
                                    if(!(match_cons(t, sym_layout_0)))
                                      _fail(t);
                                    t = n_35;
                                    if(!(match_cons(t, sym_no_attrs_0)))
                                      _fail(t);
                                    t = o_35;
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = r_35;
                                  }
                              }
                            else
                              {
                                t = q_35;
                                if(match_cons(t, sym_appl_2))
                                  {
                                    i_35 = ATgetArgument(t, 0);
                                    o_35 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = i_35;
                                if(match_cons(t, sym_prod_3))
                                  {
                                    j_35 = ATgetArgument(t, 0);
                                    k_35 = ATgetArgument(t, 1);
                                    n_35 = ATgetArgument(t, 2);
                                  }
                                else
                                  _fail(t);
                                t = j_35;
                                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                  _fail(t);
                                t = k_35;
                                if(match_cons(t, sym_cf_1))
                                  {
                                    l_35 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = l_35;
                                if(match_cons(t, sym_opt_1))
                                  {
                                    m_35 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = m_35;
                                if(!(match_cons(t, sym_layout_0)))
                                  _fail(t);
                                t = n_35;
                                if(!(match_cons(t, sym_no_attrs_0)))
                                  _fail(t);
                                t = o_35;
                                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                  _fail(t);
                                t = r_35;
                              }
                          }
                        else
                          {
                            t = q_35;
                            if(match_cons(t, sym_appl_2))
                              {
                                i_35 = ATgetArgument(t, 0);
                                o_35 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = i_35;
                            if(match_cons(t, sym_prod_3))
                              {
                                j_35 = ATgetArgument(t, 0);
                                k_35 = ATgetArgument(t, 1);
                                n_35 = ATgetArgument(t, 2);
                              }
                            else
                              _fail(t);
                            t = j_35;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = k_35;
                            if(match_cons(t, sym_cf_1))
                              {
                                l_35 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = l_35;
                            if(match_cons(t, sym_opt_1))
                              {
                                m_35 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = m_35;
                            if(!(match_cons(t, sym_layout_0)))
                              _fail(t);
                            t = n_35;
                            if(!(match_cons(t, sym_no_attrs_0)))
                              _fail(t);
                            t = o_35;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = r_35;
                          }
                      }
                    else
                      {
                        t = q_35;
                        if(match_cons(t, sym_appl_2))
                          {
                            i_35 = ATgetArgument(t, 0);
                            o_35 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = i_35;
                        if(match_cons(t, sym_prod_3))
                          {
                            j_35 = ATgetArgument(t, 0);
                            k_35 = ATgetArgument(t, 1);
                            n_35 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = j_35;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = k_35;
                        if(match_cons(t, sym_cf_1))
                          {
                            l_35 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = l_35;
                        if(match_cons(t, sym_opt_1))
                          {
                            m_35 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = m_35;
                        if(!(match_cons(t, sym_layout_0)))
                          _fail(t);
                        t = n_35;
                        if(!(match_cons(t, sym_no_attrs_0)))
                          _fail(t);
                        t = o_35;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = r_35;
                      }
                  }
                else
                  {
                    t = q_35;
                    if(match_cons(t, sym_appl_2))
                      {
                        i_35 = ATgetArgument(t, 0);
                        o_35 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = i_35;
                    if(match_cons(t, sym_prod_3))
                      {
                        j_35 = ATgetArgument(t, 0);
                        k_35 = ATgetArgument(t, 1);
                        n_35 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = j_35;
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    t = k_35;
                    if(match_cons(t, sym_cf_1))
                      {
                        l_35 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = l_35;
                    if(match_cons(t, sym_opt_1))
                      {
                        m_35 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = m_35;
                    if(!(match_cons(t, sym_layout_0)))
                      _fail(t);
                    t = n_35;
                    if(!(match_cons(t, sym_no_attrs_0)))
                      _fail(t);
                    t = o_35;
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    t = r_35;
                  }
              }
            else
              {
                t = q_35;
                if(match_cons(t, sym_appl_2))
                  {
                    i_35 = ATgetArgument(t, 0);
                    o_35 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = i_35;
                if(match_cons(t, sym_prod_3))
                  {
                    j_35 = ATgetArgument(t, 0);
                    k_35 = ATgetArgument(t, 1);
                    n_35 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = j_35;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = k_35;
                if(match_cons(t, sym_cf_1))
                  {
                    l_35 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = l_35;
                if(match_cons(t, sym_opt_1))
                  {
                    m_35 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = m_35;
                if(!(match_cons(t, sym_layout_0)))
                  _fail(t);
                t = n_35;
                if(!(match_cons(t, sym_no_attrs_0)))
                  _fail(t);
                t = o_35;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = r_35;
              }
          }
        else
          {
            t = q_35;
            if(match_cons(t, sym_appl_2))
              {
                i_35 = ATgetArgument(t, 0);
                o_35 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = i_35;
            if(match_cons(t, sym_prod_3))
              {
                j_35 = ATgetArgument(t, 0);
                k_35 = ATgetArgument(t, 1);
                n_35 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = j_35;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = k_35;
            if(match_cons(t, sym_cf_1))
              {
                l_35 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = l_35;
            if(match_cons(t, sym_opt_1))
              {
                m_35 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = m_35;
            if(!(match_cons(t, sym_layout_0)))
              _fail(t);
            t = n_35;
            if(!(match_cons(t, sym_no_attrs_0)))
              _fail(t);
            t = o_35;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = r_35;
          }
      }
    }
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = term_a_5;
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = term_l_3;
  return(t);
}
ATerm test1a_0_0 (ATerm t)
{
  t = apply_test_4_0(p_1, q_1, r_1, s_1, t);
  return(t);
}
ATerm n_0 (ATerm e_47, ATerm f_47, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_v_2), term_x_2, term_y_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATempty, term_v_2), term_v_2), term_v_2, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_c_5))), (ATerm) ATinsert(ATinsert(ATempty, f_47), e_47))));
  return(t);
}
ATerm conc_layout1_0_0 (ATerm t)
{
  ATerm r_36 = NULL,s_36 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_5 = ATgetArgument(t, 0);
      if(match_cons(d_5, sym_appl_2))
        {
          ATerm f_5 = ATgetArgument(d_5, 0);
          if(match_cons(f_5, sym_prod_3))
            {
              ATerm h_5 = ATgetArgument(f_5, 0);
              if(((ATgetType(h_5) == AT_LIST) && !(ATisEmpty(h_5))))
                {
                  ATerm k_5 = ATgetFirst((ATermList) h_5);
                  if(match_cons(k_5, sym_cf_1))
                    {
                      ATerm m_5 = ATgetArgument(k_5, 0);
                      if(!(match_cons(m_5, sym_layout_0)))
                        _fail(t);
                    }
                  else
                    _fail(t);
                  {
                    ATerm l_5 = (ATerm) ATgetNext((ATermList) h_5);
                    if(((ATgetType(l_5) != AT_LIST) || !(ATisEmpty(l_5))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              {
                ATerm i_5 = ATgetArgument(f_5, 1);
                if(match_cons(i_5, sym_cf_1))
                  {
                    ATerm n_5 = ATgetArgument(i_5, 0);
                    if(match_cons(n_5, sym_opt_1))
                      {
                        ATerm v_5 = ATgetArgument(n_5, 0);
                        if(!(match_cons(v_5, sym_layout_0)))
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
              {
                ATerm j_5 = ATgetArgument(f_5, 2);
                if(!(match_cons(j_5, sym_no_attrs_0)))
                  _fail(t);
              }
            }
          else
            _fail(t);
          {
            ATerm g_5 = ATgetArgument(d_5, 1);
            if(((ATgetType(g_5) == AT_LIST) && !(ATisEmpty(g_5))))
              {
                r_36 = ATgetFirst((ATermList) g_5);
                {
                  ATerm f_6 = (ATerm) ATgetNext((ATermList) g_5);
                  if(((ATgetType(f_6) != AT_LIST) || !(ATisEmpty(f_6))))
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
        ATerm e_5 = ATgetArgument(t, 1);
        if(match_cons(e_5, sym_appl_2))
          {
            ATerm g_6 = ATgetArgument(e_5, 0);
            if(match_cons(g_6, sym_prod_3))
              {
                ATerm i_6 = ATgetArgument(g_6, 0);
                if(((ATgetType(i_6) == AT_LIST) && !(ATisEmpty(i_6))))
                  {
                    ATerm l_6 = ATgetFirst((ATermList) i_6);
                    if(match_cons(l_6, sym_cf_1))
                      {
                        ATerm n_6 = ATgetArgument(l_6, 0);
                        if(!(match_cons(n_6, sym_layout_0)))
                          _fail(t);
                      }
                    else
                      _fail(t);
                    {
                      ATerm m_6 = (ATerm) ATgetNext((ATermList) i_6);
                      if(((ATgetType(m_6) != AT_LIST) || !(ATisEmpty(m_6))))
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                {
                  ATerm j_6 = ATgetArgument(g_6, 1);
                  if(match_cons(j_6, sym_cf_1))
                    {
                      ATerm o_6 = ATgetArgument(j_6, 0);
                      if(match_cons(o_6, sym_opt_1))
                        {
                          ATerm p_6 = ATgetArgument(o_6, 0);
                          if(!(match_cons(p_6, sym_layout_0)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
                {
                  ATerm k_6 = ATgetArgument(g_6, 2);
                  if(!(match_cons(k_6, sym_no_attrs_0)))
                    _fail(t);
                }
              }
            else
              _fail(t);
            {
              ATerm h_6 = ATgetArgument(e_5, 1);
              if(((ATgetType(h_6) == AT_LIST) && !(ATisEmpty(h_6))))
                {
                  s_36 = ATgetFirst((ATermList) h_6);
                  {
                    ATerm q_6 = (ATerm) ATgetNext((ATermList) h_6);
                    if(((ATgetType(q_6) != AT_LIST) || !(ATisEmpty(q_6))))
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
  t = n_0(r_36, s_36, t);
  return(t);
}
ATerm o_0 (ATerm t_31, ATerm u_31, ATerm t)
{
  ATerm r_6 = t;
  int s_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(t_31, u_31);
      ;
      LocalPopChoice(s_6);
    }
  else
    {
      t = r_6;
      t = SSL_addr(t_31, u_31);
    }
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm x_36 = NULL,y_36 = NULL;
  x_36 = t;
  t = term_t_6;
  y_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_36, term_t_6);
  t = o_0(x_36, y_36, t);
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm z_36 = NULL,a_37 = NULL;
  z_36 = t;
  t = term_t_6;
  a_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_36, term_t_6);
  t = o_0(z_36, a_37, t);
  return(t);
}
ATerm do_test_2_0 (ATerm w_59 (ATerm), ATerm x_59 (ATerm), ATerm t)
{
  ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL,w_36 = NULL;
  t_36 = t;
  t = w_59(t);
  u_36 = t;
  t = term_m_2;
  v_36 = t;
  t = (ATerm) ATinsert(ATempty, u_36);
  w_36 = t;
  t = SSL_printnl(v_36, w_36);
  t = t_36;
  {
    ATerm u_6 = t;
    int v_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_59(t);
        t = t_36;
        t = _2_0(t_1, _id, t);
        ;
        LocalPopChoice(v_6);
      }
    else
      {
        t = u_6;
        t = _2_0(_id, u_1, t);
      }
  }
  return(t);
}
ATerm w_1 (ATerm t)
{
  t = term_w_6;
  return(t);
}
ATerm x_1 (ATerm t)
{
  t = term_z_6;
  return(t);
}
ATerm apply_test_4_0 (ATerm a_60 (ATerm), ATerm b_60 (ATerm), ATerm c_60 (ATerm), ATerm d_60 (ATerm), ATerm t)
{
  ATerm b_37 = NULL,c_37 = NULL;
  ATerm v_1 (ATerm t)
  {
    ATerm a_7 = t;
    int b_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_60(t);
        t = b_60(t);
        ;
        LocalPopChoice(b_7);
      }
    else
      {
        t = a_7;
        {
          ATerm d_37 = NULL,e_37 = NULL;
          t = term_m_2;
          d_37 = t;
          t = (ATerm) ATinsert(ATempty, term_n_2);
          e_37 = t;
          t = SSL_printnl(d_37, e_37);
          t = term_n_2;
          _fail(t);
        }
      }
    if(((b_37 != NULL) && (b_37 != t)))
      _fail(t);
    else
      b_37 = t;
    t = d_60(t);
    if(((c_37 != NULL) && (c_37 != t)))
      _fail(t);
    else
      c_37 = t;
    {
      ATerm c_7 = t;
      int d_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = not_null(c_37);
          if(((b_37 != NULL) && (b_37 != t)))
            _fail(t);
          else
            b_37 = t;
          ;
          LocalPopChoice(d_7);
        }
      else
        {
          t = c_7;
          t = not_null(b_37);
          t = debug_1_0(w_1, t);
          t = not_null(c_37);
          t = debug_1_0(x_1, t);
          _fail(t);
        }
    }
    return(t);
  }
  t = do_test_2_0(a_60, v_1, t);
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = term_e_7;
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm f_7 = t;
  int g_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_layout1_0_0(t);
      ;
      LocalPopChoice(g_7);
    }
  else
    {
      t = f_7;
      {
        ATerm u_40 = NULL,v_40 = NULL,w_40 = NULL,x_40 = NULL,y_40 = NULL,z_40 = NULL,a_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL,g_41 = NULL,h_41 = NULL,i_41 = NULL,j_41 = NULL,k_41 = NULL;
        if(match_cons(t, sym__2))
          {
            c_41 = ATgetArgument(t, 0);
            d_41 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_41;
        if(match_cons(t, sym_appl_2))
          {
            e_41 = ATgetArgument(t, 0);
            k_41 = ATgetArgument(t, 1);
            t = k_41;
            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
              {
                t = e_41;
                if(match_cons(t, sym_prod_3))
                  {
                    f_41 = ATgetArgument(t, 0);
                    g_41 = ATgetArgument(t, 1);
                    j_41 = ATgetArgument(t, 2);
                    t = j_41;
                    if(match_cons(t, sym_no_attrs_0))
                      {
                        t = g_41;
                        if(match_cons(t, sym_cf_1))
                          {
                            h_41 = ATgetArgument(t, 0);
                            t = h_41;
                            if(match_cons(t, sym_opt_1))
                              {
                                i_41 = ATgetArgument(t, 0);
                                t = i_41;
                                if(match_cons(t, sym_layout_0))
                                  {
                                    t = f_41;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = c_41;
                                        if(match_cons(t, sym_appl_2))
                                          {
                                            u_40 = ATgetArgument(t, 0);
                                            a_41 = ATgetArgument(t, 1);
                                            t = a_41;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                t = u_40;
                                                if(match_cons(t, sym_prod_3))
                                                  {
                                                    v_40 = ATgetArgument(t, 0);
                                                    w_40 = ATgetArgument(t, 1);
                                                    z_40 = ATgetArgument(t, 2);
                                                    t = z_40;
                                                    if(match_cons(t, sym_no_attrs_0))
                                                      {
                                                        t = w_40;
                                                        if(match_cons(t, sym_cf_1))
                                                          {
                                                            x_40 = ATgetArgument(t, 0);
                                                            t = x_40;
                                                            if(match_cons(t, sym_opt_1))
                                                              {
                                                                y_40 = ATgetArgument(t, 0);
                                                                t = y_40;
                                                                if(match_cons(t, sym_layout_0))
                                                                  {
                                                                    t = v_40;
                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                      {
                                                                        ATerm h_7 = t;
                                                                        int i_7 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = d_41;
                                                                            ;
                                                                            LocalPopChoice(i_7);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = h_7;
                                                                            t = c_41;
                                                                          }
                                                                      }
                                                                    else
                                                                      {
                                                                        t = c_41;
                                                                      }
                                                                  }
                                                                else
                                                                  {
                                                                    t = c_41;
                                                                  }
                                                              }
                                                            else
                                                              {
                                                                t = c_41;
                                                              }
                                                          }
                                                        else
                                                          {
                                                            t = c_41;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = c_41;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = c_41;
                                                  }
                                              }
                                            else
                                              {
                                                t = c_41;
                                              }
                                          }
                                        else
                                          {
                                            t = c_41;
                                          }
                                      }
                                    else
                                      {
                                        t = c_41;
                                        if(match_cons(t, sym_appl_2))
                                          {
                                            u_40 = ATgetArgument(t, 0);
                                            a_41 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = u_40;
                                        if(match_cons(t, sym_prod_3))
                                          {
                                            v_40 = ATgetArgument(t, 0);
                                            w_40 = ATgetArgument(t, 1);
                                            z_40 = ATgetArgument(t, 2);
                                          }
                                        else
                                          _fail(t);
                                        t = v_40;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = w_40;
                                        if(match_cons(t, sym_cf_1))
                                          {
                                            x_40 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = x_40;
                                        if(match_cons(t, sym_opt_1))
                                          {
                                            y_40 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = y_40;
                                        if(!(match_cons(t, sym_layout_0)))
                                          _fail(t);
                                        t = z_40;
                                        if(!(match_cons(t, sym_no_attrs_0)))
                                          _fail(t);
                                        t = a_41;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = d_41;
                                      }
                                  }
                                else
                                  {
                                    t = c_41;
                                    if(match_cons(t, sym_appl_2))
                                      {
                                        u_40 = ATgetArgument(t, 0);
                                        a_41 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = u_40;
                                    if(match_cons(t, sym_prod_3))
                                      {
                                        v_40 = ATgetArgument(t, 0);
                                        w_40 = ATgetArgument(t, 1);
                                        z_40 = ATgetArgument(t, 2);
                                      }
                                    else
                                      _fail(t);
                                    t = v_40;
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = w_40;
                                    if(match_cons(t, sym_cf_1))
                                      {
                                        x_40 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = x_40;
                                    if(match_cons(t, sym_opt_1))
                                      {
                                        y_40 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = y_40;
                                    if(!(match_cons(t, sym_layout_0)))
                                      _fail(t);
                                    t = z_40;
                                    if(!(match_cons(t, sym_no_attrs_0)))
                                      _fail(t);
                                    t = a_41;
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = d_41;
                                  }
                              }
                            else
                              {
                                t = c_41;
                                if(match_cons(t, sym_appl_2))
                                  {
                                    u_40 = ATgetArgument(t, 0);
                                    a_41 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = u_40;
                                if(match_cons(t, sym_prod_3))
                                  {
                                    v_40 = ATgetArgument(t, 0);
                                    w_40 = ATgetArgument(t, 1);
                                    z_40 = ATgetArgument(t, 2);
                                  }
                                else
                                  _fail(t);
                                t = v_40;
                                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                  _fail(t);
                                t = w_40;
                                if(match_cons(t, sym_cf_1))
                                  {
                                    x_40 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = x_40;
                                if(match_cons(t, sym_opt_1))
                                  {
                                    y_40 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = y_40;
                                if(!(match_cons(t, sym_layout_0)))
                                  _fail(t);
                                t = z_40;
                                if(!(match_cons(t, sym_no_attrs_0)))
                                  _fail(t);
                                t = a_41;
                                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                  _fail(t);
                                t = d_41;
                              }
                          }
                        else
                          {
                            t = c_41;
                            if(match_cons(t, sym_appl_2))
                              {
                                u_40 = ATgetArgument(t, 0);
                                a_41 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = u_40;
                            if(match_cons(t, sym_prod_3))
                              {
                                v_40 = ATgetArgument(t, 0);
                                w_40 = ATgetArgument(t, 1);
                                z_40 = ATgetArgument(t, 2);
                              }
                            else
                              _fail(t);
                            t = v_40;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = w_40;
                            if(match_cons(t, sym_cf_1))
                              {
                                x_40 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = x_40;
                            if(match_cons(t, sym_opt_1))
                              {
                                y_40 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = y_40;
                            if(!(match_cons(t, sym_layout_0)))
                              _fail(t);
                            t = z_40;
                            if(!(match_cons(t, sym_no_attrs_0)))
                              _fail(t);
                            t = a_41;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = d_41;
                          }
                      }
                    else
                      {
                        t = c_41;
                        if(match_cons(t, sym_appl_2))
                          {
                            u_40 = ATgetArgument(t, 0);
                            a_41 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = u_40;
                        if(match_cons(t, sym_prod_3))
                          {
                            v_40 = ATgetArgument(t, 0);
                            w_40 = ATgetArgument(t, 1);
                            z_40 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = v_40;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = w_40;
                        if(match_cons(t, sym_cf_1))
                          {
                            x_40 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = x_40;
                        if(match_cons(t, sym_opt_1))
                          {
                            y_40 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = y_40;
                        if(!(match_cons(t, sym_layout_0)))
                          _fail(t);
                        t = z_40;
                        if(!(match_cons(t, sym_no_attrs_0)))
                          _fail(t);
                        t = a_41;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = d_41;
                      }
                  }
                else
                  {
                    t = c_41;
                    if(match_cons(t, sym_appl_2))
                      {
                        u_40 = ATgetArgument(t, 0);
                        a_41 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = u_40;
                    if(match_cons(t, sym_prod_3))
                      {
                        v_40 = ATgetArgument(t, 0);
                        w_40 = ATgetArgument(t, 1);
                        z_40 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = v_40;
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    t = w_40;
                    if(match_cons(t, sym_cf_1))
                      {
                        x_40 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = x_40;
                    if(match_cons(t, sym_opt_1))
                      {
                        y_40 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = y_40;
                    if(!(match_cons(t, sym_layout_0)))
                      _fail(t);
                    t = z_40;
                    if(!(match_cons(t, sym_no_attrs_0)))
                      _fail(t);
                    t = a_41;
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    t = d_41;
                  }
              }
            else
              {
                t = c_41;
                if(match_cons(t, sym_appl_2))
                  {
                    u_40 = ATgetArgument(t, 0);
                    a_41 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = u_40;
                if(match_cons(t, sym_prod_3))
                  {
                    v_40 = ATgetArgument(t, 0);
                    w_40 = ATgetArgument(t, 1);
                    z_40 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = v_40;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = w_40;
                if(match_cons(t, sym_cf_1))
                  {
                    x_40 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = x_40;
                if(match_cons(t, sym_opt_1))
                  {
                    y_40 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = y_40;
                if(!(match_cons(t, sym_layout_0)))
                  _fail(t);
                t = z_40;
                if(!(match_cons(t, sym_no_attrs_0)))
                  _fail(t);
                t = a_41;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = d_41;
              }
          }
        else
          {
            t = c_41;
            if(match_cons(t, sym_appl_2))
              {
                u_40 = ATgetArgument(t, 0);
                a_41 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = u_40;
            if(match_cons(t, sym_prod_3))
              {
                v_40 = ATgetArgument(t, 0);
                w_40 = ATgetArgument(t, 1);
                z_40 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = v_40;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = w_40;
            if(match_cons(t, sym_cf_1))
              {
                x_40 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = x_40;
            if(match_cons(t, sym_opt_1))
              {
                y_40 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = y_40;
            if(!(match_cons(t, sym_layout_0)))
              _fail(t);
            t = z_40;
            if(!(match_cons(t, sym_no_attrs_0)))
              _fail(t);
            t = a_41;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = d_41;
          }
      }
    }
  return(t);
}
ATerm a_2 (ATerm t)
{
  t = term_k_7;
  return(t);
}
ATerm b_2 (ATerm t)
{
  t = term_j_7;
  return(t);
}
ATerm test1_0_0 (ATerm t)
{
  t = apply_test_4_0(y_1, z_1, a_2, b_2, t);
  return(t);
}
ATerm _2_0 (ATerm n_47 (ATerm), ATerm o_47 (ATerm), ATerm t)
{
  ATerm d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL,a_0 = NULL,b_0 = NULL;
  i_42 = t;
  if(match_cons(t, sym__2))
    {
      e_42 = ATgetArgument(t, 0);
      f_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_42);
  d_42 = t;
  t = e_42;
  t = n_47(t);
  g_42 = t;
  t = f_42;
  t = o_47(t);
  h_42 = t;
  b_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_42, h_42);
  a_0 = t;
  t = SSLsetAnnotations(a_0, d_42);
  return(t);
}
ATerm debug_1_0 (ATerm l_79 (ATerm), ATerm t)
{
  ATerm l_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL;
  l_42 = t;
  t = l_79(t);
  m_42 = t;
  t = term_m_2;
  n_42 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_42), m_42);
  o_42 = t;
  t = SSL_printnl(n_42, o_42);
  t = l_42;
  return(t);
}
ATerm c_2 (ATerm t)
{
  t = term_l_7;
  return(t);
}
ATerm d_2 (ATerm t)
{
  t = debug_1_0(f_2, t);
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = debug_1_0(g_2, t);
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = term_m_7;
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = term_n_7;
  return(t);
}
ATerm h_2 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  return(t);
}
ATerm test_suite_2_0 (ATerm u_59 (ATerm), ATerm v_59 (ATerm), ATerm t)
{
  t = u_59(t);
  t = debug_1_0(c_2, t);
  t = term_p_7;
  t = v_59(t);
  t = _2_0(d_2, e_2, t);
  t = _2_0(_id, h_2, t);
  return(t);
}
ATerm i_2 (ATerm t)
{
  t = term_q_7;
  return(t);
}
ATerm j_2 (ATerm t)
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
  t = test_suite_2_0(i_2, j_2, t);
  return(t);
}
