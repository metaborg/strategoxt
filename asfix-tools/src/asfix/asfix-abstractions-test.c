#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_stderr_0;
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
static void init_module_constructors (void)
{
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
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
}
ATerm term_y_6;
ATerm term_x_6;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_u_6;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_r_6;
ATerm term_o_6;
ATerm term_t_5;
ATerm term_s_5;
ATerm term_r_5;
ATerm term_o_4;
ATerm term_n_4;
ATerm term_m_4;
ATerm term_j_4;
ATerm term_g_4;
ATerm term_d_4;
ATerm term_c_4;
ATerm term_b_4;
ATerm term_y_3;
ATerm term_p_3;
ATerm term_o_3;
ATerm term_n_3;
ATerm term_m_3;
ATerm term_l_3;
ATerm term_k_3;
ATerm term_j_3;
ATerm term_i_3;
ATerm term_z_2;
ATerm term_y_2;
ATerm term_x_2;
ATerm term_w_2;
ATerm term_v_2;
ATerm term_u_2;
ATerm term_t_2;
ATerm term_s_2;
ATerm term_p_2;
ATerm term_o_2;
ATerm term_n_2;
ATerm term_m_2;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_m_2));
  term_m_2 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_2));
  term_n_2 = (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue));
  ATprotect(&(term_o_2));
  term_o_2 = (ATerm) ATmakeAppl(ATmakeSymbol("  succeeded; result: ", 0, ATtrue));
  ATprotect(&(term_p_2));
  term_p_2 = (ATerm) ATmakeAppl(ATmakeSymbol("test4", 0, ATtrue));
  ATprotect(&(term_s_2));
  term_s_2 = (ATerm) ATmakeAppl(sym_layout_0);
  ATprotect(&(term_t_2));
  term_t_2 = (ATerm) ATmakeAppl(sym_cf_1, term_s_2);
  ATprotect(&(term_u_2));
  term_u_2 = (ATerm) ATmakeAppl(sym_opt_1, term_s_2);
  ATprotect(&(term_v_2));
  term_v_2 = (ATerm) ATmakeAppl(sym_cf_1, term_u_2);
  ATprotect(&(term_w_2));
  term_w_2 = (ATerm) ATmakeAppl(sym_no_attrs_0);
  ATprotect(&(term_x_2));
  term_x_2 = (ATerm) ATmakeAppl(sym_lex_1, term_s_2);
  ATprotect(&(term_y_2));
  term_y_2 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_z_2));
  term_z_2 = (ATerm) ATmakeAppl(ATmakeSymbol("test3b", 0, ATtrue));
  ATprotect(&(term_i_3));
  term_i_3 = (ATerm) ATmakeAppl(sym_prod_3, (ATerm)ATempty, term_v_2, term_w_2);
  ATprotect(&(term_j_3));
  term_j_3 = (ATerm) ATmakeAppl(sym_appl_2, term_i_3, (ATerm) ATempty);
  ATprotect(&(term_k_3));
  term_k_3 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_l_3));
  term_l_3 = (ATerm) ATmakeAppl(sym_range_2, term_k_3, term_y_2);
  ATprotect(&(term_m_3));
  term_m_3 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_n_3));
  term_n_3 = (ATerm) ATmakeAppl(ATmakeSymbol("Layout", 0, ATtrue));
  ATprotect(&(term_o_3));
  term_o_3 = (ATerm) ATmakeAppl(sym_id_1, term_n_3);
  ATprotect(&(term_p_3));
  term_p_3 = (ATerm) ATmakeAppl(ATmakeSymbol("test3a", 0, ATtrue));
  ATprotect(&(term_y_3));
  term_y_3 = (ATerm) ATmakeAppl(ATmakeSymbol("test2e", 0, ATtrue));
  ATprotect(&(term_b_4));
  term_b_4 = (ATerm) ATmakeAppl(ATmakeSymbol("test2d", 0, ATtrue));
  ATprotect(&(term_c_4));
  term_c_4 = (ATerm) ATmakeAppl(ATmakeSymbol("test2c", 0, ATtrue));
  ATprotect(&(term_d_4));
  term_d_4 = (ATerm) ATmakeAppl(ATmakeSymbol("test2b", 0, ATtrue));
  ATprotect(&(term_g_4));
  term_g_4 = (ATerm) ATmakeAppl(ATmakeSymbol("test2a", 0, ATtrue));
  ATprotect(&(term_j_4));
  term_j_4 = (ATerm) ATmakeAppl(ATmakeSymbol("test1a", 0, ATtrue));
  ATprotect(&(term_m_4));
  term_m_4 = (ATerm) ATmakeAppl(sym__2, term_j_3, term_j_3);
  ATprotect(&(term_n_4));
  term_n_4 = (ATerm) ATmakeAppl(ATmakeSymbol("left", 0, ATtrue));
  ATprotect(&(term_o_4));
  term_o_4 = (ATerm) ATmakeAppl(sym_atr_1, term_n_4);
  ATprotect(&(term_r_5));
  term_r_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeAppl(ATmakeSymbol("  result not equal : ", 0, ATtrue));
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(ATmakeSymbol("  expected         : ", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("test1", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(sym__2, term_r_6, term_j_3);
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("test suite: ", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("successes: ", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("failures: ", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(sym__2, term_w_6, term_w_6);
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("asfix-abstractions-test", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm apply_and_show_3_0 (ATerm a_61 (ATerm), ATerm b_61 (ATerm), ATerm c_61 (ATerm), ATerm t);
static ATerm b_0 (ATerm t);
static ATerm f_0 (ATerm t);
static ATerm h_0 (ATerm t);
ATerm test4_0_0 (ATerm t);
static ATerm q_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm t_0 (ATerm t);
ATerm test3b_0_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm z_0 (ATerm t);
ATerm test3a_0_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
ATerm test2e_0_0 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
ATerm test2d_0_0 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
ATerm test2c_0_0 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
ATerm test2b_0_0 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
ATerm test2a_0_0 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
ATerm test1a_0_0 (ATerm t);
static ATerm n_0 (ATerm e_45, ATerm f_45, ATerm t);
ATerm conc_layout1_0_0 (ATerm t);
static ATerm o_0 (ATerm p_26, ATerm q_26, ATerm t);
ATerm do_test_2_0 (ATerm e_60 (ATerm), ATerm f_60 (ATerm), ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
ATerm apply_test_4_0 (ATerm i_60 (ATerm), ATerm j_60 (ATerm), ATerm k_60 (ATerm), ATerm l_60 (ATerm), ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
ATerm test1_0_0 (ATerm t);
ATerm debug_1_0 (ATerm e_81 (ATerm), ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
ATerm test_suite_2_0 (ATerm c_60 (ATerm), ATerm d_60 (ATerm), ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm apply_and_show_3_0 (ATerm a_61 (ATerm), ATerm b_61 (ATerm), ATerm c_61 (ATerm), ATerm t)
{
  static ATerm a_0 (ATerm t)
  {
    ATerm e_0 = NULL,g_0 = NULL,i_0 = NULL;
    ATerm k_2 = t;
    int l_2 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_61(t);
        t = b_61(t);
        LocalPopChoice(l_2);
      }
    else
      {
        t = k_2;
        {
          ATerm j_0 = NULL,l_0 = NULL;
          t = term_m_2;
          j_0 = t;
          t = (ATerm) ATinsert(ATempty, term_n_2);
          l_0 = t;
          t = SSL_printnl(j_0, l_0);
          t = term_n_2;
          _fail(t);
        }
      }
    e_0 = t;
    t = term_m_2;
    g_0 = t;
    t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATempty, e_0), term_o_2));
    i_0 = t;
    t = SSL_printnl(g_0, i_0);
    t = (ATerm) ATinsert(ATinsert(ATempty, e_0), term_o_2);
    return(t);
  }
  t = do_test_2_0(a_61, a_0, t);
  return(t);
}
static ATerm b_0 (ATerm t)
{
  t = term_p_2;
  return(t);
}
static ATerm f_0 (ATerm t)
{
  ATerm q_2 = t;
  int r_2 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_layout1_0_0(t);
      LocalPopChoice(r_2);
    }
  else
    {
      t = q_2;
      {
        ATerm u_5 = NULL,v_5 = NULL,x_5 = NULL,y_5 = NULL,z_5 = NULL,a_6 = NULL,b_6 = NULL,d_6 = NULL,e_6 = NULL,f_6 = NULL,g_6 = NULL,h_6 = NULL,i_6 = NULL,j_6 = NULL,m_6 = NULL,n_6 = NULL;
        if(match_cons(t, sym__2))
          {
            d_6 = ATgetArgument(t, 0);
            e_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_6;
        if(match_cons(t, sym_appl_2))
          {
            f_6 = ATgetArgument(t, 0);
            n_6 = ATgetArgument(t, 1);
            t = n_6;
            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
              {
                t = f_6;
                if(match_cons(t, sym_prod_3))
                  {
                    g_6 = ATgetArgument(t, 0);
                    h_6 = ATgetArgument(t, 1);
                    m_6 = ATgetArgument(t, 2);
                    t = m_6;
                    if(match_cons(t, sym_no_attrs_0))
                      {
                        t = h_6;
                        if(match_cons(t, sym_cf_1))
                          {
                            i_6 = ATgetArgument(t, 0);
                            t = i_6;
                            if(match_cons(t, sym_opt_1))
                              {
                                j_6 = ATgetArgument(t, 0);
                                t = j_6;
                                if(match_cons(t, sym_layout_0))
                                  {
                                    t = g_6;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = d_6;
                                        if(match_cons(t, sym_appl_2))
                                          {
                                            u_5 = ATgetArgument(t, 0);
                                            b_6 = ATgetArgument(t, 1);
                                            t = b_6;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                t = u_5;
                                                if(match_cons(t, sym_prod_3))
                                                  {
                                                    v_5 = ATgetArgument(t, 0);
                                                    x_5 = ATgetArgument(t, 1);
                                                    a_6 = ATgetArgument(t, 2);
                                                    t = a_6;
                                                    if(match_cons(t, sym_no_attrs_0))
                                                      {
                                                        t = x_5;
                                                        if(match_cons(t, sym_cf_1))
                                                          {
                                                            y_5 = ATgetArgument(t, 0);
                                                            t = y_5;
                                                            if(match_cons(t, sym_opt_1))
                                                              {
                                                                z_5 = ATgetArgument(t, 0);
                                                                t = z_5;
                                                                if(match_cons(t, sym_layout_0))
                                                                  {
                                                                    t = v_5;
                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                      {
                                                                        t = e_6;
                                                                      }
                                                                    else
                                                                      {
                                                                        t = d_6;
                                                                      }
                                                                  }
                                                                else
                                                                  {
                                                                    t = d_6;
                                                                  }
                                                              }
                                                            else
                                                              {
                                                                t = d_6;
                                                              }
                                                          }
                                                        else
                                                          {
                                                            t = d_6;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = d_6;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = d_6;
                                                  }
                                              }
                                            else
                                              {
                                                t = d_6;
                                              }
                                          }
                                        else
                                          {
                                            t = d_6;
                                          }
                                      }
                                    else
                                      {
                                        t = d_6;
                                        if(match_cons(t, sym_appl_2))
                                          {
                                            u_5 = ATgetArgument(t, 0);
                                            b_6 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = u_5;
                                        if(match_cons(t, sym_prod_3))
                                          {
                                            v_5 = ATgetArgument(t, 0);
                                            x_5 = ATgetArgument(t, 1);
                                            a_6 = ATgetArgument(t, 2);
                                          }
                                        else
                                          _fail(t);
                                        t = v_5;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = x_5;
                                        if(match_cons(t, sym_cf_1))
                                          {
                                            y_5 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = y_5;
                                        if(match_cons(t, sym_opt_1))
                                          {
                                            z_5 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = z_5;
                                        if(!(match_cons(t, sym_layout_0)))
                                          _fail(t);
                                        t = a_6;
                                        if(!(match_cons(t, sym_no_attrs_0)))
                                          _fail(t);
                                        t = b_6;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = e_6;
                                      }
                                  }
                                else
                                  {
                                    t = d_6;
                                    if(match_cons(t, sym_appl_2))
                                      {
                                        u_5 = ATgetArgument(t, 0);
                                        b_6 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = u_5;
                                    if(match_cons(t, sym_prod_3))
                                      {
                                        v_5 = ATgetArgument(t, 0);
                                        x_5 = ATgetArgument(t, 1);
                                        a_6 = ATgetArgument(t, 2);
                                      }
                                    else
                                      _fail(t);
                                    t = v_5;
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = x_5;
                                    if(match_cons(t, sym_cf_1))
                                      {
                                        y_5 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = y_5;
                                    if(match_cons(t, sym_opt_1))
                                      {
                                        z_5 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = z_5;
                                    if(!(match_cons(t, sym_layout_0)))
                                      _fail(t);
                                    t = a_6;
                                    if(!(match_cons(t, sym_no_attrs_0)))
                                      _fail(t);
                                    t = b_6;
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = e_6;
                                  }
                              }
                            else
                              {
                                t = d_6;
                                if(match_cons(t, sym_appl_2))
                                  {
                                    u_5 = ATgetArgument(t, 0);
                                    b_6 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = u_5;
                                if(match_cons(t, sym_prod_3))
                                  {
                                    v_5 = ATgetArgument(t, 0);
                                    x_5 = ATgetArgument(t, 1);
                                    a_6 = ATgetArgument(t, 2);
                                  }
                                else
                                  _fail(t);
                                t = v_5;
                                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                  _fail(t);
                                t = x_5;
                                if(match_cons(t, sym_cf_1))
                                  {
                                    y_5 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = y_5;
                                if(match_cons(t, sym_opt_1))
                                  {
                                    z_5 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = z_5;
                                if(!(match_cons(t, sym_layout_0)))
                                  _fail(t);
                                t = a_6;
                                if(!(match_cons(t, sym_no_attrs_0)))
                                  _fail(t);
                                t = b_6;
                                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                  _fail(t);
                                t = e_6;
                              }
                          }
                        else
                          {
                            t = d_6;
                            if(match_cons(t, sym_appl_2))
                              {
                                u_5 = ATgetArgument(t, 0);
                                b_6 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = u_5;
                            if(match_cons(t, sym_prod_3))
                              {
                                v_5 = ATgetArgument(t, 0);
                                x_5 = ATgetArgument(t, 1);
                                a_6 = ATgetArgument(t, 2);
                              }
                            else
                              _fail(t);
                            t = v_5;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = x_5;
                            if(match_cons(t, sym_cf_1))
                              {
                                y_5 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = y_5;
                            if(match_cons(t, sym_opt_1))
                              {
                                z_5 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = z_5;
                            if(!(match_cons(t, sym_layout_0)))
                              _fail(t);
                            t = a_6;
                            if(!(match_cons(t, sym_no_attrs_0)))
                              _fail(t);
                            t = b_6;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = e_6;
                          }
                      }
                    else
                      {
                        t = d_6;
                        if(match_cons(t, sym_appl_2))
                          {
                            u_5 = ATgetArgument(t, 0);
                            b_6 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = u_5;
                        if(match_cons(t, sym_prod_3))
                          {
                            v_5 = ATgetArgument(t, 0);
                            x_5 = ATgetArgument(t, 1);
                            a_6 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = v_5;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = x_5;
                        if(match_cons(t, sym_cf_1))
                          {
                            y_5 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = y_5;
                        if(match_cons(t, sym_opt_1))
                          {
                            z_5 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = z_5;
                        if(!(match_cons(t, sym_layout_0)))
                          _fail(t);
                        t = a_6;
                        if(!(match_cons(t, sym_no_attrs_0)))
                          _fail(t);
                        t = b_6;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = e_6;
                      }
                  }
                else
                  {
                    t = d_6;
                    if(match_cons(t, sym_appl_2))
                      {
                        u_5 = ATgetArgument(t, 0);
                        b_6 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = u_5;
                    if(match_cons(t, sym_prod_3))
                      {
                        v_5 = ATgetArgument(t, 0);
                        x_5 = ATgetArgument(t, 1);
                        a_6 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = v_5;
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    t = x_5;
                    if(match_cons(t, sym_cf_1))
                      {
                        y_5 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = y_5;
                    if(match_cons(t, sym_opt_1))
                      {
                        z_5 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = z_5;
                    if(!(match_cons(t, sym_layout_0)))
                      _fail(t);
                    t = a_6;
                    if(!(match_cons(t, sym_no_attrs_0)))
                      _fail(t);
                    t = b_6;
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    t = e_6;
                  }
              }
            else
              {
                t = d_6;
                if(match_cons(t, sym_appl_2))
                  {
                    u_5 = ATgetArgument(t, 0);
                    b_6 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = u_5;
                if(match_cons(t, sym_prod_3))
                  {
                    v_5 = ATgetArgument(t, 0);
                    x_5 = ATgetArgument(t, 1);
                    a_6 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = v_5;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = x_5;
                if(match_cons(t, sym_cf_1))
                  {
                    y_5 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = y_5;
                if(match_cons(t, sym_opt_1))
                  {
                    z_5 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = z_5;
                if(!(match_cons(t, sym_layout_0)))
                  _fail(t);
                t = a_6;
                if(!(match_cons(t, sym_no_attrs_0)))
                  _fail(t);
                t = b_6;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = e_6;
              }
          }
        else
          {
            t = d_6;
            if(match_cons(t, sym_appl_2))
              {
                u_5 = ATgetArgument(t, 0);
                b_6 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = u_5;
            if(match_cons(t, sym_prod_3))
              {
                v_5 = ATgetArgument(t, 0);
                x_5 = ATgetArgument(t, 1);
                a_6 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = v_5;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = x_5;
            if(match_cons(t, sym_cf_1))
              {
                y_5 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = y_5;
            if(match_cons(t, sym_opt_1))
              {
                z_5 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = z_5;
            if(!(match_cons(t, sym_layout_0)))
              _fail(t);
            t = a_6;
            if(!(match_cons(t, sym_no_attrs_0)))
              _fail(t);
            t = b_6;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = e_6;
          }
      }
    }
  return(t);
}
static ATerm h_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_t_2), term_v_2, term_w_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_x_2), term_t_2, term_w_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term_y_2))), term_x_2, term_w_2), (ATerm) ATinsert(ATempty, term_y_2)))))), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_t_2), term_v_2, term_w_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_x_2), term_t_2, term_w_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term_y_2))), term_x_2, term_w_2), (ATerm) ATinsert(ATempty, term_y_2)))))));
  return(t);
}
ATerm test4_0_0 (ATerm t)
{
  t = apply_and_show_3_0(b_0, f_0, h_0, t);
  return(t);
}
static ATerm q_0 (ATerm t)
{
  t = term_z_2;
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm g_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_3 = ATgetArgument(t, 0);
      if(match_cons(a_3, sym_appl_2))
        {
          ATerm b_3 = ATgetArgument(a_3, 0);
          if(match_cons(b_3, sym_prod_3))
            {
              ATerm d_3 = ATgetArgument(b_3, 0);
              if(((ATgetType(d_3) != AT_LIST) || !(ATisEmpty(d_3))))
                _fail(t);
              {
                ATerm e_3 = ATgetArgument(b_3, 1);
                if(match_cons(e_3, sym_cf_1))
                  {
                    ATerm g_3 = ATgetArgument(e_3, 0);
                    if(match_cons(g_3, sym_opt_1))
                      {
                        ATerm h_3 = ATgetArgument(g_3, 0);
                        if(!(match_cons(h_3, sym_layout_0)))
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
              {
                ATerm f_3 = ATgetArgument(b_3, 2);
                if(!(match_cons(f_3, sym_no_attrs_0)))
                  _fail(t);
              }
            }
          else
            _fail(t);
          {
            ATerm c_3 = ATgetArgument(a_3, 1);
            if(((ATgetType(c_3) != AT_LIST) || !(ATisEmpty(c_3))))
              _fail(t);
          }
        }
      else
        _fail(t);
      g_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_7;
  return(t);
}
static ATerm s_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_j_3, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_x_2), term_t_2, term_w_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_m_3), term_l_3))), term_x_2, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_o_3))), (ATerm) ATinsert(ATempty, term_y_2)))));
  return(t);
}
static ATerm t_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_x_2), term_t_2, term_w_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_m_3), term_l_3))), term_x_2, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_o_3))), (ATerm) ATinsert(ATempty, term_y_2))));
  return(t);
}
ATerm test3b_0_0 (ATerm t)
{
  t = apply_test_4_0(q_0, r_0, s_0, t_0, t);
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = term_p_3;
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm h_7 = NULL;
  if(match_cons(t, sym__2))
    {
      h_7 = ATgetArgument(t, 0);
      {
        ATerm q_3 = ATgetArgument(t, 1);
        if(match_cons(q_3, sym_appl_2))
          {
            ATerm r_3 = ATgetArgument(q_3, 0);
            if(match_cons(r_3, sym_prod_3))
              {
                ATerm t_3 = ATgetArgument(r_3, 0);
                if(((ATgetType(t_3) != AT_LIST) || !(ATisEmpty(t_3))))
                  _fail(t);
                {
                  ATerm u_3 = ATgetArgument(r_3, 1);
                  if(match_cons(u_3, sym_cf_1))
                    {
                      ATerm w_3 = ATgetArgument(u_3, 0);
                      if(match_cons(w_3, sym_opt_1))
                        {
                          ATerm x_3 = ATgetArgument(w_3, 0);
                          if(!(match_cons(x_3, sym_layout_0)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
                {
                  ATerm v_3 = ATgetArgument(r_3, 2);
                  if(!(match_cons(v_3, sym_no_attrs_0)))
                    _fail(t);
                }
              }
            else
              _fail(t);
            {
              ATerm s_3 = ATgetArgument(q_3, 1);
              if(((ATgetType(s_3) != AT_LIST) || !(ATisEmpty(s_3))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_7;
  return(t);
}
static ATerm y_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_x_2), term_t_2, term_w_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_m_3), term_l_3))), term_x_2, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_o_3))), (ATerm) ATinsert(ATempty, term_y_2)))), term_j_3);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_x_2), term_t_2, term_w_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_m_3), term_l_3))), term_x_2, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_o_3))), (ATerm) ATinsert(ATempty, term_y_2))));
  return(t);
}
ATerm test3a_0_0 (ATerm t)
{
  t = apply_test_4_0(w_0, x_0, y_0, z_0, t);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  t = term_y_3;
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm z_3 = t;
  int a_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_layout1_0_0(t);
      LocalPopChoice(a_4);
    }
  else
    {
      t = z_3;
      {
        ATerm x_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL,d_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL,i_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL;
        if(match_cons(t, sym__2))
          {
            f_11 = ATgetArgument(t, 0);
            g_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_11;
        if(match_cons(t, sym_appl_2))
          {
            h_11 = ATgetArgument(t, 0);
            n_11 = ATgetArgument(t, 1);
            t = n_11;
            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
              {
                t = h_11;
                if(match_cons(t, sym_prod_3))
                  {
                    i_11 = ATgetArgument(t, 0);
                    j_11 = ATgetArgument(t, 1);
                    m_11 = ATgetArgument(t, 2);
                    t = m_11;
                    if(match_cons(t, sym_no_attrs_0))
                      {
                        t = j_11;
                        if(match_cons(t, sym_cf_1))
                          {
                            k_11 = ATgetArgument(t, 0);
                            t = k_11;
                            if(match_cons(t, sym_opt_1))
                              {
                                l_11 = ATgetArgument(t, 0);
                                t = l_11;
                                if(match_cons(t, sym_layout_0))
                                  {
                                    t = i_11;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = f_11;
                                        if(match_cons(t, sym_appl_2))
                                          {
                                            x_10 = ATgetArgument(t, 0);
                                            d_11 = ATgetArgument(t, 1);
                                            t = d_11;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                t = x_10;
                                                if(match_cons(t, sym_prod_3))
                                                  {
                                                    y_10 = ATgetArgument(t, 0);
                                                    z_10 = ATgetArgument(t, 1);
                                                    c_11 = ATgetArgument(t, 2);
                                                    t = c_11;
                                                    if(match_cons(t, sym_no_attrs_0))
                                                      {
                                                        t = z_10;
                                                        if(match_cons(t, sym_cf_1))
                                                          {
                                                            a_11 = ATgetArgument(t, 0);
                                                            t = a_11;
                                                            if(match_cons(t, sym_opt_1))
                                                              {
                                                                b_11 = ATgetArgument(t, 0);
                                                                t = b_11;
                                                                if(match_cons(t, sym_layout_0))
                                                                  {
                                                                    t = y_10;
                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                      {
                                                                        t = g_11;
                                                                      }
                                                                    else
                                                                      {
                                                                        t = f_11;
                                                                      }
                                                                  }
                                                                else
                                                                  {
                                                                    t = f_11;
                                                                  }
                                                              }
                                                            else
                                                              {
                                                                t = f_11;
                                                              }
                                                          }
                                                        else
                                                          {
                                                            t = f_11;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = f_11;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = f_11;
                                                  }
                                              }
                                            else
                                              {
                                                t = f_11;
                                              }
                                          }
                                        else
                                          {
                                            t = f_11;
                                          }
                                      }
                                    else
                                      {
                                        t = f_11;
                                        if(match_cons(t, sym_appl_2))
                                          {
                                            x_10 = ATgetArgument(t, 0);
                                            d_11 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = x_10;
                                        if(match_cons(t, sym_prod_3))
                                          {
                                            y_10 = ATgetArgument(t, 0);
                                            z_10 = ATgetArgument(t, 1);
                                            c_11 = ATgetArgument(t, 2);
                                          }
                                        else
                                          _fail(t);
                                        t = y_10;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = z_10;
                                        if(match_cons(t, sym_cf_1))
                                          {
                                            a_11 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = a_11;
                                        if(match_cons(t, sym_opt_1))
                                          {
                                            b_11 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = b_11;
                                        if(!(match_cons(t, sym_layout_0)))
                                          _fail(t);
                                        t = c_11;
                                        if(!(match_cons(t, sym_no_attrs_0)))
                                          _fail(t);
                                        t = d_11;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = g_11;
                                      }
                                  }
                                else
                                  {
                                    t = f_11;
                                    if(match_cons(t, sym_appl_2))
                                      {
                                        x_10 = ATgetArgument(t, 0);
                                        d_11 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = x_10;
                                    if(match_cons(t, sym_prod_3))
                                      {
                                        y_10 = ATgetArgument(t, 0);
                                        z_10 = ATgetArgument(t, 1);
                                        c_11 = ATgetArgument(t, 2);
                                      }
                                    else
                                      _fail(t);
                                    t = y_10;
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = z_10;
                                    if(match_cons(t, sym_cf_1))
                                      {
                                        a_11 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = a_11;
                                    if(match_cons(t, sym_opt_1))
                                      {
                                        b_11 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = b_11;
                                    if(!(match_cons(t, sym_layout_0)))
                                      _fail(t);
                                    t = c_11;
                                    if(!(match_cons(t, sym_no_attrs_0)))
                                      _fail(t);
                                    t = d_11;
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = g_11;
                                  }
                              }
                            else
                              {
                                t = f_11;
                                if(match_cons(t, sym_appl_2))
                                  {
                                    x_10 = ATgetArgument(t, 0);
                                    d_11 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = x_10;
                                if(match_cons(t, sym_prod_3))
                                  {
                                    y_10 = ATgetArgument(t, 0);
                                    z_10 = ATgetArgument(t, 1);
                                    c_11 = ATgetArgument(t, 2);
                                  }
                                else
                                  _fail(t);
                                t = y_10;
                                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                  _fail(t);
                                t = z_10;
                                if(match_cons(t, sym_cf_1))
                                  {
                                    a_11 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = a_11;
                                if(match_cons(t, sym_opt_1))
                                  {
                                    b_11 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = b_11;
                                if(!(match_cons(t, sym_layout_0)))
                                  _fail(t);
                                t = c_11;
                                if(!(match_cons(t, sym_no_attrs_0)))
                                  _fail(t);
                                t = d_11;
                                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                  _fail(t);
                                t = g_11;
                              }
                          }
                        else
                          {
                            t = f_11;
                            if(match_cons(t, sym_appl_2))
                              {
                                x_10 = ATgetArgument(t, 0);
                                d_11 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = x_10;
                            if(match_cons(t, sym_prod_3))
                              {
                                y_10 = ATgetArgument(t, 0);
                                z_10 = ATgetArgument(t, 1);
                                c_11 = ATgetArgument(t, 2);
                              }
                            else
                              _fail(t);
                            t = y_10;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = z_10;
                            if(match_cons(t, sym_cf_1))
                              {
                                a_11 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = a_11;
                            if(match_cons(t, sym_opt_1))
                              {
                                b_11 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = b_11;
                            if(!(match_cons(t, sym_layout_0)))
                              _fail(t);
                            t = c_11;
                            if(!(match_cons(t, sym_no_attrs_0)))
                              _fail(t);
                            t = d_11;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = g_11;
                          }
                      }
                    else
                      {
                        t = f_11;
                        if(match_cons(t, sym_appl_2))
                          {
                            x_10 = ATgetArgument(t, 0);
                            d_11 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = x_10;
                        if(match_cons(t, sym_prod_3))
                          {
                            y_10 = ATgetArgument(t, 0);
                            z_10 = ATgetArgument(t, 1);
                            c_11 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = y_10;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = z_10;
                        if(match_cons(t, sym_cf_1))
                          {
                            a_11 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = a_11;
                        if(match_cons(t, sym_opt_1))
                          {
                            b_11 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = b_11;
                        if(!(match_cons(t, sym_layout_0)))
                          _fail(t);
                        t = c_11;
                        if(!(match_cons(t, sym_no_attrs_0)))
                          _fail(t);
                        t = d_11;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = g_11;
                      }
                  }
                else
                  {
                    t = f_11;
                    if(match_cons(t, sym_appl_2))
                      {
                        x_10 = ATgetArgument(t, 0);
                        d_11 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = x_10;
                    if(match_cons(t, sym_prod_3))
                      {
                        y_10 = ATgetArgument(t, 0);
                        z_10 = ATgetArgument(t, 1);
                        c_11 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = y_10;
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    t = z_10;
                    if(match_cons(t, sym_cf_1))
                      {
                        a_11 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = a_11;
                    if(match_cons(t, sym_opt_1))
                      {
                        b_11 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = b_11;
                    if(!(match_cons(t, sym_layout_0)))
                      _fail(t);
                    t = c_11;
                    if(!(match_cons(t, sym_no_attrs_0)))
                      _fail(t);
                    t = d_11;
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    t = g_11;
                  }
              }
            else
              {
                t = f_11;
                if(match_cons(t, sym_appl_2))
                  {
                    x_10 = ATgetArgument(t, 0);
                    d_11 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = x_10;
                if(match_cons(t, sym_prod_3))
                  {
                    y_10 = ATgetArgument(t, 0);
                    z_10 = ATgetArgument(t, 1);
                    c_11 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = y_10;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = z_10;
                if(match_cons(t, sym_cf_1))
                  {
                    a_11 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = a_11;
                if(match_cons(t, sym_opt_1))
                  {
                    b_11 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = b_11;
                if(!(match_cons(t, sym_layout_0)))
                  _fail(t);
                t = c_11;
                if(!(match_cons(t, sym_no_attrs_0)))
                  _fail(t);
                t = d_11;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = g_11;
              }
          }
        else
          {
            t = f_11;
            if(match_cons(t, sym_appl_2))
              {
                x_10 = ATgetArgument(t, 0);
                d_11 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = x_10;
            if(match_cons(t, sym_prod_3))
              {
                y_10 = ATgetArgument(t, 0);
                z_10 = ATgetArgument(t, 1);
                c_11 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = y_10;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = z_10;
            if(match_cons(t, sym_cf_1))
              {
                a_11 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = a_11;
            if(match_cons(t, sym_opt_1))
              {
                b_11 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = b_11;
            if(!(match_cons(t, sym_layout_0)))
              _fail(t);
            t = c_11;
            if(!(match_cons(t, sym_no_attrs_0)))
              _fail(t);
            t = d_11;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = g_11;
          }
      }
    }
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_x_2), term_t_2, term_w_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_m_3), term_l_3))), term_x_2, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_o_3))), (ATerm) ATinsert(ATempty, term_y_2)))), term_j_3);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_x_2), term_t_2, term_w_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_m_3), term_l_3))), term_x_2, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_o_3))), (ATerm) ATinsert(ATempty, term_y_2))));
  return(t);
}
ATerm test2e_0_0 (ATerm t)
{
  t = apply_test_4_0(a_1, b_1, c_1, d_1, t);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  t = term_b_4;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm x_15 = NULL,y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL;
  if(match_cons(t, sym__2))
    {
      f_16 = ATgetArgument(t, 0);
      g_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_16;
  if(match_cons(t, sym_appl_2))
    {
      h_16 = ATgetArgument(t, 0);
      n_16 = ATgetArgument(t, 1);
      t = n_16;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = h_16;
          if(match_cons(t, sym_prod_3))
            {
              i_16 = ATgetArgument(t, 0);
              j_16 = ATgetArgument(t, 1);
              m_16 = ATgetArgument(t, 2);
              t = m_16;
              if(match_cons(t, sym_no_attrs_0))
                {
                  t = j_16;
                  if(match_cons(t, sym_cf_1))
                    {
                      k_16 = ATgetArgument(t, 0);
                      t = k_16;
                      if(match_cons(t, sym_opt_1))
                        {
                          l_16 = ATgetArgument(t, 0);
                          t = l_16;
                          if(match_cons(t, sym_layout_0))
                            {
                              t = i_16;
                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                {
                                  t = f_16;
                                  if(match_cons(t, sym_appl_2))
                                    {
                                      x_15 = ATgetArgument(t, 0);
                                      d_16 = ATgetArgument(t, 1);
                                      t = d_16;
                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                        {
                                          t = x_15;
                                          if(match_cons(t, sym_prod_3))
                                            {
                                              y_15 = ATgetArgument(t, 0);
                                              z_15 = ATgetArgument(t, 1);
                                              c_16 = ATgetArgument(t, 2);
                                              t = c_16;
                                              if(match_cons(t, sym_no_attrs_0))
                                                {
                                                  t = z_15;
                                                  if(match_cons(t, sym_cf_1))
                                                    {
                                                      a_16 = ATgetArgument(t, 0);
                                                      t = a_16;
                                                      if(match_cons(t, sym_opt_1))
                                                        {
                                                          b_16 = ATgetArgument(t, 0);
                                                          t = b_16;
                                                          if(match_cons(t, sym_layout_0))
                                                            {
                                                              t = y_15;
                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                {
                                                                  t = g_16;
                                                                }
                                                              else
                                                                {
                                                                  t = f_16;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              t = f_16;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          t = f_16;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      t = f_16;
                                                    }
                                                }
                                              else
                                                {
                                                  t = f_16;
                                                }
                                            }
                                          else
                                            {
                                              t = f_16;
                                            }
                                        }
                                      else
                                        {
                                          t = f_16;
                                        }
                                    }
                                  else
                                    {
                                      t = f_16;
                                    }
                                }
                              else
                                {
                                  t = f_16;
                                  if(match_cons(t, sym_appl_2))
                                    {
                                      x_15 = ATgetArgument(t, 0);
                                      d_16 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = x_15;
                                  if(match_cons(t, sym_prod_3))
                                    {
                                      y_15 = ATgetArgument(t, 0);
                                      z_15 = ATgetArgument(t, 1);
                                      c_16 = ATgetArgument(t, 2);
                                    }
                                  else
                                    _fail(t);
                                  t = y_15;
                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                    _fail(t);
                                  t = z_15;
                                  if(match_cons(t, sym_cf_1))
                                    {
                                      a_16 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = a_16;
                                  if(match_cons(t, sym_opt_1))
                                    {
                                      b_16 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = b_16;
                                  if(!(match_cons(t, sym_layout_0)))
                                    _fail(t);
                                  t = c_16;
                                  if(!(match_cons(t, sym_no_attrs_0)))
                                    _fail(t);
                                  t = d_16;
                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                    _fail(t);
                                  t = g_16;
                                }
                            }
                          else
                            {
                              t = f_16;
                              if(match_cons(t, sym_appl_2))
                                {
                                  x_15 = ATgetArgument(t, 0);
                                  d_16 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = x_15;
                              if(match_cons(t, sym_prod_3))
                                {
                                  y_15 = ATgetArgument(t, 0);
                                  z_15 = ATgetArgument(t, 1);
                                  c_16 = ATgetArgument(t, 2);
                                }
                              else
                                _fail(t);
                              t = y_15;
                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                _fail(t);
                              t = z_15;
                              if(match_cons(t, sym_cf_1))
                                {
                                  a_16 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = a_16;
                              if(match_cons(t, sym_opt_1))
                                {
                                  b_16 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = b_16;
                              if(!(match_cons(t, sym_layout_0)))
                                _fail(t);
                              t = c_16;
                              if(!(match_cons(t, sym_no_attrs_0)))
                                _fail(t);
                              t = d_16;
                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                _fail(t);
                              t = g_16;
                            }
                        }
                      else
                        {
                          t = f_16;
                          if(match_cons(t, sym_appl_2))
                            {
                              x_15 = ATgetArgument(t, 0);
                              d_16 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = x_15;
                          if(match_cons(t, sym_prod_3))
                            {
                              y_15 = ATgetArgument(t, 0);
                              z_15 = ATgetArgument(t, 1);
                              c_16 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          t = y_15;
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = z_15;
                          if(match_cons(t, sym_cf_1))
                            {
                              a_16 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = a_16;
                          if(match_cons(t, sym_opt_1))
                            {
                              b_16 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = b_16;
                          if(!(match_cons(t, sym_layout_0)))
                            _fail(t);
                          t = c_16;
                          if(!(match_cons(t, sym_no_attrs_0)))
                            _fail(t);
                          t = d_16;
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = g_16;
                        }
                    }
                  else
                    {
                      t = f_16;
                      if(match_cons(t, sym_appl_2))
                        {
                          x_15 = ATgetArgument(t, 0);
                          d_16 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = x_15;
                      if(match_cons(t, sym_prod_3))
                        {
                          y_15 = ATgetArgument(t, 0);
                          z_15 = ATgetArgument(t, 1);
                          c_16 = ATgetArgument(t, 2);
                        }
                      else
                        _fail(t);
                      t = y_15;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = z_15;
                      if(match_cons(t, sym_cf_1))
                        {
                          a_16 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = a_16;
                      if(match_cons(t, sym_opt_1))
                        {
                          b_16 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = b_16;
                      if(!(match_cons(t, sym_layout_0)))
                        _fail(t);
                      t = c_16;
                      if(!(match_cons(t, sym_no_attrs_0)))
                        _fail(t);
                      t = d_16;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = g_16;
                    }
                }
              else
                {
                  t = f_16;
                  if(match_cons(t, sym_appl_2))
                    {
                      x_15 = ATgetArgument(t, 0);
                      d_16 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = x_15;
                  if(match_cons(t, sym_prod_3))
                    {
                      y_15 = ATgetArgument(t, 0);
                      z_15 = ATgetArgument(t, 1);
                      c_16 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = y_15;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = z_15;
                  if(match_cons(t, sym_cf_1))
                    {
                      a_16 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = a_16;
                  if(match_cons(t, sym_opt_1))
                    {
                      b_16 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = b_16;
                  if(!(match_cons(t, sym_layout_0)))
                    _fail(t);
                  t = c_16;
                  if(!(match_cons(t, sym_no_attrs_0)))
                    _fail(t);
                  t = d_16;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = g_16;
                }
            }
          else
            {
              t = f_16;
              if(match_cons(t, sym_appl_2))
                {
                  x_15 = ATgetArgument(t, 0);
                  d_16 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = x_15;
              if(match_cons(t, sym_prod_3))
                {
                  y_15 = ATgetArgument(t, 0);
                  z_15 = ATgetArgument(t, 1);
                  c_16 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = y_15;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = z_15;
              if(match_cons(t, sym_cf_1))
                {
                  a_16 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = a_16;
              if(match_cons(t, sym_opt_1))
                {
                  b_16 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = b_16;
              if(!(match_cons(t, sym_layout_0)))
                _fail(t);
              t = c_16;
              if(!(match_cons(t, sym_no_attrs_0)))
                _fail(t);
              t = d_16;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = g_16;
            }
        }
      else
        {
          t = f_16;
          if(match_cons(t, sym_appl_2))
            {
              x_15 = ATgetArgument(t, 0);
              d_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = x_15;
          if(match_cons(t, sym_prod_3))
            {
              y_15 = ATgetArgument(t, 0);
              z_15 = ATgetArgument(t, 1);
              c_16 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = y_15;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = z_15;
          if(match_cons(t, sym_cf_1))
            {
              a_16 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = a_16;
          if(match_cons(t, sym_opt_1))
            {
              b_16 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_16;
          if(!(match_cons(t, sym_layout_0)))
            _fail(t);
          t = c_16;
          if(!(match_cons(t, sym_no_attrs_0)))
            _fail(t);
          t = d_16;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = g_16;
        }
    }
  else
    {
      t = f_16;
      if(match_cons(t, sym_appl_2))
        {
          x_15 = ATgetArgument(t, 0);
          d_16 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = x_15;
      if(match_cons(t, sym_prod_3))
        {
          y_15 = ATgetArgument(t, 0);
          z_15 = ATgetArgument(t, 1);
          c_16 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = y_15;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = z_15;
      if(match_cons(t, sym_cf_1))
        {
          a_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_16;
      if(match_cons(t, sym_opt_1))
        {
          b_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_16;
      if(!(match_cons(t, sym_layout_0)))
        _fail(t);
      t = c_16;
      if(!(match_cons(t, sym_no_attrs_0)))
        _fail(t);
      t = d_16;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = g_16;
    }
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_j_3, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_x_2), term_t_2, term_w_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_m_3), term_l_3))), term_x_2, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_o_3))), (ATerm) ATinsert(ATempty, term_y_2)))));
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_x_2), term_t_2, term_w_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_m_3), term_l_3))), term_x_2, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_o_3))), (ATerm) ATinsert(ATempty, term_y_2))));
  return(t);
}
ATerm test2d_0_0 (ATerm t)
{
  t = apply_test_4_0(e_1, f_1, g_1, h_1, t);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = term_c_4;
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm v_20 = NULL,w_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL,d_21 = NULL,e_21 = NULL,f_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL,l_21 = NULL;
  if(match_cons(t, sym__2))
    {
      d_21 = ATgetArgument(t, 0);
      e_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_21;
  if(match_cons(t, sym_appl_2))
    {
      f_21 = ATgetArgument(t, 0);
      l_21 = ATgetArgument(t, 1);
      t = l_21;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = f_21;
          if(match_cons(t, sym_prod_3))
            {
              g_21 = ATgetArgument(t, 0);
              h_21 = ATgetArgument(t, 1);
              k_21 = ATgetArgument(t, 2);
              t = k_21;
              if(match_cons(t, sym_no_attrs_0))
                {
                  t = h_21;
                  if(match_cons(t, sym_cf_1))
                    {
                      i_21 = ATgetArgument(t, 0);
                      t = i_21;
                      if(match_cons(t, sym_opt_1))
                        {
                          j_21 = ATgetArgument(t, 0);
                          t = j_21;
                          if(match_cons(t, sym_layout_0))
                            {
                              t = g_21;
                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                {
                                  t = d_21;
                                  if(match_cons(t, sym_appl_2))
                                    {
                                      v_20 = ATgetArgument(t, 0);
                                      b_21 = ATgetArgument(t, 1);
                                      t = b_21;
                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                        {
                                          t = v_20;
                                          if(match_cons(t, sym_prod_3))
                                            {
                                              w_20 = ATgetArgument(t, 0);
                                              x_20 = ATgetArgument(t, 1);
                                              a_21 = ATgetArgument(t, 2);
                                              t = a_21;
                                              if(match_cons(t, sym_no_attrs_0))
                                                {
                                                  t = x_20;
                                                  if(match_cons(t, sym_cf_1))
                                                    {
                                                      y_20 = ATgetArgument(t, 0);
                                                      t = y_20;
                                                      if(match_cons(t, sym_opt_1))
                                                        {
                                                          z_20 = ATgetArgument(t, 0);
                                                          t = z_20;
                                                          if(match_cons(t, sym_layout_0))
                                                            {
                                                              t = w_20;
                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                {
                                                                  t = e_21;
                                                                }
                                                              else
                                                                {
                                                                  t = d_21;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              t = d_21;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          t = d_21;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      t = d_21;
                                                    }
                                                }
                                              else
                                                {
                                                  t = d_21;
                                                }
                                            }
                                          else
                                            {
                                              t = d_21;
                                            }
                                        }
                                      else
                                        {
                                          t = d_21;
                                        }
                                    }
                                  else
                                    {
                                      t = d_21;
                                    }
                                }
                              else
                                {
                                  t = d_21;
                                  if(match_cons(t, sym_appl_2))
                                    {
                                      v_20 = ATgetArgument(t, 0);
                                      b_21 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = v_20;
                                  if(match_cons(t, sym_prod_3))
                                    {
                                      w_20 = ATgetArgument(t, 0);
                                      x_20 = ATgetArgument(t, 1);
                                      a_21 = ATgetArgument(t, 2);
                                    }
                                  else
                                    _fail(t);
                                  t = w_20;
                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                    _fail(t);
                                  t = x_20;
                                  if(match_cons(t, sym_cf_1))
                                    {
                                      y_20 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = y_20;
                                  if(match_cons(t, sym_opt_1))
                                    {
                                      z_20 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = z_20;
                                  if(!(match_cons(t, sym_layout_0)))
                                    _fail(t);
                                  t = a_21;
                                  if(!(match_cons(t, sym_no_attrs_0)))
                                    _fail(t);
                                  t = b_21;
                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                    _fail(t);
                                  t = e_21;
                                }
                            }
                          else
                            {
                              t = d_21;
                              if(match_cons(t, sym_appl_2))
                                {
                                  v_20 = ATgetArgument(t, 0);
                                  b_21 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = v_20;
                              if(match_cons(t, sym_prod_3))
                                {
                                  w_20 = ATgetArgument(t, 0);
                                  x_20 = ATgetArgument(t, 1);
                                  a_21 = ATgetArgument(t, 2);
                                }
                              else
                                _fail(t);
                              t = w_20;
                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                _fail(t);
                              t = x_20;
                              if(match_cons(t, sym_cf_1))
                                {
                                  y_20 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = y_20;
                              if(match_cons(t, sym_opt_1))
                                {
                                  z_20 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = z_20;
                              if(!(match_cons(t, sym_layout_0)))
                                _fail(t);
                              t = a_21;
                              if(!(match_cons(t, sym_no_attrs_0)))
                                _fail(t);
                              t = b_21;
                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                _fail(t);
                              t = e_21;
                            }
                        }
                      else
                        {
                          t = d_21;
                          if(match_cons(t, sym_appl_2))
                            {
                              v_20 = ATgetArgument(t, 0);
                              b_21 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = v_20;
                          if(match_cons(t, sym_prod_3))
                            {
                              w_20 = ATgetArgument(t, 0);
                              x_20 = ATgetArgument(t, 1);
                              a_21 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          t = w_20;
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = x_20;
                          if(match_cons(t, sym_cf_1))
                            {
                              y_20 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = y_20;
                          if(match_cons(t, sym_opt_1))
                            {
                              z_20 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = z_20;
                          if(!(match_cons(t, sym_layout_0)))
                            _fail(t);
                          t = a_21;
                          if(!(match_cons(t, sym_no_attrs_0)))
                            _fail(t);
                          t = b_21;
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = e_21;
                        }
                    }
                  else
                    {
                      t = d_21;
                      if(match_cons(t, sym_appl_2))
                        {
                          v_20 = ATgetArgument(t, 0);
                          b_21 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = v_20;
                      if(match_cons(t, sym_prod_3))
                        {
                          w_20 = ATgetArgument(t, 0);
                          x_20 = ATgetArgument(t, 1);
                          a_21 = ATgetArgument(t, 2);
                        }
                      else
                        _fail(t);
                      t = w_20;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = x_20;
                      if(match_cons(t, sym_cf_1))
                        {
                          y_20 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = y_20;
                      if(match_cons(t, sym_opt_1))
                        {
                          z_20 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = z_20;
                      if(!(match_cons(t, sym_layout_0)))
                        _fail(t);
                      t = a_21;
                      if(!(match_cons(t, sym_no_attrs_0)))
                        _fail(t);
                      t = b_21;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = e_21;
                    }
                }
              else
                {
                  t = d_21;
                  if(match_cons(t, sym_appl_2))
                    {
                      v_20 = ATgetArgument(t, 0);
                      b_21 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = v_20;
                  if(match_cons(t, sym_prod_3))
                    {
                      w_20 = ATgetArgument(t, 0);
                      x_20 = ATgetArgument(t, 1);
                      a_21 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = w_20;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = x_20;
                  if(match_cons(t, sym_cf_1))
                    {
                      y_20 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = y_20;
                  if(match_cons(t, sym_opt_1))
                    {
                      z_20 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = z_20;
                  if(!(match_cons(t, sym_layout_0)))
                    _fail(t);
                  t = a_21;
                  if(!(match_cons(t, sym_no_attrs_0)))
                    _fail(t);
                  t = b_21;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = e_21;
                }
            }
          else
            {
              t = d_21;
              if(match_cons(t, sym_appl_2))
                {
                  v_20 = ATgetArgument(t, 0);
                  b_21 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = v_20;
              if(match_cons(t, sym_prod_3))
                {
                  w_20 = ATgetArgument(t, 0);
                  x_20 = ATgetArgument(t, 1);
                  a_21 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = w_20;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = x_20;
              if(match_cons(t, sym_cf_1))
                {
                  y_20 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = y_20;
              if(match_cons(t, sym_opt_1))
                {
                  z_20 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = z_20;
              if(!(match_cons(t, sym_layout_0)))
                _fail(t);
              t = a_21;
              if(!(match_cons(t, sym_no_attrs_0)))
                _fail(t);
              t = b_21;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = e_21;
            }
        }
      else
        {
          t = d_21;
          if(match_cons(t, sym_appl_2))
            {
              v_20 = ATgetArgument(t, 0);
              b_21 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = v_20;
          if(match_cons(t, sym_prod_3))
            {
              w_20 = ATgetArgument(t, 0);
              x_20 = ATgetArgument(t, 1);
              a_21 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = w_20;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = x_20;
          if(match_cons(t, sym_cf_1))
            {
              y_20 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = y_20;
          if(match_cons(t, sym_opt_1))
            {
              z_20 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_20;
          if(!(match_cons(t, sym_layout_0)))
            _fail(t);
          t = a_21;
          if(!(match_cons(t, sym_no_attrs_0)))
            _fail(t);
          t = b_21;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = e_21;
        }
    }
  else
    {
      t = d_21;
      if(match_cons(t, sym_appl_2))
        {
          v_20 = ATgetArgument(t, 0);
          b_21 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = v_20;
      if(match_cons(t, sym_prod_3))
        {
          w_20 = ATgetArgument(t, 0);
          x_20 = ATgetArgument(t, 1);
          a_21 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = w_20;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = x_20;
      if(match_cons(t, sym_cf_1))
        {
          y_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_20;
      if(match_cons(t, sym_opt_1))
        {
          z_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_20;
      if(!(match_cons(t, sym_layout_0)))
        _fail(t);
      t = a_21;
      if(!(match_cons(t, sym_no_attrs_0)))
        _fail(t);
      t = b_21;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = e_21;
    }
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_x_2), term_t_2, term_w_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_m_3), term_l_3))), term_x_2, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_o_3))), (ATerm) ATinsert(ATempty, term_y_2)))), term_j_3);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_x_2), term_t_2, term_w_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_m_3), term_l_3))), term_x_2, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_o_3))), (ATerm) ATinsert(ATempty, term_y_2))));
  return(t);
}
ATerm test2c_0_0 (ATerm t)
{
  t = apply_test_4_0(i_1, j_1, k_1, l_1, t);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_d_4;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm e_4 = t;
  int f_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_layout1_0_0(t);
      LocalPopChoice(f_4);
    }
  else
    {
      t = e_4;
      {
        ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL;
        if(match_cons(t, sym__2))
          {
            b_26 = ATgetArgument(t, 0);
            c_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_26;
        if(match_cons(t, sym_appl_2))
          {
            d_26 = ATgetArgument(t, 0);
            j_26 = ATgetArgument(t, 1);
            t = j_26;
            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
              {
                t = d_26;
                if(match_cons(t, sym_prod_3))
                  {
                    e_26 = ATgetArgument(t, 0);
                    f_26 = ATgetArgument(t, 1);
                    i_26 = ATgetArgument(t, 2);
                    t = i_26;
                    if(match_cons(t, sym_no_attrs_0))
                      {
                        t = f_26;
                        if(match_cons(t, sym_cf_1))
                          {
                            g_26 = ATgetArgument(t, 0);
                            t = g_26;
                            if(match_cons(t, sym_opt_1))
                              {
                                h_26 = ATgetArgument(t, 0);
                                t = h_26;
                                if(match_cons(t, sym_layout_0))
                                  {
                                    t = e_26;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = b_26;
                                        if(match_cons(t, sym_appl_2))
                                          {
                                            t_25 = ATgetArgument(t, 0);
                                            z_25 = ATgetArgument(t, 1);
                                            t = z_25;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                t = t_25;
                                                if(match_cons(t, sym_prod_3))
                                                  {
                                                    u_25 = ATgetArgument(t, 0);
                                                    v_25 = ATgetArgument(t, 1);
                                                    y_25 = ATgetArgument(t, 2);
                                                    t = y_25;
                                                    if(match_cons(t, sym_no_attrs_0))
                                                      {
                                                        t = v_25;
                                                        if(match_cons(t, sym_cf_1))
                                                          {
                                                            w_25 = ATgetArgument(t, 0);
                                                            t = w_25;
                                                            if(match_cons(t, sym_opt_1))
                                                              {
                                                                x_25 = ATgetArgument(t, 0);
                                                                t = x_25;
                                                                if(match_cons(t, sym_layout_0))
                                                                  {
                                                                    t = u_25;
                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                      {
                                                                        t = c_26;
                                                                      }
                                                                    else
                                                                      {
                                                                        t = b_26;
                                                                      }
                                                                  }
                                                                else
                                                                  {
                                                                    t = b_26;
                                                                  }
                                                              }
                                                            else
                                                              {
                                                                t = b_26;
                                                              }
                                                          }
                                                        else
                                                          {
                                                            t = b_26;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = b_26;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = b_26;
                                                  }
                                              }
                                            else
                                              {
                                                t = b_26;
                                              }
                                          }
                                        else
                                          {
                                            t = b_26;
                                          }
                                      }
                                    else
                                      {
                                        t = b_26;
                                        if(match_cons(t, sym_appl_2))
                                          {
                                            t_25 = ATgetArgument(t, 0);
                                            z_25 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = t_25;
                                        if(match_cons(t, sym_prod_3))
                                          {
                                            u_25 = ATgetArgument(t, 0);
                                            v_25 = ATgetArgument(t, 1);
                                            y_25 = ATgetArgument(t, 2);
                                          }
                                        else
                                          _fail(t);
                                        t = u_25;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = v_25;
                                        if(match_cons(t, sym_cf_1))
                                          {
                                            w_25 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = w_25;
                                        if(match_cons(t, sym_opt_1))
                                          {
                                            x_25 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = x_25;
                                        if(!(match_cons(t, sym_layout_0)))
                                          _fail(t);
                                        t = y_25;
                                        if(!(match_cons(t, sym_no_attrs_0)))
                                          _fail(t);
                                        t = z_25;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = c_26;
                                      }
                                  }
                                else
                                  {
                                    t = b_26;
                                    if(match_cons(t, sym_appl_2))
                                      {
                                        t_25 = ATgetArgument(t, 0);
                                        z_25 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = t_25;
                                    if(match_cons(t, sym_prod_3))
                                      {
                                        u_25 = ATgetArgument(t, 0);
                                        v_25 = ATgetArgument(t, 1);
                                        y_25 = ATgetArgument(t, 2);
                                      }
                                    else
                                      _fail(t);
                                    t = u_25;
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = v_25;
                                    if(match_cons(t, sym_cf_1))
                                      {
                                        w_25 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = w_25;
                                    if(match_cons(t, sym_opt_1))
                                      {
                                        x_25 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = x_25;
                                    if(!(match_cons(t, sym_layout_0)))
                                      _fail(t);
                                    t = y_25;
                                    if(!(match_cons(t, sym_no_attrs_0)))
                                      _fail(t);
                                    t = z_25;
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = c_26;
                                  }
                              }
                            else
                              {
                                t = b_26;
                                if(match_cons(t, sym_appl_2))
                                  {
                                    t_25 = ATgetArgument(t, 0);
                                    z_25 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = t_25;
                                if(match_cons(t, sym_prod_3))
                                  {
                                    u_25 = ATgetArgument(t, 0);
                                    v_25 = ATgetArgument(t, 1);
                                    y_25 = ATgetArgument(t, 2);
                                  }
                                else
                                  _fail(t);
                                t = u_25;
                                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                  _fail(t);
                                t = v_25;
                                if(match_cons(t, sym_cf_1))
                                  {
                                    w_25 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = w_25;
                                if(match_cons(t, sym_opt_1))
                                  {
                                    x_25 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = x_25;
                                if(!(match_cons(t, sym_layout_0)))
                                  _fail(t);
                                t = y_25;
                                if(!(match_cons(t, sym_no_attrs_0)))
                                  _fail(t);
                                t = z_25;
                                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                  _fail(t);
                                t = c_26;
                              }
                          }
                        else
                          {
                            t = b_26;
                            if(match_cons(t, sym_appl_2))
                              {
                                t_25 = ATgetArgument(t, 0);
                                z_25 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = t_25;
                            if(match_cons(t, sym_prod_3))
                              {
                                u_25 = ATgetArgument(t, 0);
                                v_25 = ATgetArgument(t, 1);
                                y_25 = ATgetArgument(t, 2);
                              }
                            else
                              _fail(t);
                            t = u_25;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = v_25;
                            if(match_cons(t, sym_cf_1))
                              {
                                w_25 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = w_25;
                            if(match_cons(t, sym_opt_1))
                              {
                                x_25 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = x_25;
                            if(!(match_cons(t, sym_layout_0)))
                              _fail(t);
                            t = y_25;
                            if(!(match_cons(t, sym_no_attrs_0)))
                              _fail(t);
                            t = z_25;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = c_26;
                          }
                      }
                    else
                      {
                        t = b_26;
                        if(match_cons(t, sym_appl_2))
                          {
                            t_25 = ATgetArgument(t, 0);
                            z_25 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = t_25;
                        if(match_cons(t, sym_prod_3))
                          {
                            u_25 = ATgetArgument(t, 0);
                            v_25 = ATgetArgument(t, 1);
                            y_25 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = u_25;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = v_25;
                        if(match_cons(t, sym_cf_1))
                          {
                            w_25 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = w_25;
                        if(match_cons(t, sym_opt_1))
                          {
                            x_25 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = x_25;
                        if(!(match_cons(t, sym_layout_0)))
                          _fail(t);
                        t = y_25;
                        if(!(match_cons(t, sym_no_attrs_0)))
                          _fail(t);
                        t = z_25;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = c_26;
                      }
                  }
                else
                  {
                    t = b_26;
                    if(match_cons(t, sym_appl_2))
                      {
                        t_25 = ATgetArgument(t, 0);
                        z_25 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = t_25;
                    if(match_cons(t, sym_prod_3))
                      {
                        u_25 = ATgetArgument(t, 0);
                        v_25 = ATgetArgument(t, 1);
                        y_25 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = u_25;
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    t = v_25;
                    if(match_cons(t, sym_cf_1))
                      {
                        w_25 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = w_25;
                    if(match_cons(t, sym_opt_1))
                      {
                        x_25 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = x_25;
                    if(!(match_cons(t, sym_layout_0)))
                      _fail(t);
                    t = y_25;
                    if(!(match_cons(t, sym_no_attrs_0)))
                      _fail(t);
                    t = z_25;
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    t = c_26;
                  }
              }
            else
              {
                t = b_26;
                if(match_cons(t, sym_appl_2))
                  {
                    t_25 = ATgetArgument(t, 0);
                    z_25 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = t_25;
                if(match_cons(t, sym_prod_3))
                  {
                    u_25 = ATgetArgument(t, 0);
                    v_25 = ATgetArgument(t, 1);
                    y_25 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = u_25;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = v_25;
                if(match_cons(t, sym_cf_1))
                  {
                    w_25 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = w_25;
                if(match_cons(t, sym_opt_1))
                  {
                    x_25 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = x_25;
                if(!(match_cons(t, sym_layout_0)))
                  _fail(t);
                t = y_25;
                if(!(match_cons(t, sym_no_attrs_0)))
                  _fail(t);
                t = z_25;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = c_26;
              }
          }
        else
          {
            t = b_26;
            if(match_cons(t, sym_appl_2))
              {
                t_25 = ATgetArgument(t, 0);
                z_25 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = t_25;
            if(match_cons(t, sym_prod_3))
              {
                u_25 = ATgetArgument(t, 0);
                v_25 = ATgetArgument(t, 1);
                y_25 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = u_25;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = v_25;
            if(match_cons(t, sym_cf_1))
              {
                w_25 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = w_25;
            if(match_cons(t, sym_opt_1))
              {
                x_25 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = x_25;
            if(!(match_cons(t, sym_layout_0)))
              _fail(t);
            t = y_25;
            if(!(match_cons(t, sym_no_attrs_0)))
              _fail(t);
            t = z_25;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = c_26;
          }
      }
    }
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_j_3, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_x_2), term_t_2, term_w_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_m_3), term_l_3))), term_x_2, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_o_3))), (ATerm) ATinsert(ATempty, term_y_2)))));
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_x_2), term_t_2, term_w_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_m_3), term_l_3))), term_x_2, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_o_3))), (ATerm) ATinsert(ATempty, term_y_2))));
  return(t);
}
ATerm test2b_0_0 (ATerm t)
{
  t = apply_test_4_0(m_1, n_1, o_1, p_1, t);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = term_g_4;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm h_4 = t;
  int i_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_layout1_0_0(t);
      LocalPopChoice(i_4);
    }
  else
    {
      t = h_4;
      {
        ATerm t_30 = NULL,u_30 = NULL,v_30 = NULL,w_30 = NULL,x_30 = NULL,y_30 = NULL,z_30 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL,e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL,j_31 = NULL;
        if(match_cons(t, sym__2))
          {
            b_31 = ATgetArgument(t, 0);
            c_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_31;
        if(match_cons(t, sym_appl_2))
          {
            d_31 = ATgetArgument(t, 0);
            j_31 = ATgetArgument(t, 1);
            t = j_31;
            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
              {
                t = d_31;
                if(match_cons(t, sym_prod_3))
                  {
                    e_31 = ATgetArgument(t, 0);
                    f_31 = ATgetArgument(t, 1);
                    i_31 = ATgetArgument(t, 2);
                    t = i_31;
                    if(match_cons(t, sym_no_attrs_0))
                      {
                        t = f_31;
                        if(match_cons(t, sym_cf_1))
                          {
                            g_31 = ATgetArgument(t, 0);
                            t = g_31;
                            if(match_cons(t, sym_opt_1))
                              {
                                h_31 = ATgetArgument(t, 0);
                                t = h_31;
                                if(match_cons(t, sym_layout_0))
                                  {
                                    t = e_31;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = b_31;
                                        if(match_cons(t, sym_appl_2))
                                          {
                                            t_30 = ATgetArgument(t, 0);
                                            z_30 = ATgetArgument(t, 1);
                                            t = z_30;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                t = t_30;
                                                if(match_cons(t, sym_prod_3))
                                                  {
                                                    u_30 = ATgetArgument(t, 0);
                                                    v_30 = ATgetArgument(t, 1);
                                                    y_30 = ATgetArgument(t, 2);
                                                    t = y_30;
                                                    if(match_cons(t, sym_no_attrs_0))
                                                      {
                                                        t = v_30;
                                                        if(match_cons(t, sym_cf_1))
                                                          {
                                                            w_30 = ATgetArgument(t, 0);
                                                            t = w_30;
                                                            if(match_cons(t, sym_opt_1))
                                                              {
                                                                x_30 = ATgetArgument(t, 0);
                                                                t = x_30;
                                                                if(match_cons(t, sym_layout_0))
                                                                  {
                                                                    t = u_30;
                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                      {
                                                                        t = c_31;
                                                                      }
                                                                    else
                                                                      {
                                                                        t = b_31;
                                                                      }
                                                                  }
                                                                else
                                                                  {
                                                                    t = b_31;
                                                                  }
                                                              }
                                                            else
                                                              {
                                                                t = b_31;
                                                              }
                                                          }
                                                        else
                                                          {
                                                            t = b_31;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = b_31;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = b_31;
                                                  }
                                              }
                                            else
                                              {
                                                t = b_31;
                                              }
                                          }
                                        else
                                          {
                                            t = b_31;
                                          }
                                      }
                                    else
                                      {
                                        t = b_31;
                                        if(match_cons(t, sym_appl_2))
                                          {
                                            t_30 = ATgetArgument(t, 0);
                                            z_30 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = t_30;
                                        if(match_cons(t, sym_prod_3))
                                          {
                                            u_30 = ATgetArgument(t, 0);
                                            v_30 = ATgetArgument(t, 1);
                                            y_30 = ATgetArgument(t, 2);
                                          }
                                        else
                                          _fail(t);
                                        t = u_30;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = v_30;
                                        if(match_cons(t, sym_cf_1))
                                          {
                                            w_30 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = w_30;
                                        if(match_cons(t, sym_opt_1))
                                          {
                                            x_30 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = x_30;
                                        if(!(match_cons(t, sym_layout_0)))
                                          _fail(t);
                                        t = y_30;
                                        if(!(match_cons(t, sym_no_attrs_0)))
                                          _fail(t);
                                        t = z_30;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = c_31;
                                      }
                                  }
                                else
                                  {
                                    t = b_31;
                                    if(match_cons(t, sym_appl_2))
                                      {
                                        t_30 = ATgetArgument(t, 0);
                                        z_30 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = t_30;
                                    if(match_cons(t, sym_prod_3))
                                      {
                                        u_30 = ATgetArgument(t, 0);
                                        v_30 = ATgetArgument(t, 1);
                                        y_30 = ATgetArgument(t, 2);
                                      }
                                    else
                                      _fail(t);
                                    t = u_30;
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = v_30;
                                    if(match_cons(t, sym_cf_1))
                                      {
                                        w_30 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = w_30;
                                    if(match_cons(t, sym_opt_1))
                                      {
                                        x_30 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = x_30;
                                    if(!(match_cons(t, sym_layout_0)))
                                      _fail(t);
                                    t = y_30;
                                    if(!(match_cons(t, sym_no_attrs_0)))
                                      _fail(t);
                                    t = z_30;
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = c_31;
                                  }
                              }
                            else
                              {
                                t = b_31;
                                if(match_cons(t, sym_appl_2))
                                  {
                                    t_30 = ATgetArgument(t, 0);
                                    z_30 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = t_30;
                                if(match_cons(t, sym_prod_3))
                                  {
                                    u_30 = ATgetArgument(t, 0);
                                    v_30 = ATgetArgument(t, 1);
                                    y_30 = ATgetArgument(t, 2);
                                  }
                                else
                                  _fail(t);
                                t = u_30;
                                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                  _fail(t);
                                t = v_30;
                                if(match_cons(t, sym_cf_1))
                                  {
                                    w_30 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = w_30;
                                if(match_cons(t, sym_opt_1))
                                  {
                                    x_30 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = x_30;
                                if(!(match_cons(t, sym_layout_0)))
                                  _fail(t);
                                t = y_30;
                                if(!(match_cons(t, sym_no_attrs_0)))
                                  _fail(t);
                                t = z_30;
                                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                  _fail(t);
                                t = c_31;
                              }
                          }
                        else
                          {
                            t = b_31;
                            if(match_cons(t, sym_appl_2))
                              {
                                t_30 = ATgetArgument(t, 0);
                                z_30 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = t_30;
                            if(match_cons(t, sym_prod_3))
                              {
                                u_30 = ATgetArgument(t, 0);
                                v_30 = ATgetArgument(t, 1);
                                y_30 = ATgetArgument(t, 2);
                              }
                            else
                              _fail(t);
                            t = u_30;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = v_30;
                            if(match_cons(t, sym_cf_1))
                              {
                                w_30 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = w_30;
                            if(match_cons(t, sym_opt_1))
                              {
                                x_30 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = x_30;
                            if(!(match_cons(t, sym_layout_0)))
                              _fail(t);
                            t = y_30;
                            if(!(match_cons(t, sym_no_attrs_0)))
                              _fail(t);
                            t = z_30;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = c_31;
                          }
                      }
                    else
                      {
                        t = b_31;
                        if(match_cons(t, sym_appl_2))
                          {
                            t_30 = ATgetArgument(t, 0);
                            z_30 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = t_30;
                        if(match_cons(t, sym_prod_3))
                          {
                            u_30 = ATgetArgument(t, 0);
                            v_30 = ATgetArgument(t, 1);
                            y_30 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = u_30;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = v_30;
                        if(match_cons(t, sym_cf_1))
                          {
                            w_30 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = w_30;
                        if(match_cons(t, sym_opt_1))
                          {
                            x_30 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = x_30;
                        if(!(match_cons(t, sym_layout_0)))
                          _fail(t);
                        t = y_30;
                        if(!(match_cons(t, sym_no_attrs_0)))
                          _fail(t);
                        t = z_30;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = c_31;
                      }
                  }
                else
                  {
                    t = b_31;
                    if(match_cons(t, sym_appl_2))
                      {
                        t_30 = ATgetArgument(t, 0);
                        z_30 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = t_30;
                    if(match_cons(t, sym_prod_3))
                      {
                        u_30 = ATgetArgument(t, 0);
                        v_30 = ATgetArgument(t, 1);
                        y_30 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = u_30;
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    t = v_30;
                    if(match_cons(t, sym_cf_1))
                      {
                        w_30 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = w_30;
                    if(match_cons(t, sym_opt_1))
                      {
                        x_30 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = x_30;
                    if(!(match_cons(t, sym_layout_0)))
                      _fail(t);
                    t = y_30;
                    if(!(match_cons(t, sym_no_attrs_0)))
                      _fail(t);
                    t = z_30;
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    t = c_31;
                  }
              }
            else
              {
                t = b_31;
                if(match_cons(t, sym_appl_2))
                  {
                    t_30 = ATgetArgument(t, 0);
                    z_30 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = t_30;
                if(match_cons(t, sym_prod_3))
                  {
                    u_30 = ATgetArgument(t, 0);
                    v_30 = ATgetArgument(t, 1);
                    y_30 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = u_30;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = v_30;
                if(match_cons(t, sym_cf_1))
                  {
                    w_30 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = w_30;
                if(match_cons(t, sym_opt_1))
                  {
                    x_30 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = x_30;
                if(!(match_cons(t, sym_layout_0)))
                  _fail(t);
                t = y_30;
                if(!(match_cons(t, sym_no_attrs_0)))
                  _fail(t);
                t = z_30;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = c_31;
              }
          }
        else
          {
            t = b_31;
            if(match_cons(t, sym_appl_2))
              {
                t_30 = ATgetArgument(t, 0);
                z_30 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = t_30;
            if(match_cons(t, sym_prod_3))
              {
                u_30 = ATgetArgument(t, 0);
                v_30 = ATgetArgument(t, 1);
                y_30 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = u_30;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = v_30;
            if(match_cons(t, sym_cf_1))
              {
                w_30 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = w_30;
            if(match_cons(t, sym_opt_1))
              {
                x_30 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = x_30;
            if(!(match_cons(t, sym_layout_0)))
              _fail(t);
            t = y_30;
            if(!(match_cons(t, sym_no_attrs_0)))
              _fail(t);
            t = z_30;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = c_31;
          }
      }
    }
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_x_2), term_t_2, term_w_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_m_3), term_l_3))), term_x_2, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_o_3))), (ATerm) ATinsert(ATempty, term_y_2)))), term_j_3);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_x_2), term_t_2, term_w_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_m_3), term_l_3))), term_x_2, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_o_3))), (ATerm) ATinsert(ATempty, term_y_2))));
  return(t);
}
ATerm test2a_0_0 (ATerm t)
{
  t = apply_test_4_0(q_1, r_1, s_1, t_1, t);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = term_j_4;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm k_4 = t;
  int l_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_layout1_0_0(t);
      LocalPopChoice(l_4);
    }
  else
    {
      t = k_4;
      {
        ATerm r_35 = NULL,s_35 = NULL,t_35 = NULL,u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL,f_36 = NULL,g_36 = NULL,h_36 = NULL;
        if(match_cons(t, sym__2))
          {
            z_35 = ATgetArgument(t, 0);
            a_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_36;
        if(match_cons(t, sym_appl_2))
          {
            b_36 = ATgetArgument(t, 0);
            h_36 = ATgetArgument(t, 1);
            t = h_36;
            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
              {
                t = b_36;
                if(match_cons(t, sym_prod_3))
                  {
                    c_36 = ATgetArgument(t, 0);
                    d_36 = ATgetArgument(t, 1);
                    g_36 = ATgetArgument(t, 2);
                    t = g_36;
                    if(match_cons(t, sym_no_attrs_0))
                      {
                        t = d_36;
                        if(match_cons(t, sym_cf_1))
                          {
                            e_36 = ATgetArgument(t, 0);
                            t = e_36;
                            if(match_cons(t, sym_opt_1))
                              {
                                f_36 = ATgetArgument(t, 0);
                                t = f_36;
                                if(match_cons(t, sym_layout_0))
                                  {
                                    t = c_36;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = z_35;
                                        if(match_cons(t, sym_appl_2))
                                          {
                                            r_35 = ATgetArgument(t, 0);
                                            x_35 = ATgetArgument(t, 1);
                                            t = x_35;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                t = r_35;
                                                if(match_cons(t, sym_prod_3))
                                                  {
                                                    s_35 = ATgetArgument(t, 0);
                                                    t_35 = ATgetArgument(t, 1);
                                                    w_35 = ATgetArgument(t, 2);
                                                    t = w_35;
                                                    if(match_cons(t, sym_no_attrs_0))
                                                      {
                                                        t = t_35;
                                                        if(match_cons(t, sym_cf_1))
                                                          {
                                                            u_35 = ATgetArgument(t, 0);
                                                            t = u_35;
                                                            if(match_cons(t, sym_opt_1))
                                                              {
                                                                v_35 = ATgetArgument(t, 0);
                                                                t = v_35;
                                                                if(match_cons(t, sym_layout_0))
                                                                  {
                                                                    t = s_35;
                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                      {
                                                                        t = a_36;
                                                                      }
                                                                    else
                                                                      {
                                                                        t = z_35;
                                                                      }
                                                                  }
                                                                else
                                                                  {
                                                                    t = z_35;
                                                                  }
                                                              }
                                                            else
                                                              {
                                                                t = z_35;
                                                              }
                                                          }
                                                        else
                                                          {
                                                            t = z_35;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = z_35;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = z_35;
                                                  }
                                              }
                                            else
                                              {
                                                t = z_35;
                                              }
                                          }
                                        else
                                          {
                                            t = z_35;
                                          }
                                      }
                                    else
                                      {
                                        t = z_35;
                                        if(match_cons(t, sym_appl_2))
                                          {
                                            r_35 = ATgetArgument(t, 0);
                                            x_35 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = r_35;
                                        if(match_cons(t, sym_prod_3))
                                          {
                                            s_35 = ATgetArgument(t, 0);
                                            t_35 = ATgetArgument(t, 1);
                                            w_35 = ATgetArgument(t, 2);
                                          }
                                        else
                                          _fail(t);
                                        t = s_35;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = t_35;
                                        if(match_cons(t, sym_cf_1))
                                          {
                                            u_35 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = u_35;
                                        if(match_cons(t, sym_opt_1))
                                          {
                                            v_35 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = v_35;
                                        if(!(match_cons(t, sym_layout_0)))
                                          _fail(t);
                                        t = w_35;
                                        if(!(match_cons(t, sym_no_attrs_0)))
                                          _fail(t);
                                        t = x_35;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = a_36;
                                      }
                                  }
                                else
                                  {
                                    t = z_35;
                                    if(match_cons(t, sym_appl_2))
                                      {
                                        r_35 = ATgetArgument(t, 0);
                                        x_35 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = r_35;
                                    if(match_cons(t, sym_prod_3))
                                      {
                                        s_35 = ATgetArgument(t, 0);
                                        t_35 = ATgetArgument(t, 1);
                                        w_35 = ATgetArgument(t, 2);
                                      }
                                    else
                                      _fail(t);
                                    t = s_35;
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = t_35;
                                    if(match_cons(t, sym_cf_1))
                                      {
                                        u_35 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = u_35;
                                    if(match_cons(t, sym_opt_1))
                                      {
                                        v_35 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = v_35;
                                    if(!(match_cons(t, sym_layout_0)))
                                      _fail(t);
                                    t = w_35;
                                    if(!(match_cons(t, sym_no_attrs_0)))
                                      _fail(t);
                                    t = x_35;
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = a_36;
                                  }
                              }
                            else
                              {
                                t = z_35;
                                if(match_cons(t, sym_appl_2))
                                  {
                                    r_35 = ATgetArgument(t, 0);
                                    x_35 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = r_35;
                                if(match_cons(t, sym_prod_3))
                                  {
                                    s_35 = ATgetArgument(t, 0);
                                    t_35 = ATgetArgument(t, 1);
                                    w_35 = ATgetArgument(t, 2);
                                  }
                                else
                                  _fail(t);
                                t = s_35;
                                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                  _fail(t);
                                t = t_35;
                                if(match_cons(t, sym_cf_1))
                                  {
                                    u_35 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = u_35;
                                if(match_cons(t, sym_opt_1))
                                  {
                                    v_35 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = v_35;
                                if(!(match_cons(t, sym_layout_0)))
                                  _fail(t);
                                t = w_35;
                                if(!(match_cons(t, sym_no_attrs_0)))
                                  _fail(t);
                                t = x_35;
                                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                  _fail(t);
                                t = a_36;
                              }
                          }
                        else
                          {
                            t = z_35;
                            if(match_cons(t, sym_appl_2))
                              {
                                r_35 = ATgetArgument(t, 0);
                                x_35 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = r_35;
                            if(match_cons(t, sym_prod_3))
                              {
                                s_35 = ATgetArgument(t, 0);
                                t_35 = ATgetArgument(t, 1);
                                w_35 = ATgetArgument(t, 2);
                              }
                            else
                              _fail(t);
                            t = s_35;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = t_35;
                            if(match_cons(t, sym_cf_1))
                              {
                                u_35 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = u_35;
                            if(match_cons(t, sym_opt_1))
                              {
                                v_35 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = v_35;
                            if(!(match_cons(t, sym_layout_0)))
                              _fail(t);
                            t = w_35;
                            if(!(match_cons(t, sym_no_attrs_0)))
                              _fail(t);
                            t = x_35;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = a_36;
                          }
                      }
                    else
                      {
                        t = z_35;
                        if(match_cons(t, sym_appl_2))
                          {
                            r_35 = ATgetArgument(t, 0);
                            x_35 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = r_35;
                        if(match_cons(t, sym_prod_3))
                          {
                            s_35 = ATgetArgument(t, 0);
                            t_35 = ATgetArgument(t, 1);
                            w_35 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = s_35;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = t_35;
                        if(match_cons(t, sym_cf_1))
                          {
                            u_35 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = u_35;
                        if(match_cons(t, sym_opt_1))
                          {
                            v_35 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = v_35;
                        if(!(match_cons(t, sym_layout_0)))
                          _fail(t);
                        t = w_35;
                        if(!(match_cons(t, sym_no_attrs_0)))
                          _fail(t);
                        t = x_35;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = a_36;
                      }
                  }
                else
                  {
                    t = z_35;
                    if(match_cons(t, sym_appl_2))
                      {
                        r_35 = ATgetArgument(t, 0);
                        x_35 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = r_35;
                    if(match_cons(t, sym_prod_3))
                      {
                        s_35 = ATgetArgument(t, 0);
                        t_35 = ATgetArgument(t, 1);
                        w_35 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = s_35;
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    t = t_35;
                    if(match_cons(t, sym_cf_1))
                      {
                        u_35 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = u_35;
                    if(match_cons(t, sym_opt_1))
                      {
                        v_35 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = v_35;
                    if(!(match_cons(t, sym_layout_0)))
                      _fail(t);
                    t = w_35;
                    if(!(match_cons(t, sym_no_attrs_0)))
                      _fail(t);
                    t = x_35;
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    t = a_36;
                  }
              }
            else
              {
                t = z_35;
                if(match_cons(t, sym_appl_2))
                  {
                    r_35 = ATgetArgument(t, 0);
                    x_35 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = r_35;
                if(match_cons(t, sym_prod_3))
                  {
                    s_35 = ATgetArgument(t, 0);
                    t_35 = ATgetArgument(t, 1);
                    w_35 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = s_35;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = t_35;
                if(match_cons(t, sym_cf_1))
                  {
                    u_35 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = u_35;
                if(match_cons(t, sym_opt_1))
                  {
                    v_35 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = v_35;
                if(!(match_cons(t, sym_layout_0)))
                  _fail(t);
                t = w_35;
                if(!(match_cons(t, sym_no_attrs_0)))
                  _fail(t);
                t = x_35;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = a_36;
              }
          }
        else
          {
            t = z_35;
            if(match_cons(t, sym_appl_2))
              {
                r_35 = ATgetArgument(t, 0);
                x_35 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = r_35;
            if(match_cons(t, sym_prod_3))
              {
                s_35 = ATgetArgument(t, 0);
                t_35 = ATgetArgument(t, 1);
                w_35 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = s_35;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = t_35;
            if(match_cons(t, sym_cf_1))
              {
                u_35 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = u_35;
            if(match_cons(t, sym_opt_1))
              {
                v_35 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = v_35;
            if(!(match_cons(t, sym_layout_0)))
              _fail(t);
            t = w_35;
            if(!(match_cons(t, sym_no_attrs_0)))
              _fail(t);
            t = x_35;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = a_36;
          }
      }
    }
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = term_m_4;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = term_j_3;
  return(t);
}
ATerm test1a_0_0 (ATerm t)
{
  t = apply_test_4_0(u_1, v_1, w_1, x_1, t);
  return(t);
}
static ATerm n_0 (ATerm e_45, ATerm f_45, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_t_2), term_v_2, term_w_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATempty, term_t_2), term_t_2), term_t_2, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_o_4))), (ATerm) ATinsert(ATinsert(ATempty, f_45), e_45))));
  return(t);
}
ATerm conc_layout1_0_0 (ATerm t)
{
  ATerm a_37 = NULL,b_37 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_4 = ATgetArgument(t, 0);
      if(match_cons(p_4, sym_appl_2))
        {
          ATerm r_4 = ATgetArgument(p_4, 0);
          if(match_cons(r_4, sym_prod_3))
            {
              ATerm t_4 = ATgetArgument(r_4, 0);
              if(((ATgetType(t_4) == AT_LIST) && !(ATisEmpty(t_4))))
                {
                  ATerm w_4 = ATgetFirst((ATermList) t_4);
                  if(match_cons(w_4, sym_cf_1))
                    {
                      ATerm y_4 = ATgetArgument(w_4, 0);
                      if(!(match_cons(y_4, sym_layout_0)))
                        _fail(t);
                    }
                  else
                    _fail(t);
                  {
                    ATerm x_4 = (ATerm) ATgetNext((ATermList) t_4);
                    if(((ATgetType(x_4) != AT_LIST) || !(ATisEmpty(x_4))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              {
                ATerm u_4 = ATgetArgument(r_4, 1);
                if(match_cons(u_4, sym_cf_1))
                  {
                    ATerm z_4 = ATgetArgument(u_4, 0);
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
                ATerm v_4 = ATgetArgument(r_4, 2);
                if(!(match_cons(v_4, sym_no_attrs_0)))
                  _fail(t);
              }
            }
          else
            _fail(t);
          {
            ATerm s_4 = ATgetArgument(p_4, 1);
            if(((ATgetType(s_4) == AT_LIST) && !(ATisEmpty(s_4))))
              {
                a_37 = ATgetFirst((ATermList) s_4);
                {
                  ATerm b_5 = (ATerm) ATgetNext((ATermList) s_4);
                  if(((ATgetType(b_5) != AT_LIST) || !(ATisEmpty(b_5))))
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
        ATerm q_4 = ATgetArgument(t, 1);
        if(match_cons(q_4, sym_appl_2))
          {
            ATerm c_5 = ATgetArgument(q_4, 0);
            if(match_cons(c_5, sym_prod_3))
              {
                ATerm e_5 = ATgetArgument(c_5, 0);
                if(((ATgetType(e_5) == AT_LIST) && !(ATisEmpty(e_5))))
                  {
                    ATerm h_5 = ATgetFirst((ATermList) e_5);
                    if(match_cons(h_5, sym_cf_1))
                      {
                        ATerm j_5 = ATgetArgument(h_5, 0);
                        if(!(match_cons(j_5, sym_layout_0)))
                          _fail(t);
                      }
                    else
                      _fail(t);
                    {
                      ATerm i_5 = (ATerm) ATgetNext((ATermList) e_5);
                      if(((ATgetType(i_5) != AT_LIST) || !(ATisEmpty(i_5))))
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                {
                  ATerm f_5 = ATgetArgument(c_5, 1);
                  if(match_cons(f_5, sym_cf_1))
                    {
                      ATerm k_5 = ATgetArgument(f_5, 0);
                      if(match_cons(k_5, sym_opt_1))
                        {
                          ATerm l_5 = ATgetArgument(k_5, 0);
                          if(!(match_cons(l_5, sym_layout_0)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
                {
                  ATerm g_5 = ATgetArgument(c_5, 2);
                  if(!(match_cons(g_5, sym_no_attrs_0)))
                    _fail(t);
                }
              }
            else
              _fail(t);
            {
              ATerm d_5 = ATgetArgument(q_4, 1);
              if(((ATgetType(d_5) == AT_LIST) && !(ATisEmpty(d_5))))
                {
                  b_37 = ATgetFirst((ATermList) d_5);
                  {
                    ATerm m_5 = (ATerm) ATgetNext((ATermList) d_5);
                    if(((ATgetType(m_5) != AT_LIST) || !(ATisEmpty(m_5))))
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
  t = n_0(a_37, b_37, t);
  return(t);
}
static ATerm o_0 (ATerm p_26, ATerm q_26, ATerm t)
{
  ATerm n_5 = t;
  int o_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(p_26, q_26);
      LocalPopChoice(o_5);
    }
  else
    {
      t = n_5;
      t = SSL_addr(p_26, q_26);
    }
  return(t);
}
ATerm do_test_2_0 (ATerm e_60 (ATerm), ATerm f_60 (ATerm), ATerm t)
{
  ATerm e_37 = NULL,f_37 = NULL,g_37 = NULL,h_37 = NULL;
  e_37 = t;
  t = e_60(t);
  f_37 = t;
  t = term_m_2;
  g_37 = t;
  t = (ATerm) ATinsert(ATempty, f_37);
  h_37 = t;
  t = SSL_printnl(g_37, h_37);
  t = e_37;
  {
    ATerm p_5 = t;
    int q_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_37 = NULL,j_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL,d_0 = NULL;
        t = f_60(t);
        t = e_37;
        if(match_cons(t, sym__2))
          {
            j_37 = ATgetArgument(t, 0);
            k_37 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_37);
        i_37 = t;
        t = term_r_5;
        m_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_37, term_r_5);
        t = o_0(j_37, m_37, t);
        l_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_37, k_37);
        d_0 = t;
        t = SSLsetAnnotations(d_0, i_37);
        LocalPopChoice(q_5);
      }
    else
      {
        t = p_5;
        {
          ATerm v_37 = NULL,w_37 = NULL,c_0 = NULL,m_0 = NULL,p_0 = NULL,k_0 = NULL;
          if(match_cons(t, sym__2))
            {
              v_37 = ATgetArgument(t, 0);
              w_37 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(e_37);
          c_0 = t;
          t = term_r_5;
          p_0 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_37, term_r_5);
          t = o_0(w_37, p_0, t);
          m_0 = t;
          t = (ATerm) ATmakeAppl(sym__2, v_37, m_0);
          k_0 = t;
          t = SSLsetAnnotations(k_0, c_0);
        }
      }
  }
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = term_s_5;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = term_t_5;
  return(t);
}
ATerm apply_test_4_0 (ATerm i_60 (ATerm), ATerm j_60 (ATerm), ATerm k_60 (ATerm), ATerm l_60 (ATerm), ATerm t)
{
  ATerm y_37 = NULL,z_37 = NULL;
  static ATerm y_1 (ATerm t)
  {
    ATerm w_5 = t;
    int c_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_60(t);
        t = j_60(t);
        LocalPopChoice(c_6);
      }
    else
      {
        t = w_5;
        {
          ATerm a_38 = NULL,b_38 = NULL;
          t = term_m_2;
          a_38 = t;
          t = (ATerm) ATinsert(ATempty, term_n_2);
          b_38 = t;
          t = SSL_printnl(a_38, b_38);
          t = term_n_2;
          _fail(t);
        }
      }
    if(((y_37 != NULL) && (y_37 != t)))
      _fail(t);
    else
      y_37 = t;
    t = l_60(t);
    if(((z_37 != NULL) && (z_37 != t)))
      _fail(t);
    else
      z_37 = t;
    {
      ATerm k_6 = t;
      int l_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_37;
          if((y_37 != t))
            {
              _fail(t);
            }
          LocalPopChoice(l_6);
        }
      else
        {
          t = k_6;
          t = y_37;
          t = debug_1_0(z_1, t);
          t = z_37;
          t = debug_1_0(a_2, t);
          _fail(t);
        }
    }
    return(t);
  }
  t = do_test_2_0(i_60, y_1, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = term_o_6;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm p_6 = t;
  int q_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_layout1_0_0(t);
      LocalPopChoice(q_6);
    }
  else
    {
      t = p_6;
      {
        ATerm r_41 = NULL,s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL,z_41 = NULL,a_42 = NULL,b_42 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL;
        if(match_cons(t, sym__2))
          {
            z_41 = ATgetArgument(t, 0);
            a_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_42;
        if(match_cons(t, sym_appl_2))
          {
            b_42 = ATgetArgument(t, 0);
            h_42 = ATgetArgument(t, 1);
            t = h_42;
            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
              {
                t = b_42;
                if(match_cons(t, sym_prod_3))
                  {
                    c_42 = ATgetArgument(t, 0);
                    d_42 = ATgetArgument(t, 1);
                    g_42 = ATgetArgument(t, 2);
                    t = g_42;
                    if(match_cons(t, sym_no_attrs_0))
                      {
                        t = d_42;
                        if(match_cons(t, sym_cf_1))
                          {
                            e_42 = ATgetArgument(t, 0);
                            t = e_42;
                            if(match_cons(t, sym_opt_1))
                              {
                                f_42 = ATgetArgument(t, 0);
                                t = f_42;
                                if(match_cons(t, sym_layout_0))
                                  {
                                    t = c_42;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = z_41;
                                        if(match_cons(t, sym_appl_2))
                                          {
                                            r_41 = ATgetArgument(t, 0);
                                            x_41 = ATgetArgument(t, 1);
                                            t = x_41;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                t = r_41;
                                                if(match_cons(t, sym_prod_3))
                                                  {
                                                    s_41 = ATgetArgument(t, 0);
                                                    t_41 = ATgetArgument(t, 1);
                                                    w_41 = ATgetArgument(t, 2);
                                                    t = w_41;
                                                    if(match_cons(t, sym_no_attrs_0))
                                                      {
                                                        t = t_41;
                                                        if(match_cons(t, sym_cf_1))
                                                          {
                                                            u_41 = ATgetArgument(t, 0);
                                                            t = u_41;
                                                            if(match_cons(t, sym_opt_1))
                                                              {
                                                                v_41 = ATgetArgument(t, 0);
                                                                t = v_41;
                                                                if(match_cons(t, sym_layout_0))
                                                                  {
                                                                    t = s_41;
                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                      {
                                                                        t = a_42;
                                                                      }
                                                                    else
                                                                      {
                                                                        t = z_41;
                                                                      }
                                                                  }
                                                                else
                                                                  {
                                                                    t = z_41;
                                                                  }
                                                              }
                                                            else
                                                              {
                                                                t = z_41;
                                                              }
                                                          }
                                                        else
                                                          {
                                                            t = z_41;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = z_41;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = z_41;
                                                  }
                                              }
                                            else
                                              {
                                                t = z_41;
                                              }
                                          }
                                        else
                                          {
                                            t = z_41;
                                          }
                                      }
                                    else
                                      {
                                        t = z_41;
                                        if(match_cons(t, sym_appl_2))
                                          {
                                            r_41 = ATgetArgument(t, 0);
                                            x_41 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = r_41;
                                        if(match_cons(t, sym_prod_3))
                                          {
                                            s_41 = ATgetArgument(t, 0);
                                            t_41 = ATgetArgument(t, 1);
                                            w_41 = ATgetArgument(t, 2);
                                          }
                                        else
                                          _fail(t);
                                        t = s_41;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = t_41;
                                        if(match_cons(t, sym_cf_1))
                                          {
                                            u_41 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = u_41;
                                        if(match_cons(t, sym_opt_1))
                                          {
                                            v_41 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = v_41;
                                        if(!(match_cons(t, sym_layout_0)))
                                          _fail(t);
                                        t = w_41;
                                        if(!(match_cons(t, sym_no_attrs_0)))
                                          _fail(t);
                                        t = x_41;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = a_42;
                                      }
                                  }
                                else
                                  {
                                    t = z_41;
                                    if(match_cons(t, sym_appl_2))
                                      {
                                        r_41 = ATgetArgument(t, 0);
                                        x_41 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = r_41;
                                    if(match_cons(t, sym_prod_3))
                                      {
                                        s_41 = ATgetArgument(t, 0);
                                        t_41 = ATgetArgument(t, 1);
                                        w_41 = ATgetArgument(t, 2);
                                      }
                                    else
                                      _fail(t);
                                    t = s_41;
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = t_41;
                                    if(match_cons(t, sym_cf_1))
                                      {
                                        u_41 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = u_41;
                                    if(match_cons(t, sym_opt_1))
                                      {
                                        v_41 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = v_41;
                                    if(!(match_cons(t, sym_layout_0)))
                                      _fail(t);
                                    t = w_41;
                                    if(!(match_cons(t, sym_no_attrs_0)))
                                      _fail(t);
                                    t = x_41;
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = a_42;
                                  }
                              }
                            else
                              {
                                t = z_41;
                                if(match_cons(t, sym_appl_2))
                                  {
                                    r_41 = ATgetArgument(t, 0);
                                    x_41 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = r_41;
                                if(match_cons(t, sym_prod_3))
                                  {
                                    s_41 = ATgetArgument(t, 0);
                                    t_41 = ATgetArgument(t, 1);
                                    w_41 = ATgetArgument(t, 2);
                                  }
                                else
                                  _fail(t);
                                t = s_41;
                                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                  _fail(t);
                                t = t_41;
                                if(match_cons(t, sym_cf_1))
                                  {
                                    u_41 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = u_41;
                                if(match_cons(t, sym_opt_1))
                                  {
                                    v_41 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = v_41;
                                if(!(match_cons(t, sym_layout_0)))
                                  _fail(t);
                                t = w_41;
                                if(!(match_cons(t, sym_no_attrs_0)))
                                  _fail(t);
                                t = x_41;
                                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                  _fail(t);
                                t = a_42;
                              }
                          }
                        else
                          {
                            t = z_41;
                            if(match_cons(t, sym_appl_2))
                              {
                                r_41 = ATgetArgument(t, 0);
                                x_41 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = r_41;
                            if(match_cons(t, sym_prod_3))
                              {
                                s_41 = ATgetArgument(t, 0);
                                t_41 = ATgetArgument(t, 1);
                                w_41 = ATgetArgument(t, 2);
                              }
                            else
                              _fail(t);
                            t = s_41;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = t_41;
                            if(match_cons(t, sym_cf_1))
                              {
                                u_41 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = u_41;
                            if(match_cons(t, sym_opt_1))
                              {
                                v_41 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = v_41;
                            if(!(match_cons(t, sym_layout_0)))
                              _fail(t);
                            t = w_41;
                            if(!(match_cons(t, sym_no_attrs_0)))
                              _fail(t);
                            t = x_41;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = a_42;
                          }
                      }
                    else
                      {
                        t = z_41;
                        if(match_cons(t, sym_appl_2))
                          {
                            r_41 = ATgetArgument(t, 0);
                            x_41 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = r_41;
                        if(match_cons(t, sym_prod_3))
                          {
                            s_41 = ATgetArgument(t, 0);
                            t_41 = ATgetArgument(t, 1);
                            w_41 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = s_41;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = t_41;
                        if(match_cons(t, sym_cf_1))
                          {
                            u_41 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = u_41;
                        if(match_cons(t, sym_opt_1))
                          {
                            v_41 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = v_41;
                        if(!(match_cons(t, sym_layout_0)))
                          _fail(t);
                        t = w_41;
                        if(!(match_cons(t, sym_no_attrs_0)))
                          _fail(t);
                        t = x_41;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = a_42;
                      }
                  }
                else
                  {
                    t = z_41;
                    if(match_cons(t, sym_appl_2))
                      {
                        r_41 = ATgetArgument(t, 0);
                        x_41 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = r_41;
                    if(match_cons(t, sym_prod_3))
                      {
                        s_41 = ATgetArgument(t, 0);
                        t_41 = ATgetArgument(t, 1);
                        w_41 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = s_41;
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    t = t_41;
                    if(match_cons(t, sym_cf_1))
                      {
                        u_41 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = u_41;
                    if(match_cons(t, sym_opt_1))
                      {
                        v_41 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = v_41;
                    if(!(match_cons(t, sym_layout_0)))
                      _fail(t);
                    t = w_41;
                    if(!(match_cons(t, sym_no_attrs_0)))
                      _fail(t);
                    t = x_41;
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    t = a_42;
                  }
              }
            else
              {
                t = z_41;
                if(match_cons(t, sym_appl_2))
                  {
                    r_41 = ATgetArgument(t, 0);
                    x_41 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = r_41;
                if(match_cons(t, sym_prod_3))
                  {
                    s_41 = ATgetArgument(t, 0);
                    t_41 = ATgetArgument(t, 1);
                    w_41 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = s_41;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = t_41;
                if(match_cons(t, sym_cf_1))
                  {
                    u_41 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = u_41;
                if(match_cons(t, sym_opt_1))
                  {
                    v_41 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = v_41;
                if(!(match_cons(t, sym_layout_0)))
                  _fail(t);
                t = w_41;
                if(!(match_cons(t, sym_no_attrs_0)))
                  _fail(t);
                t = x_41;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = a_42;
              }
          }
        else
          {
            t = z_41;
            if(match_cons(t, sym_appl_2))
              {
                r_41 = ATgetArgument(t, 0);
                x_41 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = r_41;
            if(match_cons(t, sym_prod_3))
              {
                s_41 = ATgetArgument(t, 0);
                t_41 = ATgetArgument(t, 1);
                w_41 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = s_41;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = t_41;
            if(match_cons(t, sym_cf_1))
              {
                u_41 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = u_41;
            if(match_cons(t, sym_opt_1))
              {
                v_41 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = v_41;
            if(!(match_cons(t, sym_layout_0)))
              _fail(t);
            t = w_41;
            if(!(match_cons(t, sym_no_attrs_0)))
              _fail(t);
            t = x_41;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = a_42;
          }
      }
    }
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_s_6;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_r_6;
  return(t);
}
ATerm test1_0_0 (ATerm t)
{
  t = apply_test_4_0(b_2, c_2, d_2, e_2, t);
  return(t);
}
ATerm debug_1_0 (ATerm e_81 (ATerm), ATerm t)
{
  ATerm a_43 = NULL,b_43 = NULL,c_43 = NULL,d_43 = NULL;
  a_43 = t;
  t = e_81(t);
  b_43 = t;
  t = term_m_2;
  c_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_43), b_43);
  d_43 = t;
  t = SSL_printnl(c_43, d_43);
  t = a_43;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_t_6;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = term_u_6;
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_v_6;
  return(t);
}
ATerm test_suite_2_0 (ATerm c_60 (ATerm), ATerm d_60 (ATerm), ATerm t)
{
  ATerm e_43 = NULL,f_43 = NULL,g_43 = NULL,h_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL,v_0 = NULL,u_0 = NULL;
  t = c_60(t);
  t = debug_1_0(f_2, t);
  t = term_x_6;
  t = d_60(t);
  n_43 = t;
  if(match_cons(t, sym__2))
    {
      i_43 = ATgetArgument(t, 0);
      j_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_43);
  h_43 = t;
  t = i_43;
  t = debug_1_0(g_2, t);
  k_43 = t;
  t = j_43;
  t = debug_1_0(h_2, t);
  l_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_43, l_43);
  u_0 = t;
  t = SSLsetAnnotations(u_0, h_43);
  m_43 = t;
  if(match_cons(t, sym__2))
    {
      f_43 = ATgetArgument(t, 0);
      g_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_43);
  e_43 = t;
  t = g_43;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_43, g_43);
  v_0 = t;
  t = SSLsetAnnotations(v_0, e_43);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = term_y_6;
  return(t);
}
static ATerm j_2 (ATerm t)
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
