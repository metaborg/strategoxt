#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_lit_1;
Symbol sym_appl_2;
Symbol sym_prod_3;
Symbol sym_layout_0;
Symbol sym_func_2;
Symbol sym_iter_sep_n_3;
Symbol sym_iter_n_2;
Symbol sym_iter_star_sep_2;
Symbol sym_iter_sep_2;
Symbol sym_iter_star_1;
Symbol sym_iter_1;
Symbol sym_sort_1;
Symbol sym_seq_2;
Symbol sym_alt_2;
Symbol sym_opt_1;
Symbol sym_lex_1;
Symbol sym_cf_1;
Symbol sym_lit_1;
Symbol sym_empty_0;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_alt_2;
Symbol sym_seq_2;
Symbol sym_label_2;
Symbol sym_lit_1;
Symbol sym_sort_1;
Symbol sym_alt_2;
Symbol sym_func_2;
Symbol sym_pair_2;
Symbol sym_iter_sep_n_3;
Symbol sym_iter_n_2;
Symbol sym_iter_star_sep_2;
Symbol sym_iter_sep_2;
Symbol sym_iter_star_1;
Symbol sym_iter_1;
Symbol sym_opt_1;
Symbol sym_seq_2;
Symbol sym_empty_0;
Symbol sym_layout_0;
Symbol sym_lex_1;
Symbol sym_cf_1;
Symbol sym_prod_3;
Symbol sym_appl_2;
static void init_module_constructors (void)
{
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
  ATprotectSymbol(sym_appl_2);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_layout_0 = ATmakeSymbol("layout", 0, ATfalse);
  ATprotectSymbol(sym_layout_0);
  sym_func_2 = ATmakeSymbol("func", 2, ATfalse);
  ATprotectSymbol(sym_func_2);
  sym_iter_sep_n_3 = ATmakeSymbol("iter-sep-n", 3, ATfalse);
  ATprotectSymbol(sym_iter_sep_n_3);
  sym_iter_n_2 = ATmakeSymbol("iter-n", 2, ATfalse);
  ATprotectSymbol(sym_iter_n_2);
  sym_iter_star_sep_2 = ATmakeSymbol("iter-star-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_star_sep_2);
  sym_iter_sep_2 = ATmakeSymbol("iter-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_sep_2);
  sym_iter_star_1 = ATmakeSymbol("iter-star", 1, ATfalse);
  ATprotectSymbol(sym_iter_star_1);
  sym_iter_1 = ATmakeSymbol("iter", 1, ATfalse);
  ATprotectSymbol(sym_iter_1);
  sym_sort_1 = ATmakeSymbol("sort", 1, ATfalse);
  ATprotectSymbol(sym_sort_1);
  sym_seq_2 = ATmakeSymbol("seq", 2, ATfalse);
  ATprotectSymbol(sym_seq_2);
  sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
  ATprotectSymbol(sym_alt_2);
  sym_opt_1 = ATmakeSymbol("opt", 1, ATfalse);
  ATprotectSymbol(sym_opt_1);
  sym_lex_1 = ATmakeSymbol("lex", 1, ATfalse);
  ATprotectSymbol(sym_lex_1);
  sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
  ATprotectSymbol(sym_cf_1);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  sym_empty_0 = ATmakeSymbol("empty", 0, ATfalse);
  ATprotectSymbol(sym_empty_0);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
  ATprotectSymbol(sym_alt_2);
  sym_seq_2 = ATmakeSymbol("seq", 2, ATfalse);
  ATprotectSymbol(sym_seq_2);
  sym_label_2 = ATmakeSymbol("label", 2, ATfalse);
  ATprotectSymbol(sym_label_2);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  sym_sort_1 = ATmakeSymbol("sort", 1, ATfalse);
  ATprotectSymbol(sym_sort_1);
  sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
  ATprotectSymbol(sym_alt_2);
  sym_func_2 = ATmakeSymbol("func", 2, ATfalse);
  ATprotectSymbol(sym_func_2);
  sym_pair_2 = ATmakeSymbol("pair", 2, ATfalse);
  ATprotectSymbol(sym_pair_2);
  sym_iter_sep_n_3 = ATmakeSymbol("iter-sep-n", 3, ATfalse);
  ATprotectSymbol(sym_iter_sep_n_3);
  sym_iter_n_2 = ATmakeSymbol("iter-n", 2, ATfalse);
  ATprotectSymbol(sym_iter_n_2);
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
  sym_seq_2 = ATmakeSymbol("seq", 2, ATfalse);
  ATprotectSymbol(sym_seq_2);
  sym_empty_0 = ATmakeSymbol("empty", 0, ATfalse);
  ATprotectSymbol(sym_empty_0);
  sym_layout_0 = ATmakeSymbol("layout", 0, ATfalse);
  ATprotectSymbol(sym_layout_0);
  sym_lex_1 = ATmakeSymbol("lex", 1, ATfalse);
  ATprotectSymbol(sym_lex_1);
  sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
  ATprotectSymbol(sym_cf_1);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
  ATprotectSymbol(sym_appl_2);
}
ATerm term_j_2;
ATerm term_i_2;
ATerm term_c_2;
ATerm term_x_1;
ATerm term_w_1;
ATerm term_r_1;
ATerm term_l_1;
ATerm term_k_1;
ATerm term_i_1;
ATerm term_h_1;
ATerm term_w_0;
ATerm term_s_0;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_s_0));
  term_s_0 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_w_0));
  term_w_0 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_h_1));
  term_h_1 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
  ATprotect(&(term_i_1));
  term_i_1 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
  ATprotect(&(term_k_1));
  term_k_1 = (ATerm) ATmakeAppl(ATmakeSymbol("s", 0, ATtrue));
  ATprotect(&(term_l_1));
  term_l_1 = (ATerm) ATmakeAppl(ATmakeSymbol("unit", 0, ATtrue));
  ATprotect(&(term_r_1));
  term_r_1 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_w_1));
  term_w_1 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_x_1));
  term_x_1 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_c_2));
  term_c_2 = (ATerm) ATmakeAppl(ATmakeSymbol("or", 0, ATtrue));
  ATprotect(&(term_i_2));
  term_i_2 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
  ATprotect(&(term_j_2));
  term_j_2 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm concat_strings_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm De_Escape_0_0 (ATerm t);
ATerm de_escape_0_0 (ATerm t);
ATerm implode_string_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm e_90 (ATerm), ATerm t);
ATerm Tl_0_0 (ATerm t);
ATerm Hd_0_0 (ATerm t);
ATerm explode_string_0_0 (ATerm t);
static ATerm a_0 (ATerm t);
ATerm de_quote_0_0 (ATerm t);
ATerm filter_1_0 (ATerm u_97 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm t_89 (ATerm), ATerm t);
static ATerm b_0 (ATerm t);
static ATerm d_0 (ATerm t);
static ATerm f_0 (ATerm t);
static ATerm g_0 (ATerm t);
static ATerm h_0 (ATerm t);
ATerm Sym2Strs_0_0 (ATerm t);
static ATerm u_1 (ATerm c_0, ATerm i_0, ATerm e_0, ATerm t);
ATerm try_1_0 (ATerm x_102 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm o_84 (ATerm), ATerm t);
ATerm io_wrap_1_0 (ATerm i_109 (ATerm), ATerm t);
static ATerm j_0 (ATerm t);
static ATerm k_0 (ATerm t);
static ATerm l_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm De_Escape_0_0 (ATerm t)
{
  ATerm n_0 = NULL,o_0 = NULL,p_0 = NULL,q_0 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_0 = ATgetFirst((ATermList) t);
      q_0 = (ATerm) ATgetNext((ATermList) t);
      t = q_0;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_0 = ATgetFirst((ATermList) t);
          o_0 = (ATerm) ATgetNext((ATermList) t);
          t = n_0;
          if(match_int(t, 34))
            {
              t = p_0;
              if(match_int(t, 92))
                {
                  ATerm m_0 = t;
                  int r_0 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm t_0 = NULL;
                      t = o_0;
                      t = De_Escape_0_0(t);
                      t_0 = t;
                      t = (ATerm) ATinsert(CheckATermList(t_0), term_s_0);
                      LocalPopChoice(r_0);
                    }
                  else
                    {
                      t = m_0;
                      {
                        ATerm x_0 = NULL;
                        t = q_0;
                        t = De_Escape_0_0(t);
                        x_0 = t;
                        t = (ATerm) ATinsert(CheckATermList(x_0), p_0);
                      }
                    }
                }
              else
                {
                  ATerm b_1 = NULL;
                  t = q_0;
                  t = De_Escape_0_0(t);
                  b_1 = t;
                  t = (ATerm) ATinsert(CheckATermList(b_1), p_0);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = p_0;
                  if(match_int(t, 92))
                    {
                      ATerm u_0 = t;
                      int v_0 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm d_1 = NULL;
                          t = o_0;
                          t = De_Escape_0_0(t);
                          d_1 = t;
                          t = (ATerm) ATinsert(CheckATermList(d_1), term_w_0);
                          LocalPopChoice(v_0);
                        }
                      else
                        {
                          t = u_0;
                          {
                            ATerm g_1 = NULL;
                            t = q_0;
                            t = De_Escape_0_0(t);
                            g_1 = t;
                            t = (ATerm) ATinsert(CheckATermList(g_1), p_0);
                          }
                        }
                    }
                  else
                    {
                      ATerm j_1 = NULL;
                      t = q_0;
                      t = De_Escape_0_0(t);
                      j_1 = t;
                      t = (ATerm) ATinsert(CheckATermList(j_1), p_0);
                    }
                }
              else
                {
                  ATerm m_1 = NULL;
                  t = q_0;
                  t = De_Escape_0_0(t);
                  m_1 = t;
                  t = (ATerm) ATinsert(CheckATermList(m_1), p_0);
                }
            }
        }
      else
        {
          ATerm p_1 = NULL;
          t = q_0;
          t = De_Escape_0_0(t);
          p_1 = t;
          t = (ATerm) ATinsert(CheckATermList(p_1), p_0);
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm de_escape_0_0 (ATerm t)
{
  ATerm y_1 = NULL,z_1 = NULL,a_2 = NULL,b_2 = NULL;
  t = explode_string_0_0(t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_2 = ATgetFirst((ATermList) t);
      b_2 = (ATerm) ATgetNext((ATermList) t);
      t = b_2;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_1 = ATgetFirst((ATermList) t);
          z_1 = (ATerm) ATgetNext((ATermList) t);
          t = y_1;
          if(match_int(t, 34))
            {
              t = a_2;
              if(match_int(t, 92))
                {
                  ATerm y_0 = t;
                  int z_0 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_2 = NULL;
                      t = z_1;
                      t = De_Escape_0_0(t);
                      e_2 = t;
                      t = (ATerm) ATinsert(CheckATermList(e_2), term_s_0);
                      LocalPopChoice(z_0);
                    }
                  else
                    {
                      t = y_0;
                      {
                        ATerm h_2 = NULL;
                        t = b_2;
                        t = De_Escape_0_0(t);
                        h_2 = t;
                        t = (ATerm) ATinsert(CheckATermList(h_2), a_2);
                      }
                    }
                }
              else
                {
                  ATerm k_2 = NULL;
                  t = b_2;
                  t = De_Escape_0_0(t);
                  k_2 = t;
                  t = (ATerm) ATinsert(CheckATermList(k_2), a_2);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = a_2;
                  if(match_int(t, 92))
                    {
                      ATerm a_1 = t;
                      int c_1 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm m_2 = NULL;
                          t = z_1;
                          t = De_Escape_0_0(t);
                          m_2 = t;
                          t = (ATerm) ATinsert(CheckATermList(m_2), term_w_0);
                          LocalPopChoice(c_1);
                        }
                      else
                        {
                          t = a_1;
                          {
                            ATerm p_2 = NULL;
                            t = b_2;
                            t = De_Escape_0_0(t);
                            p_2 = t;
                            t = (ATerm) ATinsert(CheckATermList(p_2), a_2);
                          }
                        }
                    }
                  else
                    {
                      ATerm s_2 = NULL;
                      t = b_2;
                      t = De_Escape_0_0(t);
                      s_2 = t;
                      t = (ATerm) ATinsert(CheckATermList(s_2), a_2);
                    }
                }
              else
                {
                  ATerm v_2 = NULL;
                  t = b_2;
                  t = De_Escape_0_0(t);
                  v_2 = t;
                  t = (ATerm) ATinsert(CheckATermList(v_2), a_2);
                }
            }
        }
      else
        {
          ATerm y_2 = NULL;
          t = b_2;
          t = De_Escape_0_0(t);
          y_2 = t;
          t = (ATerm) ATinsert(CheckATermList(y_2), a_2);
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATempty;
    }
  t = implode_string_0_0(t);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm e_1 = ATgetFirst((ATermList) t);
      if(((ATgetType(e_1) != AT_INT) || (ATgetInt((ATermInt) e_1) != 34)))
        _fail(t);
      {
        ATerm f_1 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(f_1) != AT_LIST) || !(ATisEmpty(f_1))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm de_quote_0_0 (ATerm t)
{
  ATerm z_2 = NULL;
  t = explode_string_0_0(t);
  z_2 = t;
  t = Hd_0_0(t);
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  t = z_2;
  t = Tl_0_0(t);
  t = at_last_1_0(a_0, t);
  t = implode_string_0_0(t);
  return(t);
}
static ATerm b_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_h_1);
  return(t);
}
static ATerm d_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_i_1);
  return(t);
}
static ATerm f_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_k_1);
  return(t);
}
static ATerm g_0 (ATerm t)
{
  t = de_quote_0_0(t);
  t = de_escape_0_0(t);
  return(t);
}
static ATerm h_0 (ATerm t)
{
  t = de_quote_0_0(t);
  t = de_escape_0_0(t);
  return(t);
}
ATerm Sym2Strs_0_0 (ATerm t)
{
  ATerm c_3 = NULL,d_3 = NULL,e_3 = NULL;
  e_3 = t;
  if(match_cons(t, sym_cf_1))
    {
      c_3 = ATgetArgument(t, 0);
      t = c_3;
      t = Sym2Strs_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_lex_1))
        {
          c_3 = ATgetArgument(t, 0);
          t = c_3;
          t = Sym2Strs_0_0(t);
        }
      else
        {
          if(match_cons(t, sym_empty_0))
            {
              t = (ATerm) ATinsert(ATempty, term_l_1);
            }
          else
            {
              if(match_cons(t, sym_seq_2))
                {
                  c_3 = ATgetArgument(t, 0);
                  d_3 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(CheckATermList(d_3), c_3);
                  t = filter_1_0(Sym2Strs_0_0, t);
                  t = concat_0_0(t);
                }
              else
                {
                  if(match_cons(t, sym_opt_1))
                    {
                      c_3 = ATgetArgument(t, 0);
                      t = c_3;
                      t = Sym2Strs_0_0(t);
                      t = at_end_1_0(b_0, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          c_3 = ATgetArgument(t, 0);
                          t = c_3;
                          t = Sym2Strs_0_0(t);
                          t = at_end_1_0(d_0, t);
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_star_1))
                            {
                              c_3 = ATgetArgument(t, 0);
                              t = c_3;
                              t = Sym2Strs_0_0(t);
                              t = at_end_1_0(f_0, t);
                            }
                          else
                            {
                              if(match_cons(t, sym_iter_sep_2))
                                {
                                  c_3 = ATgetArgument(t, 0);
                                  d_3 = ATgetArgument(t, 1);
                                  {
                                    ATerm o_3 = NULL,p_3 = NULL;
                                    t = c_3;
                                    t = Sym2Strs_0_0(t);
                                    o_3 = t;
                                    t = d_3;
                                    t = Sym2Strs_0_0(t);
                                    p_3 = t;
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_i_1)), p_3), o_3);
                                    t = concat_0_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_iter_star_sep_2))
                                    {
                                      c_3 = ATgetArgument(t, 0);
                                      d_3 = ATgetArgument(t, 1);
                                      {
                                        ATerm s_3 = NULL,t_3 = NULL;
                                        t = c_3;
                                        t = Sym2Strs_0_0(t);
                                        s_3 = t;
                                        t = d_3;
                                        t = Sym2Strs_0_0(t);
                                        t_3 = t;
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_k_1)), t_3), s_3);
                                        t = concat_0_0(t);
                                      }
                                    }
                                  else
                                    {
                                      ATerm n_1 = t;
                                      int o_1 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_n_2))
                                            {
                                              c_3 = ATgetArgument(t, 0);
                                              {
                                                ATerm q_1 = ATgetArgument(t, 1);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(o_1);
                                          {
                                            ATerm v_3 = NULL;
                                            t = c_3;
                                            t = Sym2Strs_0_0(t);
                                            v_3 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_r_1)), v_3);
                                            t = concat_0_0(t);
                                          }
                                        }
                                      else
                                        {
                                          t = n_1;
                                          {
                                            ATerm s_1 = t;
                                            int t_1 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_n_3))
                                                  {
                                                    c_3 = ATgetArgument(t, 0);
                                                    d_3 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm v_1 = ATgetArgument(t, 2);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(t_1);
                                                {
                                                  ATerm z_3 = NULL,a_4 = NULL;
                                                  t = c_3;
                                                  t = Sym2Strs_0_0(t);
                                                  z_3 = t;
                                                  t = d_3;
                                                  t = Sym2Strs_0_0(t);
                                                  a_4 = t;
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_r_1)), a_4), z_3);
                                                  t = concat_0_0(t);
                                                }
                                              }
                                            else
                                              {
                                                t = s_1;
                                                if(match_cons(t, sym_pair_2))
                                                  {
                                                    c_3 = ATgetArgument(t, 0);
                                                    d_3 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm d_4 = NULL,e_4 = NULL;
                                                      t = c_3;
                                                      t = Sym2Strs_0_0(t);
                                                      d_4 = t;
                                                      t = d_3;
                                                      t = Sym2Strs_0_0(t);
                                                      e_4 = t;
                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, e_4), (ATerm) ATinsert(ATempty, term_w_1)), d_4);
                                                      t = concat_0_0(t);
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_func_2))
                                                      {
                                                        c_3 = ATgetArgument(t, 0);
                                                        d_3 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm h_4 = NULL,i_4 = NULL;
                                                          t = c_3;
                                                          t = filter_1_0(Sym2Strs_0_0, t);
                                                          t = concat_0_0(t);
                                                          h_4 = t;
                                                          t = d_3;
                                                          t = Sym2Strs_0_0(t);
                                                          i_4 = t;
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, i_4), (ATerm) ATinsert(ATempty, term_x_1)), h_4);
                                                          t = concat_0_0(t);
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_alt_2))
                                                          {
                                                            c_3 = ATgetArgument(t, 0);
                                                            d_3 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm l_4 = NULL,m_4 = NULL;
                                                              t = c_3;
                                                              t = Sym2Strs_0_0(t);
                                                              l_4 = t;
                                                              t = d_3;
                                                              t = Sym2Strs_0_0(t);
                                                              m_4 = t;
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, m_4), (ATerm) ATinsert(ATempty, term_c_2)), l_4);
                                                              t = concat_0_0(t);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_sort_1))
                                                              {
                                                                c_3 = ATgetArgument(t, 0);
                                                                t = (ATerm) ATinsert(ATempty, c_3);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_lit_1))
                                                                  {
                                                                    c_3 = ATgetArgument(t, 0);
                                                                    {
                                                                      ATerm p_4 = NULL;
                                                                      t = c_3;
                                                                      t = try_1_0(g_0, t);
                                                                      p_4 = t;
                                                                      t = (ATerm) ATinsert(ATempty, p_4);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    ATerm d_2 = t;
                                                                    int f_2 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_label_2))
                                                                          {
                                                                            c_3 = ATgetArgument(t, 0);
                                                                            {
                                                                              ATerm g_2 = ATgetArgument(t, 1);
                                                                            }
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(f_2);
                                                                        {
                                                                          ATerm r_4 = NULL;
                                                                          t = c_3;
                                                                          t = try_1_0(h_0, t);
                                                                          r_4 = t;
                                                                          t = (ATerm) ATinsert(ATempty, r_4);
                                                                        }
                                                                      }
                                                                    else
                                                                      {
                                                                        t = d_2;
                                                                        if(!(match_cons(t, sym_layout_0)))
                                                                          _fail(t);
                                                                        t = (ATerm) ATinsert(ATempty, term_i_2);
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
                            }
                        }
                    }
                }
            }
        }
    }
  return(t);
}
static ATerm u_1 (ATerm c_0, ATerm i_0, ATerm e_0, ATerm t)
{
  ATerm t_4 = NULL,u_4 = NULL;
  t = i_0;
  t = Sym2Strs_0_0(t);
  u_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_j_2)), u_4), (ATerm) ATinsert(ATempty, term_j_2));
  t = concat_0_0(t);
  t = concat_strings_0_0(t);
  t_4 = t;
  t = SSL_mkterm(t_4, e_0);
  return(t);
}
static ATerm j_0 (ATerm t)
{
  t = topdown_1_0(k_0, t);
  return(t);
}
static ATerm k_0 (ATerm t)
{
  t = try_1_0(l_0, t);
  return(t);
}
static ATerm l_0 (ATerm t)
{
  ATerm x_4 = NULL,y_4 = NULL,a_5 = NULL,b_5 = NULL,c_5 = NULL;
  b_5 = t;
  if(match_cons(t, sym_appl_2))
    {
      c_5 = ATgetArgument(t, 0);
      a_5 = ATgetArgument(t, 1);
      t = c_5;
      if(match_cons(t, sym_prod_3))
        {
          x_4 = ATgetArgument(t, 0);
          y_4 = ATgetArgument(t, 1);
          {
            ATerm l_2 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = b_5;
      t = u_1(x_4, y_4, a_5, t);
    }
  else
    {
      if(match_cons(t, sym_lit_1))
        {
          c_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_5;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_wrap_1_0(j_0, t);
  return(t);
}
